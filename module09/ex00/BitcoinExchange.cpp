#include "BitcoinExchange.hpp"

std::map<std::string, double> readBitcoinPriceData(const std::string& filename) {
    std::ifstream dataFile(filename.c_str());
    std::map<std::string, double> bitcoinPriceData;

    if (!dataFile.is_open()) {
        return bitcoinPriceData;
    }

    std::string line;
    while (std::getline(dataFile, line)) {
        std::stringstream ss(line);
        std::string date;
        double value;

        std::getline(ss, date, ',');
        ss >> value;

        bitcoinPriceData[date] = value;
    }
    dataFile.close();

    return bitcoinPriceData;
}

std::string findClosestDate(const std::map<std::string, double>& data, const std::string& targetDate) {
   
    if (data.find(targetDate) != data.end()) {
        return targetDate;
    }

    std::map<std::string, double>::const_iterator upperBound = data.upper_bound(targetDate);

    if (upperBound == data.begin()) {
        return upperBound->first;
    }
    --upperBound;
    std::cout << "retorno = " << upperBound->first << std::endl;
    return upperBound->first;
}

bool validateInputLine(const std::string& line, std::string& date, float& value) {
    std::stringstream ss(line);
    std::string separator;

    std::getline(ss, date, '|');
    if (ss.fail()) {
        return false;
    }
    ss >> std::ws; 
    ss >> value;
    if (ss.fail() || value < 0 || value > 1000) {
        return false;
    }

    std::tm tm = {};
    memset(&tm, 0, sizeof(tm));
    if (strptime(date.c_str(), "%Y-%m-%d", &tm) == NULL) {
        return false;
    }

    std::time_t input_date = std::mktime(&tm);
    std::tm min_date_tm = {};
    memset(&min_date_tm, 0, sizeof(min_date_tm));
    min_date_tm.tm_year = 2009 - 1900;
    min_date_tm.tm_mon = 1 - 1;
    min_date_tm.tm_mday = 2;
    std::time_t min_date = std::mktime(&min_date_tm);

    if (input_date < min_date) {
        return false;
    }

    return true;
}

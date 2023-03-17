#include <iostream>
#include <fstream>
#include <string>
#include <map>
#include <sstream>
#include <iomanip>
#include <ctime>
#include <cstdio> 

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

bool validateInputLine(const std::string& line, std::string& date, float& value);
std::string findClosestDate(const std::map<std::string, double>& data, const std::string& targetDate);

int main(int argc, char* argv[]) {

 if (argc != 2) {
        std::cerr << "Usage: btc <input_file>\n";
        return 1;
    }
    
    std::ifstream inputFile(argv[1]);
    if (!inputFile.is_open()) {
        std::cerr << "Error opening file: " << argv[1] << '\n';
        return 1;
    }

    std::string line;

    std::map<std::string, double> bitcoinPriceData = readBitcoinPriceData("data.csv");
    if (bitcoinPriceData.empty()) {
        std::cerr << "Error reading data.csv\n";
        return 1;
    }

    while (std::getline(inputFile, line)) {
        std::string date;
        float value;

        if (validateInputLine(line, date, value)) {
            std::string closestDate = findClosestDate(bitcoinPriceData, date);
            double exchangeRate = bitcoinPriceData[closestDate];
            double result = value * exchangeRate;
            std::cout << date << " => " << value << " = " << result << '\n';
        } else {
            std::cerr << "Error: bad input => " << line << '\n';
        }
    }
    inputFile.close();

    return 0;
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
    if (strptime(date.c_str(), "%Y-%m-%d", &tm) == NULL) {
        return false;
    }

    std::time_t input_date = std::mktime(&tm);
    std::tm min_date_tm = {0};
    min_date_tm.tm_year = 2009 - 1900;
    min_date_tm.tm_mon = 1 - 1;
    min_date_tm.tm_mday = 2;
    std::time_t min_date = std::mktime(&min_date_tm);

    if (input_date < min_date) {
        return false;
    }

    return true;
}



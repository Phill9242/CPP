#include "BitcoinExchange.hpp"


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



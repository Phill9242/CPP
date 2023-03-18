#ifndef BITCOIN_EXCHANGE
# define BITCOIN_EXCHANGE

#include <iostream>
#include <fstream>
#include <string>
#include <map>
#include <sstream>
#include <iomanip>
#include <ctime>
#include <cstdio>
#include <cstring>

std::map<std::string, double> readBitcoinPriceData(const std::string& filename);
bool validateInputLine(const std::string& line, std::string& date, float& value);
std::string findClosestDate(const std::map<std::string, double>& data, const std::string& targetDate);
bool validateInputLine(const std::string& line, std::string& date, float& value);


#endif



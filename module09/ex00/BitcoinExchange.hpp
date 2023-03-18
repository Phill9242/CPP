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
#include <stdlib.h>

std::map<std::string, double>	makeBitcoinMap(const std::string& filename);
std::string						findClosestDate(const std::map<std::string, double>& data, const std::string& targetDate);

bool							validateInputLine(const std::string& line, std::string& date, float& value);
bool							validateInputLine(const std::string& line, std::string& date, float& value);

void							initialParse(int argc, char** argv);
int								bitcoinExchange (char* inputFile);
void							readInputFile (std::ifstream &inputFile, std::map<std::string, double> bitcoinMap);
#endif



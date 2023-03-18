#include "BitcoinExchange.hpp"


int   bitcoinExchange (char* fileName)
{   
	std::ifstream inputFile(fileName);
	std::map<std::string, double> bitcoinMap = makeBitcoinMap("data.csv");
	readInputFile (inputFile, bitcoinMap);
	inputFile.close();
	return (1);
}

void	readInputFile (std::ifstream &inputFile, std::map<std::string, double> bitcoinMap)
{	
	std::string line;

	while (std::getline(inputFile, line)) 
	{
		std::string date;
		float value;

		if (validateInputLine(line, date, value)) {
			std::string closestDate = findClosestDate(bitcoinMap, date);
			double exchangeRate = bitcoinMap[closestDate];
			double result = value * exchangeRate;
			std::cout << date << " => " << value << " = " << result << '\n';
		}
	}
	return ;
}

void    initialParse(int argc, char** argv)
{
	if (argc != 2) {
		std::cerr << "Usage: btc <input_file>\n";
		exit (1);
	}
	
	std::ifstream inputFile(argv[1]);
	if (!inputFile.is_open()) {
		std::cerr << "Error opening file: " << argv[1] << '\n';
		exit (1);
	}
	inputFile.close();
	return ;
}

std::map<std::string, double> makeBitcoinMap(const std::string& filename) {
	std::ifstream dataFile(filename.c_str());
	std::map<std::string, double> bitcoinMap;

	if (!dataFile.is_open()) {
		std::cerr << "Error reading data.csv\n";
		exit (1);
	}

	std::string line;
	while (std::getline(dataFile, line)) {
		std::stringstream ss(line);
		std::string date;
		double value;

		std::getline(ss, date, ',');
		ss >> value;

		bitcoinMap[date] = value;
	}
	dataFile.close();

	return bitcoinMap;
}

std::string findClosestDate(const std::map<std::string, double>& data, const std::string& targetDate) 
{

	if (data.find(targetDate) != data.end()) {
		return targetDate;
	}

	std::map<std::string, double>::const_iterator upperBound = data.upper_bound(targetDate);

	if (upperBound == data.begin()) {
		return upperBound->first;
	}
	--upperBound;
	return upperBound->first;
}

bool	checkValue(const float& value)
{
	if (value < 0){
		std::cerr << "Error: not a positive number" << '\n';
		return (false);
	}
	if (value > 1000){
		std::cerr << "Error: too large number" << '\n';
		return (false);
	}
	return (true);
}

bool validateInputLine(const std::string& line, std::string& date, float& value) 
{
	std::stringstream ss(line);
	std::string separator;

	std::getline(ss, date, '|');
	if (ss.fail()) {
		std::cerr << "Error: bad input => " << line << '\n';
		return false;
	}

	ss >> std::ws; 
	ss >> value;

	if (ss.fail()) {
		std::cerr << "Error: bad input => " << line << '\n';
		return false;
	}

	if (checkValue (value) == false)
		return false;

	std::tm tm = {};
	memset(&tm, 0, sizeof(tm));
	if (strptime(date.c_str(), "%Y-%m-%d", &tm) == NULL) {
		std::cerr << "Error: invalid date " << date << '\n';
		return false;
	}

	std::time_t input_date = std::mktime(&tm);
	std::tm min_date_tm = {};
	const char* min_date_str = "2009-01-02";
	if (strptime(min_date_str, "%Y-%m-%d", &min_date_tm) == NULL) {
		std::cerr << "Error: A runtime problem occurred" << date << '\n';
		return false;
	}

	std::time_t min_date = std::mktime(&min_date_tm);
	if (input_date < min_date) {
		std::cerr << "Error: invalid date. Must be after \"2009-01-02\" your date: " << date << '\n';
		return false;
	}
	return true;
}

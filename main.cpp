#include <iostream>
#include <string>

#include "DataSet.h"

int main() {

	DataSet dataSet("dataset.txt");

	std::string input;
	do
	{
		std::cout << "<You- ";
		std::getline(std::cin, input);
		std::cout << "<Bot- ";
		std::cout << dataSet.getPhrase(input) << std::endl;

	} while (input.compare("Exit!"));

	return 0;
}
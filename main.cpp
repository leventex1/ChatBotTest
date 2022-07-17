#include <iostream>
#include <string>

#include "DataSet.h"

int main() {

	std::cout << "Hi this is Sandor the Chat bot!" << std::endl;
	std::cout << "To exit enter \"Exit!\"" << std::endl;

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
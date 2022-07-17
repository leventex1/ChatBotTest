#include "DataSet.h"

DataSet::DataSet(const std::string& filePath) {
	std::ifstream file(filePath);
	if (file.is_open()) {

		std::string line;
		while (std::getline(file, line)) {
			int index = line.find("\t");
			std::string message = line.substr(0, line.find('\t'));
			std::string answare = line.substr(line.find('\t') + 1, line.size());
			m_Datas.push_back({ message, answare });
		}

	}
	else {
		std::cout << "Couldn't open file at: " << filePath << std::endl;
	}
}
#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include <vector>

struct Data {
	std::string message, answer;
};

class DataSet {
private:
	std::vector<Data> m_Datas;

public:
	DataSet(const std::string& filePath);


	std::string getPhrase(const std::string& message) {
		for (size_t i = 0; i < m_Datas.size(); i++)
			if (m_Datas[i].message.find(message) != -1)
				return m_Datas[i].answer;

		return "I'm not able to answear that!";
	}

	
	inline const std::vector<Data>& getDatas() const { return m_Datas; }
	inline std::vector<Data>& getDatas() { return m_Datas; }

};
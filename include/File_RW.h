#pragma once
#include <chrono>
#include <string>
#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>


class FileProcessing 
{

private:
	std::vector<std::string> Cell;
	std::string sLine;
	std::string sField;

public:
	void myFileProcessing(std::string nFileIn, std::string nFileOut);


};

#include "..\include\File_RW.h"

void FileProcessing::myFileProcessing(std::string nFileIn, std::string nFileOut)
{
	std::cout << "Beginning File Processing..." << std::endl;
	std::ifstream inputFile(nFileIn);

	if (!inputFile.is_open()) 
	{
		std::cout << "Unable To Open File " << std::endl;
		return;
	}

	std::ofstream outputFile;
	outputFile.open(nFileOut, std::ofstream::out);
	
	if (!outputFile.is_open())
	{
		std::cout << "Unable To create output File " << std::endl;
		return;
	}

	if (inputFile) 
	{
		while (std::getline(inputFile, sLine)) 
		{
			std::stringstream seperate(sLine);
			
			while (std::getline(seperate, sField,','))
			{
				Cell.push_back(sField);
			}

			for (auto block : Cell) 
			{
				for (auto Field : block) 
				{
					outputFile << Field << ", " << std::endl;
				}
			}
		}
	}

	inputFile.close();
	outputFile.close();
	std::cout << " File Has Completed Processing " << std::endl;
	
}

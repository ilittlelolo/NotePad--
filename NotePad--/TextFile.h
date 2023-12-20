#pragma once
#include <fstream>
#include <stdio.h>
#include <string>

class TextFile
{
private:
	std::string path;

public:
	TextFile(std::string inputPath)
	{
		path = inputPath;
	}

	std::string getContent()
	{
		std::fstream file(path);

		std::string content;
		std::string currentLine;

		while (std::getline(file, currentLine))
		{
			content += currentLine + "\n";
		}

		file.close();
		return content;
	}

	void commitContent(std::string content)
	{
		const char* charPath = path.c_str();
		remove(charPath);

		std::ofstream file(charPath);
		file << content;
		file.close();
	}
};
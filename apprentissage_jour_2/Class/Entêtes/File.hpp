#pragma once
#include <string>

class File
{
public:
	static void write(std::string path, std::string value);
	static void read(std::string path);
};
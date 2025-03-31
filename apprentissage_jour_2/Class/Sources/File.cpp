#include "File.hpp"
#include "Utils.hpp"
#include <fstream>
#include <string>

void File::write(std::string path, std::string value)
{
	std::ofstream file = std::ofstream(path, std::fstream::app);
	
	if (file)
	{
		file << value << std::endl;
		file.close();
	}
}

void File::read(std::string path)
{
	std::ifstream file = std::ifstream(path);

	if (file)
	{
		std::string line;
		while (std::getline(file, line))
		{
			Utils::print(line);
		}

		file.close();
	}
}


#include "Utils.hpp"

#include <iostream>
#include <string>

void Utils::print(std::string value)
{
	std::cout << value << std::endl;
}

void Utils::print(double value)
{
	std::cout << std::to_string(value) << std::endl; // Important : convertir en string
}

std::string Utils::input(std::string question)
{
	std::cout << question << " : ";
	std::string response;
	std::cin >> response;
	return response;
}
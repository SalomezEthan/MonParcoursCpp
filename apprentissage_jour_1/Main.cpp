#include <iostream>
#include <string>
#include <vector>

#include "myClass.hpp"
#include "Utils.hpp"
#include "ListActions.hpp"


int main()
{
	// Dessiner un rectangle (découvert des class en c++)
	Draw::rect(10, 5);
	Draw::square(10);

	// Fonctions classiques
	Utils::print("Hello world !");
	std::string name = Utils::input("What's your name ?");
	Utils::print(name);

	// Tableaux
	std::vector<double> notes = { 12.5, 14, 10.5, 15.75, 10 };
	double average = ListActions::getAverage(notes);
	Utils::print(average);

	return 0;
} 


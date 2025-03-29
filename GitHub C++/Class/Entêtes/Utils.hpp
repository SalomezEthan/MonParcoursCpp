#pragma once
#include <string>

/* J'aime bien l'idée de recréer les fonctions existantes sur les autres language */

class Utils
{
public :
	// Générique dans le futur
	static void print(std::string value);
	static void print(double value);

	static std::string input(std::string question);
};
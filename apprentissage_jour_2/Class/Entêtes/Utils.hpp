#pragma once
#include <string>

/* J'aime bien l'id�e de recr�er les fonctions existantes sur les autres language */

class Utils
{
public :
	// G�n�rique dans le futur
	static void print(std::string value);
	static void print(double value);

	static std::string input(std::string question);
};
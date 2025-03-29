#include <iostream>
#include "myClass.hpp"


	void Draw::rect(double longueur, double hauteur)
	{
		for (int i = 0; i < hauteur; i++)
		{
			for (int j = 0; j < longueur; j++)
			{
				std::cout << "* ";
			}
			std::cout << std::endl;
		}

		std::cout << std::endl;
	}

	void Draw::square(double longueur)
	{
		for (int i = 0; i < longueur; i++)
		{
			for (int j = 0; j < longueur; j++)
			{
				std::cout << "* ";
			}
			std::cout << std::endl;
		}
		std::cout << std::endl;
	}
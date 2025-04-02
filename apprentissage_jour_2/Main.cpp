#include <iostream>
#include <fstream>
#include <string>

#include "Utils.hpp"
#include "File.hpp"

int main()
{
	// Ecrire dans un fichier
	const std::string path = "{path}";

	const std::string content = Utils::input("Ce que tu rajoutes : ");
	File::write(path, content);
	File::read(path);

	Utils::print("---------------------------------------------------------------");
	Utils::print("Addresses et pointeurs :");

	// Les pointeurs et les adresses
	int nombre = 25;
	Utils::print(nombre); // affiche la valeur
	std::cout << &nombre << std::endl; // affiche l'adresse

	int* pointeur = &nombre; // variable qui pointe l'adresse de nombre
	std::cout << pointeur << std::endl;
	std::cout << &pointeur << std::endl; // Affiche l'adresse du pointeur et non l'adresse pointée.

	std::cout << *pointeur << std::endl; // affiche la valeur de l'adresse pointée. (déferencement)

	// crée un pointeur qui pointe vers un entier qu'on initialise
	int *newPointer = 0;
	newPointer = new int;

	// supprime le pointeur et NE PAS OUBLIER DE SUPPRIIMER SA VALEUR
	delete newPointer;
	newPointer = 0;

	return 0;
}


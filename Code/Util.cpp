#include "stdafx.h"
#include "Util.h"
#include <iostream>

void Util::afficherChaine(const std::string& chaine)
{
	if (chaine.empty() == false)
	{
		
	}
	else
	{
		std::cout << chaine[0];
		std::cout << " ";
		std::string reste = chaine.substr(1); // retire tout les char avant l'index 1
		return afficherChaine(reste);
	}
}

bool Util::etrePalindrome(const std::string& chaine)
{
	if (chaine.empty() == false)
	{
		return true;
	}
	else
	{
		char frist = chaine[0];
		char last = chaine[chaine.length()]; // retire tout les char avant l'index 1
		if (frist == last)
		{
			std::string reste = chaine.substr(1, chaine.length() - 2);
			return etrePalindrome(chaine);
		}
		else
		{
			return false;
		}
	}
}


int Util::calculerSomme(int* tab, int numElements)
{
	if (numElements > 0)
	{
		return tab[0] + calculerSomme(tab + 1, numElements - 1);
	}
	else
	{
		return 0;
	}
	delete[] tab;
}

int Util::computeSumOfNumbers(int number)
{
	if (number < 0)
	{
		return -number;
	}
	if (number == 0)
	{
		return false;
	}
	else
	{
		return number % 10 + computeSumOfNumbers(number / 10);
	}
}

void Util::hanoi(int nombreAnneauxADeplacer, int source, int destination, int auxiliary)
{
	if (nombreAnneauxADeplacer == 1)
	{
		std::cout << "Deplacer le disque de la pile " << source << " vers la pile " << destination << std::endl;
		return;
	}
	hanoi(nombreAnneauxADeplacer - 1, source, auxiliary, destination);
	std::cout << "Deplacer le disque de la pile " << source << " vers la pile " << destination << std::endl;
	hanoi(nombreAnneauxADeplacer - 1, auxiliary, destination, source);
}


#include "pch.h"
#include <iostream>
#include "Util.h"
int main()
{
	std::cout << std::endl << "****************************************" << std::endl;
	Util::afficherChaine("Algorithmique");
	std::cout << std::endl;

	std::cout << std::endl << "****************************************" << std::endl;
	if (Util::etrePalindrome("kayak"))
		std::cout << "kayak est un palindrome" << std::endl << std::endl;
	else
		std::cout << "kayak n'est pas un palindrome" << std::endl << std::endl;

	//la somme est 45
	std::cout << std::endl << "****************************************" << std::endl;
	int tab[10] = { 1, 5, 7, 3, 2, 0, 10, 12, 2, 3 };
	std::cout << "La somme du tableau est : " << Util::calculerSomme(tab, sizeof(tab) / sizeof(int)) << std::endl;

	std::cout << std::endl << "****************************************" << std::endl;
	std::cout << "La somme des chiffres de 1234 est : " << Util::computeSumOfNumbers(1234) << std::endl;
	std::cout << "La somme des chiffres de -6543 est : " << Util::computeSumOfNumbers(-6543) << std::endl;

	std::cout << std::endl << "****************************************" << std::endl;
	std::cout << "Résultat de Util::hanoi(3, 0, 2, 1) :" << std::endl;
	// Appel de la fonction Hanoi pour 3 disques
	// 3==> Nombre de disques
	// 0==> Pile de départ (elles sont numérotées de 0 à 2)
	// 2==> Pile d'arrivée
	// 1==> Pile intermédiaire utilisée pour le transfert
	Util::hanoi(3, 0, 2, 1);
}

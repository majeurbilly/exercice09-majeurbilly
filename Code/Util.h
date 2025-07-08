#pragma once
#include <string>
class Util
{
public:
  static void afficherChaine(const std::string& chaine);
  static bool etrePalindrome(const std::string& chaine);
  static int calculerSomme(int* tab, int numElements);
  static int computeSumOfNumbers(int number);
  static void hanoi(int n, int from, int to, int other);
};


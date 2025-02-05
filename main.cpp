#include <iostream>
#include "caesercipher.h"
int main(){
  CaeserCipher unit = CaeserCipher();
  std::string decrypted = unit.decrypt("filament", 's');
  std::cout << decrypted << std::endl;
  std::cout << unit.numerals(decrypted) << std::endl;
  return 0;
 };
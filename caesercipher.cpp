// CaeserCipher.cpp
#include "caesercipher.h"

CaeserCipher::CaeserCipher() {}

char CaeserCipher::encrypt(const char& c, int i)
{
    int asciiValue = c;
    asciiValue += i;
    char newChar = asciiValue;
    return newChar;
}

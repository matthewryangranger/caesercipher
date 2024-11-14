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

std::string CaeserCipher::encrypt(const std::string& s, int i)
{
    std::string result = new char[s.length()];
    for (int j = 0; j < s.length(); j++)
    {
        result += {encrypt(s.at(j), i)};
    }
    return result;
}

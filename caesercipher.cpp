// CaeserCipher.cpp
#include "caesercipher.h"

CaeserCipher::CaeserCipher() {}

char CaeserCipher::encrypt(const char& c, int i)
{
    int asciiValue = c;
    asciiValue += i;
    if (asciiValue >= 122)
        asciiValue -= 26;
    char newChar = asciiValue;
    return newChar;
}

std::string CaeserCipher::encrypt(const std::string& s, int i)
{
    std::string result = new char[s.length()];
    for (const auto& c: s)
    {
        result += encrypt(std::tolower(c), i);
    }
    return result;
}

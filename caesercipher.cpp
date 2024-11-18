// CaeserCipher.cpp
#include "caesercipher.h"

CaeserCipher::CaeserCipher() {}

char CaeserCipher::encrypt(const char& c, int i)
{
    char c_lower = std::tolower(c);
    int asciiValue = c_lower;
    asciiValue += i;
    if (asciiValue >= 122)
    {
        asciiValue -= 26;
    }
    char newChar = asciiValue;
    return newChar;
}

std::string CaeserCipher::encrypt(const std::string& s, int i)
{
    std::string result = new char[s.length()];
    for (const auto& c: s)
    {
        result += {encrypt(c, i)};
    }
    return result;
}

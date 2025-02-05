// CaeserCipher.cpp
#include "caesercipher.h"
#include <iostream>

CaeserCipher::CaeserCipher() {}

char CaeserCipher::encrypt(const char& c, int i)
{
    int asciiValue = c;
    asciiValue += i;
    if (asciiValue > 122)
        asciiValue -= 26;
    char newChar = asciiValue;
    return newChar;
}

char CaeserCipher::decrypt(const char& c, int i)
{
    int asciiValue = c;
    asciiValue -= i;
    if (asciiValue < 97)
        asciiValue += 26;
    char newChar = asciiValue;
    return newChar;
}

std::string CaeserCipher::encrypt(const std::string& s, int i)
{
    std::string result = new char[s.length()];
    for (const auto& c: s)
        result += encrypt(std::tolower(c), i);
    return result;
}

std::string CaeserCipher::decrypt(const std::string& s, const char letter)
{
    std::string result = new char[s.length()];
    for (const auto& c: s)
        result += decrypt(std::tolower(c), (std::tolower(letter) - 96));
    return result;
}

std::string CaeserCipher::numerals(const std::string s)
{
    std::string result;
    int i = 0;
    for (const auto& c: s){
        i++;
        int asciiValue = c;
        int newChar = (asciiValue - 96);
        result += std::to_string(newChar);
        if (i == s.length())
            break;
        result += " ";
    }
    return result;
}

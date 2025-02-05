// CaeserCipher.h
#ifndef CAESERCIPHER_H
#define CAESERCIPHER_H

#include <string>

class CaeserCipher {
private:
    char encrypt(const char& c, int i);
    char decrypt(const char& c, int i);
public:
    CaeserCipher();
    std::string encrypt(const std::string& s, int i);
    std::string decrypt(const std::string& s, const char letter);
    std::string numerals(const std::string s);
};

#endif
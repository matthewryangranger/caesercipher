// CaeserCipher.h
#ifndef CAESERCIPHER_H
#define CAESERCIPHER_H

#include <string>

class CaeserCipher {
public:
    CaeserCipher();  // Constructor declaration
    char encrypt(const char& c, int i);
    std::string encrypt(const std::string& s, int i);
};

#endif
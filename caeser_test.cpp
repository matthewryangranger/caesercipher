#include <gtest/gtest.h>
#include <string>
#include "caesercipher.h"

// Demonstrate some basic assertions.
TEST(Caeser_Test, ShiftAtoDWithKey3)
{
    //Arrange
    CaeserCipher unit = CaeserCipher();
    //Act
    char encrypted = unit.encrypt('a', 3);
    //Assert
    ASSERT_EQ('d', encrypted);
}

TEST(Caeser_Test, ShiftBEEtoDGGWithKey2)
{
    //Arrange
    CaeserCipher unit = CaeserCipher();
    //Act
    std::string encrypted = unit.encrypt("bee", 2);
    //Assert
    ASSERT_EQ("dgg", encrypted);
}

TEST(Caeser_Test, ShiftZtoZWithKey1)
{
    //Arrange
    CaeserCipher unit = CaeserCipher();
    //Act
    std::string encrypted = unit.encrypt("z", 1);
    //Assert
    ASSERT_EQ("a", encrypted);
}

TEST(Caeser_Test, ShiftCapitalAToLowerEWithKey4)
{
    //Arrange
    CaeserCipher unit = CaeserCipher();
    //Act
    std::string encrypted = unit.encrypt("A", 4);
    //Assert
    ASSERT_EQ("e", encrypted);
}
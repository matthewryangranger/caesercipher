#include <gtest/gtest.h>
#include <string>
#include "caesercipher.h"

// Demonstrate some basic assertions.
TEST(Caeser_Test, ShiftAtoDWithKey3)
{
    //Arrange
    auto unit = CaeserCipher();
    //Act
    std::string const encrypted = unit.encrypt("a", 3);
    //Assert
    ASSERT_EQ("d", encrypted);
}

TEST(Caeser_Test, ShiftBEEtoDGGWithKey2)
{
    //Arrange
    auto unit = CaeserCipher();
    //Act
    std::string const encrypted = unit.encrypt("bee", 2);
    //Assert
    ASSERT_EQ("dgg", encrypted);
}

TEST(Caeser_Test, ShiftZtoAWithKey1)
{
    //Arrange
    auto unit = CaeserCipher();
    //Act
    std::string const encrypted = unit.encrypt("z", 1);
    //Assert
    ASSERT_EQ("a", encrypted);
}

TEST(Caeser_Test, ShiftCapitalAToLowerEWithKey4)
{
    //Arrange
    auto unit = CaeserCipher();
    //Act
    std::string const encrypted = unit.encrypt("A", 4);
    //Assert
    ASSERT_EQ("e", encrypted);
}

TEST(Caeser_Test, DecryptBeeWithB)
{
    //Arrange
    auto unit = CaeserCipher();
    //Act
    std::string const decrypted = unit.decrypt("DGG", 'B');
    //Assert
    ASSERT_EQ("bee", decrypted);
}

TEST(Caeser_Test, ReportNumerics)
{
    //Arrange
    auto unit = CaeserCipher();
    //Act
    std::string const numerals = unit.numerals("amore");
    //Assert
    ASSERT_EQ("1 13 15 18 5", numerals);
}
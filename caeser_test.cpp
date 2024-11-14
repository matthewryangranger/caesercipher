#include <gtest/gtest.h>
#include <string>
#include "caesercipher.h"

// Demonstrate some basic assertions.
TEST(Caeser_Test, ShiftAtoCWithKey3)
{
    //Arrange
    CaeserCipher unit = CaeserCipher();
    //Act
    char encrypted = unit.encrypt('a', 3);
    //Assert
    ASSERT_EQ('d', encrypted);

}
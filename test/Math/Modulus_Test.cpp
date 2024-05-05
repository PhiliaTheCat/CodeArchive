#include <gtest/gtest.h>

#include "Math/Modulus"

using Target = ptc::Modulus<97>;

TEST(Modulus_Test, PositveConstructor)
{
    EXPECT_EQ(Target(114514), Target(114514 + 97 * 13));
    EXPECT_NE(Target(13), Target(114514));
}

TEST(Modulus_Test, NegativeConstructor)
{
    EXPECT_EQ(Target(-114514), Target(-(114514 + 97 * 13)));
    EXPECT_NE(Target(-13), Target(-114514));
}

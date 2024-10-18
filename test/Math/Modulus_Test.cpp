#include <gtest/gtest.h>
#include <type_traits>

#include "Modulus"

using Target = ptc::Modulus<97>;

TEST(Modulus_Test, IsTrival)
{
    EXPECT_TRUE(std::is_trivial_v<Target>);
}

TEST(Modulus_Test, IsStandardLayout)
{
    EXPECT_TRUE(std::is_standard_layout_v<Target>);
}

TEST(Modulus_Test, PositveConstructor)
{
    EXPECT_EQ(Target(114514), Target(114514 + 97 * 13));
    EXPECT_EQ(Target(359), Target(359 + 97 * 1));
    EXPECT_EQ(Target(62), Target(62 + 97 * 11));
}

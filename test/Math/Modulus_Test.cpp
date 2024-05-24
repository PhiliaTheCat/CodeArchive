#include <gtest/gtest.h>
#include <type_traits>

#include "Math/Modulus"

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
    EXPECT_NE(Target(13), Target(114514));
}

TEST(Modulus_Test, NegativeConstructor)
{
    EXPECT_EQ(Target(-114514), Target(-(114514 + 97 * 13)));
    EXPECT_NE(Target(-13), Target(-114514));
}

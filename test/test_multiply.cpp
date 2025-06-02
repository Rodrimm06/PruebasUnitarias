#include <gtest/gtest.h>
#include "mult.h"
TEST(MultTest, MultiplyTwoVariables)
{
	int result = multiply(9, 3);

	EXPECT_EQ(result, 27);
}

TEST(MultTest, MultiplyByCero)
{
	int result = multiply(9, 0);

	EXPECT_EQ(result, 0);
}

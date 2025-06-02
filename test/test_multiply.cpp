#include <gtest/gtest.h>
#include "mult.h"
TEST(MultTest, HandlesPositiveInput)
{
	int result = multiply(9, 3);

	EXPECT_EQ(result, 27);
}

TEST(MultTest, HandlesZeroInput)
{
	int result = multiply(9, 0);

	EXPECT_EQ(result, 0);
}

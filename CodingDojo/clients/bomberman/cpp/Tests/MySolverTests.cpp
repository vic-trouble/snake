#include "stdafx.h"
#include <gtest/gtest.h>

#include "BomberLib/utils/RandomDice.h"
#include "MySolver/MySolver.h"

TEST(MySolver, EpicFail)
{
	RandomDice d;
	MySolver solver(&d);

	EXPECT_EQ(5, 4 * 4);
}
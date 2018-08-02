#include "pch.h"
extern "C" {
#include <chapro.h>
}

TEST(ConversionsTester, testUnityGain) {
  EXPECT_EQ(db1(1.0f), 0.0f);
  EXPECT_EQ(db2(1.0f), 0.0f);
  EXPECT_EQ(undb1(0.0f), 1.0f);
  EXPECT_EQ(undb2(0.0f), 1.0f);
}
#include <gmock/gmock.h>

#include <prime_factors.h>

using namespace testing;

std::vector<int> list()
{
    return {};
}

TEST(PrimeFactorsTest, TestOne)
{
    EXPECT_THAT(primeFactors(1), ElementsAreArray(list()));
}

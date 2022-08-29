#include <gmock/gmock.h>

#include <prime_factors.h>

using namespace std;
using namespace testing;

TEST(PrimeFactorsTest, TestOne)
{
    EXPECT_THAT(primeFactors(1), IsEmpty());
}

TEST(PrimeFactorsTest, TestTwo)
{
    EXPECT_THAT(primeFactors(2), ElementsAreArray({2}));
}

TEST(PrimeFactorsTest, TestThree)
{
    EXPECT_THAT(primeFactors(3), ElementsAreArray({3}));
}

TEST(PrimeFactorsTest, TestFour)
{
    EXPECT_THAT(primeFactors(4), ElementsAreArray({2, 2}));
}

TEST(PrimeFactorsTest, TestSix)
{
    EXPECT_THAT(primeFactors(6), ElementsAreArray({2, 3}));
}

TEST(PrimeFactorsTest, TestEight)
{
    EXPECT_THAT(primeFactors(8), ElementsAreArray({2, 2, 2}));
}

TEST(PrimeFactorsTest, TestNine)
{
    EXPECT_THAT(primeFactors(9), ElementsAreArray({3, 3}));
}

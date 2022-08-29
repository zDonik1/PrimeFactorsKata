/**************************************************************************
 *
 *   @author Doniyorbek Tokhirov <tokhirovdoniyor@gmail.com>
 *   @date 06/08/2022
 *
 *************************************************************************/

#include "prime_factors.h"

using namespace std;

vector<int> primeFactors(int n)
{
    vector<int> primes;
    for (int candidate = 2; n > 1; ++candidate) {
        for (; n % candidate == 0; n /= candidate) {
            primes.push_back(candidate);
        }
    }
    return primes;
}

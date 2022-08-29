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
    if (n > 1) {
        if (n % 2 == 0) {
            primes.push_back(2);
            n /= 2;
        }
        if (n > 1) {
            primes.push_back(n);
        }
    }
    return primes;
}

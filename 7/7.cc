#include <cstdlib>
#include <cstdio>
#include <vector>

int main()
{
    size_t n = 10001;
    std::vector<size_t> primes {2};
    for (size_t i = 3;; i += 2)
    {   if (primes.size() == n)
            break;
        bool is_prime = true;
        for (auto p : primes)
        {   if (i < p*p)
                break;
            if (i % p == 0)
            {   is_prime = false;
                break;
            }
        }
        if (is_prime)
            primes.push_back(i);
    }
    printf("%zu\n", primes.back());
}

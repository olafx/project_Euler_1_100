#include <cstdlib>
#include <cstdio>

int main()
{
    constexpr size_t n_d = 500;
    size_t T = 0;
    for (size_t n = 1;; n++)
    {   T += n; // T is now the n-th triangle number
        /* remainder of T while factoring */ size_t T_r = T;
        /* number of divisors */ size_t d = 1;
        size_t a = 0; // exponent of current prime factor
        for (size_t i = 2; i <= T_r;)
        {   if (T_r % i == 0)
            {   T_r /= i;
                a++;
            }
            else
            {   d *= a+1;
                a = 0;
                i++;
            }
        }
        // the loop exited without finalizing d
        d *= a+1;
        if (d > n_d)
        {   printf("%zu\n", T);
            return EXIT_SUCCESS;
        }            
    }
}

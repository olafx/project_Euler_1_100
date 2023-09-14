#include <cstdlib>
#include <cstdio>
#include <cmath>

int main()
{
    size_t n = 2000000;
    auto *is_prime = new bool[n/2-1];
    for (size_t i = 0; i < n/2-1; i++)
        is_prime[i] = true;
    for (size_t i = 3; i <= sqrt(n);)
    {   for (size_t j = i*i; j < n; j += 2*i)
            is_prime[j/2-1] = false;
        for (i += 2; i < n && !is_prime[i/2-1]; i += 2);
    }
    size_t sum = 2;
    for (size_t i = 0; i < n/2-1; i++)
        if (is_prime[i])
            sum += 2*(i+1)+1;
    delete[] is_prime;
    printf("%zu\n", sum);
}

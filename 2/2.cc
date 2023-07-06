#include <cstdlib>
#include <cstdio>
#include <vector>

int main()
{
    std::vector<size_t> fib {1, 2};
    size_t i = 0;
    for (;; i++)
    {   size_t f = fib[i]+fib[i+1];
        if (f > 4e6)
            break;
        else
            fib[i+2] = f;
    }
    // The last one is `fib[(i-1)+2]`.
    size_t sum_even = 0;
    for (size_t j = 0; j < i+2; j++)
        if (fib[j] % 2 == 0)
            sum_even += fib[j];
    printf("%zu\n", sum_even);
}

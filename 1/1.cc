#include <cstdlib>
#include <cstdio>

int main()
{
    constexpr size_t n = 1000;
    bool is_multiple[n];
    for (size_t i = 0; i < n; i++)
        is_multiple[i] = false;
    constexpr size_t factors[] {3, 5};
    for (size_t i = 0; i < sizeof(factors)/sizeof(size_t); i++)
        for (size_t j = 0; j < n; j += factors[i])
            is_multiple[j] = true;
    size_t sum = 0;
    for (size_t i = 0; i < n; i++)
        if (is_multiple[i])
            sum += i;
    printf("%zu\n", sum);
}

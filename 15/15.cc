#include <cstdlib>
#include <cstdio>

int main()
{
    size_t n = 20;
    size_t c = 1;
    for (size_t i = 1; i <= n; i++)
    {   c *= 2*(2*i-1);
        c /= i+1;
    }
    c *= (n+1);
    printf("%zu\n", c);
}

#include <cstdlib>
#include <cstdio>

int main()
{
    size_t n = 20;
    for (size_t a = 19; a > 1; a--)
    {   size_t c = 1;
        for (size_t b = 19; b > 1; b--)
            if (n % b == 0 && a % b == 0 && c % b != 0)
                c *= b;
        n *= a/c;
    }
    printf("%zu\n", n);
}

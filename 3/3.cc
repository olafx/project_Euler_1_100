#include <cstdlib>
#include <cstdio>

int main()
{
    size_t remaining = 600851475143;
    size_t i = 2;
    for (;;)
    {   if (i == remaining)
            break;
        if (remaining % i == 0)
            remaining /= i;
        else
            i++;
    }
    printf("%zu\n", remaining);
}

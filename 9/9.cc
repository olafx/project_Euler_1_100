#include <cstdlib>
#include <cstdio>

int main()
{
    for (size_t c = 5; c <= 1000-2; c++)
        for (size_t b = (1000-c)/2; b <= 1000-c-1; b++)
        {   size_t a = 1000-b-c;
            if (a*a+b*b == c*c)
            {   printf("%zu\n", a*b*c);
                return EXIT_SUCCESS;
            }
        }
}

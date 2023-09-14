#include <cstdlib>
#include <cstdio>

int main()
{
    size_t n = 100;
    size_t a = n*(n+1)*(2*n+1)/6;
    size_t b = n*(n+1)/2;
    b *= b;
    printf("%zu\n", b-a);
}

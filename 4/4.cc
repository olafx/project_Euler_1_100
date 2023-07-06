#include <cstdlib>
#include <cstdio>

int main()
{
    size_t largest_palindrome = 0;
    for (size_t i = 999; i >= 900; i--)
        for (size_t j = 999; j >= i; j--)
        {   size_t digits[6];
            for (size_t k = 0, m = 1; k < 6; k++, m *= 10)
                digits[5-k] = i*j/m % 10;
            bool is_palindrome = true;
            for (size_t k = 0; k < 3; k++)
                if (digits[k] != digits[5-k])
                    is_palindrome = false;
            if (is_palindrome && i*j > largest_palindrome)
                largest_palindrome = i*j;
        }
    printf("%zu\n", largest_palindrome);
}

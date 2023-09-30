#include <cstdlib>
#include <cstdio>
#include <unordered_map>

int main()
{
    /* chain lengths */ std::unordered_map<size_t, size_t> ls {{1, 1}};
    /* maximum length number */ size_t m = 1,
    /* maximum length */ ml = ls[m];
    for (size_t i = 1; i < 1e6; i++)
    {   for (size_t l = 0, j = i;; l++)
        {   if (ls.contains(j))
            {   l += ls[j];
                ls[i] = l;
                if (l > ml)
                {   m = i;
                    ml = l;
                }
                break;
            }
            if (j % 2 == 0)
                j /= 2;
            else
                j = 3*j+1;
        }
    }
    printf("%zu\n", m);
}

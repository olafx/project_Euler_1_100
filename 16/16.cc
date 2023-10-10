#include <cstdlib>
#include <cstdio>
#include <vector>

using std::vector;

vector<size_t> factors(size_t n)
{
    vector<size_t> f;
    for (size_t i = 2;;)
        {   if (i == n)
            {   f.push_back(i);
                break;
            }
            if (n % i == 0)
            {   f.push_back(i);
                n /= i;
            }
            else
                i++;
        }
    return f;
}

// Fix the long form of `a` so that it's all <10. Ignore the first `c` elements.
void fix(vector<int> &a, size_t c=0)
{
    for (;;)
    {   bool done = true;
        for (size_t i = c; i < a.size()-1; i++)
        {   if (a[i] > 9)
            {   done = false;
                int t = a[i];
                a[i] %= 10;
                a[i+1] += (t-a[i])/10;
            }
        }
        {   if (a.back() > 9)
            {   done = false;
                int t = a.back();
                a.back() %= 10;
                a.push_back((t-a.back())/10);
            }
        }
        if (done)
            break;
    }
}

// Long multiplication of `a` and `b`. Prepend `c` zeros to the final array.
vector<int> multiply(vector<int> a, int b, size_t c=0)
{
    vector<int> x(a.size()+c);
    for (size_t i = 0; i < c; i++)
        x[i] = 0;
    for (size_t i = 0; i < a.size(); i++)
        x[i+c] = a[i]*b;
    fix(x, c);
    return x;
}

// Long addition. Modifies `a`.
void add(vector<int> &a, vector<int> b)
{
    if (a.size() < b.size())
    {   size_t n = b.size()-a.size();
        for (size_t i = 0; i < n; i++)
            a.push_back(0);
    }
    for (size_t i = 0; i < b.size(); i++)
        a[i] += b[i];
    fix(a);
}

// Long multiplication of `a` and `b`.
vector<int> multiply(vector<int> a, vector<int> b)
{
    vector<int> x;
    for (size_t i = 0; i < b.size(); i++)
        add(x, multiply(a, b[i], i));
    return x;
}

int main()
{
    size_t n = 1000;
    auto nf = factors(n);
    vector<int> last {2}, x = last;
    for (size_t i = 0; i < nf.size(); i++)
    {   for (size_t j = 0; j < nf[i]-1; j++)
            x = multiply(x, last);
        last = x;
    }
    size_t s = 0;
    for (size_t i = 0; i < x.size(); i++)
        s += x[i];
    printf("%zu\n", s);
}

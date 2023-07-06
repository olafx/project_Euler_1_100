# 4

A palindromic number reads the same both ways. The largest palindrome made from the product of two $2$-digit numbers is $9009 = 91 \times 99$.
Find the largest palindrome made from the product of two $3$-digit numbers.

## Strategy

The range of products of 3-digit numbers is $[900^2,999^2]=[810000,998001]$. These are all 6 digits, so we can specialize to length 6. We use the commutativity of multiplication to halve the naive range. We check every possibility and keep track of the largest, because the largest isn't necessarily the first one found.

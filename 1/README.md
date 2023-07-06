# 1

If we list all the natural numbers below $10$ that are multiples of $3$ or $5$, we get $3, 5, 6$ and $9$. The sum of these multiples is $23$.
Find the sum of all the multiples of $3$ or $5$ below $1000$.

## Strategy

'Below', so it's $[0, 1000)$.

Use a sieve.

We can also explicitly calculate the sum, but then we count the multiples of $3\times5=15$ double, so we have to subtract the sum of the multiples of $15$. We would also need to be more careful about the range of the sum.

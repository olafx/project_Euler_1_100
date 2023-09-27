# 10

<p>The sum of the primes below $10$ is $2 + 3 + 5 + 7 = 17$.</p>
<p>Find the sum of all the primes below two million.</p>

## Strategy

An obvious problem for a sieve of Eratosthenes. There are many useful optimizations here. Firstly, let's not store even primes, because it's only $2$, and this saves half the memory, so the sieve array will be $3$, $5$, $7$, $9$, etc. Secondly, the smallest prime in a prime factorization is sufficient to find out a number is not prime using the sieve. The largest possible smallest prime of $n$ is $\sqrt n$ where $n=2000000$, so we can stop enumerating there. Thirdly, there is no point in enumerating the nonprimes since the prime factorization of such a nonprime will already do the enumeration work. Fourthly, again because the prime factorization of any number with the largest minimum prime is the square root of that number, and again because enumerating the smallest prime is sufficient, we can start enumerating a prime from its square. Put another way, if a nonprime has some particular prime in its factorization, then either there exists a smaller prime, which has already been enumerated, or the number is at least that prime squared.

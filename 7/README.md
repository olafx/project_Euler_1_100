# 7

<p>By listing the first six prime numbers: $2, 3, 5, 7, 11$, and $13$, we can see that the $6$th prime is $13$.</p>
<p>What is the $10\,001$st prime number?</p>

## Strategy

Probably not supposed to use a sieve here. Let's construct primes by iterating over the integers and checking if other primes thusfar divide it. Let's use some optimizations, because not using a sieve makes it slow. Firstly, primes above $2$ or odd. Secondly, if we are considering all the primes that might divide some number, and haven't found any yet, then either the number is prime, or it is at least that prime squared, since that prime squared is the smallest nonprime prime factorization possible at that point. If the number is found to be smaller, it must be prime.

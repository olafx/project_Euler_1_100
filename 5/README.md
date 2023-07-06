# 5

$2520$ is the smallest number that can be divided by each of the numbers from $1$ to $10$ without any remainder.
What is the smallest positive number that is evenly divisible by all of the numbers from $1$ to $20$?


## Strategy

Say a number must be divisible by $a$. If it is already divisible by $b$ so that $b$ divides $a$, we must only multiply the number by $a/b$ to guarantee that it is divisible by both $a$ and $b$. If there are multiple numbers $b$ that divide $a$, their product $c$ also divides $a$, so must only multiply the number by $a/c$. This is an algorithm to construct the desired number. We should iterate backwards because $a>b$. We must take care to not include say both 4 and 2 in $c$ when $a$ is divisible by 4, because it might not be divisible by 8. And if it is divisible by 8, we should consider neither 4 nor 2. The fundamental requirement here is that new candidate factors of $c$ must be relatively prime with $c$ thusfar.

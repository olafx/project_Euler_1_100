# 9

<p>A Pythagorean triplet is a set of three natural numbers, $a \lt b \lt c$, for which,
$$a^2 + b^2 = c^2.$$</p>
<p>For example, $3^2 + 4^2 = 9 + 16 = 25 = 5^2$.</p>
<p>There exists exactly one Pythagorean triplet for which $a + b + c = 1000$.<br>Find the product $abc$.</p>

## Strategy

Iterate over all $c$, which is at least $5$ and at most $1000-2$. For a given $c$, $b$ is at most $1000-c-1$. But also, $1000-b-c<b$, so $b>(1000-c)/2$, and that gets floored so it's a safe lower estimate.
Then just check if it's a Pythagorean triplet.

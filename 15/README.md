# 15

<p>Starting in the top left corner of a $2 \times 2$ grid, and only being able to move to the right and down, there are exactly $6$ routes to the bottom right corner.</p>
<div class="center">
<img src="resources/images/0015.png?1678992052" class="dark_img" alt=""></div>
<p>How many such routes are there through a $20 \times 20$ grid?</p>

## Strategy

Should just be able to count these paths through methods of combinatorics.

Say we have a $n\times n$ grid, so $(n+1)\times (n+1)$ sites. We have to go down $n$ times and to the right $n$ times. The Manhattan distance will always be $2n$. The only constraint is, $n$ times down and $n$ times to the right. To get rid of this constraint, make the objects of interest the decisions themselves, $n$ of each. The set of possible paths corresponds to the set of possible permutations of these decisions. Once we have chosen when to go say down, we've also chosen when to go right, because that's just the remaining $n$ slots of the $2n$ decisions. So it amounts to counting the number of ways to distribute going say down $n$ times in a space of $2n$ decisions, which is $2n\choose n$.

So let's write a program to calculate $2n\choose n$ for large $n$. Properties like ${2n\choose n}=\frac{(2n)!}{(n!)^2}=2^n\frac{(2n-1)!!}{n!}$ don't get us far. The challenge in numerical combinatorics in general is to prevent producing fractions and large intermediary integers. The solution is the Catalan numbers, $C_n=\frac{1}{n+1}{2n\choose n}$. Use that $C_0=1$ and $C_{n}=\frac{2(2n-1)}{n+1}C_{n-1}$. Do the multiplication 1st, division 2nd, then there's no fractions, because the Catalan numbers are integer. At worst we produce an intermediary number that is a factor $n+1$ too large, that's not bad.

# 16

<p>$2^{15} = 32768$ and the sum of its digits is $3 + 2 + 7 + 6 + 8 = 26$.</p>
<p>What is the sum of the digits of the number $2^{1000}$?</p>

## Strategy

Use that $2^{1000}=(((((2^2)^2)^2)^3)^3)^3$. Using intermediary results, this requires only $1+1+1+2+2+2=9$ long multiplications, instead of $1000$. Let's implement this strategy for general $n$. Extremely overkill but whatever, likely they intend naive long multiplication.

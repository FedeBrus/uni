$$
\begin{align}
2^{n+2} &= O(2^{n}) \\
\log ^{2}(n)  & = O(\log ^{2}(n))\\ 
\log_{n}(n \cdot (\sqrt{ n })^{2}) + \frac{1}{n^{2}}  & = O(1) \\
3n^{0.5} &= O(\sqrt{ n }) \\
16^{n/4} & = O(2^{n}) \\
2\sqrt{ n } + 4n^{1/4} + 8n^{1/8} + 16^{n/16} & = O(\sqrt{ n }) \\
\sqrt{ (\log(n)) (\log(n)) }  & = O(\log(n)) \\
\frac{n^{3}}{(n+1)(n+3)}  & = O(n) \\
2^{n} &= O(2^{n})
\end{align}
$$
$$
1,5,9 > 8 > 4,6 > 2 > 7 > 1
$$

$$
T(n) = \begin{cases}
kT\left( \frac{n}{k} \right)+kn  & n > 1 \\
1  & n \leq 1
\end{cases}
$$

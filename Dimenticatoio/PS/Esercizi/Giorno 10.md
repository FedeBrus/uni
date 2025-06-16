$$
F(x) = \begin{cases}
\left( 1 + \left( \frac{x}{2.31} \right)^{3.31} \right)^{-1.6}  & x > 0 \\
0 & x \leq 0
\end{cases}
$$
Q1)
```r
function(x) {
	ifelse(x > 0, (1 + (x / 2.31)^3.31)^(-1.6), 0)
}
```
Q2)
```r
FALSE
```
Q3)
Sia
$$
F_{L}(x) = \begin{cases}
\frac{1}{4}e^{\frac{x}{2}}  &  x < 0 \\
1 - \frac{1}{4}e^{-\frac{x}{2}} & x \geq 0
\end{cases}
$$
una funzione di distribuzione.
$$
\begin{align}
P([-0.63, 1.18]) &= F_{L}(1.18) - F_{L}\left( -0.63^{-} \right)  \\
 & = 1 -\frac{1}{4}e^{-\frac{1.18}{2}} - \left( \frac{1}{4}e^{-\frac{0.63}{2}} \right) \\
 & = 0.6789709602
\end{align}
$$
Q4)
$$
\begin{align}
P(\{ 0 \}) &= P \left( \lim_{ n \to +\infty } \left( - \frac{1}{n}, 0 \right] \right) \\
&= \left( F_{L}(0) - \lim_{ n \to +\infty } F_{L}\left( - \frac{1}{n} \right) \right) \\
 &= \frac{3}{4} - \frac{1}{4}  \\
 & = 0.5
\end{align}
$$


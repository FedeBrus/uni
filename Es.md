### Q1
$$
\begin{align}
p_{Y}(4) &= \sum_{x \in R_{X}} p_{X,Y}(x, 4) \\
 & = \sum_{x \in R_{X}} p_{Y|X}(4|x)p_{X}(x) \\
 & = \frac{2}{20} Bin(1,4,0.64) + \frac{1}{20} Bin(2,4, 0.64) + \dots + \frac{2}{20} Bin(10,4, 0.64) \\
 & = 0.1308570723
\end{align}
$$
### Q2
$$
\begin{align}
p_{X}(2Y) &= \sum_{y \in R_{Y}} p_{X, Y}(2y, y) \\
 & = \sum_{y \in R_{Y}} p_{X|Y}(2y|y) p_{Y}(y) \\
 & = \sum_{y \in R_{Y}} p_{X|Y}\left( 2y| y \right)\sum_{x \in R_{X}}p_{X,Y}(x, y)
\end{align}
$$
ma questo è tedioso.
$$
\begin{align}
p_{X}(2Y) &= \sum_{y \in R_{Y}:2y\in R_{X}} P(X= 2y, Y=y) \\
 & = \sum_{y \in R_{Y}:2y\in R_{X}} P(Y=y|X=2y)P(X=2y) \\
 & = \sum_{y = 1}^{5} \binom{2y}{y}(0.64)^{y}(1-0.64)^{y} p_{X}(2y) \\
 & = 0.1032076984
\end{align}
$$
### Q3
$$
\begin{align}
P(X = 6|Y = 4)  &= \frac{P(X=6, Y=4)}{P(Y = 4)} \\
 & = \frac{P(Y =4 |X=6)P(X=6)}{P(Y=4)} \\
 & = \frac{\binom{6}{4}(0.64)^{4}(1-0.64)^{6-4}\left( \frac{1}{20} \right)}{\sum_{x = 4 }^{10} \binom{x}{4} (0.64)^{4} (1-0.64)^{x-4} p_{X}(x)} \\
 & = 0.1246203485
\end{align}

$$

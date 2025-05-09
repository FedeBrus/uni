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
### Q1
Siano $X, Y$ variabili aleatorie con densità congiunta $f(x, y) = 0.67$ per $0, < x < 1.7277369, 0 < y < x$ e nulla altrove.

Qual è la probabilità di $P(X < 1.07)$?
Sia $k := 1.07$.
$$
\begin{align}
P(X < 1.07) &= \int_{x=0}^{k} \int_{0}^{x} f_{X,Y}(x, y) dy dx \\
 & = \int_{x=0}^{k} \int_{0}^{x} 0.67 dydx \\
 & =0.67 \int_{0}^{k} xdx \\
 & = \frac{0.67k^{2}}{2}
\end{align}
$$
Le variabili aleatorie $X$ e $Y$ sono (stocasticamente) indipendenti?
Troviamoci inanzitutto le densità marginali:
Sia $\gamma := 1.7277369$.
$$
\begin{align}
f_{X}(x) &= \int_{0}^{x} f_{X,Y}(x,y) dy \\
 & = \int_{0}^{x} 0.67dy \\
 & = 0.67 \int_{0}^{x} dy \\
 & = 0.67x
\end{align}
$$
$$
\begin{align}
f_{Y}(y) &= \int_{y}^{\gamma} f_{X,Y}(x,y) dx \\
 & = \int_{y}^{\gamma} 0.67 dx \\
 & = 0.67 \int_{y}^{\gamma} dx \\
 & = 0.67 (\gamma - y)
\end{align}
$$
Ma:
$$
0.67 \neq (0.67)^{2} x(\gamma-y)
$$
FALSE
### Q3
Quando $\mathbb{E}(X)- \mathbb{E}(Y | X = k)$
$$
\begin{align}
\mathbb{E}(X) &= \int_{0}^{\gamma} xf_{X}(x) dx \\
 & = 0.67 \int_{0}^{\gamma} x^{2}dx \\
 & = 0.67 \frac{\gamma^{3}}{3}
\end{align}
$$
$$
\begin{align}
\mathbb{E}(Y |X=k)&= \int_{0}^{k} y f_{Y|X}(y|k) dy \\
 & = \int_{0}^{k} y \frac{f_{X, Y}(k,y)}{f_{X}(k)} dy \\
 & = \int_{0}^{k} \frac{y}{k} dy \\
 & = \frac{1}{k} \left[ \frac{y^{2}}{2} \right] ^{k}_{0} \\
 & = \frac{1}{k} \left( \frac{k^{2}}{2} \right)  = \frac{k}{2}
\end{align}
$$
###  Q4
Quanto vale $\mathbb{E}(\mathbb{E}(Y|X))$?
Per la proprietà del valore atteso iterato sappiamo che tale quantità è:
$$
\begin{align}
\mathbb{E}(Y) &= \int_{0}^{\gamma} yf_{Y}(y)dy \\
 & = 0.67 \int_{0}^{\gamma} y(\gamma-y) dy \\
 & = 0.67 \left[ \frac{\gamma y^{2}}{2} - \frac{y^{3}}{3} \right]^{\gamma}_{0} \\
 & = 0.67\left( \frac{\gamma^{3}}{2}-\frac{\gamma^{3}}{3} \right) \\
 & = \frac{\gamma^{3}}{6}0.67
\end{align}
$$
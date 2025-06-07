## 04/24
### Q1
$$
\begin{align}
p_{Y}(4) &= \sum_{x \in R_{X}} p_{X,Y}(x, 4) \\
 & = \sum_{x \in R_{X}} p_{Y|X}(4|x)p_{X}(x) \\
 & = \sum_{x=1}^{10} p_{X}(x) \binom{x}{4} p^{x} (1-p)^{x-4} \\
 & = \sum_{x=4}^{10} p_{X}(x) \binom{x}{4} p^{x} (1-p)^{x-4} \\
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
## Es 05/07
$$
\begin{align}
\frac{1}{k} &=  \int_{0}^{1} \int_{0}^{1} (5x + 2y) dy dx \\
 & = \int_{0}^{1} \left[ 5xy + y^{2} \right]^{1}_{0} dx \\
 & = \int_{0}^{1} (5x + 1)d x \\
 & = \left[ \frac{5x^{2}}{2} + x \right]_{0}^{1} \\
 & = \frac{7}{2}
\end{align}
$$
$k = \frac{2}{7}$.

## Es 05/09
### Q1
Siano $X, Y$ variabili aleatorie con densità congiunta $f(x, y) = 0.67$ per $0 < x < 1.7277369, 0 < y < x$ e nulla altrove.

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
### Q2
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
### Q4
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
### Q1
La variabile aleatoria esponenziale è senza memoria quindi basta calcolare:
Sia $\mu = 114$, dunque $\lambda = \frac{1}{\mu}$
$$
P(T>117.1) = 1 - F(117.1) = e^{-\lambda (117.1)}
$$
### Q2
In questo caso bisogna risolvere la seguente per $t$:
$$
P(T <t) = 0.93
$$
$$
\begin{align}
1-e^{-\lambda t} &= 0.93 \\
e^{-\lambda t} &= 0.07 \\
t & = -\frac{\ln(0.07)}{\lambda}
\end{align}
$$
### Q3
Ancora una volta, siccome la variabile è "senza memoria" basta calcolare:
$$
F(31) = 1-e^{-\lambda(31)}
$$
### Q4
Attenzione, qua viene chiesta la funzione di densità, non di distrubuzione. $Y = \sqrt[3]{X} \implies X=Y^{3}$.
$$
f_{Y}(y) =  
\begin{cases}
f_{X}(y^{3}) \cdot \left| 3y^{2} \right| = 3\lambda e^{-\lambda y^{3}} y^{2} & 0 < y < +\infty \\
0 & \text{altrimenti}
\end{cases}
$$
```R
function(x){ifelse(x<=0,0,3*(1/114)*(x^2)*exp(-(1/114)*(x^3)))}
```
### Q1
Possiamo utilizzare la variabile aleatoria seguente:
$$
X = \sum_{i=1}^{40} N(16.5, (0.22)^{2}) \sim N\left( 40 \cdot 16.5, 40 \cdot (0.22)^{2} \right)
$$
Ci viene chiesto se:
$$
P(X < 658.2746613) = 0.1074877
$$
### Q2
Il secondo esercizio ci chiede:
$$
P(X > 658.2746613) = 1-0.1074877 = 0.8925123
$$
### Q3
Il terzo quesito ci chiede di risolvere per $x$:
$$
P(X > x) \geq 0.75929
$$
$$
\begin{align}
P(X > x) &\geq 0.75929 \\
1-P(X \leq x) &\geq 0.75929 \\
P(X \leq x) &\leq 0.24071 \\
x &= 659.0204
\end{align}
$$
### Q1
```r
function(x) {
	ifelse(x <= 0, 
		0, 
		1 - exp(-1.6 * x)
	)
}
```

### Q2
$$
\begin{align}
P(U > 0.474 | Y > 0.231) &= \frac{P(\{ U>0.474 \} \cap \{ Y > 0.231 \})}{P(Y>0.231)} \\
 & = \frac{P(\{ X > 0.474  \} \cap \{ Y>0.474 \} \cap \{ Y>0.231 \})}{P(Y>0.231)} \\
 & = \frac{P(\{ X>0.474 \} \cap \{ Y>0.474 \})}{P(Y>0.231)} \\
 & = \frac{(1 - F_{X}(0.474)) \cdot (1-F_{Y}(0.474))}{1 - F_{Y}(0.231)} \\
 & = \frac{0.7524656 \cdot 0.6225073}{0.7937395} \\
 & = 0.5901374
\end{align}
$$
### Q3
$$
\begin{align}
P(U > 0.231 | Y > 0.474)  &= \frac{P(\{ U > 0.231 \} \cap \{ Y > 0.474 \})}{P(Y > 0.474)} \\
 & = \frac{P(\{ X > 0.231 \} \cap \{ Y > 0.231 \} \cap \{ Y>0.474 \})}{P(Y>0.474)} \\
 & = \frac{P(\{ X>0.231 \} \cap \{ Y>0.474 \})}{P(Y>0.474)} \\
 & = (1 - F_{X}(0.231)) \\
 & = 0.8705762
\end{align}
$$
### Q4
$$
\begin{align}
\mathbb{E}(XY) &= \mathbb{E}(X)\mathbb{E}(Y) \\
 & = \frac{1}{\lambda_{1}} \cdot \frac{1}{\lambda_{2}} \\
 & = \frac{1}{0.6} \cdot 1 \\
 & = 1.666667
\end{align}
$$
### Q1
Essendo $S$ una variabile aleatoria discreta la probabilità chiesta si riduce a:
$$
p_{S}(4) = \binom{14}{4}(0.573)^{4}(1-0.573)^{14-4} = 0.02174539
$$
### Q2
La probabilità chiesta è:
$$
\begin{align}
P(X = 4 | S = 8)  & = \frac{P(\{ X=4 \} \cap \{ S = 8 \})}{P(S = 8)} \\
 & = \frac{P(S = 8|X=4)P(X=4)}{P(S=8)} \\
 & = \frac{P(Y=4)P(X=4)}{P(S = 8)} \\
 & = 0.2097902
\end{align}
$$
### Q3
$$
\begin{align}
P(Y \in [1, 3] | S=8) &= \frac{P(\{Y \in [1,3]\} \cap \{ S = 8 \})}{P(S=8)} \\
 & = \frac{P(S = 8| Y \in[1, 3])P(Y\in[1,3])}{P(S=8)} \\
 & =\sum_{i=1}^{3}\frac{ P(S = 8|Y =i)P(Y = i)}{P(S=8)} \\
 & = \sum_{i=1}^{3} \frac{ P(X = 8-i)P(Y = i)}{P(S=8)} \\
 & = 0.7592408
\end{align}
$$
### Q1
$$
\begin{align}
p_{X, Y}(-6, -9) &= p_{Y|X}(-9|-6)p_{X}(-6) \\
 & = 0.17 \cdot 0.26 \\
 & = 0.0442
\end{align}
$$
### Q2
$$
Cov(X, Y) = \mathbb{E}(XY) - \mathbb{E}(X)\mathbb{E}(Y)
$$
$$
\begin{align}
Cov(X,Y) &= \sum_{x \in R_{X}} \sum_{y \in R_{Y}} xyp_{X,Y}(x, y) - \left( \sum_{x \in R_{X}} xp_{X}(x) \right)\left( \sum_{y\in R_{Y}} y p_{Y}(y) \right) \\
 & = \left( \sum_{x \in R_{X}} \sum_{y \in R_{Y}} xy (p_{Y|X}(y|x)p_{X}(x)) \right) - \left( \sum_{x \in R_{X}} xp_{X}(x) \right) \left(  \sum_{y \in R_{Y}} y p_{Y}(y)  \right)   \\
 & = 11.9162 - \left( 2.345 \cdot 3.933 \right)  \\
 & = 2.693315
\end{align}
$$
Ricordando che
$$
P(Y=y) = \sum_{x \in R_{X}} P(\{ Y = y \} \cap \{ X = x \}) = \sum_{x \in R_{X}} P(\{ Y = y \}|\{ X=x \})P(\{ X = x \})
$$
Questo è concettualmente corretto, ma inutilmente tedioso:
Definiamo il seguente:
$$
m(x) = \sum_{y \in R_{Y}} y p_{Y|X}(y |x) = \mathbb{E}(Y|X=x)
$$
$$
\begin{align}
\mathbb{E}(XY) - \mathbb{E}(X)\mathbb{E}(Y) & = \mathbb{E}(X\mathbb{E}(Y|X)) - \mathbb{E}(X)\mathbb{E}(\mathbb{E}(Y|X)) \\
 & = \mathbb{E}(Xm(X)) - \mathbb{E}(X)\mathbb{E}(m(X)) \\
 & = \sum_{x \in R_{X}} ( xm(x)p_{X}(x)) - \sum_{x \in R_{X}} (xp_{X}(x)) \sum_{x \in R_{X}} (m(x)p_{X}(x))
\end{align}
$$
In totale questi sono 3 prodotti per trovarsi gli $m(x)$. Dopodiché per ogni sommatoria sono solo 3 somme ciascuna.
### Q3
$$
Var(X) = \mathbb{E}(X^{2}) - \mathbb{E}(X)^{2} = 30.8375 - 5.499025 = 25.33847
$$
$$
Var(Y) = \mathbb{E}(Y^{2}) - \mathbb{E}(Y)^{2} = 48.1995 - 15.46849 = 32.73101
$$
$$
\rho(X,Y) = \frac{Cov(X, Y)}{\sqrt{ Var(X)Var(Y) }} = \frac{2.693315}{\sqrt{ 25.33847 \cdot 32.73101 }} = 0.09352274
$$
Qui l'unico conto tedioso è $\mathbb{E}(Y^{2})$ per il quale conviene crearsi una tabellina di $p_{Y}(y)$.
### Q1
Se vogliamo utilizzare un'approssimazione normale dobbiamo trovarci i parametri di questa normale.
$$
\begin{align}
\mu &= \mathbb{E}\left( \sum_{i=1}^{n} X_{i} \right) = \sum_{i=1}^{n} \mathbb{E}(X_{i}) = n\lambda = 2000 \\
\sigma^{2} &= Var\left( \sum_{i=1}^{n} X_{i} \right) = n\lambda = 2000
\end{align}
$$
Dunque la variabile aleatoria $X = \sum_{i=1}^{n}X_{i} \overset{a}{\sim} N\left( \lambda, \frac{\lambda}{n} \right)$.
Procediamo con la creazione della normale:
$$
Z = \frac{X + 0.5 - n\lambda}{\sqrt{ n\lambda }} \overset{a}{\sim} N(0,1)
$$
Per rispondere al primo quesito dunque:
$$
\begin{align}
P(X > 2000) &= 1 - P(X \leq 2000) \\
 & = 1 - P\left( Z \leq \frac{2000 + 0.5-2000}{\sqrt{ 2000 }} \right) \\
 & = 1 - P(Z \leq 0.01118034) \\
 & = 1 - \Phi(0.01118034) \\
 & = 1 - 0.5044602 \\
 & = 0.4955398
\end{align}
$$
### Q2
Il valore esatto possiamo ottenerlo utilizzando la variabile $X \sim Pois(n\lambda)$.
$$
\begin{align}
|0.4955398 - (1 - P(X \leq 2000))| & = |0.4955398 - 0.4940533| \\
 & = 0.0014865
\end{align}
$$
### Q3
$$
\begin{align}
P(X \geq 2400) &\geq 0.82 \\
1 - P(X < 2400) & \geq 0.82 \\
P(X < 2400)  & \leq 0.18 \\
P\left( Z\leq \frac{2399+0.5-n\lambda}{\sqrt{ n\lambda }} \right) & \leq 0.18 \\
\end{align}
$$
Calcolando $\Phi^{-1}$ di entrambi i membri:
$$
\begin{align}
\frac{2399.5-200n}{\sqrt{ 200n }}&\leq -0.9153651 \\
2399.5 - 200n & \leq -0.9153651\sqrt{ 200 } \sqrt{ n } \\
-200n +0.9153651\sqrt{ 200 }\sqrt{ n } +2399.5 &\leq 0
\end{align}
$$
Sia $t = \sqrt{ n }$.
$$
-200t^{2} + 12.94522t + 2399.5 \leq 0
$$
$$
\begin{align}
t_{1,2} &=\frac{-12.94522 \pm \sqrt{ (12.94522)^{2} -4(-200)(2399.5) }}{2(-200)} \\
t_{1} &= -3.431528889 \\
t_{2} &= 3.496254989
\end{align}
$$
Però $t = \sqrt{ n }$ dunque dobbiamo prendere il risultato positivo.
$$
n \geq (3.496254989)^{2} = 12.2238
$$
Dunque $n \geq 12.2238$, per le restrizioni del problema abbiamo che $n = 13$.
### Q1
Sia $\mu = 5.473$ e $\sigma = 0.763$
Siano $X_{i} \sim N(\mu, \sigma^{2})$ con $i \in \mathbb{N} \setminus 0$
$$
\begin{align}
P(\{X_{1} < 4.4881789 \} \cup \{ X_{1} > 6.7982755 \}) &= 1 - P(4.4881789 \leq X_{1} \leq 6.7982755) \\
 & = 1 - (F_{X_{1}}(6.7982755) - F_{X_{1}}(4.4881789 )) \\
 & = 0.1396
\end{align}
$$
### Q2
Consideriamo:
$$
X = \sum_{i=1}^{43} X_{i}
$$
Allora $\mathbb{E}(X) = \sum_{i=1}^{43} \mathbb{E}(X_{i}) = 43\mu$ e $Var(X) = \sum_{i=1}^{43} Var(X_{i}) = 43\sigma^{2}$.
Quindi $X \sim N(43\mu, \sqrt{ 43 }\sigma)$
$$
\begin{align}
P(X > 241.393024) &= 1 - P(X \leq 241.393024) \\
 & = 1 - F_{X}(241.393024) \\
 & = 0.1131394
\end{align}
$$
### Q3
Abbiamo stabilito che $P(X \text{ da scartare}) = 0.1396$.
Sia $Y \sim Bin(43, 1-0.1396)$.
Ciò che ci viene chiesto è dunque:
$$
\begin{align}
P(Y \leq 37) &= F_{Y}(37) \\
 & = 0.5669825
\end{align}
$$
### Q1
$$
P(X+Y \geq 23) \leq \frac{\mathbb{E}(X+Y)}{23}
$$
Ma siccome $X$ e $Y$ sono indipendenti:
$$
P(X + Y \geq 23) \leq \frac{\mathbb{E}(X)+\mathbb{E}(Y)}{23}
$$
Calcoliamo allora i valori attesi:
$$
\begin{align}
\mathbb{E}(X) &= \lambda_{X} = 3 \\
\mathbb{E}(Y) &= \lambda_{Y} = 10
\end{align}
$$
Dunque:
$$
P(X + Y\geq 23) \leq \frac{13}{23} = 0.5652174
$$
### Q2
$$
P(X \geq 6.11 | X + Y = 23) \leq \frac{\mathbb{E}(X| X + Y =23)}{6.11}
$$
Procediamo al calcolo di:
$$
\begin{align}
\mathbb{E}(X|X+Y=23) &= \sum_{i=0}^{23} i P_{X|X+Y}(X=i|X+Y=23) \\
 & = \sum_{i=0}^{23} i \frac{P_{X, X + Y} (\{ X = i \} \cap \{X + Y = 23 \})}{P_{X+Y}(X+Y=23)} \\
 & = \sum_{i=0}^{23} i \frac{P_{X,X+Y}(\{ X=i \} \cap \{ Y=23 - i \})}{P_{X+Y}(X+Y = 23)} \\
 & = \sum_{i=0}^{23} i \frac{p_{X}(i)p_{Y}(23-i)}{p_{x+y}(23)}
\end{align}
$$
in R:
```R
result <- 0
lambda_x <- 3
lambda_y <- 10

for (i in 0:23) {
	result <- result + (i * dpois(i, lambda_x) * dpois(23 - i, lambda_y)) / dpois(23, lambda_x + lambda_y)
}

result
```
$$
\begin{align}
\mathbb{E}(X|X+Y=23) & = 5.307692
\end{align}
$$
Dunque:
$$
P(X \geq 6.11 | X + Y = 23) \leq \frac{\mathbb{E}(X| X + Y =23)}{6.11} = 0.8686894
$$
### Q3
Osserviamo i parametri di $W$:
$$
\mu = \mathbb{E}(W)= \mathbb{E}(1.9 Z) = 1.9\mathbb{E}(Z) = 0
$$
$$
\sigma^{2} = Var(W) = Var(1.9Z) = (1.9)^{2} = 3.61
$$
$$
\begin{align}
P(|W| < 2.9) &= 1 - P(|W - 0| \geq 2.9)
\end{align}
$$
$$
\begin{align}
P(|W - 0| \geq 2.9) &\leq \frac{3.61}{8.41} \\
P(|W| \geq 2.9) &\leq 0.4292509 \\
\end{align}
$$
Quindi:
$$
\begin{align}
P(|W| \geq 2.9) &\leq 0.4292509 \\
1-P(|W|<2.9) & \leq 0.4292509 \\
-P(|W|<2.9) & \leq -0.5707491 \\
P(|W|<2.9) & \geq 0.5707491
\end{align}
$$
### Q4
Il valore reale si può ottenere facilmente in R nel seguemente modo:
```R
pnorm(2.9, 0, 1.9) - pnorm(-2.9, 0, 1.9)
```
$$
P(|W|<2.9) = 0.8730688
$$
$$
|​0.8730688−0.5707491| = 0.3023197
$$
### Q1
Ci viene chiesto di calcolare:
$$
\begin{align}
B(T_{1}, w) &= \mathbb{E}(T_{1}) - w \\
B(T_{2}, w) &= \mathbb{E}(T_{2}) - w 
\end{align}
$$
$$
\begin{align}
\mathbb{E}\left( \frac{9X_{1} + 8X_{2}+4X_{3}}{21} \right) -w & = \frac{9\mathbb{E}(X_{1}) + 8\mathbb{E}(X_{2}) + 4\mathbb{E}(X_{3})}{21} - w \\
 & = \frac{21w}{21} - w  \\
& = w - w  \\
 & = 0
\end{align}
$$
Allo stesso modo:
$$
\begin{align}
\mathbb{E}\left( \frac{9X_{1}+4X_{3}}{13} \right) - w &=0
\end{align}
$$
Dunque entrambi gli stimatore non sono distorti.

### Q2
Calcoliamo ora le varianze:
$$
\begin{align}
Var(T_{1}) = Var\left( \frac{9X_{1}+8X_{2}+4X_{3}}{21} \right) &= \frac{81w^{2} + 64w^{2} + 16w^{2}}{21^{2}} \\
 & = 0.3650794w^{2} \\
 & = 0.8771033
\end{align}
$$
Allo stesso modo:
$$
\begin{align}
Var(T_{2}) = Var\left( \frac{9X_{1} + 4X_{3}}{13} \right) &= \frac{81w^{2} + 16w^{2}}{13^{2}} \\
 & = 0.5739645w^{2} \\
 & = 1.37895
\end{align}
$$
### Q3
Infine calcolare l'errore quadratico medio è facile:
$$
\begin{align}
MQE(T_{1})=  Var(T_{1}) + B(T_{1}, w)^{2} = 0.8771033 \\ 
MQE(T_{2})=  Var(T_{2}) + B(T_{2}, w)^{2} = 1.37895
\end{align}
$$
### Q1
Ci viene detto che $X \sim Bin(m=14, \theta )$.
$$
\mathbb{E}(X) = m\theta
$$
$$
\hat{\theta} = \frac{1}{nm} \sum_{i=1}^{n} X_{i}  = \frac{\bar{X}_{n}}{m}
$$
$$
\hat{\theta} = 0.6208791
$$
### Q2
$$
\begin{align}
f_{X_{1}, \dots, X_{n}}(x_{1}, \dots,x_{n}) &= \prod_{i=1}^{n} f_{X_{i}}(x_{i}) \\
 & = \prod_{i=1}^{n} \left( \binom{m}{x_{i}} \theta^{x_{i}}(1-\theta)^{m-x_{i}} \right) \\
 & = \prod_{i=1}^{n} \binom{m}{x_{i}} \theta^{\sum x_{i}} (1-\theta)^{\left( nm- \sum x_{i} \right)} \\
\end{align}
$$
Passiamo alla log-verosimiglianza:
$$
\begin{align}
\log\left(\prod_{i=1}^{n} \binom{m}{x_{i}} \right) + \left( \sum_{i=1}^{n} x_{i} \right) \log(\theta) + \left( nm - \sum_{i=1}^{n} x_{i} \right) \log(1-\theta)
\end{align}
$$
Ora deriviamo secondo $\theta$:
$$
\begin{align}
\frac{d}{d\theta}\left(\log\left(\prod_{i=1}^{n} \binom{m}{x_{i}} \right) + \left( \sum_{i=1}^{n} x_{i} \right) \log(\theta) + \left( nm - \sum_{i=1}^{n} x_{i} \right) \log(1-\theta)
  \right) &=  \frac{n\bar{x}_{n}}{\theta} - \frac{n(m-\bar{x}_{n})}{1-\theta} \\
 & = \frac{n\bar{x}_{n}(1-\theta) - n(m-\bar{x}_{n})\theta}{\theta(1-\theta)} \\ \
 & = 0
\end{align}
$$
Ma allora:
$$
\begin{align}
n\bar{x}_{n} - n\bar{x}_{n}\theta - n\theta m +n\bar{x}_{n}\theta &= 0 \\
\bar{x}_{n} &= \theta m \\
\hat{\theta} &= \frac{\bar{x}_{n}}{m}
\end{align}
$$
### Q3
Calcoliamo la varianza dello stimatore trovato:
$$
\begin{align}
Var(\hat{\theta}) & = Var\left( \frac{\bar{X}_{n}}{m} \right) \\
 & = \frac{1}{m^{2}} Var(\bar{X}_{n}) \\
 & = \frac{1}{m^{2}} \frac{m\theta(1-\theta)}{n} \\
 & = \frac{\theta(1-\theta)}{mn}
\end{align}
$$
L'intervallo di confidenza lo si ottiene nel seguente modo:
$$
\begin{align}
P\left( z_{\frac{\alpha}{2}} \leq \frac{\hat{\theta}-\theta}{\sqrt{\theta(1-\theta) }}\sqrt{ mn } \leq z_{1-\frac{\alpha}{2}} \right) &=  1-\alpha
\end{align}
$$
Utilizzando la tecnica di Wald otteniamo:
$$
\begin{align}
P\left( z_{\frac{\alpha}{2}} \leq \frac{\hat{\theta}-\theta}{\sqrt{  \hat{\theta}(1-\hat{\theta}) }}\sqrt{ mn } \leq z_{1-\frac{\alpha}{2}} \right) &=  1-\alpha \\
P\left( z_{\frac{\alpha}{2}}\sqrt{ \hat{\theta}(1-\hat{\theta}) } \leq (\hat{\theta} - \theta)\sqrt{ mn } \leq z_{1-\frac{\alpha}{2}}\sqrt{ \hat{\theta}(1-\hat{\theta}) } \right) & = 1-\alpha \\
P\left( \frac{z_{\frac{\alpha}{2}}\sqrt{\hat{\theta}(1-\hat{\theta}) }}{\sqrt{ mn }} - \hat{ \theta} \leq - \theta \leq \frac{z_{1-\frac{\alpha}{2}}\sqrt{ \hat{\theta}(1-\hat{\theta}) }}{\sqrt{ mn }} -\hat{\theta} \right) & = 1-\alpha \\
P\left( \hat{\theta}-z_{1-\frac{\alpha}{2}}\sqrt{ \frac{\hat{\theta}(1-\hat{\theta})}{mn}} \leq \theta \leq \hat{\theta}-z_{\frac{\alpha}{2}}\sqrt{ \frac{\hat{\theta}(1-\hat{\theta})}{mn}} \right)  & = 1-\alpha
\end{align}
$$
Ora utilizziamo i dati:
$$
\begin{align}
\hat{\theta} =  \frac{\bar{x}_{n}}{m} &= 0.6208791 \\
1-\alpha &= 0.99 \\
z_{\frac{\alpha}{2}} = -z_{1-\frac{\alpha}{2}} &= -2.575829 \\
m  &= 14
\end{align}
$$
$$
P(0.5282444 \leq \theta \leq 0.7135138) = 0.99
$$
### Q1
$$
\begin{align}
f_{X_{1},\dots,X_{n}}(x_{1}, \dots,x_{n}) &= \prod_{i=1}^{n} f_{Xi}(x_{i}) \\
 & = \prod_{i=1}^{n} \left( \theta e^{-\theta x_{i}} \right) \\
 & = \theta^{n} e^{\sum (-\theta x_{i})}
\end{align}
$$
Consideriamo ora la log-verosimiglianza:
$$
\begin{align}
\log \left( \theta^{n} e^{\sum (-\theta x_{i})} \right) & = \log(\theta^{n}) + \log\left( e^{\sum(-\theta x_{i})} \right) \\
 & = n\log \theta -\theta \sum_{i=1}^{n} x_{i}
\end{align}
$$
Ora poniamo la derivata secondo $\theta$ a $0$:
$$
\begin{align}
\frac{d}{d\theta} \left( n\log \theta -\theta \sum_{i=1}^{n} x_{i} \right)  & = \frac{n}{\theta} -\sum_{i=1}^{n} x_{i} \\
 & = \frac{n}{\theta} - n\bar{x}_{n} \\
 & = \frac{n-n\theta \bar{x}_{n}}{\theta}  \\
 & = \frac{n(1 - \theta \bar{x}_{n})}{\theta} \\
 & = 0
\end{align}
$$
Dunque:
Sapendo che $n > 0$.
$$
\begin{align}
1 - \hat{\theta} \bar{x}_{n} &= 0 \\
1 &= \hat{\theta} \bar{x}_{n} \\
\hat{\theta}  & = \frac{1}{\bar{x}_{n}}
\end{align}
$$
Dunque la nostra stima è:
$$
\hat{\theta} = \frac{1}{1.725333333} = 0.5795981453
$$
### Q2
Dalla teoria sappiamo che:
$$
Var(X) = \frac{1}{\theta^{2}}
$$
se $X \sim Exp(\theta)$.
Ma allora possiamo inserire lo stimatore e ottenere:
$$
\widehat{Var}(X) = \frac{1}{\hat{\theta}^{2}} = \bar{x}_{n}^{2} = 2.976775 
$$
### Q3
Dunque per il teorema centrale del limite:
$$
\begin{align}
P\left( z_{\frac{\alpha}{2}} \leq \left( \bar{X}_{n} - \frac{1}{\theta} \right)\theta\sqrt{ n } \leq z_{1-\frac{\alpha}{2}} \right) & = 1-\alpha \\
P\left( z_{\frac{\alpha}{2}} \leq \sqrt{ n }(\bar{X}_{n}\theta - 1) \leq z_{1-\frac{\alpha}{2}} \right) &= 1-\alpha \\
P\left( \frac{\frac{z_{\frac{\alpha}{2}}}{\sqrt{ n }} + 1}{\bar{X}_{n}} \leq \theta \leq \frac{\frac{z_{1-\frac{\alpha}{2}}}{\sqrt{ n }}+1}{\bar{X}_{n}}\right) &= 1-\alpha
\end{align}
$$
## Es 05/29
### Q1
$$
\begin{align}
1 =\sum_{i=1}^{+\infty} \lim_{ a \to (i-1)^{+} } \int_{a}^{i} \int_{0}^{T} \left( \frac{1}{2} \right)^{i} dy dx &= \sum_{i=1}^{+\infty}  \lim_{ a \to +(i-1)^{+}} \int_{a}^{i}  \left( \frac{1}{2} \right)^{i}Tdx \\
 & = \sum_{i=1}^{+\infty} \lim_{ a \to (i-1)^{+} } \left( \left( \frac{1}{2} \right)^{i}Ti - \left( \frac{1}{2} \right)^{i}Ta \right)  \\
 & = \sum_{i=1}^{+\infty} \left( \frac{1}{2} \right)^{i}T  \left( i - i + 1 \right)  \\
 & = T \sum_{i=1}^{+\infty} \left( \frac{1}{2} \right)^{i} \\
 & = T \left( \frac{1}{1- \frac{1}{2}} -1\right)  \\
 & = T
\end{align}
$$
Dunque perché $f(x,y)$ sia una funzione di densità deve essere che $T = 1$.
### Q2
$$
\begin{align}
f(y) &= \int_{0}^{+\infty} f(x,y)dx \\
 & = \sum_{i=1}^{+\infty} \int_{i-1}^{i} \left( \frac{1}{2} \right)^{i} dx \\
 & = \sum_{i=1}^{+\infty} \left( \frac{1}{2} \right)^{i} \\
 & = \left( \frac{1}{1-\frac{1}{2}} -1 \right)  \\
 & = 2 - 1 \\
 & = 1
\end{align}
$$
Ammesso che $y \in [0,1]$
### Q3
Le due variabili sono indipendenti se:
$$
f(x,y) = f(x)f(y) \implies f(x,y) = f(x)
$$
$$
\begin{align}
f(x) &= \int_{0}^{1} f(x,y) dy \\
 & = \int_{0}^{1} \left( \frac{1}{2} \right)^{i} dy \\
 & = \left( \frac{1}{2} \right)^{i}
\end{align}
$$
Ma allora $f(x,y) = f(x) \implies X, Y$ indipendenti.
### Q4
$$
\begin{align}
\mathbb{E}(Y|X=3.9) & = \int_{0}^{1} yf(y|X=3.9)dy \\
 & = \int_{0}^{1} y f(y) dy \\
 & = \int_{0}^{1} ydy \\
 & = \frac{1}{2}
\end{align}
$$
## Ultimo es
### Q1
$$
\begin{align}
\mathbb{E}\left( \alpha_{1} \cdot \frac{1}{10} \sum_{i=1}^{10}  X_{i} \right) &= \theta \\
\frac{\alpha_{1}}{10} \cdot \sum_{i=1}^{10} \mathbb{E}(X_{i}) &= \theta \\
\alpha_{1} \frac{\theta}{2} &= \theta \\
\alpha_{1} &= 2
\end{align}
$$
Dunque la riposta è $\alpha_{1}=2$.

### Q2
$$
\begin{align}
\mathbb{E}((\theta_{1} - \theta)^{2}) &= \frac{1}{k_{1}}\theta^{2}  \\
Var(\theta_{1})  & = \frac{1}{k_{1}} \theta^{2} \\
Var\left( \frac{\alpha_{1}}{10} \sum_{i=1}^{10} X_{i} \right)  & = \frac{1}{k_{1}} \theta^{2} \\
\frac{\alpha_{1}^{2}}{100} \sum_{i=1}^{10} \frac{\theta^{2}}{12}  & = \frac{1}{k_{1}} \theta^{2} \\
\frac{\theta^{2}}{30} &= \frac{1}{k_{1}}\theta^{2} \\
k_{1} & = 30
\end{align}
$$
### Q3
$$
\begin{align}
F_{Y}(y)&=\prod_{i=1}^{10} F_{X_{i}}(y) \\
 & = \prod_{i=1}^{10} \frac{y}{\theta} \\
 & = \left( \frac{y}{\theta} \right)^{10}
\end{align}
$$
Ma allora:
$$
\begin{align}
f_{Y}(y) & = \frac{d}{dy} F_{Y}(y) \\
 & = \frac{1}{\theta^{10}} \frac{d}{dy}y^{10} \\
 & = \frac{10y^{9}}{\theta^{10}}
\end{align}
$$
Tornando alla richiesta:
$$
\begin{align}
\alpha_{2} \mathbb{E}(Y) &= \theta \\
\alpha_{2} \int_{0}^{\theta} yf_{Y}(y) dy & = \theta \\
\alpha_{2} \left(  \int_{0}^{\theta} \frac{10y^{10}}{\theta^{10}} dy \right)  & = \theta \\
\alpha_{2} \left( \left[ \frac{10y^{11}}{11\theta^{10}} \right] ^{\theta}_{0} \right) &= \theta \\
\alpha_{2}  & = \frac{11}{10}
\end{align}
$$
### Q4
$$
\begin{align}
\mathbb{E}((\theta_{2}-\theta)^{2}) & = \frac{1}{k_{2}} \theta^{2} \\
\mathbb{E}(\theta_{2}^{2}) + \theta^{2}-2\theta \mathbb{E}(\theta_{2})  & = \frac{1}{k_{2}}\theta^{2} \\
\mathbb{E}(\theta^{2}_{2}) - \theta^{2} & = \frac{1}{k_{2}} \theta^{2} \\
\mathbb{E}((\alpha_{2}Y)^{2}) - \theta^{2} & = \frac{1}{k_{2}}\theta^{2} \\
\alpha_{2}^{2} \mathbb{E}(Y^{2}) - \theta^{2} &= \frac{1}{k_{2}}\theta^{2} \\
\alpha^{2}_{2} \frac{10}{\theta^{10}} \left( \int_{0}^{\theta} y^{11} dy \right)  - \theta^{2} & =\frac{1}{k_{2}}\theta^{2} \\
\alpha^{2}_{2} \frac{10}{\theta^{10}} \left( \frac{\theta^{12}}{12} \right) - \theta^{2}  & = \frac{1}{k_{2}} \theta^{2} \\
\theta^{2}\left( \alpha^{2}_{2} \frac{5}{6} -1 \right) &=\frac{1}{k_{2}}\theta^{2} \\
k_{2} &= 120
\end{align}
$$

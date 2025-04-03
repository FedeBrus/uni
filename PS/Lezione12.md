### Definizione variabile aleatoria geometrica
$$
p_{X}(x) = \begin{cases}
p(1-p)^{x-1} & x \in \mathbb{N} \setminus \{ 0 \} \\
0 & \text{altrimenti}
\end{cases}
$$
Se la nostra variabile indica il numero di tentativi prima di aver avuto successo, si ha:
$$
p_{Y}(y) = \begin{cases}
p(1-p)^{y}  & y \in \mathbb{N} \\
0 & \text{altrimenti}
\end{cases}
$$
Quindi:
$$
\begin{align}
F_{X}(x) &= P(X \leq x)  \\
 & = \sum_{t=1}^{[x]}  P(x = t)  \\
 & = p\sum_{t=1}^{[x]}  (1-p)^{t - 1} \\
 & = p \sum_{j=0}^{[x]-1}  (1-p)^{j} \\
 & = p \frac{1 - (1-p)^{[x]}}{1 - (1-p)} = 1 - (1-p)^{[x]}
\end{align}
$$
Con $[x]$ parte intera di $x$.
Dunque:
$$
F_{X}(x) = \begin{cases}
0 & x < 1 \\
1 - (1-p)^{[x]}  & x \geq 1
\end{cases}
$$
#### Esempio
Supponiamo di avere un lotto di $N$ lampadine di cui $M$ sono difettose, $0<M<N$. Estraendo con reimmissione, qual è la probabilità che si estragga una lampadina difettosa per la prima volta alla $x$-esima estrazione.
$$
X \sim Geom\left( \frac{M}{N} \right)
$$
Abbiamo già datto $y$ estrazione ma non abbiamo ancora estratto una lampadina difettosa.
Qual è la probabilità di dover fare altre $r>0$  estrazioni per estrarre una lampadina difettosa.
$$
P(X = y + r | X > y ) = \frac{P(\{ X = y + r \} \cap \{ X > y \})}{P(X > y)}
$$
Ci serve:
$$
\begin{align}
P(X>y) &= 1-P(X \leq y)  \\
 & = 1-F_{X}(y)  \\
 & = 1 - (1-(1-p)^{y}) \\
 & = (1-p)^{y} >0
\end{align}
$$
Notiamo che $\{ X = y + r \} \subseteq \{ X > y \}$. Ma allora $\{ X = y + r \} \cap \{ X > y \} = \{ X = y + r \}$.
$$
P(X =  y + r) = p(1-p)^{y + r - 1}
$$
$$
P(X = y + r | X > y ) = \frac{P(\{ X = y + r \} \cap \{ X > y \})}{P(X > y)} = \frac{p(1-p)^{y+r-1}}{(1-p)^{y}} = p(1-p)^{r-1} = P(X = r) = p(r)
$$
Questo è un esempio di variabile aleatoria senza memoria. L'avvento di un tot di esiti sfavorevoli non influenza la probabilità di successi futuri.
### Definizione di variabile aleatoria binomiale negativa
Indica quante prove devo fare per $k$ successi.
### Teorema
Siano $X_{1},X_{2},X_{3}, \dots X_{n} \sim Ber(p)$, allora $X = \sum_{i=1}^{n} X_{i} \sim Bin(n, p)$.

### Definizione variabile aleatoria
La indichiamo con $Unif[a,b]$ con $a < b$.
$$
f(x) = \begin{cases}
\frac{1}{b-a}  & x \in [a, b] \\
0  & \text{altrimenti}
\end{cases} \qquad
F_{X}(x) = \int_{-\infty}^{x} \frac{1}{b - a} \mathbb{1}(t \in [a,b]) dt
$$
Se $x < a$, allora $F_{X}(x) = \int_{-\infty}^{x} 0dt = 0$.
Se $a \leq x < b$, allora $F_{X}(x) = \int_{-\infty}^{a}0dt+\int_{a}^{x} \frac{1}{b - a}dt = 0+ \frac{x-a}{b-a} = \frac{x-a}{b-a}$.
Se $x \geq b$, allora $F_{X}(x) = \int_{-\infty}^{a} 0 dt + \int_{b}^{a} \frac{1}{b-a}dt + \int_{b}^{b}0dt = 0 + 1 + 0 = 1$.

#### Esempio
Sia $X \sim Unif[0, 1]$ e sia $Y(x) = x^{2}$. Allora:
$$
\begin{align}
P_{Y} (a < Y \leq b) &= P_{X} (\{ x: a < Y(x) \leq b \})  \\
 & = P_{X}(\{ x : a < x^{2} \leq b \}) \\
 & = P_{X}(\{ x : \sqrt{ a } < x \leq \sqrt{ b } \}) \\
 & = P_{X}(X \in (\sqrt{ a }, \sqrt{ b }]) \\
 & = F_{X}(\sqrt{ b }) - F_{X}(\sqrt{ a }) \\
 & = \sqrt{ b } - \sqrt{ a } \\
 & = \int_{a}^{b} \frac{1}{2\sqrt{ x }} dx
\end{align}
$$
con $0 \leq a < b \leq1$.
Quindi:
$$
f_{Y}(y) = \begin{cases}
\frac{1}{2\sqrt{ x }}  & 0\leq x\leq 1 \\
0  & \text{altrimenti}
\end{cases}
$$
per casa calcolare $F_{Y}(y)$
### Definizione di variabile aleatoria normale o di Gauss

### Definizione di variabile aleatoria normale standard (o standardizzata)
$$
Z \sim N(0,1)
$$
$$
f_{Z}(z) = \frac{e^{-\frac{1}{2}z^{2}}}{\sqrt{ 2\pi }}\qquad z \in \mathbb{R}
$$
Prendendo una $X_{1} \sim N(1,1)$, allora la sua densità è:
$$
f_{X_{1}}(x) = \frac{1}{\sqrt{ 2\pi }} \exp \left( -\frac{1}{2}(x-1)^{2} \right) 
$$
Il primo parametro è detto parametro di posizione perché mi dice rispetto a quale parametro il grafico della mia funzione è simmetrico.

Prendendo una $X_{2} \sim N(0, 2)$, allora la sua densità è:
$$
f_{X_{2}}(x) = \frac{1}{\sqrt{ 2\pi \cdot  2}}\exp \left( -\frac{1}{2} \frac{(x-0)^{2}}{2}\right) 
$$
Il secondo parametro controlla la scala. Più grande è questo parametro più la funzione appare piatta, mentre più è piccola più la densità è concentrata in un punto.

In generale:
$$
X \sim N(\mu, \sigma^{2})
$$
$$
f_{X}(x) = \frac{1}{\sqrt{ 2\pi \sigma^{2} }} \exp\left( -\frac{1}{2} \frac{(x-\mu)^{2}}{\sigma^{2}} \right)
$$
In R, questa variabile viene parametrizzata tramite $(\mu,\sigma)$, non $(\mu, \sigma^{2})$. Si indica con:
```r
dnorm(x, mu, sigma);
dnorm(x, mu, sqrt(sigma^2))
```
Come è fatta la funzione di distribuzione.
Per la funzione di distribuzione in R si usa:
```r
pnorm(x, mu, sigma)
```
### Definizione di variabile aleatoria esponenziale
$$
X \sim Exp(\lambda)
$$
La sua funzione di densità è:
$$
f_{X}(x) = \lambda e^{-\lambda x} \mathbb{1}(x > 0) = \begin{cases}
\lambda e^{-\lambda x}  & x \geq 0 \\
0 & \text{altrimenti}
\end{cases}
$$
La sua funzione di distribuzione è:
$$
F_{X}(x) = \begin{cases}
\int_{0}^{x}\lambda e^{-\lambda t} dt = 1 - e^{-\lambda x}  & x \geq 0 \\
0  & \text{altrimenti}
\end{cases}
$$
Anche questa è una variabile senza memoria. (Proprietà di assenza di memoria).
Consideriamo $X \sim Exp(\lambda)$ e $x, y > 0$. Allora:
$$
\begin{align}
P(y < X \leq y + x | X > y) &= \frac{P(\{ y < X \leq y + x \} \cap \{ X > y \})}{1 - P(X\leq y)}  \\
 & = \frac{P(y < X \leq y + x)}{1 - P(X \leq y)} \\
 & =\frac{F_{X}(y+x) - F_{X}(y)}{1 - F_{X}(y)} \\
 & = \frac{1 - e^{-\lambda(y+x)} - (1 - e^{-\lambda y})}{1 - (1-e^{-\lambda y})}  \\
 & = \frac{e^{-\lambda y}-e^{-\lambda y}e^{-\lambda x}}{e^{-\lambda y}}  \\
 & = (1-e^{-\lambda x}) \\
 & = F_{X}(x)  \\
 & = P(X \leq x)
\end{align}
$$
Questa ci dice qual è la probabilità di avere un successo in un tempo variabile.

Consideriamo $Y: (\mathbb{R}, \mathcal{B}(\mathbb{R}), P_{X}) \rightarrow (\mathbb{R}, \mathcal{B}(\mathbb{R}), P_{Y})$.
Se $Y(x)$ è una funzione strettamente monotona e derivabile nell'intervallo di interesse $(a, b)$, allora la variabile aleatoria $Y$ è dotata di densità:
$$
\alpha = min (Y(a), Y(b)) \qquad \beta = max(Y(a), Y(b))
$$
$$
f_{Y}(y) = \begin{cases}
f_{x}(Y^{-1}(y)) \cdot | \frac{\partial}{\partial y} Y^{-1}(y) |  & \alpha < y < \beta \\
0 & \text{altrimenti} 
\end{cases}
$$
$a$ e $b$ sono gli estremi del supporto di $X$.
#### Esempio
Sia $X \sim Exp(\lambda)$ e $Y(x) = e^{x} = \exp(x)$.
Sia $a = 0$, $b = +\infty$.
Allora $Y(a) = Y(0) = 1$ e $Y(b) = \lim_{ x \to +\infty } Y(x) = +\infty$.
Dunque $\alpha = 1$ e $\beta = +\infty$.
Prendiamo $y = e^{x} \Longleftrightarrow x = \log y$, perciò $Y^{-1}(y)= \log y$.
$\frac{\partial}{\partial y} Y^{-1}(y) = \frac{\partial}{\partial y} \log y = \frac{1}{y}$.
Infine:
$$
f_{Y}(y) = f_{X} \left( Y^{-1}(y)\left| \frac{1}{y}  \right|  \right)
$$
Per casa:
1) $f_{Y}(y) \geq 0$
2) $\int_{1}^{+\infty} f_{Y}(y)dy = 1$

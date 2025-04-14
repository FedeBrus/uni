### Definizione speranza matematica (valore atteso)
Data una variabile aleatoria $X$ definiamo il suo valore atteso (se esiste) nel seguente modo:
$$
\mathbb{E}(X) = \begin{cases}
\sum_{x \in R_{X}}  xp_{X}(x)  & \text{se } X \text{ discreta} \\
\int_{-\infty}^{+\infty} xf_{X}(x)dx  &  \text{ se } X \text{ assolutamente continua}
\end{cases}
$$
In altri simboli:
$$
\mathbb(x) = \int_{-\infty}^{+\infty}  xdF_{X}(x)
$$
Il valore atteso esiste se:
$$
\sum_{x \in R_{X}} |x| p_{X}(x) < +\infty
$$
se $X$ è discreta.
$$
\int_{-\infty}^{+\infty}|x|f_{X}(x) dx < +\infty
$$
se $X$ è assolutamente continua.
#### Esempio
Sia $X \sim Ber(p)$ con $0 \leq p \leq 1$. Il suo supporto è $R_{X} = \{ 0, 1 \}$.
$$
p_{X}(x) = \begin{cases}
1 - p  & x = 0 \\
p & x = 1
\end{cases}
$$
$$
\mathbb{E}(X) = \sum_{x \in R_{X}} x p_{X}(x) = 0(1-p)+1p = p
$$
#### Esempio
Sia $X$ una variabile aleatoria discreta e sia $R_{X} = \{ x_{1},x_{2},\dots,x_{n} \}$. Chiamiamo $p_{i} = p_{X}(x_{i})$ con $i = 1, \dots, n$.
$$
\begin{align}
\sum_{i=1}^{n} (x_{i} - z)p_{i} &= 0 \\
 \sum_{i=1}^{n} x_{i}p_{i} - z \sum_{i=1}^{n} p_{i} &= 0 \\
 \sum_{i=1}^{n} x_{i}p_{i} - z  &= 0 \\
\mathbb{E}(x) &=  z
\end{align}
$$
#### Esempio
Sia $X \sim Bin(n, p)$ con supporto $\{ 0,1,2, \dots, n \}$.
$$
\begin{align}
\mathbb{E}(X) &= \sum_{x \in R_{X}} xp_{X}(x) = \sum_{x=0}^{n} x p_{X}(x) = \sum_{x=0}^{n}  x \binom{n}{x}p^{x}(1-p)^{n-x} \\
 & =\sum_{x=1}^{n}  x \binom{n}{x} p^{x} (1-p) ^{n-x}  \\
\end{align}
$$
Sia ora $s = x - 1 \Longleftrightarrow x = s+1$. Allora $x = 1 \Longleftrightarrow s = 0$ e $x = n \Longleftrightarrow s = n - 1$:
$$
\begin{align}
\mathbb{E}(X)  &= \sum_{s=0}^{n-1}  (s+1) \frac{n(n - 1)!}{(s+1)s!(n-s-1)!} p^{s+1}(1-p)^{n-s-1} \\
 & = np \sum_{s=0}^{n-1} \binom{n - 1}{s}p^{s}(1-p)^{n-1-s} = np
\end{align}
$$
La sommatoria vale $1$ perchè è la somma delle probabilità di una variabile aleatoria $Bin(n - 1, p)$.

#### Esempio
Sia $X \sim Geom(p)$ con supporto $R_{X} = \{ 1, 2, 3, \dots \}$.
$$
\begin{align}
\mathbb{E}(X) &= \sum_{x=1}^{+\infty}  x p (1-p)^{x - 1} \\
 & = p \sum_{x=1}^{+\infty} x ( 1-p)^{x-1} \\
 & = -p \sum_{x=1}^{+\infty} \frac{\partial}{\partial p}(1-p)^{x} \\
 & = -p \frac{\partial}{\partial p}\sum_{x=1}^{+\infty} (1-p)^{x} \\
 & = -p \frac{\partial}{\partial p} \left( \frac{1}{1-(1-p)} - 1 \right)  \\
 & = -p \frac{\partial}{\partial p} \left( \frac{1-p}{p} \right)  \\
 & = -p \left( \frac{-p-1+p}{p^{2}} \right)   \\
 & = \frac{1}{p}
\end{align}
$$
#### Esempio
Sia $X \sim N(\mu, \sigma^{2})$.
Dunque:
$$
f_{X}(x) = \frac{1}{\sqrt{ 2\pi \sigma^{2}}} \exp \left( - \frac{1}{2} \frac{(x-\mu)^{2}}{\sigma^{2}} \right) 
$$
$$
\begin{align}
\mathbb{E}(X) &= \int_{-\infty}^{+\infty} xf_{X}(x)dx  \\
&= \int_{-\infty}^{+\infty} x\frac{1}{\sqrt{ 2\pi \sigma^{2}}} \exp \left( - \frac{1}{2} \frac{(x-\mu)^{2}}{\sigma^{2}} \right) dx \\
\end{align}
$$
Sia $x = \sigma z + \mu \Longleftrightarrow z=\frac{x-\mu}{\sigma}$. Inoltre $dx = \sigma dz$
Allora:
$$
\begin{align}
\mathbb{E}(X) &= \int_{-\infty}^{+\infty} (\sigma z+\mu) \frac{1}{\sqrt{ 2\pi \sigma^{2} }} \exp \left(  - \frac{1}{2} z^{2} \right) \sigma dz \\
 & = \mu \int_{-\infty}^{+\infty} \frac{1}{\sqrt{ 2\pi }} \exp \left( -\frac{1}{2}z^{2} \right) dz + \sigma \int_{-\infty}^{+\infty} z \frac{1}{\sqrt{ 2\pi }} \exp \left( -\frac{1}{2} z^{2} \right)  dz  \\
 & = \mu
\end{align}
$$
Il primo integrale vale $1$ perchè è integrale di una densità, mentre il secondo vale $0$ perchè è integrale da meno a più infinito di una funzione dispari che è prodotto di una pari e una dispari.
::::per casa
Sia $X \sim Exp(\lambda)$ e mostrare che $\mathbb{E}(x) = \frac{1}{\lambda}$. Suggerimento: integrale per parti.
### Proprietà del valore atteso
Consideriamo una variabile aleatoria $X$ discreta e due costanti $a, b$ e scegliamo $a \neq 0$.
$$
Y = aX + b
$$
Allora:
$$
P_{Y}(Y = y) = P_{X}\left( X = \frac{y-b}{a} \right)
$$
$$
\begin{align}
\mathbb{E}(Y) &= \sum_{y \in R_{Y}} yp_{Y}(y) = \sum_{x \in R_{X}} (ax + b)p_{X}(x) \\
 & = \sum_{x \in R_{X}} axp_{X}(x) + \sum_{x \in R_{X}}bp_{X}(x) \\
 & = a \sum_{x \in R_{X}} xp_{X}(x) + b \\
 & = a \mathbb{E}(x) + b
\end{align}
$$
Dunque:
$$
\mathbb{E}(aX + b) = a \mathbb{E}(X) + b
$$
#### Esempio
Sia $X \sim Bin(n, p)$ e di trasformarla linearmente con $Y = aX + b$. Allora:
$$
\mathbb{E}(Y) = a \mathbb{E}(X) + b = anp+b
$$
:::: per casa
Calcolare $p_{Y}(y)$ e $R_{Y}$.

Se $X$ è continua allora la $Y$ è anch'essa continua.
$$
\mathbb{E}(Y) = \int_{-\infty}^{+\infty} yf_{Y}(y)dy = \int _{-\infty}^{+\infty} (ax+b)f_{X}(x) dx  = a\mathbb{E}(X) + b
$$
#### Esempio
Sia $X \sim Exp(\lambda)$, sia $Y = aX + b$, allora $\mathbb{E}(Y) = a \frac{1}{\lambda} + b$.
:::: per casa
Calcolare $f_{Y}(y)$ e $R_{Y}$

### Teorema
Data una variabile aleatoria $X$ e $Y = aX + b$, allora:
$$
\mathbb{E}(Y) = \mathbb{E}(aX + b) = a\mathbb{E}(X) + b
$$
### Teorema
Data una variabile aleatoria $X$ e una trasformazione di variabile aleatoria $Y = g(x)$ dove $g : \mathbb{R} \rightarrow \mathbb{R}$ allora, se esiste $\mathbb{E}(Y)$ esso può essere calcolato come:
$$
\mathbb{E}(Y)=  \mathbb{E}(g(X)) = \begin{cases}
\sum_{x \in R_{X}} g(x) p_{X}(x) & \text{se } X \text{ discreta} \\
\int_{-\infty}^{+\infty} g(x) f_{X}(x) dx  &  \text{se } X \text{ continua}
\end{cases}
$$
### Definizione momenti non centrati
Consideriamo $X$ e definiamo il momento non centrato di ordine $r$ con $r \in \mathbb{Z}, r \geq 0$ il valore atteso della variabile aleatoria $Y = g(X)$ con $y = g(x) = x^{r}$.
$$
\begin{align}
\mu_{0} &= \mathbb{E}(X^{0}) = 1 \\
\mu_{1} &= \mathbb{E}(X^{1}) = \mathbb{E}(X) \\
\mu_{2} &= \mathbb{E}(X^{2}) = \begin{cases}
\sum_{x \in R_{X}} x^{2}p_{X}(x)  & \text{se } X \text{ discreta} \\
\int_{-\infty}^{+\infty} x^{2} f_{X}(x) dx  &  \text{se } X \text{ continua}
\end{cases} \\
 & \vdots
\end{align}
$$
Nota: "Quasi tutte" le variabili aleatorie possono essere caraterrizate dai momenti non centrati.

### Definizione momenti centrati
L'unica cosa che cambia è la trasformazione $Y=g(X)$ con $y = g(x) = (x-\mu_{1})^{r} = (x-\mathbb{E}(X))^{r}$.
In questo modo:
$$
\begin{align}
\bar{\mu}_{1} &=  \mathbb{E}((X - \mathbb{E}(X))^{1}) = \mathbb{E}(X) - \mathbb{E}(X) = 0 \\
\bar{\mu}_{2} &=  \mathbb{E}((X - \mathbb{E}(X))^{2}) = Var(X)
\end{align}
$$

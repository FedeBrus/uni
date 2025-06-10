### Definizione Variabili aleatorie doppie o bivariate
Sia $\omega \in \Omega$. Sia $(\Omega, \mathcal{A}, P)$ uno spazio probabilizzato.
Il nostro spazio di arrivo sarà $(\mathbb{R}^{2}, \mathcal{B}(\mathbb{R}^{2}), P_{Z})$.
Date $X, Y$ variabili aleatorie, possiamo definire $Z(\omega) = (X(\omega), Y(\omega))$ variabile aleatoria doppia.

In generale considerando $(x_{1},x_{2}]$ e $(y_{1}, y_{2}]$, si può costruire un rettangolo (prodotto cartesiano dei due intervalli).
Adesso ci si può chiedere quale sia l'antimmagine di questo rettangolo e la sua antimmagine ci dirà quale sarà la probabilità di questo rettangolo. Avremo che:
$$
P_{Z} (\{x_{1}<X\leq x_{2} \} \cap \{ y_{1} < Y \leq y_{2} \}) = P(\{ \omega \in \Omega: x_{1} < X(\omega) \leq x_{2} \cap y_{1} < Y(\omega)\leq y_{2} \})
$$
Inoltre:
$$
F_{Z}(z) = F_{X, Y} (x, y) =   P(\{ X \leq x \} \cap \{ Y\leq y \}) = P(\{ \omega \in \Omega: X(\omega) \leq x \} \cap \{ \omega \in \Omega:Y(\omega) \leq y \})
$$
Possiamo riscrivere la probabilità del rettangolo in questa forma:
$$
P_{Z} (\{x_{1}<X\leq x_{2} \} \cap \{ y_{1} < Y \leq y_{2} \}) = F_{X, Y}(x_{2},y_{2}) - F_{X, Y}(x_{2},y_{1}) -F_{X,Y}(x_{1},y_{2}) + F_{X, Y}(x_{1},y_{1})
$$
Supponiamo di avere una variabile aleatoria (assolutamente) continua.
$$
\begin{align}
f_{X, Y}(x, y) \geq 0, \forall(x, y) \in \mathbb{R}^{2} \\
\int_{-\infty}^{+\infty} \int_{-\infty}^{+\infty} f_{X, Y} (x, y) dydx = 1 \\
F_{X, Y}(x, y) = \int_{-\infty}^{x} \int_{-\infty}^{y} f_{X, Y} (u, v) dvdu
\end{align}
$$
Supponiamo di avere una variabile aleatoria discreta.
$$
\begin{align}
p_{X, Y}(x, y) = P_{Z} (X = x, Y = y), \forall (x, y) \in R_{Z} \equiv R_{X, Y}
\end{align}
$$
#### Esempio
Lancio di un dado equilibrato a 6 facce. Definiamo $Z(\omega) = (X(\omega), Y(\omega))$ dove: 
$$
\begin{align}
X(\omega) &= \omega \\
Y(\omega) &= \begin{cases}
0 & \text{numero dispari} \\
1 & \text{numero pari minore di 4} \\
2 & \text{numero pari maggiore o uguale a 4} \\
\end{cases}
\end{align}
$$

|     | $X$ |               |               |               |               |               |               |               |
| --- | --- | ------------- | ------------- | ------------- | ------------- | ------------- | ------------- | ------------- |
| $Y$ |     | $1$           | $2$           | $3$           | $4$           | $5$           | $6$           |               |
|     | $0$ | $\frac{1}{6}$ | $0$           | $\frac{1}{6}$ | $0$           | $\frac{1}{6}$ | $0$           | $\frac{3}{6}$ |
|     | $1$ | $0$           | $\frac{1}{6}$ | $0$           | $0$           | $0$           | $0$           | $\frac{1}{6}$ |
|     | $2$ | $0$           | $0$           | $0$           | $\frac{1}{6}$ | $0$           | $\frac{1}{6}$ | $\frac{2}{6}$ |
|     |     | $\frac{1}{6}$ | $\frac{1}{6}$ | $\frac{1}{6}$ | $\frac{1}{6}$ | $\frac{1}{6}$ | $\frac{1}{6}$ |               |
$$
\begin{align}
p_{X}(x) &= \sum_{y \in R_{Y}} p_{X, Y}(x, y) \\
p_{Y}(y) &= \sum_{x \in R_{X}} p_{X, Y}(x, y) \\
\end{align}
$$
$p_{X, Y}$ è chiamata probabilità congiunta. Viceversa, $p_{X}$ e $p_{Y}$ si chiamano probabilità marginali.

|     | $X$ |               |               |               |               |               |               |               |
| --- | --- | ------------- | ------------- | ------------- | ------------- | ------------- | ------------- | ------------- |
| $Y$ |     | $1$           | $2$           | $3$           | $4$           | $5$           | $6$           |               |
|     | $0$ | $\frac{1}{6}$ | $\frac{1}{6}$ | $\frac{2}{6}$ | $\frac{2}{6}$ | $\frac{3}{6}$ | $\frac{3}{6}$ | $\frac{3}{6}$ |
|     | $1$ | $\frac{1}{6}$ | $\frac{2}{6}$ | $\frac{3}{6}$ | $\frac{3}{6}$ | $\frac{4}{6}$ | $\frac{4}{6}$ | $\frac{4}{6}$ |
|     | $2$ | $\frac{1}{6}$ | $\frac{2}{6}$ | $\frac{3}{6}$ | $\frac{4}{6}$ | $\frac{5}{6}$ | $1$           | $1$           |
|     |     | $\frac{1}{6}$ | $\frac{2}{6}$ | $\frac{3}{6}$ | $\frac{4}{6}$ | $\frac{5}{6}$ | $1$           |               |
Dunque:
$$
F_{X,Y} (x, y) = \sum_{u \leq x} \sum_{v \leq y} p_{X, Y} (u, v)
$$
Supponiamo di avere una variabile aleatoria discreta doppia $(X, Y) \sim p_{X, Y}(x, y)$. $x \in R_{X}, y \in R_{Y}$.
Per ogni $y \in R_{Y}$ definisco una variabile aleatoria $X|Y = y \sim  p_{X|Y}(x | y), \forall x \in R_{X}$.
$$
p_{X|Y}(x | y) = P(A | B) = \frac{P(A \cap B)}{P(B)} = \frac{p_{X, Y}(x, y)}{p_{Y}(y)}
$$
Dove $A = \{ \omega \in \Omega: X (\omega) = x \} = \{ X = x \}$ e $B = \{ \omega \in \Omega : Y(\omega) = y \} = \{ Y = y \}$.

Per ogni $x \in R_{X}$ definisco una variabile aleatoria $Y|X=x\sim p_{Y|X}(y | x), \forall y \in R_{Y}$.
$$
p_{X,Y}(x, y) = p_{Y}(y)p_{X|Y}(x | y) = p_{X}(x)p_{Y|X}(y | x)
$$
Per il teorema di Bayes.

Tornando all'esempio di prima.
Formiamo la tabella per $p_{X|Y}(x | y)$

|     | $X$ |               |     |               |               |               |               |     |
| --- | --- | ------------- | --- | ------------- | ------------- | ------------- | ------------- | --- |
| $Y$ |     | $1$           | $2$ | $3$           | $4$           | $5$           | $6$           |     |
|     | $0$ | $\frac{1}{3}$ | $0$ | $\frac{1}{3}$ | $0$           | $\frac{1}{3}$ | $0$           | $1$ |
|     | $1$ | $0$           | $1$ | $0$           | $0$           | $0$           | $0$           | $1$ |
|     | $2$ | $0$           | $0$ | $0$           | $\frac{1}{2}$ | $0$           | $\frac{1}{2}$ | $1$ |
:::: per casa
Calcolare la tabella di $p_{Y|X}(y | x), \forall x \in R_{X}$.

#### Esempio
Consideriamo:
$$
(X, Y) \sim f_{X, Y}(x, y) = \begin{cases}
\exp(-x -y) & x > 0, y >0 \\
0 & \text{altrimenti}
\end{cases}
$$
$$
\begin{align}
f_{X}(x) &= \int_{-\infty}^{+\infty} f_{X, Y}(x, y) dy  \\
&= \int_{-\infty}^{0} f_{X, Y}(x, y) dy + \int_{0}^{+\infty} f_{X, Y}(x, y) dy \\
 & = 0 + \int_{0}^{+\infty} \exp(-x - y)dy \\
 & = \int_{0}^{+\infty} \exp(-x) \exp (-y) dy \\
 & = e^{-x} \int_{0}^{+\infty}e^{-y}dy \\
 & = e^{-x} \cdot 1 \\
 & = e^{-x}
\end{align}
$$
Dunque:
$$
f_{X}(x) = \begin{cases}
e^{-x}  & x > 0 \\
0  & \text{altrimenti}
\end{cases}
$$
Dunque $X \sim Exp(1)$.
Calcoliamo $F_{X, Y}(x, y)$.
$$
\begin{align}
F_{X, Y}(x, y) &= \int_{-\infty}^{x}\int_{-\infty}^{y} f_{X, Y}(u, v) dv du \\
 & = \int_{0}^{x} \int_{0}^{y} \exp(-u -v) dv du \\
 & = \int_{0}^{x} \exp(-u) du \int_{0}^{y} \exp(-v)dv \\
 & = F_{X}(x) \cdot F_{Y}(y) = (1- \exp(-x)) (1- \exp(-y))
\end{align}
$$

Calcoliamo la probabilità dell'evento $C = \{ (x, y) : x + y > 1 \}$:
Sia $B= (1, +\infty) \times (0, +\infty)$.
$$
\begin{align}
P(B) &= \int_{1}^{+\infty} \int_{0}^{+\infty} f_{X, Y} (u, v) dv du \\
 & = \int_{1}^{+\infty} \int_{0}^{+\infty} \exp(-u -v) dv du \\
 & = \int_{1}^{+\infty} \exp(-u)du \underbrace{ \int_{0}^{+\infty} \exp(-v) dv }_{ 1 }  \\
 & = P_{X}(X > 1) \\
 & = 1 - P_{X}(X \leq 1) \\
 & = 1 - F_{X}(x) \\
 & = 1- (1-\exp(-1)) = \frac{1}{e}
\end{align}
$$
Il secondo integrale vale $1$ perché è la funzione di distribuzione di una variabile aleatoria esponenziale in tutto il suo dominio.
La retta che divide il piano è $y = 1 - x$.
Ora sia $A$ la regione sopra la retta tra $0$ e $1$ sulle ascisse.
$$
\begin{align}
P(A) &= \int_{0}^{1} \int_{1 - u}^{+\infty} f_{X, Y}(u, v) dv du \\
 & = \int_{0}^{1} \int_{1-u}^{+\infty} \exp(-u)\exp(-v) dv du \\
 & = \int_{0}^{1} \exp(-u) \cdot \int_{1-u}^{+\infty} \exp(-v) dv du \\
 & = \int_{0}^{1} \exp(-u) [-\exp(-v)]^{+\infty}_{1- u} du \\
 & = \int_{0}^{1} \exp(-u) \cdot [0 + \exp(-(1-u))] du \\
 & = \int_{0}^{1} \exp(-1) du \\
 & = e^{-1} \int_{0}^{1} du  \\
 & = e^{-1}
\end{align}
$$
$$
P(C) = P(A) + P(B) = \frac{1}{e} + \frac{1}{e} = \frac{2}{e}
$$
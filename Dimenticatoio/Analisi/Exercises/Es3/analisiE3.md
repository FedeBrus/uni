## Esercizio 1:
$$
\lim_{ n \to +\infty } 2^{n} = \text{ ?}
$$
Intuitivamente diverge a $+\infty$.
Nella lezione del principio di induzione abbiamo dimostrato che:
$$
2^{n}\geq n
$$
è vera per induzione.
Per il teorema di confronto a due si ha che se $b_{n} \rightarrow +\infty \implies a_{n}\rightarrow+\infty$ se $a_{n} \geq b_{n}$ definitivamente.
Allora:
$$
\lim_{ n \to +\infty } 2^{n} = +\infty
$$

---
Proviamo con:
$$
\begin{align}
\lim_{ n \to +\infty } a^{n} = +\infty, \qquad a>1 \\ \\ 
\lim_{ n \to +\infty } (1 + (a-1))^{n} = +\infty, \qquad a>1 \\ \\ \\
\end{align}
$$
$$
a^{n}=(1+(a-1))^{n} = (1 + x)^{n} \geq 1 + nx, \qquad \text{con } x = a - 1 > 0
$$
Quindi ci siamo riportati alla disequazione di Bernoulli:
$$
\begin{align}
a_{n} &= (1+x)^{2} \\
b_{n} &= 1+nx
\end{align}
$$
Essendo $x > 1$, si sa che $b_{n} \rightarrow +\infty$ e per il teorema del confronto a due, siccome $a_{n} \geq b_{n}$ definitivamente, $a_{n} \rightarrow +\infty$.

---
$$
\lim_{ n \to +\infty } a_{n} = \text{ ?}, \qquad\text{con } a \in (0, 1)
$$
---
Una successione $a_{n}$ è detta  *limitata* se $\exists M \in \mathbb{R}, M \geq 0 : |a_{n}| \leq M, \forall n \in \mathbb{N}$.
Una successione $b_{n}$ è detta *infinitesima* se $\lim_{ n \to +\infty } b_{n} = 0$.
$$
\lim_{ n \to +\infty } a_{n} \cdot b_{n} = 0
$$
se $a_{n}$ è limitata e $b_{n}$ è infinitesima.
Basta che $a_{n}$ sia limitata, ad esempio:
$$
\begin{align}
a_{n} &= \frac{(-1)^{n}}{n}  \\ \\ \\
b_{n}  &= (-1)^{n} \\ \\ \\ 
c_{n} &= \frac{1}{n}
\end{align}
$$
$b_{n}$ continua ad oscillare, ma è limitata con $M = 1$ dato che $|b_{n}| = 1$. $c_{n}$ invece è infinitesima perché converge a $0$.
Dunque, $a_{n}$ converge a $0$.

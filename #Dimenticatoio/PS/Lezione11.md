$$
F_{X}(x) = P_{X}(\left( -\infty,x \right]) = \sum_{z: z \leq x}p_{X}(z) = \begin{cases}0 & x \lt 5 \\ \frac{1}{36} & -5 \leq x \lt -4 \\ \frac{3}{36} & -4 \leq x \lt -3 \\ \frac{6}{36} & -3 \leq x \lt -2 \\ \vdots \\ 1 & x > 5\end{cases}
$$ 
![[.images/11_1]]
$$
\begin{align}
X(\omega) &= X((\omega_{1}, \omega_{2})) = \omega_{1}-\omega_{2} \\
Y(x) &= x^{2}
\end{align}
$$
$$
\begin{align}
P_{Y}(0) &= P_{X}(\{ x \in \mathbb{R} : Y(x) = 0 \}) = P_{X}(0) = \dfrac{6}{36} \\
P_{Y}(1) &= P_{X}(\{ -1,1 \}) = P_{X}(1)+P_{X}(-1) = \dfrac{10}{36} \\
P_{Y}(2) &= P_{X}(\{ -\sqrt{ 2 }, \sqrt{ 2 } \}) = P_{X}(-\sqrt{ 2 }) + P_{X}(\sqrt{ 2 }) = 0 = P_{\Omega}(\emptyset) + P_{\Omega}(\emptyset)  \\
P_{Y}(4) &= P_{X}(\{ -2,2 \}) = \frac{8}{36} \\
P_{Y}(9) &= \frac{6}{36} \\
P_{Y}(16) &= \frac{4}{36} \\
P_{Y}(25) &= \frac{2}{36} \\
P_{Y}(\mathbb{R} \setminus \{ 0,1,4,9,16,25 \}) &= 1 - \left( P_{Y}(0) + P_{Y}(1) + P_{Y}(4) + P_{Y}(9) + P_{Y}(16) + P_{Y}(25) \right) = 0 
\end{align}
$$
Si deduce dunque che la funzione di probabilità è discreta.

| $Y(x)$                    | $0$             | $1$              | $4$             | $9$             | $16$            | $25$            |
| ------------------------- | --------------- | ---------------- | --------------- | --------------- | --------------- | --------------- |
| $P_{Y}(Y = y) = p_{Y}(y)$ | $\dfrac{6}{36}$ | $\dfrac{10}{36}$ | $\dfrac{8}{36}$ | $\dfrac{6}{36}$ | $\dfrac{4}{36}$ | $\dfrac{2}{36}$ |
Le variabile aleatorie si possono comporre:
$$
(\Omega, \mathcal{A}, P) \xrightarrow{X} (\mathbb{R}, \mathcal{B}(\mathbb{R}), P_{X}) \xrightarrow{Y} (\mathbb{R}, \mathcal{B}(\mathbb{R}), P_{Y})
$$
$$
(\Omega, \mathcal{A}, P) \xrightarrow{X \circ Y} (\mathbb{R}, \mathcal{B}(\mathbb{R}), P_{Y})
$$
$$
Y(X(\omega)) = Y(X((\omega_{1}, \omega_{2}))) = \left( \omega_{1} - \omega_{2} \right)^{2}
$$
## Variabili aleatorie notevoli
### Esempio variabile aleatoria di Bernoulli
$$
\Omega = \{ M, F \}, \qquad \mathcal{A} = \mathcal{P}(\Omega), \qquad P(M) = p, \qquad P(F) = 1-p, \qquad 0 \leq p \leq 1
$$
Considerando lo spazio probabilizzato $\left( \Omega, \mathcal{A}, P \right)$.
Consideriamo la seguente variabile casuale:
$$
X(\omega) = \begin{cases}0 & \omega = F \\ 1 &  \omega = M\end{cases}
$$
Allora:
$$
\begin{align}
P_{X}(0) &= P(F) = 1-p  \\
P_{X}(1) &= P(M) = p \\
P(\mathbb{R} \setminus \{ 0,1 \}) &= 1-P_{X}(0) - P_{X}(1) = 0 \\
\end{align}
$$
$$
F_{X}(x) = \begin{cases}0 & x \lt 0 \\ 1-p & 0 \leq x \lt 1 \\ 1 & x \geq 1\end{cases} \qquad
p_{X}(x) = \begin{cases}1 - p & \text{se } x = 0 \\ p & \text{se } x = 1 \\ 0 & \text{altrimenti}\end{cases}
$$

### Esempio 2 simile
$$
\Omega = \{ M,F \}, \qquad \mathcal{A} = \mathcal{P}(\Omega), \qquad P(M) = p, \qquad P(F) = 1-p, \qquad 0 \leq p \leq 1
$$
$$
\Omega_{B} = \{ 0,1 \}, \qquad \mathcal{A}_{B} = \{ \emptyset, \{ 0 \}, \{ 1 \},\Omega_{B} \}
$$
$$
\begin{align}
X: \left( \Omega, \mathcal{A} \right) &\xrightarrow[]{} \left( \Omega_{B},\mathcal{A}_{B} \right) \\
\omega &\mapsto X(\omega)
\end{align}
$$
$$
X(\omega) = \begin{cases}0 & \omega = F \\ 1 & \omega = M\end{cases}
$$
$$
\begin{align}
P_{X}(0) &= P(F) = 1-p \\
P_{X}(1) &= P(M) = p \\
P_{X}\left( \frac{1}{2} \right) &\text{ non e' definita}
\end{align}
$$

Questo perché $\{ \frac{1}{2} \} \not\in \mathcal{A}_{B}$.
### Variabile aleatoria binomiale
$$
\Omega_{i} = \{ A,A^{c} \}, \qquad \mathcal{A}_{i}=P(\Omega_{i}), \qquad P_{i}(A)=p, \qquad i=1,\dots,n
$$
$$
\Omega = \bigtimes_{i = 1}^{n}\Omega_{i}, \qquad \mathcal{A} = \bigotimes_{i = 1}^{n}\mathcal{A}_{i}, \qquad P((A_{1}, A_{2}, \dots, A_{n})) = \prod_{i=1}^{n}P_{i}(A_{i})
$$
$B \in \mathcal{A}: B = (\underbrace{ A, A, A^{c}, A,A,A^{c},\dots,A }_{ n \text{ elementi} })$
indichiamo con $x$ il numero di $A$ che ci sono in $B \in \Omega$, $x = \sum_{i =1}^{n} \mathbb{1}(A_{i} = A)$.
$$
P(B) = \prod_{i=1}^{n}P_{i}(A_{i}) = \underbrace{ p \cdots p }_{ x } \cdot \underbrace{ \left( 1-p \right) \cdots \left( 1-p \right) }_{ n-x } = p^{x}(1-p)^{n-x}
$$
$$
p_{X}(x) = P(X = x) = \begin{cases}\binom{n}{x}p^{x}(1-p)^{n-x} & x = \{ 0,1,2,3,\dots,n \} \\ 0 & \text{altrimenti}\end{cases}
$$
### Variabile aleatoria di Poisson
Fissiamo $\lambda \gt 0, p=\dfrac{\lambda}{n}$.
$$
\begin{align}
P_{X}(x) &= \binom{n}{x} p^{x}(1-p)^{n-x} \\
&= \displaystyle \binom{n}{x} \left( \frac{\lambda}{n} \right)^{x}\left( 1 - \frac{\lambda}{n} \right)^{n - x} \\
&= \frac{n!}{(n-x)!x!} \frac{\lambda^{x}}{n^{x}}\left( 1 - \frac{\lambda}{n} \right)^{n}\left( 1-\frac{\lambda}{n} \right)^{-x} \\
&= \frac{n!}{n^{x}(n-x)!} \frac{\lambda^{x}}{x!}\left( 1-\frac{\lambda}{n} \right)^{n}\left( 1-\frac{\lambda}{n} \right)^{-x}
\end{align}
$$
$$
\begin{align}
\lim_{ n \to \infty }\frac{n!}{n^{x}(n-x)!} &= \frac{n(n-1)(n-2) \cdots 1}{n^{x}(n-x)(n-x-1) \cdots 1} = \frac{n^{n}}{n^{n}} = 1  \\
\lim_{ n \to \infty } \left( 1 - \frac{\lambda}{n} \right)^{-x} &= 1 \\
\lim_{ n \to \infty } = \left( 1-\frac{\lambda}{n} \right)^{n} &= e^{-\lambda}  \\
\lim_{ n \to \infty }P_{X}(x) &= \frac{\lambda^{x}}{x!}e^{-\lambda} \qquad x\in \{ 0,1,2,3,\dots \}
\end{align}
$$

$$
P_{X}(x) = \begin{cases}
\frac{\lambda^{x}}{x!}e^{-\lambda}  & x \in \mathbb{N} \\ 0 & \text{altrimenti}
\end{cases}
$$
### Variabile aleatoria geometrica
Abbiamo una scatola con delle palline bianche e delle palline nere.
Definiamo:
$$
E_{i} = \{ \text{e' uscita una pallina nera all'i-esima estrazioni} \}
$$
Fissiamo $P(E_{i}) = p$.
Allora:
$$
\begin{align}
P(E_{1}) &= p \\
P(E_{1} \cap E_{2}) &= P(E_{1}) \cdot P(E_{2}) = p^{2} \\
\vdots
\end{align}
$$

Ipotizziamo che il problema ci dica di dover fermare l'estrazione quando si estrae una pallina nera e di calcolare la probabilità che un certo numero di estrazione avvengano prima di fermarsi.

Utilizziamo una variabile aleatoria $X$ che conta il numero di estrazioni che faccio.
$$
\begin{align}
P_{X}(X = 1) &= P(E_{1}) = p \\
P_{X}(X = 2) &= P(E_{1}^{c} \cap E_{2}) = P(E_{1}^{c}) \cdot P(E_{2}) = \left( 1-p \right) p \\
P_{X}(X = 3) &= P(E_{1}^{c} \cap E_{2}^{c} \cap E_{3}) = \left( 1-p \right)\left( 1-p \right)p = \left( 1-p \right)^{2}  p \\
P_{X}(X = x) &= (1-p)^{x-1} p = \left( \prod_{i=1}^{x - 1}(1-p) \right)p = \left( \prod_{i=1}^{x-1}P(E_{i}^{c}) \right) P(E_{x}),\qquad x \in \mathbb{N}
\end{align}
$$

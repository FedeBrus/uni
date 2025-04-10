$$
\begin{align}
\bar{\mu}_{1} &= \mathbb{E}(X - \mathbb{E}(X)) =  \mathbb{E}(X) -  \mathbb{E}(X) = 0 \\
\bar{\mu}_{2} &= \mathbb{E}((X-\mathbb{E}(X))^{2}) = Var(X) = \sigma^{2} \\
\end{align}
$$
### Deviazione standard
La deviazione standard è definita come $\sigma = \sqrt{ Var(X) } = \sqrt{ \sigma^{2} }$.

Sia la varianza che la deviazione standard sono detti indici di variabilità relativi (dipendono dall'unità di misura).
Mentre coefficiente di variazione $\frac{\sigma}{|\mu_{1}|}$ è un indice di variabilità assoluto (numero adimensionale).

### Teorema
Sia $Y = aX+b$, sappiamo già che $\mathbb{E}(Y) = \mathbb{E}(aX + b) = a\mathbb{E}(X)+b$. Invece $Var(Y) = Var(aX + b) = a^{2}Var(X)$.

### Dimostrazione
$$
\begin{align}
Var(Y) &= \mathbb{E}((Y - \mathbb{E}(Y))^{2})  \\
&= \mathbb{E}(((aX + b)-(a\mathbb{E}(X)+b))^{2}) \\
 & = \mathbb{E}((a(X - \mathbb{E}(X)))^{2}) \\
 & = \mathbb{E}(a^{2}(X - \mathbb{E}(X))^{2})  \\
 & = a^{2} \mathbb{E}((X-\mathbb{E}(X))^{2}) \\
 & = a^{2}Var(X)
\end{align}
$$
### Teorema
Consideriamo la variabile aleatoria $X$, allora:
$$
\bar{\mu}_{2} = Var(X) = \mathbb{E}(X^{2}) - \mathbb{E}(X)^{2} = \mu_{2} -  \mu_{1}^{2}
$$
### Dimostrazione
$$
\begin{align}
Var(X) &= \mathbb{E}((X - \mathbb{E}(X))^{2})  \\
 & = \mathbb{E}(X^{2} - 2X\mathbb{E}(X)+ \mathbb{E}(X)^{2}) \\
 & = \mathbb{E}(X^{2}) - 2\mathbb{E}(X)\mathbb{E}(X) +\mathbb{E}(X)^{2} \\
 & = \mathbb{E}(X^{2}) - 2\mathbb{E}(X)^{2} + \mathbb{E}(X)^{2}  \\
 & = \mathbb{E}(X^{2}) -\mathbb{E}(X)^{2}
\end{align}
$$
Nota: la varianza è un numero non-negativo, perché è il valore atteso di una quantità sempre positiva e siccome il valore atteso non può essere minore del valore minimo assumibile dalla sua variabile.
$$
0 \leq Var(X) = \mathbb{E}(X^{2}) - \mathbb{E}(X)^{2} \Longleftrightarrow \mathbb{E}(X^{2})  \geq \mathbb{E}(X)^{2}
$$
### Teorema (Operazione di standardizzazione)
Consideriamo una variabile aleatoria $X$ tale che $\mu = \mathbb{E}(X),\sigma^{2}=Var(X)$.
Sia $z = g(x) = \frac{x - \mathbb{E}(X)}{\sqrt{ Var(X) }}$ e $Z = \frac{X - \mathbb{E}(X)}{\sqrt{ Var(X) }}= \frac{X -\mu}{\sigma}$, allora $\mathbb{E}(Z) = 0$ e $Var(Z)=1$.

### Dimostrazione
$$
Z = \frac{1}{\sqrt{ Var(X) }} \cdot X - \frac{\mathbb{E}(X)}{\sqrt{ Var(X) }} = \frac{1}{\sigma}X - \frac{\mu}{\sigma}
$$
Allora:
$$
\mathbb{E}(Z) = \mathbb{E}\left( \frac{1}{\sigma}X - \frac{\mu}{\sigma} \right) = \frac{1}{\sigma}\mathbb{E}(X) - \frac{\mu}{\sigma} =\frac{\mu}{\sigma} - \frac{\mu}{\sigma} = 0
$$
inoltre:
$$
Var(Z) = Var\left( \frac{1}{\sigma}X - \frac{\mu}{\sigma} \right) = \left( \frac{1}{\sigma} \right)^{2} Var(X) = \frac{1}{\sigma^{2}} \sigma^{2} = 1
$$
### Teorema (Operazione di destandardizzazione)
Sia $Z$ una variabile aleatoria standardizzata ($\mathbb{E}(Z)= 0, Var(Z) = 1$). Siano $\mu, \sigma >0$.
Poniamo $X = \sigma Z + \mu$. Allora $\mathbb{E}(X) = \mu, Var(X)=\sigma^{2}$.

### Dimostrazione
$$
\mathbb{E}(X) = \mathbb{E}(\sigma Z + \mu) = \sigma \mathbb{E}(Z) + \mu = \mu
$$
$$
Var(X) = Var(\sigma Z + \mu) = \sigma^{2} Var(Z) = \sigma^{2}
$$
### Teorema
Sia $Z \sim N(0, 1)$. Consideriamo $X = \sigma Z +\mu$. Sappiamo immediatamente che $\mathbb{E}(X)=\mu$ e $Var(X) = \sigma^{2}$. Allora $X\sim N(\mu, \sigma^{2})$.
In generale, se si applica una trasformazione lineare a una variabile aleatoria normale si ottiene un'altra variabile aleatoria normale.

#### Esercizio
Sia $Z \sim N(0,1)$. Poniamo $\phi := f_{Z} = \frac{1}{\sqrt{ 2\pi }}\exp \left( -\frac{1}{2}z^{2} \right)$
Inoltre:
$$
\Phi(z) = \int_{-\infty}^{z} \phi(t)dt
$$
Consideriamo $X \sim N(\mu, \sigma^{2})$.
Allora: 
$$
\begin{align}
F_{X}(x) &= P(X \leq x)  \\
&= P(X-\mu \leq x- \mu)  \\
&= P\left( \frac{X-\mu}{\sigma} \leq \frac{x- \mu}{\sigma} \right)  \\
&= P\left( Z \leq \frac{x-\mu}{\sigma} \right) \\
&= \Phi\left( \frac{x-\mu}{\sigma} \right)
\end{align}
$$
#### Esercizio
Abbiamo un lotto di 6 stereo e ne contiene 2 difettosi. Un locale da ballo ne acquista 3.
Se $X$ è la variabile aleatoria che conta il numero di stereo difettosi acquistati dal locale, calcolare la funzione di probabilità e la funzione di distribuzione di $X$.

Soluzione:
$R_{X} = \{ 0,1,2 \}$.
$$
p_{X}(x) = \frac{\binom{2}{x}\binom{4}{3-x}}{\binom{6}{3}}, \qquad x \in R_{X}
$$
e $p_{X}(x)=0, x \not\in R_{X}$.
Questo è un caso particolare della variabile aleatoria ipergeometrica.

| $x$ | $p_{X}(x)$    |
| --- | ------------- |
| $0$ | $\frac{1}{5}$ |
| $1$ | $\frac{3}{5}$ |
| $2$ | $\frac{1}{5}$ |
$$
F_{X}(x) = \begin{cases}
0 & x < 0 \\
\frac{1}{5}  & 0\leq x < 1 \\
\frac{4}{5}  & 1 \leq x < 2 \\
1 & x \geq 2
\end{cases}
$$
$$
\mathbb{E}(X) = 0 \cdot \frac{1}{5} + 1  \cdot \frac{3}{5} + 2 \cdot \frac{1}{5}=  \frac{5}{5}=  1
$$
$$
\mathbb{E}(X^{2}) = 0^{2} \cdot \frac{1}{5} + 1^{2}  \cdot \frac{3}{5} + 2^{2} \cdot \frac{1}{5}=  \frac{7}{5}
$$
$$
Var(X) = \mathbb{E}(X^{2}) - \mathbb{E}(X)^{2} = \frac{7}{5} - 1^{2} = \frac{2}{5}
$$
$$
\sigma = \sqrt{ \frac{2}{5} }
$$
$$
P(0 < X \leq 2) = P_{X}(1) + P_{X}(2) = \frac{4}{5} = F_{X}(2) - F_{X}(0)
$$
#### Esercizio
Si distribuiscono casualmente due palline in 4 contenitori. Definiamo $X=\{ \text{numero paline nel primo contenitore} \}$
Dunque $R_{X}=\{ 0,1,2 \}$.
$$
\Omega_{i} = \{ C_{i}, C_{i}^{c} \}
$$
Dove $C_{i} = \{ \text{la pallina finisce nel primo contenitore all'i-esimo lancio} \}$
$$
\Omega = \Omega_{1} \times \Omega_{2}
$$
$$
P_{i}(C_{i}) = \frac{1}{4},\qquad P_{i}(C_{i}^{c}) = \frac{3}{4}
$$
$$
P=P_{1} \cdot P_{2}
$$
Notiamo che gli eventi sono tra loro indipendenti.
$$
\begin{align}
P(X = 0) &= P(C_{1}^{c} \cap C_{2}^{c}) = \frac{3}{4} \cdot \frac{3}{4} = \frac{9}{16} \\
P(X = 1) &= P(C_{1} \cap C_{2}^{c}) + P(C_{1}^{c} \cap C_{2}) = \frac{1}{4} \cdot \frac{3}{4} + \frac{3}{4} \cdot \frac{1}{4} = \frac{6}{16} \\
P(X = 2) &= P(C_{1} \cap C_{2}) = \frac{1}{4} \cdot \frac{1}{4} = \frac{1}{16}
\end{align}
$$
Oppure si poteva pensare immediatamente che $X \sim Bin\left( 2, \frac{1}{4} \right)$.
$$
\mathbb{E}(X) = 0 \cdot \frac{9}{16}+ 1 \cdot \frac{6}{16} + 2 \cdot \frac{1}{16} = \frac{1}{2}
$$
$$
\mathbb{E}(X^{2}) = 0^{2} \cdot \frac{9}{16}+ 1^{2} \cdot \frac{6}{16} + 2^{2} \cdot \frac{1}{16} = \frac{10}{16}
$$
$$
Var(X) = \mathbb{E}(X^{2}) - \mathbb{E}(X)^{2} = \frac{10}{16} - \left( \frac{1}{2} \right)^{2} = \frac{3}{8}
$$
Oppure potevamo utilizzare il fatto che essendo $X \sim Bin\left( 2, \frac{1}{4} \right)$ e quindi $\mathbb{E}(X)=np = \frac{1}{2}$.
La varianza è anch'essa nota e $Var(X)=np(1-p)=2 \cdot \frac{1}{4} \cdot \frac{3}{4} = \frac{3}{8}$.

#### Esercizio
Sia $X \sim Pois(20)$.
$$
\begin{align}
P(X < 7) &= P(\{ X \leq 6 \} \cup \{ 6 < X < 7 \}) \\
 & =P(X \leq 6) + P(6<X<7) \\
 & = F_{X}(6) + 0 \\
 & = \sum_{x = 0}^{6}  \frac{\lambda^{x}e^{-\lambda}}{x!} \approx 0.00026  
\end{align}
$$
$$
\begin{align}
P(6 \leq X\leq 12) &= P(5 < X < 6) + P(6 \leq X \leq 12) \\
 & = P(5 < X \leq 12) \\
 & = F_{X}(12) - F_{X}(5) \approx 0.03894
\end{align}
$$
Nota: Per una variabile aleatoria $X \sim Pois(\lambda)$: $\mathbb{E}(X)=\lambda$ e $Var(X)=\lambda$.

#### Esempio
La probabilità che un albero di un frutteto non dia frutto è 0.04. Il frutteto ha 200 alberi. Qual è la probabilità che esattamente 7 alberi non diano frutto.
$$
X_{i} \sim Ber(0.04)
$$
Ma $X = \sum_{i=1}^{n}X_{i} \sim Bin(200, 0.04)$.
Dunque:
$$
P(X = 7) = \binom{200}{7} (0.04)^{7} (1-0.04)^{200-7} \approx 0.14172 
$$
Probabilità che meno di 2 non diano frutto.
$$
P(X < 2) = P(X \leq 1) = F_{X}(1) = P_{X}(0) + P_{X}(1) \approx 0.00266
$$

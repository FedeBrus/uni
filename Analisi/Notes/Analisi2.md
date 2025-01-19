## Principio di induzione
Il principio di induzione riguarda proprietà matematiche che dipendono dalla scelta di un parametro che appartiene ad $\mathbb{N}$.

Esempio:
1. $(n+1)^{2} = n^{2}+2n+1 \quad \forall n \in \mathbb{N}$
2. $n^{2} > 7n+2 \quad \forall n \in \mathbb{N}, n\geq 8$

In generale $P_{n}$ con $n \in \mathbb{N}$ può essere o vera o falsa.

Con $P_{n}$ complessi, dove non è detto che diventi vero o falso oltre un solo determinato $n$, torna utile il principio di induzione.

- Passo base: dimostrare che $P_{0}$ sia vera.
- Passo induttivo: Si ipotizza che $P_{n}$ sia vera e si dimostra che $P_{n+1}$ è anch'essa vera, ne consegue che $P_{n}$ è vera $\forall n \in \mathbb{N}$.

##### Variante 1:
assumo vera $P_{k}$ come caso base, allora la dimostrazione vale solo per $n\in \mathbb{N}, n \geq k$.
##### Variante 2:
$P_{0}$ risulta vera come caso base, ma il passo induttivo vale solo per $n \in \mathbb{N}, n \geq k \neq 0$.

### Esempio 1:
$$
1+2+3+\dots+n = \frac{n(n+1)}{2}
$$
- Passo base:
Verifico che $P_{0}$ sia vero:
$$
0 = \frac{0(1)}{2} \quad \text{vero}
$$
- Passo induttivo:
Ipotesi: $P_{n}$ è vera.
Tesi: $P_{n+1}$ è vera.
$$
\begin{align}
\underbrace{ 1+2+3\dots+n }_{ P_{n} }+n+1 &= \frac{(n+1)(n+2)}{2} \\
\frac{n(n+1)}{2}+n+1 &= \frac{(n+1)(n+2)}{2} \\ \\
\frac{n^{2} +3n+2}{2} &= \frac{n^{2} +3n+2}{2}
\end{align}
$$
### Esempio 2:
$$
1+a+a^{2}+a^{3}+\dots+a^{n} = \frac{a^{n+1}-1}{a - 1}, \qquad a \neq 1
$$

- Passo base:
Verifico che $P_{0}$ sia vero:
$$
1 = \frac{a - 1}{a - 1} \quad \text{vero} 
$$
- Passo induttivo:
Ipotesi: $P_{n}$ è vera.
Tesi: $P_{n+1}$ è vera.
$$
\begin{align}
\underbrace{ 1+a+a^{2}+a^{3}+\dots+a^{n}}_{ P_{n} } + a^{n+1} &= \frac{a^{n+2} - 1}{a - 1} \\
\frac{a^{n+1} - 1}{a - 1} + a^{n+1} &= \frac{a^{n+2} - 1}{a - 1} \\
\frac{a^{n+1} - a^{n+1} + a^{n+2} - 1}{a - 1} &= \frac{a^{n+2} - 1}{a - 1} \\
\frac{a^{n+2} - 1}{a - 1} &= \frac{a^{n+2} - 1}{a - 1}
\end{align}
$$

### Esempio 3:
$$
1^{2}+2^{2}+3^{2}+4^{2}+\dots+n^{2} = \frac{n(n+1)(2n+1)}{6}
$$

- Passo base:
Verifico che $P_{0}$ sia vero:
$$
0 = \frac{0(1)(1)}{6} \quad \text{vero} 
$$
- Passo induttivo:
Ipotesi: $P_{n}$ è vera.
Tesi: $P_{n+1}$ è vera.
$$
\begin{align}
\underbrace{ 1^{2}+2^{2}+2^{2}+2^{2}+\dots+n^{2}}_{ P_{n} } + (n+1)^{2} &= \frac{(n+1)(n+2)(2n+3)}{6} \\
\frac{n(n+1)(2n+1)}{6}+(n+1)^{2} &= \frac{(n+1)(n+2)(2n+3)}{6} \\
\frac{n(n+1)(2n+1)+{6(n+1)^{2}}}{6} &= \frac{(n+1)(n+2)(2n+3)}{6} \\
\frac{n+1}{6} (n(2n + 1) + 6(n+1)) &= \frac{n+1}{6}((n+2)(2n+3)) \\
\frac{n+1}{6} (2n^{2} + n + 6n + 6) &= \frac{n+1}{6}(2n^{2}+4n+3n+6)) \\
\frac{n+1}{6} (2n^{2} + 7n + 6) &= \frac{n+1}{6}(2n^{2}+7n+6)
\end{align}
$$
### Esempio 4:
$$
2^{n} \geq n, \quad \forall n \in \mathbb{N}
$$

- Passo base:
Verifico che $P_{0}$ sia vero:
$$
2^{0} = 0 \quad \text{vero} 
$$
- Passo induttivo:
Ipotesi: $P_{n}$ è vera.
Tesi: $P_{n+1}$ è vera.
$$
2^{n+1} \geq n+1
$$
sapendo che $2 \cdot 2^{n} \geq 2n$
$$
2 \cdot 2^{n} \geq n + 1
$$
Sappiamo per ipotesi che:
$$
2 \cdot 2^{n} \geq 2n 
$$
dunque, dobbiamo sperare che:
$$
2n \geq n + 1
$$
che è vera quando $n \geq 1$.
Quindi l'induzione funziona a partire da $P_{1}$. $P_{0}$ è vera ma non fa scattare il passaggio induttivo. Dobbiamo verificare che $P_{1}$ sia vera. Questo è un esempio della variante 2.

Verifico $P_{1}$: 
$$
2^{n} \geq 1 \implies 2 \geq 1 \quad vero
$$
### Esempio 5:
$$
4^{n} \geq 2^{n} + 3^{n}
$$
$$
\begin{align}
&n = 0 \quad &1\geq 1+1 \quad &\text{falso}\\
&n = 1 \quad &4\geq 2+3 \quad &\text{falso}\\
&n = 2 \quad &16\geq 4+9 \quad &\text{vero}\\
&n = 3 \quad &64\geq 8+27 \quad &\text{vero}
\end{align}
$$
Sembra che sia vera a partire da $n \geq 2$.

- Passo base: Verifico che $P_{2}$ sia vera (già fatto sopra)
- Passo induttivo:
Ipotesi: $P_{n}$ è vera
Tesi: $P_{n+1}$ è vera
$$
4^{n+1} \geq 2^{n+1} + 3^{n+1}
$$
Osserviamo la prima parte: $4^{n+1} = 4 \cdot 4^{n}$
Sappiamo per certo (osservando $P_{n}$, che è l'ipotesi) che $4 \cdot 4^{n} \geq 4(2^{n} + 3^{n})$ e quindi:
$$
4\cdot 4 ^{n} \geq 4 \cdot 2^{n} + 4 \cdot 3^{n}
$$
Osserviamo come $4$ è maggiorante sia di $2$ che di $3$, dunque possiamo scrivere:
$$
\begin{align}
4\cdot 4 ^{n} &\geq 4 \cdot 2^{n} + 4 \cdot 3^{n} \geq 2 \cdot 2^{n} + 3\cdot3^{n} \\
4\cdot 4 ^{n} &\geq 2 \cdot 2^{n} + 3\cdot3^{n} \\
4^{n+1} &\geq 2^{n+1} + 3^{n+1} \qquad \forall n \geq 2
\end{align}
$$

### Esempio 6:
$$
n! \geq 2^{n}
$$
$$
\begin{align}
 &n=0 \quad &1\geq1 \quad &\text{vero} \\
 &n=1 \quad &1\geq2 \quad &\text{falso}\\
 &n=2 \quad &2\geq4 \quad &\text{falso}\\
 &n=3 \quad &6\geq8 \quad &\text{falso}\\
 &n=4 \quad &24\geq16 \quad &\text{vero}\\
 &n=5 \quad &120\geq32  \quad &\text{vero}
\end{align}
$$
Sembrerebbe che sia vero da $n \geq 4$ in poi: $P_{4}$ è vero, lo usiamo come caso base (già verificato).

- Passo induttivo
Ipotesi: $P_{n}$ è vero
Tesi: $P_{n+1}$ è vero

$$
(n+1)! \geq 2^{n+1}
$$
Osserviamo la prima parte: $(n+1)!$ = $(n+1)n!$
$$
(n+1)n! \geq (n+1)2^{n}
$$
La speranza è che:
$$
(n+1)2^{n} \geq 2^{n+1} = 2 \cdot 2^{n}
$$
$$
n+1 \geq 2 \Longleftrightarrow n\geq 1
$$
Notiamo che la condizione per la quale vale il passo induttivo, $n \geq 1$, è compatibile con il caso base $P_{4}$ scelto.

### Esempio 7:
$$
(1+x)^{n} \geq 1+nx \quad \forall n \in \mathbb{N}, \forall x \in \mathbb{R} \text{ e } x > -1
$$
- Passo base
Verifico che $P_{0}$ sia vero.
$$
1 \geq 1 + 0 \quad \text{vero}
$$
- Passo induttivo
Ipotesi: $P_{n}$ è vero
Tesi: $P_{n+1}$ è vero
$$
(1+x)^{n+1} \geq 1 + (n+1)x
$$
Osserviamo la prima parte: $(1+x)(1+x)^{n} \geq (1+x)(1+nx)$, per ipotesi.

La speranza è che:
$$
\begin{align}
(1+x)(1+nx) &\geq 1 + (n+1)x = 1 + nx + x \\
1+x+nx+nx^{2} &\geq 1 + nx + x
\end{align}
$$
Essendo $nx^{2}$ sempre positiva allora al condizione è sempre vera. Concludiamo che:
$$
(1+x)^{n+1} \geq 1 + (n+1)x
$$

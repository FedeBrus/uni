#### Esercizio (Appello 6/2/2020)
Calcolare le soluzioni della seguente congruenza con potenza:
$$
x^{13} \equiv 17\ (\text{mod}\ 87)
$$
Si determini inoltre la minima soluzione positiva.

Sia $S$ l'insieme delle soluzioni della congruenza.
1° passo (applicabilità del metodo RSA):
$$
\begin{align}
17 &= 17 \\
87 &= 3 \cdot 29
\end{align}
$$
Dunque $(17, 87)=1$, ovvero $[17]_{87} \in (\mathbb{Z}\big/_{87\mathbb{Z}})^{*}$
$$
\phi(87) = \phi(3 \cdot 29) = \phi(3)\phi(29) = 2 \cdot 28 = 56
$$
$$
\begin{align}
13 & = 13 \\
56 & = 2^{3} \cdot 7
\end{align}
$$
Dunque $(13, \phi(87)) = (13, 56) = 1$. Bastava osservare che $13$ è primo e $13 \not{|}\ 56$. Segue che il metodo RSA si può applicare ottenendo $S = [17^{d}]_{87} \subset \mathbb{Z}$ dove $d > 0$ e $d \in [13]_{\phi(87)}^{-1}=[13]_{56}^{-1}$.

2° passo (calcolo di $d$ e di $S$):
$$
\begin{align}
56 &= 4 \cdot 13 + 4 \\
13 &= 3 \cdot 4 + 1 \\
4 &= 4 \cdot 1 + 0
\end{align}
$$
$$
\begin{align}
1 & = 13 - 3 \cdot 4 \\
 & = 13 - 3 (56 \cdot - 4 \cdot 13) \\
 & =  13 \cdot 13 + (-3) \cdot 56
\end{align}
$$
Dunque vale, passando al quoziente modulo $\phi(87)= 56$:
$$
\begin{align}
1 & = 13 \cdot 13 + (-3) \cdot 56 \\
[1]_{56}  & = [13]_{56} [13]_{56}
\end{align}
$$
Segue che $[13]_{56}^{-1} = [13]_{56}$. Poniamo $d:=13$.
Vale:
$$
S = [17^{13}]_{87} \subset \mathbb{Z}
$$
Studiamo l'orbita:
$$
\begin{align}
k \geq 1 & &  &[17^{k}]_{87} \\
1 & & 17^{1} &=17 \\
2 & & 17^2 &=  289 = 3\cdot 87 + 28 \equiv 28\ (\text{mod}\ 87) \\
3 &  & 17^{3} &= 17^{2} \cdot 17 \equiv 28\cdot 17 =476 = 5 \cdot 87 + 41 \equiv 41\ (\text{mod}\ 87) \\
4 &  & 17^{4} &=  17^{3} \cdot 17^{1} \equiv 41 \cdot 17 = 697 = 8 \cdot 87 +1 \equiv 1\ (\text{mod}\ 87)
\end{align}
$$
Dunque $[17^{4}]_{87} = [1]_{87}$.
Vale:
$$
\begin{align}
[17^{13}]_{87} &= [17^{4 \cdot 3 + 1}]_{87}  \\
   &= [17^{4}]^{3}_{87} \cdot [17^{1}]_{87} \\
   &= [1]^{3}_{87} \cdot [17]_{87} \\
   &= [1^{3}]_{87} \cdot [17]_{87} \\
   &= [17]_{87}
\end{align}
$$
Se si arriva alla classe di $[-1]_{n}$ dopo aver fatto $d$ passi, quidni $[k^{d}]_{n}=[-1]_{n}$ si può notare che per chiudere l'orbita e arrivare a $[1]_{n}=[k^{0}]_{n}=[(-1)^{2}]_{n}=[(k^{d})^{2}]_{n}=[k^{2d}]_{n}$.
## Lista dei Teoremi
Al posto del 3 ci sarà il lemma dei cassetti, con definizione di cardinalità finita 3.11, Corollario 4.1 e def 4.2 e succ.
## Grafi
> "non esiste neanche in matematica, figuriamoci se esiste davvero".

Dato un insieme $V$, indichiamo con $\binom{V}{2}$ (che si legge "$V$ su $2$") l'insieme i cui elementi sono tutti i sottoinsiemi di $V$ aventi cardinalità $2$, ovvero $\binom{V}{2} := \{ A \in 2^{V} |\  |A| = 2\}$. Un sottoinsieme di cardinalità $2$ di $V$ si dice anche $2$-sottoinsieme di $V$.

#### Esempi
- Se $V= \emptyset$ oppure $V=\{ a \}\implies\binom{V}{2}=\emptyset$.
- Se $V = \{a, b\} \implies \binom{V}{2}=\{ \{ a, b \} \}=\{ V \}$.
- Se $V = \{ a,b,c \} \implies \binom{V}{2} = \{ \{ a, b \}, \{ b, c \}, \{ a, c \} \}$
- Se $V = \{ a,b,c,d \}\implies \binom{V}{2} = \{ \{ a, b \}, \{ a, c \}, \{ a,d \}, \{ b, c \}, \{ b, d \}, \{ c, d \} \}$.

Se $|V| \geq 2$ e finito, allora:
$$
\left| \binom{V}{2} \right| = \frac{\left| V \right| (\left| V \right| -1)}{2} = \binom{\left| V \right| }{2} = \frac{|V|!}{2!(|V|-2)!} 
$$
### Definizione 14.1
Un grafo $G$ è una coppia $(V, E)$, dove $V$ è un insieme non vuoto, detto insieme dei vertici di $G$, e $E$ è un sottoinsieme di $\binom{V}{2}$, detto insieme dei lati di $G$.
Se $e=\{ v_{1},v_{2} \} \in E$ , cioè è un lato di $G$, allora i vertici $v_{1}$ e $v_{2}$ si dicono estremi del lato e si dice che il lato $e$ congiunge $v_{1}$ e $v_{2}$ in $G$. Si scrive anche: $V = V(G), E = E(G)$.

#### Esempi 14.2 (rappresentazione dei grafi)
1) $G_{1} = (V_{1}, E_{1})$, dove $V_{1}:=\{ 1 \},E_{1}:=\emptyset$.
2) $G_{2}= (V_{2}, E_{2})$, dove $V_{2}=\{ 1,2,4 \}, E_{2}:=\{ \{ 1,2 \}, \{ 1,3 \}, \{ 2,3 \}, \{ 1,4 \}, \{ 2,4 \} \}$.
3) $G_{3}=(V_{3}, E_{3})$, dove $V_{3}:=\{ 1,2,3,4,5 \}, E_{3}:=\{ \{ 1,3 \}, \{ 2,3 \}, \{ 3,4 \}, \{ 2, 4 \} \}$.
4) $G_{4}=(V_{4}, E_{4})$, dove $V_{4}:=\{ a,b,c,d,e,f,g \}, E_{4}:=\{ \{ b,c \}, \{ b,d \}, \{ b,e \} \}$.
5) $G_{5}=(V_{5}, E_{5})$, dove $V_{5}:=\{ \alpha, \beta, \gamma, \delta, \nu, \omega \}, E_{5}:=\{ \{ \alpha, \gamma \}, \{ \gamma, \delta \}, \{ \beta, \gamma \}, \{ \gamma, \omega \}, \{ \delta, \nu \}, \{ \omega, \nu \}\}$.

### Esempi notevoli 14.3
1) Per ogni $n\in \mathbb{N}$, definiamo il cammino $P_{n}$ di lunghezza $n$ come segue:
$$
\begin{align}
V(P_{n}) &:= \{ 0, 1, \dots, n \} \\
E(P_{n}) &:= \begin{cases}
\emptyset & n = 0 \\
\left\{ \{ i, i+1 \} \in \binom{V(P_{n})}{2} \Big| i \in \{ 0, \dots, n-1 \} \right\} & n \geq 1
\end{cases}
\end{align}
$$
Osserviamo che $P_{n}$ possiede esattamente $n$ lati.
2) Cammino infinito $P_{\infty}$:
$$
\begin{align}
V(P_{\infty}) &:= \mathbb{N}  \\
 E(P_{\infty}) &:=
\left\{ \{ i, i+1 \} \in \binom{V(P_{\infty})}{2} \Bigg| i \in \mathbb{N} \right\}

\end{align}
$$
3) Sia $n \geq 3$, il grafo $C_{n}$, detto $n$-ciclo, è definito ponendo:
$$
\begin{align}
V(C_{n})  & := \{ 1,2,\dots,n \} \\
E(C_{n})  & := \left\{ \{ i, i+1 \} \in \binom{V(C_{n})}{2} \Bigg| i \in \{ 1, \dots, n - 1 \} \right\} \cup \{ \{ 1,n \} \}
\end{align}
$$
Si chiama $n$-ciclo perché la sua lunghezza è $n$ ovvero possiede $n$ lati.
4) Sia $n\geq 1$, allora definiamo il grafo completo su $n$ vertici $K_{n}$ ponendo:
$$
\begin{align}
V(K_{n}) := \{ 1, \dots, n \} \\
E(K_{n}) := \binom{V(K_{n})}{2}
\end{align}
$$
## Sottografi e sottografi indotti
### Definizione 14.4
Siano $G = (V, E)$ e $G'=(V', E')$. Diciamo che $G'$ è sottografo di $G$ se $V' \subset V$ e $E' \subset E$.

Se $G'$ è un sottografo di $G$ e i lati $E' = \{ e \in E | e = \{ v_{1},v_{2} \}, v_{1},v_{2} \in V' \}$, allora $G'$ è il sottografo di $G$ indotto da $V'$ e si indica con $G' = G[V']$.
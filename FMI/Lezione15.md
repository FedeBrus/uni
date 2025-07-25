#### Esercizio
Calcolare, se esiste, $[8]_{35}^{-1}$.
Lanciamo Euclide su $(35, 8)$:
$$
\begin{align}
35 &= 4 \cdot 8 + 3 \\
8 &= 2 \cdot 3 +2 \\
3 &= 2 + 1 \\
2 &= 2\cdot 1 + 0
\end{align}
$$
Dunque $(35, 8) = 1$ perciò $[8]_{35}^{-1}$ esiste.
$$
\begin{align}
1 &= 3 - 2 \\
 &= 3 - (8 - 2 \cdot 3) \\
 &= 3 \cdot 3 - 8 \\
 &= 3 (35 - 4 \cdot 8) - 8 \\
 &= 3 \cdot 35 - 13 \cdot 8
\end{align}
$$
Dunque:
$$
\begin{align}
1 &= 3 \cdot 35 + (-13) \cdot 8 \\
[1]_{35}  &= [3 \cdot 35 + (-13) \cdot 8]_{35} \\
[1]_{35}  &= [-13 \cdot 8]_{35} \\
[1]_{35} &= [-13]_{35}[8]_{35}
\end{align}
$$
Dunque $[8]_{35}^{-1} = [-13]_{35}= [22]_{35}$.

### Definizione 11.6
Sia $n>0$, indichiamo con $\left(\mathbb{Z}\big/_{n\mathbb{Z}}\right)^{*}$ il sottoinsieme di $\mathbb{Z}\big/_{n\mathbb{Z}}$ formato dalle classi modulo $n$ invertibili.

### Proposizione 12.7
Sia $p$ un numero primo. Allora:
$$
\left(\mathbb{Z} \big/ _{p\mathbb{Z}} \right)^{*} = \{ [1]_{p}, [2]_{p}, \dots, [p-1]_{p} \} = \mathbb{Z} \big/_{p\mathbb{Z}} \setminus \{ [0]_{p} \}
$$
### Dimostrazione
$\mathbb{Z} \big/_{p\mathbb{Z}}=\{ [0]_{p}, [1]_{p}, [2]_{p}, \dots, [p - 1]_{p} \}$.
Siccome $(0, p)=|p|$, ma $p \geq 2$, allora $[0]_{p}\not\in \left( \mathbb{Z} \big/_{p\mathbb{Z}} \right)^{*}$.
Se $[0]_{p}$ fosse invertibile in $\mathbb{Z} \big/_{p\mathbb{Z}}$ allora esisterebbe $[x]_{p}$ tale che:
$$
[0]_{p}=[x \cdot 0]_{p} = [x]_{p}[0]_{p} = [1]_{p}  \Longleftrightarrow 0 \equiv 1\ (\text{mod}\ p)
$$
Ma $p \not{|}\ 1 -0$ appunto perché $p \geq 2$.

Sia $r \in \{ 1, \dots, p - 1 \}$. Vale:
$$
[r]_{p} \in \left( \mathbb{Z} \big/_{p\mathbb{Z}} \right) ^{*} \Longleftrightarrow (p, r) = 1
$$
Ma siccome $p \not{|}\ r$ e $p$ primo $\implies$ $(p, r)=1 \implies \exists[r]_{p}^{-1}$.
### Corollario
Se $p$ è primo,
$$
\left| \left( \mathbb{Z} \big/_{p\mathbb{Z}} \right)^{*}  \right| = p - 1
$$
#### Esercizio
Scrivere esplicitamente $\left( \mathbb{Z} \big/_{7 \mathbb{Z}} \right)^{*}$:
$$
\left( \mathbb{Z} \big/_{7 \mathbb{Z}} \right)^{*} = \{ [1]_{7}, [2]_{7}, [3]_{7}, [4]_{7}, [5]_{7}, [6]_{7} \}
$$
Scrivere esplicitamente $\left( \mathbb{Z} \big/_{12 \mathbb{Z}} \right)^{*}$:
$$
\left( \mathbb{Z} \big/_{12 \mathbb{Z}} \right)^{*} = \{ [1]_{12}, [5]_{12}, [7]_{12}, [11]_{12} \}
$$
$$
\left|  \left( \mathbb{Z} \big/_{12\mathbb{Z}} \right)^{*}  \right| = 4
$$
### Definizione 13.1 funzione $\phi$ di Eulero
Definiamo la funzione $\phi:\mathbb{N} \setminus \{ 0 \} \rightarrow \mathbb{N}$ è definita ponendo:
$$
\phi(n) := | \{ a \in \mathbb{N} | 1 \leq a \leq n, (a,n)=1 \} |
$$
$\phi(n)$ è il numero di interi compresi tra $1$ e $n$ inclusi, coprimi con $n$ stesso.

### Lemma 13.3
Dato $n > 0$, vale:
$$
\left| \left(\mathbb{Z} \big/ _{n\mathbb{Z}} \right)^{*} \right| = \phi(n)
$$
### Dimostrazione
Vale:
$$
\begin{align}
\left| \left(\mathbb{Z} \big/ _{n\mathbb{Z}} \right)^{*} \right|&= | \{ [a]_{n} \in \mathbb{Z} \big/ _{n\mathbb{Z}} | 0 \leq a \leq n-1, (a,n)=1 \} | \\
 & = | \{  [a]_{n} \in \mathbb{Z} \big/ _{n\mathbb{Z}} | 1 \leq a \leq n, (a,n)=1  \} | \\
 & = | \{ a \in \mathbb{Z} | 1 \leq a \leq n, (a, n) = 1 \}| \\
 & = | \{ a \in \mathbb{N} | 1 \leq a \leq n, (a, n) = 1 \}| \\
 & = \phi(n)
\end{align}
$$
Calcolo della $\phi$ di Eulero.
se $p$ è primo, allora $\phi(p) = p - 1$.
$\phi(1)= | \{ 1 \} | = 1$
$\phi(2)= |\{ 1, \cancel2 \}|= 1$
$\phi(4)=|\{ 1,\cancel2,3,\cancel4 \}| = 2$
$\phi(8)=|\{ 1,\cancel2,3,\cancel4,5,\cancel6,7,\cancel8 \}|=4$

Ma allora quanto vale $\phi(n), n \geq 2$? 
### Moltiplicatività
La $\phi$ di Eulero è moltiplicativa sulle coppie coprime:
Se $n, m \in \mathbb{N} \setminus \{ 0 \}$ con $(n,m)=1$, allora:
$$
\phi(nm) = \phi(n)\phi(m)
$$
### Dimostrazione
Non abbiamo tempo. Guardare il libro "Algebretta" di Scimemi.

### Semplificazione del conto
Sia $n \geq 2$. Sia $n = p_{1}^{m_{1}}p_{2}^{m_{2}}\dots p_{k}^{m_{k}}$ dove i vari $p_{i}$ sono primi $p_{i}\neq p_{j}$ se $i,j\in \{ 1,\dots,k \}$ con $i \neq j$.
Allora $\phi(n)=\phi(p_{1}^{m_{1}})\phi(p_{2}^{m_{2}}\dots p_{k}^{m_{k}})=\dots=\phi(p_{1}^{m_{1}})\phi(p_{2}^{m_{2}})\dots \phi(p_{k}^{m_{k}})$.

Sia $p$ un primo e sia $m\geq 1$. Calcoliamo:
$$
\begin{align}
\phi(p^{m}) &= \left| \{ a \in \mathbb{N} | 1 \leq a \leq p^{m}, (a, p^{m}) = 1 \} \right|  \\
 & = \left| \{ a \in \mathbb{N} | 1 \leq a \leq p^{m}, (a, p) = 1 \} \right|  \\
 & = \left| \{ 1, \dots, p^{m} \} \setminus \{ a \in \mathbb{N} | 1 \leq a \leq p^{m}, (a, p) \neq 1 \} \right| \\
 & = \left| \{ 1, \dots, p^{m} \} \setminus \{ a \in \mathbb{N} | 1 \leq a \leq p^{m}, (a, p) = p \} \right| \\
 & = \left| \{ 1, \dots, p^{m} \} \setminus \{ p, 2 \cdot p, \dots, p^{m-1}p \} \right| \\
 & = p^{m} -p^{m-1}
\end{align}
$$

Perché $p$ ha solo due divisori: o $1$ o $p$.

Segue che se $p$ è primo e $m\geq 1$ allora $\phi(p^{m}) =p^{m}-p^{m-1}$.

### Formula generale
Sia $n\geq 2$, $n = p_{1}^{m_{1}}p_{2}^{m_{2}}\dots p_{k}^{m_{k}}$ dove i vari $p_{i}$ sono primi e $p_{i}\neq p_{j}$ se $i, j \in \{ 1,\dots,k \}$ con $i \neq j$
$$
\phi(n) = \phi(p_{1}^{m_{1}})\phi(p_{2}^{m_{2}})\dots \phi(p_{k}^{m_{k}}) = (p_{1}^{m_{1}}- p_{1}^{m_{1} - 1})(p_{2}^{m_{2}}- p_{2}^{m_{2} - 1})\dots(p_{k}^{m_{k}}- p_{k}^{m_{k} - 1})
$$
Dunque il caso $\phi(p)$ con $p$ primo è coerente con questa formula.
#### Esercizi
Calcoliamo $\phi(49)$:
$$
\phi(49) = \phi(7^{2}) = 7^{2}- 7 = 49 - 7 = 42
$$
Calcoliamo $\phi(24)$:
$$
\phi(24) = \phi(2^{3} \cdot 3) = \phi(2^{3}) \phi(3) = (2^{3}-2^{2})(3 - 1) = (8-4)(2) = 8
$$
Calcoliamo $\phi(21)$:
$$
\phi(21) = \phi(3 \cdot 7) = \phi(3)\phi(7) = 2 \cdot 6 = 12
$$
Calcoliamo $\phi(100)$:
$$
\phi(100)=\phi(2^{2}\cdot 5^{2}) =\phi(2^{2})\phi(5^{2}) = (2^{2}-2)(5^{2}-5) = (4-2)(25- 5) =40
$$
## Sottospazi Vettoriali

##### Def:
Sia $V$ spazio vettoriale su $\mathbb{K}$.
Sia $W \subseteq V$ non vuoto. $W$ è detto sottospazio vettoriale di $V$ se:

1. $\forall w_{1}, w_{2} \in W, w_{1} + w_{2} \in W$
2. $\forall w \in W, \forall k \in \mathbb{K}, kw \in W$

##### Oss:
1. Ogni sottospazio vettoriale contiene il vettore nullo $0 \in V$. $W \neq \emptyset \implies \exists v \in W$. Per (2), $0_{\mathbb{K}}v = 0_{V}$. Perché $0_{\mathbb{K}}v = (0_{\mathbb{K}} + 0_{\mathbb{K}})v = 0_{\mathbb{K}}v + 0_{\mathbb{K}}v \implies 0_{V} = 0_{\mathbb{K}}v(-0_{\mathbb{K}}v) = 0_{\mathbb{K}}v + (0_{\mathbb{K}}v + (-0_{\mathbb{K}}v)) = 0_{\mathbb{V}}$.
2. $W$ è esso stesso uno spazio vettoriale su $\mathbb{K}$.

##### Esempio:
1. $\forall A_{m \times n}, Sol(Ax = 0) = \{ x \in \mathbb{R}^{n} | Ax = 0 \}$ è un sottospazio vettoriale di $R^{n}$.
Se $b \neq 0$, allora $Sol(Ax = b)$ non è un sottospazio vettoriale.

2. $V = M_{n}(\mathbb{R}), W = \{ A \in M_{n}(\mathbb{R}) | A = A^{T} \}$
$(A + B)^{T} = A^{T} + B^{T} = A + B$ se $A, B \in W$.
$(kA^{T}) = kA^{T}$, se $A, B \in W$ e $k \in \mathbb{K}$.

3. $W' = \{ A \in M_{n}(\mathbb{R}) | A^{T} = -A \}$
4. $\mathbb{R}[x] \subset C(\mathbb{R}) = \{ f: \mathbb{R} \rightarrow \mathbb{R} | f \text{ continua} \}$, $\mathbb{R}[x]$ è un sottospazio di $C(\mathbb{R})$.
5. $V = \mathbb{R}_{n}[x] = \{ p \in \mathbb{R}[x] | gr(p) \leq n \} \cup \{ 0 \} \qquad n \in \mathbb{N}$
$V$ è un sottospazio vettoriali dei polinomi. Se $f, g \in \mathbb{R}_{n}[x]$ allora sicuramente la loro somma è un polinomio di grado $\leq n$ (Perché con una differenza si può annullare il grado maggiore), oppure la loro somma può essere $0$.
$$
f \in \mathbb{R}_{n}[x] \text{ e } k \in \mathbb{R} \implies gr(kf) = gr(f) \text{ se } k \neq 0
$$
e $kf = 0$ se $k = 0$ oppure $f = 0$.

Esempio:
$\mathbb{F} = \{ 0, 1 \}$ con $1+1 = 0$.
Campo (finito) con due elementi.
$$
\begin{cases}
x_{1}+x_{2} = 1 \\
x_{1}-x_{2} = 1
\end{cases}
\rightarrow
\begin{bmatrix}
1  & 1 & 1 \\
1 & -1 & 1
\end{bmatrix}
$$
Ricorda che nel campo $1$ e $-1$ sono uguali, ovvero l'inverso di $1 + 1 = 0$
$$
\begin{bmatrix}
1 & 1 & 1 \\
1 & -1 & 1
\end{bmatrix}
\rightarrow_{E_{1,2}(-1)}
\begin{bmatrix}
1 & 1 & 1 \\
0 & 0 & 0
\end{bmatrix}
$$
Adesso si nota come si hanno $2^{1}$ soluzioni, quindi 2 soluzioni totali in $\mathbb{F}^{2} = \mathbb{F}\mathbb{F}$
$$
x_{1}+x_{2} = 1
$$
Se considero $x_{2} = t, t\in\mathbb{F}$.
$$
\begin{cases}
x_{1} = 1 -t \\
x_{2} = t
\end{cases}
$$
Le due soluzioni sono $(1, 0)$ e $(0, 1)$. $Sol(Ax = b) = \{ (0,1), (1,0) \}$ non è sottospazio.
$Sol(Ax = 0) = \{ {(0,0), (0,1)} \}$, è sottospazio vettoriale di $\mathbb{F}^{2}$.








##### Def:
Sia $V$ uno sottospazio, $v_{1}, v_{2}, v_{3}, \dots \in V$.
e $c_{1}, c_{2}, c_{3}, \dots \in \mathbb{K}$.
La combinazione lineare di v1, v2, v3, con coefficienti c1, c2, c3 è il vettore 

v = c1v1 + c2v2 + c3v3 inn V

Def:
<v1, ..., vk> = { v = sum  da i = 1, a k di civi | c1...ck inn K}

Si chiama sottospazio generato da v1, ..., vk.

##### Esempio:
$V = \mathbb{R}^{n}$, $v_{1} = (1, 2, 3), v_{2} = (0, 2, 1)$
$<v_{1}, v_{2}> = \{ c_{1}v_{1} + c_{2}v_{2} | c_{1}, c_{2} \in \mathbb{R} \}$ = $v$

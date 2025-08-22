## Riconoscere lo score di un grafo

### Ostruzione 1
#### Esempio
$d=(1,1,1,2,2,3,4,8) \in \mathbb{N}^{8}$. 
Se esistesse il grafo con $score(G)=d \implies |G(V)|=8$.
Inoltre $G$ deve avere un vertice $v$ di grado $8$. Questo è impossibile perché $v$ può essere adiacente ad al più $7$ vertici.
Dunque $d$ non può essere lo score di un grafo.
### Corollario
Se $n \geq 1$, $n \in \mathbb{N}$ e sia $d=(d_{1},\dots,d_{n}) \in \mathbb{N}^{n}$ con $d_{1} \leq \dots \leq d_{n}$. Se $d_{n}>n-1 \implies d$ non è score di un grafo.
### Dimostrazione
Se $\exists G$ grafo con $score(G)=d \implies |G(V)|=n$ di cui uno $v$ di grado $d_{n}> n-1$. Ma ogni vertice di $G$ è adiacente al più ad ogni altro vertice $w\neq v$. Ma allora $deg_{G}(v)\leq n-1$. Ma allora tale grafo non può esistere.
### Osservazione
Se $d=(\underbrace{ 0,\dots,0 }_{ m },d_{1},\dots,d_{n}) \in \mathbb{N}^{n+m}$ con $0 < d_{1} \leq d_{2} \leq \dots \leq d_{n}$. Allora $d$ è lo score di un grafo $\Longleftrightarrow$ $d' = (d_{1}, \dots, d_{n}) \in \mathbb{N}^{n}$ è anch'esso lo score di un grafo.

### Ostruzione 2
#### Esempio
$d=(1,2,3,4,5,6,7,8,8)\in \mathbb{N}^{9}$.
Supponiamo che $\exists G$ con $score(G)=d$, allora $|V(G)|=9$ e due suoi vertici $v,w$ sono di grado massimo ($deg_{G}(v)=8, deg_{G}(w)=8$). Allora $\forall x \in V(G), deg_{G}(x)\geq 2$. Ma $d$ ha un'entrata uguale a $1$ quindi non può essere lo score di un grafo.
### Corollario
Fissiamo $h,k \in \mathbb{N} \setminus \{ 0 \}, n = h+k$.
Sia $d = (d_{1},\dots,d_{h}, \underbrace{ n-1, \dots, n - 1 }_{ k }) \in \mathbb{N}^{n}$ con $d_{1} \leq \dots \leq d_{h}<n-1$. Se $d_{1} < k$ allora $d$ non è lo score di un grafo.
### Dimostrazione
Sia $G$ un grafo con $score(G)=d$, allora $|V(G)|=n$ di cui $k$ di grado massimo, cioè di grado $n-1$. Ma allora questi vertici sono adiacenti a tutti gli altri. Quindi $\forall x \in V(G), deg_{G}(x)\geq k$. Ma $d_{1} < k \implies G$ ha anche un vertice di grado $d_{1} < k$, il che è assurdo. Quindi $d$ non è lo score di un grafo.

### Ostruzione 3
### Corollario 3
Siano $n \in \mathbb{N}, n \geq 3$ e $d=(d_{1},\dots,d_{n}) \in \mathbb{N}^{n}$ con $d_{1} \leq \dots \leq d_{n}$.
Definiamo $L := |\{ i \in \{ 1, \dots, n-2 \} | d_{i}\geq2 \}|$.
Se $L < d_{n} + d_{n- 1}-n \implies d$ non è lo score di un grafo.
### Dimostrazione
Supponiamo per assurdo che $\exists G$ grafo con $score(G)=d$. Siano $v\neq w \in V(G):deg_{G}(v)=d_{n-1}, deg_{G}(w)=d_{n}$.
Definiamo $A = \{ u \in V(G) \setminus \{ v \} | u \text{ adiacente a } v \}$ e $B = \{ u \in V(G) \setminus \{ w \} | u \text{ adiacente a } w \}$.
Per costruzione la cardinalità di $|A|=d_{n-1}$ e $|B|=d_{n}$.
Osserviamo che $|A \cap B| \leq L$.
$$
L \geq |A\cap B| = |A| + |B| - |A \cup B| = d_{n-1} + d_{n} - |A \cup B|
$$
Ma $A \cup B \subset V(G) \implies |A \cup B| \leq |V(G)| = n$ e quindi.
$$
L \geq d_{n-1} + d_{n} - n \geq d_{n-1} + d_{n} - |A \cup B|
$$
Ma questo è contro l'ipotesi, quindi $d$ non è lo score di un grafo.
#### Esercizio
$d = (1,1,1,3,5,5,7,7,8,8) \in \mathbb{N}^{10}$. Determinare se è lo score di un grafo.
Ha passato le prime due ostruzioni.
Calcoliamo $L = |\{ i \in \{ 1, \dots, 10 - 2 \} | d_{i} \geq 2 \}| = 5$.
$5 < 8 + 8 - 10 \implies d$ non è lo score di un grafo per via dell'ostruzione 3.

### Ostruzione 4 (lemma delle strette di mano)

## Verso il teorema dello score
### Lemma
Sia $n \in \mathbb{N} \setminus \{ 0 \}$, sia $d=(d_{1},\dots,d_{n})\in \mathbb{N}^{n}$ tale che $d_{1} \leq \dots \leq d_{n} \leq 2$.

1. Se $d = (0, \dots, 0, 2)$ o $d=(0,\dots,0,2,2)$ allora $d$ non è lo score di un grafo.
2. Se $d=(0,\dots,0)$ allora $d$ è lo score del grafo avente $n$ vertici isolati.
3. Se $d = (0,\dots , 0, \underbrace{ 2,\dots, 2 }_{ m }), m \geq 3$ allora $d$ è lo score di $n - m$ vertici isolati e un $m$-ciclo.
4. Se $d$ ha un numero dispari di entrate $1$ allora $d$ non è lo score di un grafo
Supponiamo quindi che $d$ possieda un numero pari di componenti uguali a $1$. Più precisamente:
$$
d = (\underbrace{ 0, \dots, 0 }_{ h }, \underbrace{ 1, \dots, 1 }_{ 2k + 2 }, \underbrace{ 2, \dots, 2 }_{ m })
$$
($2k + 2$) perchè lo vogliamo pari e positivo.
Allora $d$ è lo score del seguente grafo.

#### Esercizio
I seguenti vettori sono score di un grafo?
$$
\begin{align}
d &= (0,0,1,2,2) & \text{no} \\
d &= (0,1,1,1,1,2)  & \text{yes}\\
d &= (0,0,0,2,2) & \text{no} \\
d &= (2,2,2,2) & \text{yes} \\
d &= (1,1,1,1,1,1,2,2)  & \text{yes} \\
d &= (0,0,1,1,1,1,2,2,2,2) & \text{yes}
\end{align}
$$
### Teorema dello score
Siano $n \in \mathbb{N}, n \geq 2$ e sia $d = (d_{1},\dots,d_{n}) \in \mathbb{N}^{n}$ con $d_{1} \leq \dots \leq d_{n} \leq n-1$. Definiamo il vettore $d'\in \mathbb{N}^{n-1}$ ponendo $d' = (d'_{1},\dots, d'_{n-1})$ con:
$$
d_{i}' = \begin{cases}
d_{i} & i < n - d_{n} \\
d_{i} - 1 & i \geq n - d_{n}
\end{cases}\qquad\forall i \in \{ 1,\dots,n-1 \}
$$
$d$ è lo score di un grafo $\Longleftrightarrow$ $d'$ è lo score di un grafo.
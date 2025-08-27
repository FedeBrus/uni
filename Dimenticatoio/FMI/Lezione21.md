### Relazioni fondamentali tra gradi di vertici e numero dei lati in un grafo

### Proposizione 17.4
Sia $G=(V,E)$ un grafo finito. Allora:
$$
\sum_{v \in V} deg_{G}(v) = 2 \left| E \right| 
$$
La somma dei gradi dei vertici di $G$ è uguale al doppio del numero dei lati di $G$.
### Dimostrazione
Siano $V = \{ v_{1},\dots,v_{n} \}$ e $E=\{ e_{1}, \dots, e_{k} \}$, in particolare $|V| = n$ e $|E|=k$. Definiamo:
$$
m_{ij} := \begin{cases}
1 & \text{se}\  v_{i} \in e_{j} \\
0 & \text{se}\ v_{i} \in e_{j}
\end{cases}
$$
Con $i \in \{ 1, \dots, n \}$ e $j \in \{ 1, \dots, k \}$. Questa è una matrice di adiacenza.
Questa matrice può essere rappresentanto su un piano cartesiano. Ad ogni $(i, j)$ si associa $m_{ij}$.

Per associatività dell'addizione su $\mathbb{Z}$, vale:
$$
\sum_{i=1}^{n} \sum_{j=1}^{k} m_{ij} = \sum_{j=1}^{k} \sum_{i=1}^{n} m_{ij}
$$
Vale:
$$
\sum_{j=1}^{k} m_{ij} = \left| \{ i \in \{ 1, \dots, k \} | v_{i} \in e_{j} \} \right| = deg_{G}(v_{i}) \implies \sum_{i=1}^{n} \sum_{j=1}^{k} m_{ij} = \sum_{i=1}^{n} deg_{G}(v_{i}) = \sum_{v \in V} deg_{G}(v)
$$
$$
\sum_{i=1}^{n} m_{ij} = \left| \{ i \in \{ 1,\dots,n \} | v_{i} \in e_{j} \} \right| = 2 \implies \sum_{j=1}^{k} \sum_{i=1}^{n} m_{ij} = \sum_{j = 1}^{k} 2 = 2k = 2 \left| E \right| 
$$
Dunque:
$$
\sum_{v \in V} deg_{G}(v) = 2 \left| E \right| 
$$
### Definizione 17.7
Sia $G=(V,E)$ un grafo finito. Definiamo lo score di $G$, indicandolo col simbolo $score(G)$, come la ennupla ($n:=|V(G)|$) dei gradi dei vertici di $G$, vista a meno di ordinamento.
Lo score si dirà in forma canonica se le sue componenti sono ordinate in modo non decrescente.

### Osservazione (riformulazione della relazione fondamentale dei grafi finiti dato lo score)
Sia $G=(V,E)$ un grafo finito e sia $score(G) = (d_{1},\dots,d_{n})$. Allora:
$$
\frac{\sum_{i=1}^{n} d_{i}}{2} = |E(G)|
$$
### Corollario 17.6 (Lemma delle strette di mano)
In un grafo finito il numero di vertici di grado dispari è pari.

### Dimostrazione
Sia $G=(V,E)$ un grafo finito. Definiamo:
$$
\begin{align}
P &:= \{ v \in V | deg_{G}(v) \text{ pari} \} \\
D &:= \{ v \in V | deg_{G}(v) \text{ dispari} \}
\end{align}
$$
$$
\begin{align}
P \cap D &= \emptyset \\
P \cup D &= V
\end{align}
$$
$$
2|E| = \sum_{v \in V} deg_{G}(v) = \sum_{v\in P} deg_{G}(v) + \sum_{v \in D} deg_{G}(v)
$$
Dunque:
$$
\begin{align}
\underbrace{ \overbrace{ 2|E| }^{ \text{pari} } - \overbrace{ \sum_{v \in P} deg_{G}(v) }^{ \text{pari} } }_{ \text{pari} } = \underbrace{ \sum_{v \in D} \overbrace{ deg_{G}(v) }^{ dispari } }_{ pari }
\end{align}
$$
Siccome è la somma di numeri dispari, allora $|D|$ è pari.

### Osservazione
$$
score(G) = (1,2,2,4,4,5,5,6,7,7)
$$
Il grafo $G$ non può esistere per il lemma delle strette di mano.

### Osservazione
Sia $d = (1,2,2,4,4,5,5,6,7)$.
Se esiste un grafo $G$ con $score(G)=d$ allora $|E(G)| = \frac{1+2+2+4+4+5+5+6+7}{2} = \frac{36}{2} = 18$.

### Proposizione 17.8
Siano $G$ e $G'$ due grafi finiti isomorfi, allora $score(G) = score(G')$.
Attenzione: il viceversa è falso. Dati due score identici non si può dire nulla sull'esistenza di un isomorfismo.

## Grafi 2-connessi e grafi hamiltoniani

### Definizione 17.10
Sia $G=(V,E)$ un grafo con almeno due vertici e sia $v \in V$. Definiamo il grafo $G-v$, detto grafo ottenuto da $G$ cancellato il vertice $v$, ponendo:
$$
\begin{align}
V(G-v) &:= V(G) \setminus \{ v \} \\
E(G-v) &:= \{ e \in E(G) | e \not \ni v \}
\end{align}
$$
### Definzione 17.12
Un grafo $G$ si dice 2-connesso se possiede almeno tre vertici e vale: $\forall v \in V(G), G-v$ è connesso.
In generale si dice $n$-connesso se posseide almeno $n+1$ vertici e vale: $\forall v_1,\dots,v_{n-1} \in V(G), (((G-v_{1})-\dots)-v_{n-1})$ è connesso.

### Lemma 17.14
Ogni grafo 2-connesso è connesso.

### Dimostrazione
Sia $G=(V,E)$ 2-connesso. Vogliamo che $\forall v, w \in V, v\neq w, v,w$ sono congiungibili. Prendiamo $z \in V \setminus \{ v, w \}$. Se togliamo $z$ abbiamo che per definizione $G - z$ è connesso. Siccome $v,w \in V(G- z)$, allora $\exists P$ passeggiata in $G-z$ che congiunge $v, w$. Poiché $G-z$ è un sottografo di $G$, allora $v \sim w$ in $G$ e dunque per l'arbitrarietà di $v, w$, $G$ è connesso.
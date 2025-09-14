### Oss 15.5
Dato un grafo $G = (V, G)$ e $v, w \in V$, diciamo che $v$ è congiungibile a $w$ in $G$ se lo è per cammini o per passeggiate.

### Proposizione 15.6
Sia $G = (V,E)$ un grafo e sia $\sim$ la relazione binaria su $V$ (cioè $\sim \in 2^{V\times V}$) definita ponendo: $\forall v, w \in V$, $v \sim w$ se $v$ è congiungibile a $w$ in $G$. La relazione $\sim$ su $V$ è di equivalenza.
### Dimostrazione
1) $\forall v \in V$, $v \sim v$, poiché $(v)$ è una passeggiata in $G$. (riflessiva)
2) $\forall v, w \in V$, $v \sim w$, ovvero $\exists(v_{0},v_{1},\dots,v_{n})$ passeggiata in $G$ tale che $v_{0} = v$ e $v_{n}=w$. Osserviamo che $(v_{n}, v_{n-1},\dots, v_{0})$ è una passeggiata in $G$ dato che i lati coinvolti sono gli stessi. Dunque anche $w \sim v$.
3) $\forall v,w,z \in V$, $v \sim w$ e $w \sim z$, dunque $\exists(v_{0},v_{1},\dots,v_{n})$ passeggiata in $G$ tale che $v_{0} = v$ e $v_{n}=w$ e $\exists(w_{0},w_{1}, \dots, w_{n})$ passeggiata in $G$ tale che $w_{0}=w$ e $w_{n}=z$. Osserviamo $(v_{0},v_{1},\dots v_{n}, w_{1}, \dots, w_{n})$. Prendeno in rassegna tutte le coppie di vertici e per ipotesi $(v_{i}, v_{i+1})$ è un lato, idem per $(w_{i}, w_{i+1})$, $\forall i \in \{ 0, \dots, n-1 \}$. Inoltre $(v_{n}, w_{1})$ è un lato perché $v_{n}=w_{0}$ e per ipotesi $(w_{0}, w_{1})$ è un lato. Dunque $v \sim z$.
Allora $\sim$ è una relazione di equivalenza.

### Definizione 15.7
Sia $G=(V,E)$ un grafo e sia $\sim$ la relazione di equivalenza su $V$ indotta dalla congiungibilità. Consideriamo la famiglia $\{ V_{i} \}_{i \in \mathcal{I}}$ di tutte le $\sim$-classi di equivalenza $V_{i}$ ed anche i sottografi $G[V_{i}]$ di $G$ indotti da dalle $\sim$-classi $V_{i}$, $\forall i \in \mathcal{I}$.
Questi sottografi $G[V_{i}]$ con $i \in \mathcal{I}$ si dicono componenti connesse di $G$.

#### Esempio
![[esempio_sottografi_connessi|50%]]
$$
\begin{align}
[1]_{\sim}  &= \{ 1,2,3,4,5,6 \} = [2]_{\sim} = [3]_{\sim} = [4]_{\sim} = [5]_{\sim} = [6]_{\sim} \\
[7]_{\sim}  &= \{ 7,8 \} = [8]_{\sim}
\end{align}
$$
Calcoliamo le componenti connesse:
$$
\begin{align}
G[[1]_{\sim}] &= G[\{ 1,2,3,4,5,6 \}] =: G_{1}\\
G[[7]_{\sim}] &= G[\{ 7,8 \}] =: G_{2}
\end{align}
$$
Dunque il grafo $G$ ha due componenti connesse $G_{1}$ e $G_{2}$.
![[esempio_sottografi_connessi2]]
$$
\begin{align}
[a]_{\sim}  &= \{ a,c,e \} \\
[b]_{\sim} &= \{ b, d, f, g \} \\
[h]_{\sim} &= \{ h, i, l \}
\end{align}
$$
Calcoliamo el componenti connesse:
$$
\begin{align}
G_{1} &:= G[[a]_{\sim}] = G[\{ a,c,e \}] \\
G_{2} &:= G[[b]_{\sim}] = G[\{ b, d, f, g \}] \\
G_{3} &:= G[[h]_{\sim}] = G[\{ h, i, l \}]
\end{align}
$$
### Def 15.8
Un grafo $G$ si dice connesso se possiede una sola componentene connessa. Se non lo è si dice sconnesso.

### Osservazione 15.9
1) Un grafo $G$ è connesso se e soltanto se $\forall v,w \in V(G), v \sim w$.
2) Ogni componente connessa $G'$ di un grafo $G$ è un grafo connesso.

Dimostrare la $2$ per casa, l'idea è di prendere $G$ estrarre una componente connessa con $V'$ e $E'$, si vuole dimostrare che prendendo due vertici di $V'$ essi sono congiungibili tramite vertici di $G'$ e non di $G$. Quindi prendendo due vertici in $G'$ la passeggiata tra i due in $G$ combacia con la passeggiata in $G'$. ///

#### Esercizio 15.11
Sia $G$ un grafo e $G'$ un suo sottografo tale che $V(G') = V(G)$. Se $G'$ è connesso allora $G$ lo è.

#### Soluzione
Sia $v,w \in V(G) = V(G')$. Poiché $G'$ è connesso, segue che $\exists P(v_{0},v_{1},..,v_{n})$ passeggiata in $G'$ tale che $v_{0} = v$ e $v_{n}=w$. Si osservi che $E(G') \subset E(G) \implies \forall i \in \{ 0, 1, \dots, n - 1 \}, \{ v_{i}, v_{i+1} \} \in E(G')\subset E(G)$, quindi $P$ è anche una passeggiata in $G$, dunque $G$ è connesso. Nel caso in cui $|V(G)| = 1$ la dimostrazione è banale.

### Proposizione 15.12
Siano $G$ e $G'$ due grafi e sia $f:G\rightarrow G'$ un morfismo. Valgono:
1) Se $v,w\in V(G)$ e $v \sim w$ in $G$ $\implies f(v) \sim f(w)$ in $G'$.
2) Se $f$ è un isomorfismo e $v,w\in G$, allora la seguente equivalenza vale: $v \sim w$ in $G$ $\Longleftrightarrow f(v)\sim f(w)$ in $G'$
Perché nella nozione di morfismo c'è la preservazione dei lati.

### Corollario 15.13
Siano $G$ e $G'$ due grafi isomorfi e siano $\{ G_{i} \}_{i\in \mathcal{I}}$ la famiglia delle componenti connesse di $G$ e $\{ G'_{j}\}_{j \in \mathcal{J}}$ la famiglia delle componenti connesse di $G'$. Allora esiste una bigezione $\phi:\mathcal{I}\rightarrow \mathcal{J}$ tale che $G_{i} \cong G'_{\phi(i)}, \forall i\in \mathcal{I}$.

### Conseguenza del teorema di Eulero
Sia $m > 0$, $\alpha \in (\mathbb{Z} \big/_{m\mathbb{Z}})^{*}$, $\alpha^{\phi(m)} = [1]_{m}$, allora $\alpha^{\phi(m)-1}\cdot \alpha = [1]_{m} \implies \alpha^{-1} = \alpha^{\phi(m)-1}$.

### Def 17.1
Un grafo $G$ si dice grafo finito se possiede un numero finito di vertici, ovvero la cardinalità di $V(G)$ è finita.

### Osservazione
Se $G$ è finito, allora per definizione $V(G)$ è finito e duqnue $\binom{V(G)}{2}$ è finito e dunque $E(G)$ è finito in quanto suo sottoinsieme.
Dunque se $G$ è finito, possiede un numero finito di lati.

### Definizione 17.2
Sia $G=(V,E)$ un grafo finito e sia $v \in V$. Definiamo il grado di $v$ in $G$, che indicheremo con il simbolo $deg_{G}(v)$ ponendo:
$$
deg_{G}(v) := \left| \{ e \in E | v \in e \} \right|  
$$
Dunque il numero di lati di $G$ che escono da $v$.
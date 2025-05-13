## Morfismi ed isomorfismi
### Def 14.7
Siano $G=(V,E)$ e $G'=(V', E')$ due grafi. Una funzione $f:V\rightarrow V'$ si dice morfismo da $G$ in $G'$ se $f$ è iniettiva (altrimenti la nozione di lato viene distrutta) e preserva i lati, ovvero:
$\forall v_{1},v_{2} \in V$, con $v_{1} \neq v_{2}$, $\{ v_{1}, v_{2} \} \in E \implies \{ f(v_{1}), f(v_{2}) \} \in E'$. Ovvero se $e = \{ v_{1},v_{2} \} \in E$, allora $f(e) = \{ f(v_{1}), f(v_{2}) \} \in E'$.
#### Notazione
$$
f(E):= \left\{   f(e) \in \binom{V'}{2} \middle| e \in E  \right\}
$$

Dunque si parla di morfismo $\Longleftrightarrow f(E) \subset E'$.
#### Esempio 14.9
Siano $G$ e $G'$ i seguenti grafi:
![[esempio_morfismo|50%]]
Osserviamo che $V(G) = \{ 1,2,3,4 \}$ e $V(G') = \{ a,b,c,d,e \}$.
Definiamo $f:V(G) \rightarrow V(G')$:
$$
\begin{align}
f:V(G) &\rightarrow V(G') \\
1 &\mapsto d\\
2 &\mapsto b\\
3 &\mapsto c\\
4 &\mapsto e
\end{align}
$$
Guardando la colonna dei valori si capisce che $f$ è iniettiva.
Verifichiamo la condizione $f(E(G)) \subset E(G')$.
$$
\begin{align}
E(G) &\xrightarrow{\text{"}f\ \text{"}} \binom{V(G')}{2} \\
\{ 1,2 \} &\mapsto \{ f(1), f(2) \} = \{ d, b \} \in E(G') \\
\{ 2,3 \} &\mapsto \{ f(2), f(3) \} = \{ b, c \} \in E(G') \\
\{ 3,4 \} &\mapsto \{ f(3), f(4) \} = \{ c, e \} \in E(G') \\
\{ 1,4 \} &\mapsto \{ f(1), f(4) \} = \{ d, e \} \in E(G')
\end{align} \implies f \text{ morfismo}
$$
la $f$ ha apici perché è non è $f$ ma la mappa indotta da essa sui lati.
### Def 14.10
Siano $G$ e $G'$ due grafi e sia $f:V(G) \rightarrow V(G')$ una funzione. Diciamo che $f$ è un isomorfismo da $G$ in $G'$ se:
1) $f$ è bigettiva
2) $f$ è un morfismo da $G$ in $G'$, cioè $f:G \rightarrow G'$ è un morfismo (abuso di notazione).
3) $f^{-1}:V(G')\rightarrow V(G)$ è un morfismo dal grafo $G'$ in $G$, cioè $f^{-1}:G' \rightarrow G$ è un morfismo (abuso di notazione).

Se esiste (almeno) un morfismo da $G$ in $G'$ allora si dice che $G$ è isomorfo a $G'$ e si scrive $G \cong G'$.

Notiamo che per la 2, $f(E) \subset E'$. Invece per la 3 vale che $f^{-1}(E') \subset E$. Dunque $f(f^{-1}(E')) \subset f(E) \Longleftrightarrow E' \subset f(E)$. Siccome $f(E) \subset E'$ e $E' \subset f(E)$, allora $f(E) = E'$.
### Proposizione 14.11
Siano $G = (V, E)$ e $G' = (V', E')$ due grafi. Consideriamo $f:V \rightarrow V'$ una funzione. Allora $f$ è un isomorfismo da $G$ in $G'$ se e soltanto se valgono:
1) $f:V\rightarrow V'$ è una bigezione.
2) $f(E)=E'$

#### Esempio 14.12
Riguardando l'esempio di prima non possono essere isomorfi perché il numero di vertici è diverso.
Consideriamo invece:
![[esempio_isomorfismo|50%]]

$$
\begin{align}
f:\{ 1,2,3,4 \} &\rightarrow \{ b,c,d,e \} \\
1 &\mapsto d \\
2 &\mapsto b \\
3 &\mapsto c \\
4 &\mapsto e
\end{align}
$$
Notiamo che non essendoci ripetizioni sulla colonna dei valori, $f$ è iniettiva. Inoltre la $f$ è surgettiva (e quindi bigettiva), in quanto nella colonna dei valori compaiono tutti i vertici di $G'$.
Vale anche: 
$$
\begin{align}
E(G) &\xrightarrow{\text{"}f\ \text{"}} \binom{V(G')}{2} \\
\{ 1,2 \} &\mapsto \{ d, b \} \in E(G') \\
\{ 2,3 \} &\mapsto \{ b, c \} \in E(G')\\
\{ 3,4 \} &\mapsto \{ c, e \} \in E(G') \\
\{ 1,4 \} &\mapsto \{ d, e \} \in E(G')
\end{align}
$$
Poiché nella colonna di destra (ovvero $f(E(G))$) compaiono elementi di $E(G')$, cioè lati di $G'$, $f$ è un morfismo da $G$ in $G'$. Poichè nella colonna di destra compaiono tutti i lati di $G'$, $f$ è un isomorfismo da $G$ in $G'$ $\implies G \cong G'$.

#### Esempio
Siano $G, G', G''$ tre grafi. Valgono le seguenti proprietà:
1) $G \cong G$ ($\text{id}:V(G)\rightarrow V(G)$ è isomorfismo).
2) $G \cong G' \implies G' \cong G$, se $f:V(G) \rightarrow V(G')$ è isomorfismo allora anche $f^{-1}:V(G')\rightarrow V(G)$ è un isomorfismo.
3) $G \cong G', G'\cong G'' \implies G \cong G''$, se $f:V(G) \rightarrow V(G')$ e $g: V(G') \rightarrow V(G'')$ allora $g \circ f:V(G)\rightarrow V(G'')$ è un isomorfismo.

## Passaggi, cammini e cicli

### Def 15.1
Sia $G = (V, E)$ un grafo. Una successione finita ordinata $(v_{0},v_{1},\dots,v_{n})$ di vertici di $G$ (ovvero $v_{0}, v_{1}, \dots, v_{n} \in V(G)$) si dice:
- Passeggiata in $G$ se $n = 0$, oppure $n \geq 1, \{ v_{i}, v_{i+1} \} \in E, \forall i \in \{ 0,1,\dots,n-1 \}$.
- Cammino in $G$ se è una passeggiata in $G$ e $v_{i} \neq v_{j}, \forall i,j \in \{ 0,1,\dots,n \} : i\neq j$. (Non si può ripassare dallo stesso vertice).
- Ciclo in $G$ se è una passeggiata in $G$ e $n\geq 3$ e $v_{0} = v_{n}$ e $(v_{0}, v_{1}, \dots, v_{n-1})$ è un cammino in $G$.

Se $(v_{0}, v_{1},\dots,v_{n})$ è una passeggiata in $G$, allora $n$ si dice lunghezza della passeggiata, ovvero la lunghezza della passeggiata coincide con il numero di lati che sono stati attraversati.
#### Esemio 15.2
Consideriamo il seguente grafo:
![[esempio_passeggiate|50%]]
- $(2,3,6,2,1)$ è una passeggiata, ma non è né cammino né ciclo.
- $(2,3,4,6,3,2)$ è sempre una passeggiata, ma non è né cammino né ciclo.
- $(2,3,4,6,2)$ è passeggiata, non è un cammino ma è un ciclo.
- $(1,2,4,5)$ non è nemmeno una passeggiata.
- $(1,2,3,6,4,5)$ è una passeggiata ed è un cammino, ma non è un ciclo.
- $(7)$ è una passeggiata ed è un cammino, ma non è un ciclo.
### Def 15.3
Sia $G = (V, E)$ un grafo e siano $v,w \in V$. Diciamo che $v$ è congiungibile a $w$ in $G$ per passeggiate (per cammini) se esiste una passeggiata $(v_{0}, v_{1}, \dots, v_{n})$ (rispettivamente un cammino $(v_{0},v_{1},\dots,v_{n})$) in $G$ tali che $v_{0} = v$ e $v_{n} = w$.

### Proposizione 15.4
Siano $G=(V,E)$ un grafo e siano $v,w \in V$. Allora $v$ è congiungibile a $w$ per cammini se e solo se lo sono per passeggiate.

### Dimostrazione
L'implicazione ($\implies$) è banale in quanto un cammino $(v_{0}, v_{1}, \dots, v_{n})$ in $G$ tale che $v_{0} = v$ e $v_{n} = w$ è anche una passeggiata in $G$ tale che $v_{0} = v$ e $v_{n} = w$, quindi $v$ è congiungibile a $w$ anche per passeggiate.
Supponiamo che $v$ sia congiungibile a $w$ attraverso una passeggiata $Q$ in $G$. Definiamo i seguenti insiemi:
$$
\begin{align}
\mathcal{P} &:= \{ P | P\ \text{passeggiata} (v_{0}, v_{1}, \dots, v_{n})\ \text{in}\ G: v_{0} = v, v_{n}=w\} \\
\mathcal{A} &:= \{ l(P) \in \mathbb{N} | P \in \mathcal{P} \}
\end{align}
$$
dove $l(P)$ è la lunghezza di $P$.
Osserviamo che $\mathcal{P} \neq \emptyset$, in quanto $Q \in \mathcal{P} \implies \mathcal{A}\neq \emptyset$, in quanto $l(Q) \in \mathcal{A}$. Poiché $\mathcal{A}$ è un sottoinsieme non vuoto di $\mathbb{N}$, grazie al teorema di buon ordinamento dei naturali, sappiamo $\exists m := min(\mathcal{A}) \implies \exists P_{0} \in \mathcal{P} : l(P_{0}) = m$. $P_{0}$ è un cammino $(v_{0},v_{1},\dots,v_{n})$ in quanto se non lo fosse, ci sarebbe un $v_{i} = v_{j}$ per qualche $i\neq j$ che potrebbe essere cancellata per ottenere una passeggiata più corta.
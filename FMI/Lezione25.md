### Corollario
Sia $n \geq 1$, $n \in \mathbb{N}$, $d = (d_{1}, \dots, d_{n}) \in \mathbb{N}^{n}$, $1 \leq d_{1} \leq \dots \leq d_{n}$. Allora esiste un albero con score $d$ se e solo se:
$$
n-1 = \frac{1}{2} \sum_{i=1}^{n} d_{i} \qquad (\star \star)
$$
### Dimostrazione
$\implies$) Supponiamo che esista $T = (V,E)$ un albero finito con score $d$. Allora per il teorema di caratterizzazione, $d$ soddisfa la formula di Eulero.
$$
n - 1 = |V| - 1 = |E| = \frac{1}{2} \sum_{v \in V} deg_{T}(v) = \frac{1}{2} \sum_{i=1}^{n} d_{i}
$$
$\impliedby)$ Supponiamo che valga $(\star \star)$. Allora osserviamo che:
- $n = 1 + \frac{1}{2} \sum_{i=1}^{n} d_i, d_{1} \geq 1 \implies n\geq 2$
- $d_{1} = 1$, se non lo fosse, allora $d_{i} \geq 2, \forall i$ e si avrebbe che $2n - 2 = \sum_{i=1}^{n} d_{i} \geq \sum_{i=1}^{n} 2 = 2n$, il che è impossibile.
- $d_{2} = 1$, se non lo fosse, allora $d_{i} \geq 2, \forall i \geq 2$, e si avrebbe che $2n - 2 = d_{1} + \sum_{i=2}^{n} d_{i} \geq 1 + 2(n-1) = 2n - 1$, il che è impossibile.
- Se $d_{i} = 1, \forall i$ allora si avrebbe che $2n - 2 = \sum_{i=1}^{n} 1 = n \Longleftrightarrow 2n-2 =n \Longleftrightarrow n = 2 \implies d=(1,1)$ e in questo caso $d$ è lo score di un grado composto da due vertici e un lato incidente su di essi, che è un albero.

Supponiamo infine che $d$ sia di questa forma:
$$
d = (\underbrace{ 1, \dots,1 }_{ m }, d_{m+1}, \dots, d_{n})
$$
con $d_{m + 1} \geq 2$.
Consideriamo il seguente grafo.
Si crei un grafo segmento con $v_{m+1}$ fino a $v_{n}$. Dobbiamo aggiungere a $v_{m+1}$ $d_{m + 1} - 1$ foglie in modo che il suo grado diventa $d_{m+1}$. Per $v_{m+2}$ bisogna aggiungere $d_{m+2} - 2$ foglie e idem per tutti i vertici fino a $v_{n}$ dove dovranno essere aggiunte $d_{n} - 1$ foglie.
Chiamiamo questo grafo $T$. Allora $T$ è un grafo con $n - m$ vertici $v_{m+1}, \dots, v_{n}$ di grado $d_{m+1}, \dots, d_{n}$ rispettivamente. Gli altri vertici sono foglie per costruzione. Dunque basta verificare che il numero totale di foglie sia $m$.
$$
\begin{align}
\#F &= (d_{m+1} - 1) + (d_{m+2} - 2) + \dots + (d_{n-1}-2) + (d_{n} - 1) \\
 & = \left( \sum_{i= m+1}^{n} d_{i} \right) - 2 - 2((n-1) - (m+1)) \\
 & = \left( \sum_{i= m+ 1}^{n} d_{i} \right) - 2 - 2n + 2m + 4 \\
 & = \left( \sum_{i=1}^{n} d_{i} \right)  - 2n + m + 2 \\
 & = 2(n - 1) - 2n+2 +m \\
 & = m
\end{align}
$$
Infine $T$ è un albero per costruzione (oppure usando la caratterizzazione). Quindi $T$ è un albero con score $d$.
#### Esempi:
Dire se questi vettori sono score di alberi.
1. $d=(2,2,2,2,2,3,3,3,3,4,4)$
2. $d = (0,1,1,2,2,2,4)$
3. $d = (1,1,1,1,1,1,1,1,1,1,1,2,2,4,5,6)$
4. $d=(1,1,1,1,1,1,1,1,2,3,4,5)$

$(1)$ e $(2)$ non possono essere score in quanto il primo non ha almeno due foglie e il secondo è un grafo sconnesso.
Per il $(3)$ bisogna verificare la formula di Eulero:
$$
16 - 1 = \frac{1}{2} 30 
$$
Ma allora la formula di Eulero vale. Costruiamo un albero con tale score:

## Alberi di copertura (Spanning trees)
Sia $G$ un grafo. Un sottografo $T$ di $G$ è un albero di copertura per $G$ se è un albero e $V(T)=V(G)$.
Gli alberi di copertura non sono unici.
### Teorema
Ogni grafo finito e connesso $G$ possiede almeno un albero di copertura.
### Dimostrazione
Definiamo $\mathcal{C} := \{ C \text{ sottografo di } G : C \text{ connesso }, V(C)=V(G) \}$.
Chiaramente $\mathcal{C} \neq \emptyset$ perché $G \in \mathcal{C}$. Definiamo:
$$
S := \{ n \in \mathbb{N} : n = |E(C)| \text{ per un certo } C \in \mathcal{C} \}
$$
Siccome $\mathcal{C} \neq \emptyset \implies S\neq \emptyset$ e dunque per il principio del buono ordinamento, $\exists \bar{n} = min(S)$. Sia $\bar{C} \in \mathcal{C}$ tale che $|E(\bar{C})|= \bar{n}$. Mostriamo che $\bar{C}$ è un albero, se lo facciamo, siccome $V(\bar{C}) = V(G)$ per costruzione, avremo che $\bar{C}$ è un albero di copertura.
Supponiamo per assurdo che $\bar{C}$ non sia un albero. Per l'equivalenza $(1) \Longleftrightarrow (3)$ del teorema di caraterrizzazione degli alberi, deve esistere un lato $e \in E(T)$ tale che $\bar{C} - e = (V(\bar{C}), E(\bar{C}) \setminus \{ e \})$ è connesso. Ma allora:
- $V(\bar{C} - e) = V(\bar{C}) = V(G) \implies \bar{C}-e \in \mathcal{C}$.
- $|E(\bar{C} -e)| = |E(\bar{C}) - \{ e \}| = |E(\bar{C})| - 1 = \bar{n} - 1 < \bar{n}$
Ma ciò è assurdo perché $\bar{n} = min(S)$.
Quindi $\bar{C}$ è un albero.
### Osservazione
Il teorema vale anche per i grafi infiniti.
### Osservazione
Se $G$ ha un albero di copertura allora è connesso.

### Lemma di forzatura alla sconnessione
Siano $n \in \mathbb{N} \setminus \{ 0 \}$, $d =(d_{1}, \dots,d_{n}) \in \mathbb{N}^{n}$. Se vale:
$$
\frac{1}{2} \sum_{i=1}^{n} d_{i} < n-1 \qquad (FS)
$$
allora ogni grafo con score $d$ è sconnesso.
### Dimostrazione
Supponiamo per assurdo che $\exists G=(V,E)$ un grafo finito e connesso con score $d$. Per il teorema, $G$ ammette un albero di copertura $T$. Vale che:
- $V(T)=V(G), |V(T)| - 1 = |E(T)|$
- $T$ è un sottografo di $G$, quindi $E(T) \subset E(G) \implies |E(T)| \leq |E(G)|$.
$$
|E(G)| < |V(G)| - 1 = |V(T)| - 1 = |E(T)| \leq |E(G)|
$$
Perché per ipotesi $|E(G)| = \frac{1}{2} \sum_{i=1}^{n} d_{i} < n - 1 = |V(G)| - 1$.
Risulta che $|E(G)| < |E(G)|$, che è assurdo. Quindi $G$ non è connesso.
Se $(FS)$ non vale, non si può dire nulla circa l'esistenza di grafi connessi/sconnessi con score $d$.

### Lemma di forzatura alla connessione
Siano $n \in \mathbb{N} \setminus \{ 0 \}$, $d = (d_{1}, \dots, d_{n}) \in \mathbb{N}^{n}$ con $d_{1} \leq \dots \leq d_{n}$. Se vale:
$$
d_{1} + d_{n} \geq n - 1\qquad(FC)
$$
allora ogni grafo con score $d$ è connesso.
### Dimostrazione
Supponiamo che esista un grafo $G$ con score $d$. Vediamo che $G$ è connesso.
Se $n= 1 \implies d = (d_{1})$ e $d_{1} = 0 = d_{n}$ e dunque $0+0 = 1-1 =0$. Quindi $(FC)$ vale, infatti $G$ è banalmente connesso.
Se $n \geq 2$, sia $w \in V(G)$ con $deg_{G}(w) = d_{n}$. Mostriamo che ogni vertice di $V(G)$ è collegato a $w$ con un cammino di lunghezza $\leq 2$.
Siano $v_{1}, \dots, v_{d_{n}}$ i vertici adiacenti a $w$. Per loro non c'è nulla da dimostrare.
Sia quindi $v \in V(G) \setminus \{ v_{1}, \dots, v_{d_{n}}, w \}$. Vogliamo mostrare che $v$ è adiacente a uno dei $v_{i}$. Supponiamo che non lo sia, siano $d' = deg_{G}(v) \geq d_{1}$ e $v_{1}', \dots, v_{d'}'$ i vertici adiacenti a $v$.
Chiamiamo $A = \{ v, v_{1}', \dots, v'_{d'} \}$, $B = \{ w, v_{1}, \dots, v_{d_{n}} \}$. Allora $A \cap B = \emptyset$, $A \cup B \subset V(G)$, quindi $n = |V(G)| \geq |A \cup B| = |A| + |B| - |A \cap B| = |A| + |B| = d' + 1 + d_{n}+1 \geq d_{1}+ d_{n} + 2 \geq n - 1 + 2 = n+1$.
Mettendo assieme i pezzi abbiamo trovato che $n \geq n+1$, che è impossibile.
Allora $v$ è adiacente a uno dei $v_{i}$. Dunque $G$ è connesso.
### Osservazione
Se $(FC)$ non vale, non si può dire nulla circa l'esistenza di grafi connessi/sconnessi con score $d$.
### Osservazione
Per entrambi i lemmi bisogna prima verificare che $d$ sia lo score di un grafo. Da soli non assicurano che possa esistere un grafo con score $d$.
### Teorema dello score
Sia $n\geq 2$, $n \in \mathbb{N}$, $d=(d_{1},\dots,d_{n}) \in \mathbb{N}^{n}$ tale che $d_{1} \leq \dots \leq d_{n} \leq n-1$. Definiamo $d'=(d_{1}',\dots,d'_{n-1}) \in \mathbb{N}^{n-1}$ come
$$
d'_{i} = \begin{cases}
d_{i} & i < n - d_{n} \\
d_{i} - 1  &  i \geq n - d_{n}
\end{cases}, \qquad \forall i \in \{ 1, \dots, n - 1 \}
$$
Allora $d$ è lo score di un grafo se e solo se $d'$ è lo score di un grafo.
#### Esercizio
$d = (2,2,2,2,3,3,3,5,6)$ è lo score di un grafo? In caso di risposta affermativa determinare tale grafo.

Svolgimento:
Poiché $9 \geq 2$ e $6 \leq 8 = 9 - 1$, possiamo applicare il teorema dello score.
$$
\begin{array}{c|c|c}
d & (2,2,2,2,3,3,3,5,6) & 6 \leq 9 - 1, 9-6=3 \\
d' & (2,2,1,1,2,2,2,4) = & \\
d' & (1,1,2,2,2,2,2,4) & 4 \leq 8-1, 8-4 =4 \\
d'' & (1,1,2,1,1,1,1) =  &  \\
d'' & (1,1,1,1,1,1,2)
\end{array}
$$
Per il teorema dello score $d$ è lo score di un grafo se solo se $d'$ è lo score di un grafo, ma sempre per il teorema dello score ciò è vero se e solo se $d''$ è anch'esso lo score di un grafo.
Poiché $d''$ è lo score del seguente grafo $G''$, allora anche $d$ è lo score di un grafo $G$:

```tikz
\usepackage{tikz-cd} 
\begin{document} 
\begin{tikzcd}
1 & 1 & 1 & 2 & 1 & 1 & 1 \arrow[no head, from=1-1, to=1-2] \arrow[no head, from=1-3, to=1-4] \arrow[no head, from=1-5, to=1-4] \arrow[no head, from=1-6, to=1-7]
\end{tikzcd} 
\end{document} 
```
Step 1: costruiamo un grafo $D'$ con score $d'$.
Consideriamo le variazioni di grado da $d'$ a $d''$.
$$
\begin{array} \\
d' & = (&1,&1,&2,&2,&2,&2,&2,&4) \\
 &&&  &\downarrow & \downarrow & \downarrow & \downarrow&& \\
d'' & = (&1,&1,&1,&1,&1,&1,&2)&
\end{array}
$$
Aggiungiamo a $G''$ un nuovo vertice di grado $4$ che colleghiamo a $4$ vertici di grado $1$ di $G''$.

```tikz
\usepackage{tikz-cd} 
\begin{document} 
\begin{tikzcd}
& 1 & 2 & 1 \\ 2 & 2 && 2 & 2 \\ && 4 \arrow[no head, from=1-2, to=1-3] \arrow[no head, from=1-4, to=1-3] \arrow[no head, from=2-1, to=2-2] \arrow[no head, from=2-1, to=3-3] \arrow[no head, from=2-2, to=3-3] \arrow[no head, from=2-4, to=2-5] \arrow[no head, from=2-5, to=3-3] \arrow[no head, from=3-3, to=2-4]
\end{tikzcd} 
\end{document} 
```


Step 2: ripetiamo per $d$ e $d'$:
$$
\begin{array} \\
d & = (&2,&2,&2,&2,&3,&3,&3,&5,&6)\\
 & &\downarrow&\downarrow&& & \downarrow & \downarrow&\downarrow&\downarrow \\
d' & = (&1,&1,&2,&2,&2,&2,&2,&4) 
\end{array}
$$
Aggiungiamo a $G'$ un nuovo vertice di grado $6$ che colleghiamo con 6 vertici di $G'$ come segue (2 vertici di grado $1$, 3 di grado $2$ e 1 di grado $4$)


```tikz
\usepackage{tikz-cd} 
\begin{document} 
\begin{tikzcd}
& 1 & 2 & 1 \\ && 6 \\ 2 & 3 && 3 & 2 \\ && 5 \arrow[no head, from=1-2, to=1-3] \arrow[no head, from=1-2, to=2-3] \arrow[no head, from=1-4, to=1-3] \arrow[no head, from=1-4, to=2-3] \arrow[no head, from=2-3, to=1-3] \arrow[no head, from=2-3, to=3-4] \arrow[no head, from=2-3, to=4-3] \arrow[no head, from=3-1, to=3-2] \arrow[no head, from=3-2, to=2-3] \arrow[no head, from=3-2, to=4-3] \arrow[no head, from=3-4, to=3-5] \arrow[no head, from=3-5, to=4-3] \arrow[no head, from=4-3, to=3-1] \arrow[no head, from=4-3, to=3-4]
\end{tikzcd} 
\end{document} 
```

Abbiamo quindi ottenuto un grafo $G$ di score $d$.
### Definizione
Un grafo è un albero se è connesso e senza cicli. Una foresta è un grafo senza cicli.
Se $G$ è un albero $\implies$ $G$ è una foresta.

#### Esempi
```tikz
\usepackage{tikz-cd}
\begin{document}
\begin{tikzcd}
\bullet && \bullet & \bullet & {} & \bullet && \bullet && \bullet && \bullet & \bullet \\ &&&&&& \bullet &&& \bullet & \bullet & \bullet & \bullet \arrow[no head, from=1-3, to=1-4] \arrow[no head, from=1-6, to=2-7] \arrow[no head, from=1-10, to=2-11] \arrow[no head, from=2-7, to=1-8] \arrow[no head, from=2-10, to=2-11] \arrow[no head, from=2-11, to=1-12] \arrow[no head, from=2-11, to=2-12] \arrow[no head, from=2-12, to=2-13] \arrow[no head, from=2-13, to=1-13]
\end{tikzcd}
\end{document}
```
#### Esercizio
Un grafo $F$ è una foresta se e solo se ogni sua componente connessa è un albero.

Svolgimento:
$\implies)$ Sia $G$ una componente connessa di $F.$ $G$ è connesso per costruzione e se per assurdo contenesse un ciclo, allora anche $F$ conterrebbe un ciclo e questo è impossibile, per cui $G$ è un albero.
$\impliedby$) Supponiamo per assurdo che esista un ciclo $(v_{0}, \dots, v_{n})$ in $F$ con $v_{0} = v_{n}$, allora $\forall i\in \{ 1, \dots, n - 1 \}$, $v_{i}$ è connesso a $v_{0} \implies v_{i}$ appartiene alla componente connessa $G$ di $v_{0}$. Allora $(v_{0}, \dots, v_{n})$ sarebbe un ciclo in $G$, che per ipotesi è un albero. Ciò è assurdo  e dunque il ciclo $(v_{0}, \dots, v_{n})$ non può esistere in $F$, dunque $F$ è una foresta.

### Teorema
Sia $T=(V,E)$ un grafo. Sono equivalenti i seguenti fatti:
1. $T$ è un albero
2. $\forall v, v' \in V, \exists!$ un cammino da $v$ a $v'$.
3. $T$ è connesso e $\forall e \in E, T-e = (V, E \setminus \{ e \})$ è sconnesso.
4. $T$ è senza cicli e $\forall e \in \binom{V}{2} \setminus E$, il grado $T+e=(V, E \cup \{ e \})$  ha almeno un ciclo.

### Lemma
Sia $T = (V, E)$ un albero finito con $|V| \geq 2$, allora $T$ ha almeno due foglie.

### Dimostrazione
Sia $\mathcal{P}:=\{ \text{cammini di }T \}$. Vale che $\mathcal{P}\neq \emptyset$, poiché $|V| \geq 2$ e $T$ è connesso per ipotesi. Inoltre $\mathcal{P}$ è finito perché $T$ è finito. Allora $\exists$ un cammino $(v_{0}, \dots, v_{k})$ di lunghezza massima $k$.
Osserviamo che $v_{0}$ e $v_{k}$ sono foglie. Supponiamo per assurdo che $deg_{T}(v_{0}) \geq 2 \implies \exists v' \in V \setminus \{ v_{0}, v_{1} \}$ tale che $v'$ è adiacente a $v_{0}$. Vale:
1. se $v' = v_{i}$ per qualche $i \in \{ 2, \dots,k \}$, si avrebbe un ciclo $(v_{i}, v_{0}, v_{1}, \dots, v_{i})$ ma questo è assurdo.
2. se $v' \neq v_{i}, \forall i \in \{ 2, \dots, k \}$, allora $(v', v_{0}, \dots, v_{k})$ sarebbe un cammino di lunghezza $k+1$ e ciò è assurdo.

### Osservazione
Se $T$ non è finito il lemma non vale.

#### Esercizio
Sia $G$ un grafo connesso, sia $v \in V(G)$ una foglia. Allora $G - v$ è connesso.

Svolgimento:
Vediamo che $\forall v_{1},v_{2}$ in $V(G-v) = V(G) \setminus \{ v \}, v_{1} \neq v_{2}$, esiste un cammino da $v_{1}$ a $v_{2}$. Tale cammino non passa per $v$ (altrimenti $deg_{T}(v) \geq 2$). Allora $v_{1},v_{2}$ sono connessi in $G-v$.

#### Esercizio
Sia $T=(V,E)$ albero, $v \in V$ foglia $\implies$ $T-v$ è un albero.

Svolgimento:
$T-v$ è connesso per l'esercizio precedente.
$T-v$ è senza cicli perché sottografo di un grafo senza cicli $\implies$ $T-v$ è un albero.

### Teorema di caraterizzazione degli alberi finiti
Sia $T=(V,E)$ un grafo finito, allora sono equivalenti i seguenti fatti:
1. $T$ è un albero
2. $\forall v, v' \in V, \exists!$ un cammino da $v$ a $v'$.
3. $T$ è connesso e $\forall e \in E, T-e = (V, E \setminus \{ e \})$ è sconnesso.
4. $T$ è senza cicli e $\forall e \in \binom{V}{2} \setminus E$, il grado $T+e=(V, E \cup \{ e \})$  ha almeno un ciclo.
5. $T$ è connesso e soddisfa la formula di Eulero: $|V| - 1 = |E|$.

Dimostrazione che $1) \implies 5)$: procediamo per induzione sulla cardinalità di $V$, $|V| \geq 1$.
Passo base: $|V|=1$:
L'unico albero esistente con $|V|=1$ è un singolo vertice isolato, dunque vale che $|E| = 0 = |V| - 1$.
Passo induttivo: sia $T$ un albero con $|V| \geq 2$ e supponiamo che $1) \implies 5)$ sia vero $\forall$ albero con $|V|-1$.
Poiché $T$ è finito e connesso e $|V|\geq 2$ per il lemma $T$ ha almeno due foglie. Sia $v \in V$ una foglia. Allora per il precedente esercizio $T-v$ è albero e soddisfa la formula di Eulero.
$$
|V(T-v)| - 1 = |E(T-v)|
$$
Sappiamo che $|V(T-v)| = |V(T)| - 1$ e $|E(T-v)| = |E(T)| - 1$ poiché $v$ è foglia. Ma allora:
$$
\begin{align}
(|V(T)| - 1) -1 &= |E(T)| - 1 \\
|V(T)| - 1 &= |E(T)|
\end{align}
$$
ma allora $T$ soddisfa la $5)$. Inoltre è connesso perché è un albero. Il passo induttivo è stato risolto perciò per il principio di induzione $1) \implies 5)$ è vera.

Dimostrazione che $5) \implies 1)$: procediamo per induzione su $|V|\geq 1$.
Passo base: $|V| = 1$:
L'unico grafo connesso $T$, con $|V|=1$ è un singolo vertice isolato, dunque $T$ è un albero.
Passo induttivo: sia $T$ un grafo connesso che soddisfa la formula di Eulero e con $|V| \geq 2$. Suppponiamo che $5) \implies 1)$ sia vera per ogni grafo finito con $|V| - 1$ vertici (ipotesi induttiva). Dimostriamo che $T$ è un albero.
$T$ ha sicuramente almeno una foglia, se così non fosse allora $\forall v\in V, deg_{T}(v) \geq 2$ e dunque:
$$
\underbrace{ 2|V| - 2 = 2|E| }_{ \text{formula di Eulero} }\geq \sum_{v\in V} deg_{T}(v) \geq \sum_{v \in V}2=2|V|
$$
Ma questo è assurdo perché vorrebbe dire che $2|V|-2\geq 2|V|$. Dunque $\exists v \in V$ foglia.
Consideriamo il grafo $T-v$. $T-v$ è connesso per via dell'esercizio precedente e soddisfa la formula di Eulero poiché $T$ la soddisfa, infatti $|V(T-v)| = |V(T)|-1$, $|E(T-v)|=|E(T)|-1$ poiché $v$ è foglia.
Poiché $|V(T-v)| = |V(T)|-1$, per ipotesi induttiva $T-v$ è un albero. Ma allora anche $T$ è un albero, infatti sicuramente è connesso per ipotesi.
Inoltre $T$ non ha cicli, perché se esistesse un ciclo $(v_{0},\dots,v_{k})$ in $T$ allora, siccome $deg_{T}(v_{i})\geq 2, \forall i \in \{ 0, \dots,k \}$, il ciclo non passerebbe per $v$. Dunque si avrebbe un ciclo in $T-v$, ma ciò è impossibile perché $T-v$ è albero.

Grazie al principio di induzione, $5) \implies 1)$ per ogni grafo finito.

### Osservazione
Esistono grafi non connessi che soddisfano la formula di Eulero, quindi la connessione in $5)$ è una condizione necessaria.

### Corollario
Siano $n \in \mathbb{N} \setminus \{ 0 \}$ e $d=(d_{1},\dots,d_{n})\in \mathbb{N}^{n}$ con $1\leq d_{1}\leq\dots \leq d_{n}$. Esiste un alberoo con score $d \Longleftrightarrow$ vale:
$$
n-1= \frac{1}{2} \sum_{i=1}^{n} d_{i}
$$
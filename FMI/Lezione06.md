### * Teorema 3.11 (Teorema dei cassetti)
Siano $X, Y$ due insiemi e siano $n, m \in \mathbb{N} : n < m, X \sim I_{n}, Y \sim I_{m}$. Allora ogni funzione $f:Y\rightarrow X$ non è iniettiva.

### Dimostrazione
Procediamo per induzione su $n\geq 0$: $P(n):=(\text{"enunciato con n variabile"})$. Quindi $P(n)$ è un'affermazione singola che in realtà nasconde infinite affermazioni, per via l'arbitrarietà di $m$.

Base dell'induzione $n = 0$.
Siano $X, Y$ due insiemi e sia $m \in \mathbb{N}$, tale che $0 < m, X \sim I_{0}, Y \sim I_{m} \implies X = \emptyset, Y \neq \emptyset$. Osserviamo che $X^{Y} = \emptyset^{Y}=\emptyset$. Dunque non esistono funzioni $f:Y\rightarrow X$, dunque non esistono neanche iniettive.

Passo induttivo $n\geq 0, n \implies n + 1$.
Assumiamo $P(n)$ vera per qualche $n \in \mathbb{N}$ (Ipotesi induttiva).
Dobbiamo dimostrare che $P(n+1)$ sia vera. 
Siano $X, Y$ due insiemi e sia $m \in \mathbb{N}$ tale che $n + 1 < m, X \sim I_{n+1}, Y \sim I_{m}$.
Dobbiamo provare che $\not\exists f: Y \rightarrow X$ iniettiva.

Sia $g:I_{n+1} \rightarrow X$ una bigezione e sia $x_{n} := g(n)$.
Poniamo $X':=X\setminus\{ x_{n} \}$. Definiamo $g^{\star}:I_{n}\rightarrow X'$ ponendo $g^{\star}(a):=g(a), \forall a \in I_{n}$. Dunque $g^{\star}$ è una bigezione $\implies$ $X' \sim I_{n}$.

Supponiamo che esista $f:Y \rightarrow X$ iniettiva.
Distinguiamo due casi:
1. $f(Y) \not\ni x_{n}$, ovvero $f(Y)\subset X'$.
2. $f(Y) \ni x_{n}$.
Caso 1:
$f(Y)\subset X'$. Posso definire $f^{\star}:Y \rightarrow X'$ tale che $f^{\star}(y):=f(y),\forall y \in Y$. Allora $f^{\star}$ è iniettiva. Ricordando che $m > n+1>n$, sappiamo per certo che $f^{\star}$ non esiste e dunque $f$ non esiste.
Caso 2:
$f(Y) \ni x_{n}$. Poiché $f$ è iniettiva per ipotesi, $\exists!y_{n}\in Y : f(y_{n})=x_{n}$.
Se $Y':=Y\setminus \{ y_{n} \}$, allora $Y' \sim I_{m - 1}$ e possiamo determinare $f^{\star}:Y' \rightarrow X'$ ponendo $f^{\star}(y):=f(y), \forall y \in Y'$. Dunque $f^{\star}$ è iniettiva. Siccome $m>n+1 \Longleftrightarrow m - 1 > n$, l'ipotesi induttiva ci dice che questo è impossibile, quindi $f^{\star}$ non esiste, quindi $f$ non esiste.
Abbiamo dunque dimostrato che $P(n+1)$.
Il passo induttivo è stato fatto, dunque grazie al principio di induzione l'enunciato del teorema è vera $\forall n\in \mathbb{N}$.

### * Corolloario 4.1
Siano $X, Y$ due insiemi e siano $n, m \in \mathbb{N}$ tali che $X \sim I_{n}$ e $Y \sim I_{m}$. Allora $X \sim Y \Longleftrightarrow n = m$.
In particolare, se $\exists n' \in \mathbb{N}$ tale che $X \sim I_{n'}$ allora $n = n'$.
### Dimostrazione $\impliedby$
Se $n = m$, allora $X \sim I_{n}=I_{m} \sim Y \implies X \sim Y$. Componendo le due bigezioni si ottiene una bigezione da $X$ a $Y$.
### Dimostrazione $\implies$
Supponiamo che $X \sim Y$. Dobbiamo dimostrare che $n = m$. 
Supponiamo che $n \neq m$. A meno di scambiare $n$ con $m$ e $X$ con $Y$, possiamo suppore anche che $n < m$: per l'ipotesi sappiamo che $\exists f:I_{m} \sim Y\xrightarrow[\sim]{} X \sim I_{n}$ e dalle ipotesi sappiamo che $n < m$, ma ciò è impossibile per il lemma dei cassetti $\implies n = m$.
Se $X \sim I_{n'}$, allora $I_{n} \sim X \sim I_{n'}$ e le due composizioni si possono comporre $\implies I_{n} \sim I_{n'} \implies n = n'$.
### Definizione
Se $X$ è finito e $X \sim I_{n}$ per qualche $n \in \mathbb{N}$, allora $n$ è unico e $\underbrace{ |X| }_{ \text{insieme cardinale associato a X} } := I_{n}$
Si scrive spesso che la cardinalità $|X|$ di $X$ è $n$: $|X| = n$.
### Proposizione 4.4
Sia $X$ un insieme finito e sia $Y \subset X$. Allora $Y$ è finito e $|Y| \leq |X|$. Inoltre se $Y$ è un sottoinsieme proprio di $X$ allora $|Y| < |X|$.
### Dimostrazione 
Sia $n:=|X|$. Procediamo per induzione su $n$.

Base induzione $n=0$.
Sia $|X| = 0$, ovvero $X=\emptyset \implies Y=\emptyset \implies |Y| = 0 \leq 0 = |X|$.
La base è dimostrata.

Passo induttivo $n \geq 0, n \implies n+1$.
Assumo l'asserto vero per $n$ e lo dimostro per $n + 1$.
Sia $X$ un insieme finito con $|X| = n+1$ e sia $Y$ un suo sottoinsieme.
Usando lo stesso trucco del lemma dei cassetti, poniamo $X' := X \setminus \{ x_{n} \} \implies |X'| = n + 1 - 1= n$.
Distinguiamo due possibilità:
1. $Y \not\ni x_{n}$
2. $Y \ni x_{n}$
Se vale (1), allora $Y \subset X'$. Poiché $|X'| = n$, per ipotesi induttiva, $Y$ è finito e $|Y| \leq |X'| = n < n + 1 \implies |Y| < |X|$. Abbiamo dimostrato anche la seconda parte dell'enunciato perché $x_{n} \in X, x_{n} \not\in Y$.

Se vale (2), poniamo $Y' := Y \setminus \{ x_{n} \}, X' := X \setminus \{ x_{n} \} \implies |X'| = n$. Per l'ipotesi induttiva $Y'$ è finito e $|Y'| \leq |X'| = n \implies|X| = |X'| + 1 \geq |Y| = |Y'| + 1$.
Se $Y \subsetneq X$, allora $Y' \subsetneq X'$ (perchè è stato tolto $x_{n}$, che era comune ad entrambi) $\implies |Y'| < |X'| \Longleftrightarrow |Y| = |Y'| + 1 < |X'|+1 = |X|$.
Il passo induttivo è stato fatto e dunque grazie al principio di induzione l'asserto è vero $\forall n \in \mathbb{N}$.

Poiché $X$ finito, $Y \subsetneq X \implies |Y| < |X|$, abbiamo il seguente corollario.
### Corollario
Un'insieme finito non è equipotente a nessuno dei suoi sottoinsiemi propri.
### Corollario
L'insieme $\mathbb{N}$ dei numeri naturali è infinito.
### Dimostrazione
$$
\begin{align}
f: \mathbb{N} &\xrightarrow[\sim]{}  \mathbb{N}\setminus \{ 0 \} \\
\mathbb{N} \ni n &\mapsto succ(n) \in \mathbb{N} \setminus \{ 0 \}
\end{align}
$$
$f$ è una bigezione $\implies$ $\mathbb{N}$ è infinito.
## Assioma di buon ordinamento
### Definizione 7.2
Sia $X$ un insieme e sia $\leq$ un ordinamento parziale di $X$. Consideriamo $A$ un sottoinsieme di $X$. Diciamo che $z \in A$ è un minimo di $A$ in $(X, \leq)$ se $\forall x \in A, z \leq x$.

### Osservazione
Se $A$ ammette un minimo $z$, allora tale minimo è unico. Infatti se $z' \in A$ fosse un altro minimo varrebbe:
$$
z \leq z', z' \leq z
$$
Per la proprietà antisimmetrica dell'ordinamento ciò implica che $z = z'$. Se $z$ è minimo allora $z := min(A)$.

#### Esempio
- $\emptyset$ non ha minimo
- $(\mathbb{R}, \leq)$, $A = (0,1) \implies A$ non ha minimo in $(\mathbb{R}, \leq)$

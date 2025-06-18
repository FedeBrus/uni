## Teorema 2.10 Principio di induzione di prima forma
Sia $\{ P(n) \}_{n\in \mathbb{N}}$ una famiglia di proposizioni indicizzata su $\mathbb{N}$. Supponiamo che:
1. $P(0)$ è vera
2. $\forall n \in \mathbb{N}, P(n) \implies P(succ(n))$ è vera, ovvero devo verificare che se $P(n)$ è vera allora anche $P(succ(n))$ è vera.

Allora $P(n)$ è vera $\forall n \in \mathbb{N}$.
### Definizione 3.6 Ordinamento
Sia $X$ un insieme non vuoto e sia $\mathcal{R}$ una relazione tra $X$ e $X$, ovvero una relazione binaria su $X$, ovvero $\mathcal{R} \subset X \times X$. Diciamo che $\mathcal{R}$ è un ordinamento parziale di $X$ se valgono:
1. $x\mathcal{R}x, \forall x \in X$, riflessiva
2. $x\mathcal{R}y$ e $y\mathcal{R}x$, per qualche $x,y \in X\implies x = y$, antisimmetrica
3. $x\mathcal{R}y$ e $y\mathcal{R}z$, per qualche $x,y,z \in X \implies x\mathcal{R}z$, transitiva

Se in più vale anche 
1. $\forall x,y \in X$, $x\mathcal{R}y$ o $y\mathcal{R}x$, totalità
allora $\mathcal{R}$ si dice ordinamento totale di $X$. Inoltre $(X, \mathcal{R})$ si dice insieme parzialmente (totalmente) ordinato se $\mathcal{R}$ è un ordinamento parziale (totale) di $X$.

### Definizione 3.3 
Definiamo la relazione binaria $\leq$ su $X$ ovvero $\leq \subset \mathbb{N}\times \mathbb{N}$ ponendo:
$$
n \leq m \text{ se } \exists k \in \mathbb{N} : n+k = m
$$
## Assioma di buon ordinamento
### Definizione 7.2
Sia $X$ un insieme e sia $\leq$ un ordinamento parziale di $X$. Consideriamo $A$ un sottoinsieme di $X$. Diciamo che $z \in A$ è un minimo di $A$ in $(X, \leq)$ se $\forall x \in A, z \leq x$.
### Osservazione
Se $A$ ammette un minimo $z$, allora tale minimo è unico. Infatti se $z' \in A$ fosse un altro minimo varrebbe:
$$
z \leq z', z' \leq z
$$
Per la proprietà antisimmetrica dell'ordinamento ciò implica che $z = z'$. Se $z$ è minimo allora $z := min(A)$.
### Definzione (7.3)
Un insieme $(X, \leq)$ totalmente ordinato si dice ben ordinato se ogni sottoinsieme non vuoto $A$ di $X$, ammette il minimo. In questo caso di dice che $\leq$ è un buon ordinamento su $X$.
## Teorema 3.5
Considerando $(\mathbb{N}, \leq)$ è un insieme totalmente ordinato.
### Dimostrazione
Sia $A$ un sottoinsieme di $\mathbb{N}$ senza minimo. Definiamo $B:= \mathbb{N} \setminus A$. Dobbiamo provare che $B = \mathbb{N}$.

Dimostriamo per induzione su $n \in \mathbb{N}$ che vale:
$$
P(n) := \left( \{ 0,1,\dots, n \} \subset B \right)
$$
Se $P(n)$ fosse vera $\forall n\in \mathbb{N}$, allora $n \in \{ 0,1,\dots,n \} \subset B, \forall n \in \mathbb{N} \implies B = \mathbb{N} \Longleftrightarrow A = \emptyset$.

Base dell'induzione, $n = 0$:
Dobbiamo provare che $\{ 0 \} \subset B \Longleftrightarrow 0 \in B \Longleftrightarrow 0 \not\in A$. La condizione $0 \not\in A$ è verificata, altrimenti $0 \in A$ e quindi $0$ sarebbe il minimo di $A$ in quanto è addirittura il minimo di $\mathbb{N}$. Segue che $0 \in B$ e la base dell'induzione è verificata.

Passo induttivo, $n \geq 0, n \implies  n+1$:
Per ipotesi induttiva sappiamo che $A \subset  \{ n+1, n+2, \dots \}$ poiché sicura $\{ 0,1, \dots, n \} \cap A = \emptyset$. Osserviamo che $n+1 \not\in A$, altrimenti $n+1=min(A)$, che è sicuramente falso. Se $n+1 \not\in A \implies n+1 \in B \implies \{ 0,1,\dots,n,n+1 \} \subset B$.

Il passo induttivo è stato fatto e quindi grazie al principio di induzione la $P(n)$ vera, $\forall n \in \mathbb{N} \implies B = \mathbb{N} \Longleftrightarrow A = \emptyset \implies (\mathbb{N}, \leq)$ è ben ordinato.
## Teorema 7.5 Principio di induzione di seconda forma
Sia $\{ P(n) \}_{n \in \mathbb{N}}$ una famiglia di proposizioni indicizzata su $\mathbb{N}$.
Se:
1. (Base dell'induzione) $P(0)$ è vera.
2. (Passo induttivo di seconda forma) Se $n > 0$ e se $P(k)$ è vera $\forall k \in \mathbb{N}$ tale che $0\leq k <n$, allora $P(n)$ è vera.

Allora $P(n), \forall n \in \mathbb{N}$.
### Dimostrazione
Sia $A:=\{ n \in \mathbb{N} | P(n) \text{ falsa} \}$.
Dobbiamo provare che $A = \emptyset$.
Supponiamo che $A \neq \emptyset$.
Poiché $A$ è un sottoinsieme di $\mathbb{N}$ ammette minimo $m = min(A) \in A$.
Per la base dell'induzione sappiamo che $0 \not\in A \implies m > 0$.
Inoltre $\forall k \in \{ 0, \dots, m-1 \}, P(k)\text{ vera}$. Ma per l'ipotesi sappiamo che allora anche $P(m)$ è vera, ma allora $m \not\in A$.
Ma questo è assurdo, dunque $A = \emptyset$.

---
## Teorema $\exists!$ del quoziente e del resto della divisione euclidea
Sia $\mathbb{Z} := \{ \dots,-2, -1, 0, 1, 2, \dots \}$ l'insieme dei numeri interi.
Siano $n, m \in \mathbb{Z}$ con $m \neq 0$. Allora $\exists!q,r \in \mathbb{Z}$ tali che:
$$
(\star) \begin{cases}
n = qm+r \\
0 \leq r < |m|
\end{cases}
$$
### Dimostrazione (esistenza di $q$ e $r$)
Supponiamo che $n \geq 0$ e $m > 0$. Fissiamo $m > 0$ Procediamo per induzione di seconda forma su $n \in \mathbb{N}$.
$$
P(n) := \left( \exists q,r \in \mathbb{N} \text{ con } (\star) \text{ vera} \right) 
$$
Base induzione, $n = 0$:
Vale:
$$
\begin{cases}
0 = 0m+0 \\
0 \leq 0 < m
\end{cases}
$$
Basta porre $q := 0$ e $r:= 0$ e $(\star)_{0}$ è verificata.

Passo induttivo di seconda forma, $n>0, (\forall k, 0 \leq k<n) \implies n$:
Per ipotesi induttiva assumiamo che $(\star)_{k}$ sia vera $\forall k \in \mathbb{N}, 0 \leq k<n$, con $n>0$.
Dobbiamo dimostrare che vale $(\star)_{n}$. 
Sia $n>0$. 
Se $n < m$, allora $n = 0m+n$ e $0\leq n <m$. In questo è sufficiente porre $q:=0$ e $r:=n$.
Se $n \geq m$, allora $k := n - m \implies  0 \leq k < n$. Quindi con $k$ si può utilizzare l'ipotesi induttiva di seconda forma.
Dunque $\exists q,r \in \mathbb{N}$ tali che $(\star)_{k}$:
$$
(\star)_{k} = \begin{cases}
k = qm +r \\
0 \leq r < m
\end{cases}
\implies
\begin{cases}
n - m = qm +r \\
0 \leq r < m
\end{cases}
\Longleftrightarrow
\begin{cases}
n = (q + 1)m + r \\
0 \leq r < m
\end{cases}
\Longleftrightarrow
P(n) \text{ vera }
$$
Il passo induttivo è stato fatto, dunque grazie al principio di induzione di seconda forma, $(\star)_{n}$ è vera $\forall n \in \mathbb{N}$.

Consideriamo $n < 0, m > 0$
Applichiamo il caso precedente a $-n > 0$ e $m > 0$.
$$
\begin{cases}
-n = qm + r \\
0 \leq r < m
\end{cases}
\Longleftrightarrow
\begin{cases}
n = -qm -r \\
0 \leq r < m
\end{cases}
$$
Se $r = 0$, allora $n = (-q)m + 0$ e $0 \leq 0 < m$.
Se $r > 0$, vale:
$$
n = (-q)m - r = (-q)m - m + m - r = (-q)m - m + (m - r) = (-q - 1)m + (m - r)
$$
Dunque $n = (-q - 1)m + (m - r)$ e $0 < m - r < m$.

Ora consideriamo i casi dove $m < 0$.
Dobbiamo eseguire la divisione di $n \in \mathbb{Z}$ per $m < 0$. Eseguiamo prima la divisione tra $n$ per $-m > 0$:
$$
\begin{cases}
n = q(-m) + r \\
0 \leq r < -m = |m|
\end{cases}
\Longleftrightarrow
\begin{cases}
n = (-q)m + r \\
0 \leq r < |m|
\end{cases}
$$
### Dimostrazione unicità di $q$ e $r$
Siano $n, m \in \mathbb{Z}, m \neq 0$ e siano $q, q', r, r' \in \mathbb{Z}$ tali che:
$$
\begin{cases}
n = qm +r \\
0 \leq r < |m|
\end{cases}
\qquad
\begin{cases}
n = q'm + r' \\
0 \leq r' < |m|
\end{cases}
$$
Vale:
$$
\begin{align}
qm + r = n = q'm + r' &\implies qm +r = q'm + r'  \\
&\Longleftrightarrow m(q - q') = r' - r  \\
&\implies |q - q'||m| = |r - r'| < |m|  \\
&\implies  |q-q'||m| < |m|  \\
&\implies  |q - q'| < 1  \\
&\implies  |q-q'| = 0  \\
&\implies  q = q'
\end{align}
$$


Ma allora:
$$
(q-q')m = r' - r \Longleftrightarrow  0 = r'-r \Longleftrightarrow  r = r'
$$
---
## Insiemi finiti
Per ogni $n\in \mathbb{N} \setminus \{ 0 \}$, indichiamo con $I_{n}:= \{ 0,1,\dots,n-1 \}$ e $I_{0}:=\emptyset$
### Definizione 3.10
Diciamo che un insieme $X$ è finito se $\exists n \in \mathbb{N}:X$ è equipotente a $I_{n}$, ovvero $X \sim I_{n}$ ovvero $\exists f:X \rightarrow I_{n}$ bigezione. Il numero di elementi di un insieme finito è univocamente determinato.
$$
|X| = I_{n}
$$
ma spesso si usa questa notazione:
$$
|X| = n
$$
## Teorema 3.11 (Teorema dei cassetti)
Siano $X, Y$ due insiemi e siano $n, m \in \mathbb{N} : n < m, X \sim I_{n}, Y \sim I_{m}$. Allora ogni funzione $f:Y\rightarrow X$ non è iniettiva.

### Dimostrazione
Procediamo per induzione su $n\geq0$.

Base dell'induzione $n = 0$.
Siano $X, Y$ due insiemi e sia $m \in \mathbb{N}$, tale che $0 < m, X \sim I_{0}, Y \sim I_{m} \implies X = \emptyset, Y \neq \emptyset$. Osserviamo che $X^{Y} = \emptyset^{Y}=\emptyset$. Dunque non esistono funzioni $f:Y\rightarrow X$, dunque non esistono neanche iniettive.

Passo induttivo $n\geq 0, n \implies n + 1$.
Siano $X, Y$ due insiemi e sia $m \in \mathbb{N}$ tale che $n + 1 < m, X \sim I_{n+1}, Y \sim I_{m}$.
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
### Proposizione 4.4
Sia $X$ un insieme finito e sia $Y \subset X$. Allora $Y$ è finito e $|Y| \leq |X|$. Inoltre se $Y$ è un sottoinsieme proprio di $X$ allora $|Y| < |X|$.
### Dimostrazione 
Sia $n:=|X|$. Procediamo per induzione su $n$.

Base induzione $n=0$.
Sia $|X| = 0$, ovvero $X=\emptyset \implies Y=\emptyset \implies |Y| = 0 \leq 0 = |X|$.
La base è dimostrata.

Passo induttivo $n \geq 0, n \implies n+1$.
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

--- 
## * Definizione 9.1
Siano $n, m \in \mathbb{Z}$. Diciamo che $n$ è un divisore di $m$, oppure $m$ è un multiplo di $n$, scriveremo $n | m$ che si legge "n divide m" se $\exists k \in \mathbb{Z}$ tale che $nk = m$.
Se ciò è falso, $n \not{|}\ \    m$
### Proposizione 9.3
Siano $n, m , q \in \mathbb{Z}$. Valgono:
1. $n | m$ e $m | q \implies n | q$
2. $n | m$ e $m | n \Longleftrightarrow n = m$ oppure $n = -m$
### Definzione 9.5 e (9.7)
Siano $n, m \in \mathbb{Z}$ non entrambi nulli e sia $d \in \mathbb{Z}$.
Si dice che $d$ è un Massimo Comun Divisore tra $n$ e $m$ se $d>0$ e valgono:
1. $d | n$ e $d|m$
2. Se $c \in \mathbb{Z}$ tale che $c|n$ e $c|m$ allora $c|d$.

### Proposizione 9.6
Siano $n,m \in \mathbb{Z}$ non entrambi nulli e supponiamo che $d, d'$ siano due MCD tra $n$ e $m$, allora $d = d'$.

### Dimostrazione
Sappiamo che $d > 0$ e $d'>0$.
Mettendo assieme la prima condizone per $d$ e la seconda per $d'$ e con $c = d$ $\implies  d|d'$.
Mettendo assieme la prima condizone per $d'$ e la seconda per $d$ e con $c = d'$ $\implies  d'|d$.
Dunque $d = d'$ oppure $d = -d'$, ma è vera soltanto la prima perché sono entrambi positivi.
Dunque $d = d'$.

### Lemma utile
Siano $c,n,m \in \mathbb{Z}$ tali che $c|n$ e $c|m$, allora, $\forall x,y \in \mathbb{Z}$, $c | (xn + ym)$.

### Dimostrazione
$c|m$ e $c|n$ $\Longleftrightarrow$ $\exists k,h \in \mathbb{Z}$ tali che $n = ch$ e $m = ck$.
Dunque $xn + ym =xch+yck = c(xh + yk) \implies  c | xn + ym$.

## Teorema 9.8
Per ogni coppia $n,m \in \mathbb{Z}$ non entrambi nulli, esiste ed è unico il MCD, che verrà indicato con $(n,m):= MCD(m, m)$.
### Dimostrazione
L'unicità è dimsotrata nella proposizione 9.6.
Proviamo l'esistenza.
Definiamo il seguente insieme.
$$
S := \{ s \in \mathbb{N} \setminus \{ 0 \} | s = xn + ym \text{ con } x,y \in \mathbb{Z} \} 
$$
$S \neq \emptyset$, perché is può scegliere $x = sign(n), y = sign(m)$, dunque $s = sign(n)n + sign(m)m = |n| + |m| > 0$.
Grazie al teorema di buon ordinamento, sappiamo che $S$ ammette minimo, $d:=min(S)$. Dobbiamo provare che $d$ soddisfa le condzioni del MCD.
Valgono le seguenti:
Sia $c \in \mathbb{Z}$ tale che $c|n$ e $c|m$. Dobbiamo provare che $c|d$. Poiché $d \in S$, esistono $x,y \in \mathbb{Z}$ tali che $d =xn + ym \implies c|d$, per via del lemma utile.
Dobbiamo provare che $d|n$ e $d|m$. Eseguiamo la divisione euclidea di $n$ per $d > 0$.
$$
\begin{cases}
n = qd + r \\
0 \leq r < d
\end{cases}
$$
Dobbiamo provare che $r = 0$. Supponiamo per assurdo $r>0, (0< r< d)$, vale:
$$
0 < r = n - qd = n - q(xn + ym) = (1- qx)n + (-qy) m
$$
Ma $(1-qx) \in \mathbb{Z}$ e $(-qy) \in \mathbb{Z}$ e quindi $r \in S$. $d$ è il minimo di $S$ ma abbiamo ipotizzato che $r < d$. Quindi è assurdo. Dunque $r = 0$.
Se $r = 0$:
$$
\begin{cases}
n = qd \\
0 \leq r < d
\end{cases}
\implies
d|n
$$
Lo stesso ragionamento si può fare con $m$ e dunque $d|m$. Perciò $d = (n, m)$.
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
### Definizione 7.2
Sia $X$ un insieme e sia $\leq$ un ordinamento parziale di $X$. Consideriamo $A$ un sottoinsieme di $X$. Diciamo che $z \in A$ è un minimo di $A$ in $(X, \leq)$ se $\forall x \in A, z \leq x$.
### Definzione (7.3)
Un insieme $(X, \leq)$ totalmente ordinato si dice ben ordinato se ogni sottoinsieme non vuoto $A$ di $X$, ammette il minimo. In questo caso di dice che $\leq$ è un buon ordinamento su $X$.
## Teorema 3.5
Considerando $(\mathbb{N}, \leq)$ è un insieme ben ordinato.
### Dimostrazione
Sia $A$ un sottoinsieme di $\mathbb{N}$ senza minimo. Definiamo $B:= \mathbb{N} \setminus A$. Dobbiamo provare che $B = \mathbb{N}$ e che di conseguenza $A=\emptyset$.

Dimostriamo per induzione su $n \in \mathbb{N}$ che vale:
$$
P(n) := \left( \{ 0,1,\dots, n \} \subset B \right)
$$
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

Supponiamo per assurdo che esista $f:Y \rightarrow X$ iniettiva.
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
### Proposizione 9.12
Siano $n,m \in \mathbb{Z}$ non entrambi nulli e sia $d := (n, m)$. Vale:
$$
\left(\frac{n}{d}, \frac{m}{d} \right) = 1
$$
## Il minimo comune multiplo
### Definzione 10.3
Dati $n, m \in \mathbb{Z}$ e dato $M\in \mathbb{Z}$ con $M \geq 0$, diciamo che $M$ è un minimo comune multiplo (mcm), tra $n$ e $m$ se:
1. $n|M$ e $m|M$
2. Se $c \in \mathbb{Z}$ tale che $n|c$ e $m|c$, allora $M|c$
### Osservazione
Se un tale $M$ esiste allora è unico. Infatti supponiamo che $\exists M, M' \in \mathbb{Z}$ tali che $M\geq 0, M' \geq 0$ e sia $M$ che $M'$ soddisfino (1) e (2) di 10.3.
- (1) per $M$ $\implies$ (2) per $M'$ con $c = M$ $\implies M'|M$
- (1) per $M'$$\implies$ (2) per $M$ con $c = M'$ $\implies$ $M|M'$
Ma allora $M=M'$ oppure $M=-M'$, ma solo la prima può essere vera per l'ipotesi di non negatività, dunque $M = M'$.

### Proposizione 10.1
Siano $n, m \in \mathbb{Z}$ non entrambi nulli e coprimi. Sia $q \in \mathbb{Z}$.
Valgono:
1. $n | mq \implies n|q$
2. $n|q$ e $m|q$ $\implies nm|q$
### * Teorema 10.4
Siano $n,m\in \mathbb{Z}$. Allora $\exists![n,m]$. Inoltre se:
- $n = m = 0 \implies[n,m] = 0$
- $n, m$ non sono entrambi nulli, allora vale che $[n,m]= \frac{|n|\cdot |m|}{(n,m)}$
### Dimostrazione
Se $n = m =0$. Intuitivamente $M = 0$. Vediamo se soddisfa le proprietà di mcm.
1. $0|0$ e $0|0$, vero.
2. Se $c \in \mathbb{Z}$ tale che $0|c$ e $0|c$, perciò $c = 0$, allora $M = 0|c= 0$, vero.
Supponiamo che $n$ e $m$ siano entrambi non nulli. Ha senso dunque, parlare di $(n, m)$.
Osserviamo che $(n, m)|n$ e $(n, m)|m$, ovvero $\exists n',m' \in \mathbb{Z}$ tali che $n = (n,m)n'$ e $m = (n,m)m'$.
Definiamo $M:= \frac{|n||m|}{(n,m)}$. Assumiamo che $n,m \geq 0$.
Allora $M \geq 0$.
Verifichiamo che vale (1): $n|M$ e $m|M$.
Vale:
$$
M = \frac{nm}{(n,m)} = \frac{n'(n,m)m'(n,m)}{(n,m)} = n'm'(n,m) \in \mathbb{N} = n'm = nm'
$$
Dunque $M = n'm \implies m|M$. Inoltre $M = nm' \implies n|M$.
Verifichiamo (2): Se $c\in \mathbb{Z}$ tali che $n|c$ e $m|c$, allora $M|c$.
Osserviamo che:
- $(n,m)|n$ e $n|c$ $\implies$ $(n,m)|c \Longleftrightarrow \exists c'\in \mathbb{Z}$  tale che $c = c'(n,m)$. La stessa procedura vale per $m$.
- $\left( \frac{n}{(n,m)}, \frac{m}{(n,m)} \right) = 1 = (n',m')$
- $n|c \Longleftrightarrow \exists k \in \mathbb{Z}$ tale che $c = kn$. $c'(n,m) = c = kn =kn'(n,m) \implies c'(n,m) =kn'(n,m)$. Siccome $(n, m) \neq 0$ per definizione.
Dunque $c' = kn' \implies n'|c'$. La stessa procedura vale per $m$.

Siccome $(n',m')=1$ e $n'|c'$ e $m'|c'$, per la 10.1 $n'm'|c' \implies M=n'm'(n,m)|c'(n,m) = c$. Dunque $M|c$.

---
### Definizione 9.4 (p25)
Un numero $p \in \mathbb{Z}$ si dice primo se $p \geq 2$ e possiede solo i quattro divisori banali, ovvero $\pm 1, \pm p$.

## * Teorema fondamentale dell'aritmetica 10.5
Ogni $n \geq 2, n \in \mathbb{N}$ può essere "fattorizzato in numeri primi", ovvero esistono $p_{1},p_{2},\dots,p_{a}$ numeri primi eventualmente ripetuti per qualche $a \in \mathbb{N} \setminus \{ 0 \}$ tali che $n = p_{1}p_{2} \dots p_{a}$. Tale fattorizzazione è unica a meno di riordinamento dei fattori primi, ovvero se esiste un'altra famiglia finita $q_{1},q_{2},\dots,q_{b}$ numeri primi eventualmente ripetuti per qualche $b \in \mathbb{N} \setminus \{ 0 \}$ tali che $n = q_{1}q_{2}\dots q_{b}$, allora $a = b$ e $\exists$ una bigezione $\phi:\{ 1, \dots ,b \} \rightarrow \{ 1,\dots, a \}$ tale che $q_{i} = p_{\phi(i)}, \forall i \in \{ 1,\dots, b \}$.

### Dimostrazione esistenza
Procediamo per induzione di seconda forma shiftato a $2$.

Base dell'induzione: $n = 2$.
Ma $2$ è primo, difatti $2 \geq 2$, $\pm 1, \pm 2$ sono i suoi soli divisori. Quindi $a = 1$ e $p_{1}=2$ $\implies$ $n = 2 = p_{1}$.

Passo induttivo: ($n > 2$, $(2 \leq k < n) \implies n)$.
Ipotesi induttiva: Sia dato $n \geq 2, n\in \mathbb{N}$. Assumiamo di saper fattorizzare tutti i naturali $k$ tali che $2 \leq k\leq n-1$.

Dobbiamo provare che siamo in grado di fattorizzare anche $n$.
Se $n$ è primo, allora $a = 1, p_{1}=n \implies n = p_{1}$.
Se $n$ non è primo, ovvero $n = d_{1}d_{2}$. $d_{1}, d_{2}\neq 0,1,n$ sicuramente. Inoltre uno dei due non può essere maggiore di $n$, perché siccome sicuramente sono maggiori di $1$, $d_{1}d_{2}>n$ ma questo è assurdo. Dunque $2 \leq d_{1} < n$ e $2 \leq d_{2} < n$.
Per ipotesi induttiva $\exists (p_{1},\dots,p_{a})$ primi eventualmente ripetutti e $\exists (p_{a+1},\dots,p_{a+b})$ primi eventualmente ripetuti tali che $d_{1} = p_{1}p_{2} \dots p_{a}$ e $d_{2} = p_{a+1}p_{a+2} \dots p_{a+b}$. Ma allora:
$$
n = d_{1}d_{2} = p_{1}p_{2}\dots p_{a}p_{a+1}p_{a+2}\dots p_{a+b}
$$
Quindi $n$ è prodotto di numeri primi eventualmente ripetuti.
Dunque il passo induttivo è stato fatto. Segue che, grazie al principio di induzione di seconda forma, l'asserto è vero $\forall n \geq 2$.

### Dimostrazione unicità
Supponiamo che $\exists (p_{1},p_{2},\dots,p_{a})$ e $(q_{1},q_{2},\dots,q_{b})$ primi eventualmente ripetuti tali che:
$$
p_{1}p_{2}\dots p_{a} = q_{1}q_{2}\dots q_{b}
$$
con $a \leq b$. Allora val che $a=b$ e, a meno di riordinarli, $p_{i}=q_{i}, \forall i \in \{ 1, \dots, a \}$.
Tutto ciò è $P(a)$.
Procediamo per induzione di prima forma su $a\geq 1$.

Base dell'induzione: $a = 1$.
Siano $p_{1}$ e $q_{1},\dots,q_{b}$ primi eventualmente ripetuti con $b\geq 1$ e $p_{1} = q_{1} \dots q_{b}$. Dobbiamo provare che $b = a$. Supponiamo che $b \geq 2$.
$$
p_{1} = q_{1}q_{2}\dots q_{b}
$$
$q_{1}$ è primo quindi $q_{1} \geq 2$. $q_{2}\dots q_{b} \geq q_{1} \geq 2$. Ma allora l'uguaglianza è impossibile, perché $p_{1}$ ammette solo divisori banali, che non possono essere $\pm 1$ poiché $q_{1},q_{2} \geq 2$. Dunque $b=1 \implies p_{1}=q_{1}$.

Passo induttivo: $a \geq 1, a \implies a+1$.
Ipotesi induttiva: supponiamo $a\geq 1$ e supponiamo che la seguente affermazione sia vera: se $p_{1},\dots,p_{a}$ e $q_{1},\dots,q_{b}$ primi eventualmente ripetuti tali che $a \leq b$ e $p_{1}\dots p_{a} = q_{1}\dots q_{b}$, allora $a = b$ e meno di riordinamento $p_{i} = q_{i}, \forall i \in \{ 1, \dots, a \}$.
Dobbiamo provare la stessa affermazione con $a + 1$ al posto di $a$.
Supponiamo che $p_{1},\dots,p_{a},p_{a+1}$ e $q_{1},\dots,q_{b}$ siano numeri primi tali che $a+1 \leq b$ e $p_{1}\dots p_{a}p_{a+1}=q_{1}\dots q_{b}$. Dobbiamo provare che $a+1 = b$ e, a meno di riordinamento, $p_{i}=q_{i}, \forall i \in \{ 1, \dots, a, a+1 \}$.

Osserviamo che:
$p_{a+1}|p_{1}\dots p_{a}p_{a+1}=q_{1}\dots q_{b} \implies p_{a+1}|q_{1}\dots q_{b}\implies$ a meno di riordinamento dei vari $q_{i}$, possiamo supporre che $p_{a+1}|q_{b}$. In quanto primo, i divisori positivi di $q_{b}$ sono $1$ o $q_{b}$, ma un numero primo deve essere $\geq 2$ per definizione. Quindi $p_{a+1}=q_{b}$.
Dunque $p_{1}\dots p_{a}p_{a+1} = q_{1}\dots q_{b-1}p_{a+1}$ $\implies$ $p_{1}\dots p_{a} = q_{1}\dots q_{b-1}$. Siccome $a \leq b-1$ perché per ipotesi $a+1 \leq b$ possiamo applicare l'ipotesi induttiva.
Quindi $a = b-1$ e, a meno di riordinamento, $p_{i}=q_{i}, \forall i \in \{ 1, \dots, a \}$. Dunque $a+1 = b$ e le corrispondenze tra $p$ e $q$ sono date dal passo induttivo fino ad $a$ e $a+1$ è stato risolto.
Dunque il passo induttivo è stato fatto. Grazie al principio di induzione, l'asserto è vero $\forall a\geq 1 \implies$ c'è unicità di fattorizzazione in numeri primi $\forall n\geq 2$.

### * Corollario 10.6
L'insieme dei numeri primi è infinito.

---

## Teorema cinese del resto
Siano $n, m > 0$ e siano $a, b \in \mathbb{Z}$. Consideriamo il seguente sistema di congruenze:
$$
\begin{cases}
x \in \mathbb{Z} \\
x \equiv a \ (\text{mod}\ n) \\
x \equiv b \ (\text{mod}\ m)
\end{cases}
\Longleftrightarrow
\begin{cases}
x \in \mathbb{Z} \\
[x]_{n} = [a]_{n} \\
[x]_{m} = [b]_{m}
\end{cases}
$$
Sia $S$ l'insieme delle soluzioni, ovvero:
$$
S := \{ x \in \mathbb{Z} | x \equiv a \ (\text{mod}\ n), x \equiv b \ (\text{mod}\ m) \}
$$
Allora $S \neq \emptyset$, ossia il sistema è compatibile, se e soltanto se $(n,m) | b-a$.
Supponiamo che tale condizione sia verificata, ovvero $S\neq \emptyset$. Sia $c\in S$. Allora:
$$
S = [c]_{[n, m]} = \{ c + k[n,m] \in \mathbb{Z} | k \in \mathbb{Z}\} \subset \mathbb{Z}
$$
### Dimostrazione compatibilità
Dobbiamo trovare che $S \neq \emptyset \Longleftrightarrow (n,m) |a -b$.
$\implies$) Supponiamo che $S \neq \emptyset$, scegliamo $c \in S$, ovvero $c \equiv a\ \left( \text{mod}\ n \right)$ e $c \equiv b\ \left( \text{mod}\ m \right)$.
$$
\begin{cases}
c \in \mathbb{Z} \\
c \equiv a \ (\text{mod}\ n) \\
c \equiv b \ (\text{mod}\ m)
\end{cases}
\Longleftrightarrow
\begin{cases}
c \in \mathbb{Z} \\
\exists k\in \mathbb{Z} : c = a+kn \\
\exists h\in \mathbb{Z} : c = b+hm \\
\end{cases}
$$
In particolare vale che $a+kn = c = b+hm \Longleftrightarrow a-b = -kn+hm$.
Poiché $(n,m)|n$ e $(n,m)|m$, grazie al lemma utile, $(n,m)|-kn+hm=a-b$.
$\impliedby$) Supponiamo che $(n,m)|a-b$, ovvero $\exists k\in \mathbb{Z}$ tale che $a-b = k(n,m)$ (da chiamare (1)).
Se applichiamo l'algoritmo di Euclide ad $n$ e $m$ con sostituzione a ritroso: $\exists r,s \in \mathbb{Z}$ tali che $(n,m) = rn+sm$ (da chiamare (2)).
Dalla (1) e dalla (2) segue che:
$$
a-b = k(rn + sm) = krn +ksm
$$
Dunque $a-b = krn +ksm \Longleftrightarrow a-krn = b+ksm =: c$. Allora $c \in S$, perché è vero che $c \equiv a\ (\text{mod}\ n)$ e $c \equiv b\ (\text{mod}\ m)$.

### Calcoliamo $S$
Assumiamo che $S\neq \emptyset$ ovvero $(n,m)|a-b$ con $c \in S$.
Dobbiamo provare che $S = [c]_{[n,m]} \subset \mathbb{Z}$.
Proviamo che $S \subset [c]_{[n,m]}$. Sia $c' \in S$. 
$c \in S$ e $c' \in S$. Vale:
$$
\begin{align}
c &= a + kn, k \in \mathbb{Z} \\
c &= b + hm, h \in \mathbb{Z} \\
c' &= a + k'n, k' \in \mathbb{Z} \\
c' &= b + h'm, h' \in \mathbb{Z}
\end{align}
$$
Allora $c'-c = a +k'n-(a+kn)=n(k'-k)$, quindi $n|c'-c$.
Allora $c'-c = b +h'm-(b+hm)=m(h'-h)$, quindi $m|c'-c$.
Ma allora per definizione di mcm: $[n,m]|c'-c \Longleftrightarrow c' \equiv c\ (\text{mod}\ [n,m])\Longleftrightarrow c' \in[c]_{[n,m]}$.

Proviamo che $S \supset [c]_{[n,m]}$. Sia $c' \in [c]_{[n,m]}$.
Quindi per definizione $c' = c + k[n,m], k \in \mathbb{Z}$. Valgono:
$[c']_{n} = [c+k[n,m]]_{n} = [c]_{n}+ [k]_{n}[[n,m]]_{n}$
Ma siccome $c$ è soluzione, per la scrittura alternativa del sistema abbiamo che:
$$
\begin{align}
[c']_{n} &= [c+k[n,m]]_{n}  \\
&= [c]_{n}+ [k]_{n}[[n,m]]_{n}  \\
& = [a]_{n} + [k]_{n}[0]_{n} \\
& = [a]_{n}
\end{align}
$$
Allo stesso modo:
$$
\begin{align}
[c']_{m} &= [c+k[n,m]]_{m}  \\
&= [c]_{m}+ [k]_{m}[[n,m]]_{m}  \\
& = [b]_{m} + [k]_{m}[0]_{m} \\
& = [b]_{m}
\end{align}
$$
Dunque $c' \in S$.

---
### Lemma 13.4
Dati $\alpha, \beta \in \left(\mathbb{Z} \big/_{n\mathbb{Z}} \right)^{*}$, valgono:
- $\alpha \beta \in \left(\mathbb{Z} \big/_{n\mathbb{Z}} \right)^{*}$ e $(\alpha \beta)^{-1} = \alpha^{-1}\beta^{-1} = \beta^{-1}\alpha^{-1}$
- $\alpha^{-1} \in \left(\mathbb{Z} \big/_{n\mathbb{Z}} \right)^{*}$ e $(\alpha^{-1})^{-1} = \alpha$

### * Teorema 13.5 (Teorema di Fermat-Eulero)
Sia $n > 0$. Per ogni $\alpha \in (\mathbb{Z} \big/ _{n \mathbb{Z}})^{*}$, vale:
$$
\alpha^{\phi(n)} = [1]_{n} \text{ in } \left( \mathbb{Z} \big/_{n\mathbb{Z}} \right)^{*}
$$
Equivalentemente, per ogni $a \in \mathbb{Z}$ tale che $(a, n) = 1$ (quindi $[a]_{n} \in \left( \mathbb{Z} \big/_{n\mathbb{Z}} \right)^{*}$, $[a]_{n}^{\phi(n)} = [a^{\phi(n)}]_{n}= [1]_{n}$):
$$
a^{\phi(n)} \equiv 1\ (\text{mod}\ n) \text{ su } \mathbb{Z}
$$
### Dimostrazione
Sia $\alpha \in (\mathbb{Z} \big/_{n\mathbb{Z}})^{*}$. Consideriamo:
$$
\begin{align}
L_{\alpha} : (\mathbb{Z} \big/_{n\mathbb{Z}})^{*} &\rightarrow (\mathbb{Z} \big/_{n\mathbb{Z}})^{*} \\
L_{\alpha} : \beta &\mapsto \alpha \beta
\end{align}
$$
ovvero $L_{\alpha}(\beta):=\alpha \beta, \forall \beta \in (\mathbb{Z} \big/ _{n\mathbb{Z}})^{*}$. Con il lemma precedente proviamo che $L_{\alpha}$ è iniettiva.
Siano $\beta_{1}, \beta_{2} \in (\mathbb{Z} \big/ _{n\mathbb{Z}})^{*}$ tale che $L_{\alpha}(\beta_{1}) = L_{\alpha}(\beta_{2})$.
$L_{\alpha}(\beta_{1}) = \alpha \beta_{1}$ e $L_{\alpha}(\beta_{2})=\alpha \beta_{2}$. Siccome $L_{\alpha}$ è ben definita allora: 
$$
\begin{align}
L_{\alpha}(\beta_{1}) &= L_{\alpha}(\beta_{2}) \\
\alpha \beta_{1}  & = \alpha \beta_{2} \\
&\Downarrow \\
\alpha^{-1}\alpha \beta_{1}  & = \alpha^{-1}\alpha \beta_{2}  \\
[1]_{n}\beta_{1} & = [1]_{n} \beta_{2} \\
 & \Downarrow \\
\beta_{1} &= \beta_{2}
\end{align}
$$
Si ha che $\left| (\mathbb{Z} \big/ _{n \mathbb{Z}})^{*} \right| = \left| L_{\alpha} (\mathbb{Z} \big/ _{n\mathbb{Z}})^{*} \right|$ per via del lemma dei cassetti.
Siccome è un insieme finito, $L_{\alpha}$ è anche surgettiva, perciò essendo anche iniettiva è una bigezione.

Segue che $L_{\alpha}$ è una permutazione di $(\mathbb{Z} \big/ _{n\mathbb{Z}})^{*}$. Dunque se $(\mathbb{Z} \big/ _{n\mathbb{Z}})^{*}=\{ \beta_{1}, \beta_{2}, \dots, \beta_{k} \}$ con $k = \phi(n)$, allora $\{ \alpha \beta_{1}, \alpha \beta_{2}, \dots, \alpha \beta_{k} \} = \{ \beta_{1}, \beta_{2}, \dots, \beta_{k} \}$.
Poiché sono gli stessi elementi eventualmente permutati di $\mathbb{Z} \big/_{n\mathbb{Z}}$ (e quindi $(\mathbb{Z} \big/ _{n\mathbb{Z}})^{*})$ e ha un prodotto associativo e commutativo, vale:
$$
\beta_{1} \beta_{2}\dots \beta_{k} = L_{\alpha}(\beta_{1})L_{\alpha}(\beta_{2})\dots L_{\alpha}(\beta_{k}) = \alpha \beta_{1} \alpha \beta_{2}\dots \alpha \beta_{k} = \alpha^{k} \beta_{1} \beta_{2} \dots \beta_{k}
$$
Definiamo $\gamma:= \beta_{1}\beta_{2}\dots \beta_{k} \in (\mathbb{Z} \big/ _{n\mathbb{Z}})^{*}$ grazie al lemma 13.4.
Dunque $\gamma = \alpha^{k}\gamma \implies [1]_{n} = \gamma \gamma^{-1} = \alpha^{k}(\gamma \gamma^{-1})=\alpha^{k}[1]_{n}=\alpha^{k} \implies \alpha^{k}=[1]_{n}$ e quindi $\alpha^{\phi(n)} = [1]_{n}$.

### * Teorema 13.7 (Prop 13.11) (Teorema fondamentale della crittografia RSA)
Siano $n>0$ e $c > 0$ tali che $(c, \phi(n))=1$ (o equivalentemente vuol dire che $[c]_{\phi(n)}$ è invertibile in $\mathbb{Z} \big / _{\phi(n) \mathbb{Z}}$). Sia inoltre $d > 0$ tali che $d \in [c]_{\phi(n)}^{-1}$. Allora l'applicazione $P_{c}: \left( \mathbb{Z} \big/_{n\mathbb{Z}} \right)^{*} \rightarrow \left( \mathbb{Z} \big/_{n\mathbb{Z}} \right)^{*}$ definita ponendo:
$$
P_{c}(\alpha) := \alpha^{c}, \forall \alpha \in \left( \mathbb{Z} \big/_{n\mathbb{Z}} \right) ^{*}
$$
è un'applicazione invertibile e $P_{c}^{-1} = P_{d}$.
### Dimostrazione
Bisogna far vedere che:
$$
(P_{d} \circ P_{c}) = id_{\left( \mathbb{Z} \big/_{n\mathbb{Z}} \right) ^{*}} \text{ e } (P_{c} \circ P_{d}) = id_{\left( \mathbb{Z} \big/_{n\mathbb{Z}} \right) ^{*}}
$$
Vale:
$$
\forall a \in \left( \mathbb{Z} \big/_{n\mathbb{Z}} \right) ^{*}, P_{d}(P_{c}(\alpha)) = P_{d}(\alpha^{c}) = (\alpha^{c})^{d} = \alpha^{cd}
$$
Poiché $d \in [c]_{\phi(n)}^{-1}$, vale:
$$
[d]_{\phi(n)} [c]_{\phi(n)} = [1]_{\phi(n)} \Longleftrightarrow [dc]_{\phi(n)} = [1]_{\phi(n)} \Longleftrightarrow dc \equiv 1\ (\text{mod}\ \phi(n)) \Longleftrightarrow dc = 1 + k\phi(n), k \in \mathbb{Z}
$$
Ma allora:
$$
dc - 1 = k\phi(n) \geq 0
$$
Poiché $d > 0$ e $c > 0$ allora $dc \geq 1$ e $dc - 1 \geq 0$. Ma quindi $k$ non potrebbe essere negativo, perché $\phi(n)$ è sempre positivo. Dunque $k \geq 0$.
Tornando al passaggio precedente:
$$
\alpha^{cd} = \alpha^{1+k\phi(n)} = \alpha \cdot \alpha^{\phi(n)k} = \alpha(\alpha^{\phi(n)})^{k}
$$
Questo passaggio si può fare perché $k \geq 0$ e per Fermat-Eulero:
$$
\alpha ([1]_{n})^{k} = \alpha[1^{k}]_{n} = \alpha [1]_{n} = \alpha
$$
La dimostrazione per $P_{c}(P_{d}(\beta))$ è analoga, poiché gli esponenti $d$ e $c$ possono essere scambiati per la commutività.
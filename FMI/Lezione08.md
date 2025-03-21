### Definizione 9.1
Siano $n, m \in \mathbb{Z}$. Diciamo che $n$ è un divisore di $m$, oppure $m$ è un multiplo di $n$, scriveremo $n | m$ che si legge "n divide m" se $\exists k \in \mathbb{Z}$ tale che $nk = m$.
Se ciò è falso, $n \not{|}\ \    m$

#### Esercizio 9.2
1. $\forall n \in \mathbb{Z}, n | 0$ vera, in quanto $n \cdot 0 = 0$ con $k = 0$.
2. $\forall n \in \mathbb{Z} \setminus \{ 0 \}, 0 | n$ falsa, in quanto $\forall k \in \mathbb{Z}, k \cdot 0 = 0 \neq n$.
3. $\pm 1 | n$, ovvero $1|n$ e $-1|n$, vera, in quanto $(\pm 1)(\pm n) = n$, con $k = \pm n$.
4. Dalla precedente vale anche che $\pm n | n$.

### Proposizione 9.3
Siano $n, m , q \in \mathbb{Z}$. Valgono:
1. $n | m$ e $m | q \implies n | q$
2. $n | m$ e $m | n \Longleftrightarrow n = m$ oppure $n = -m$

### Dimostrazione 1)
$\exists k, h \in \mathbb{Z}$ tali che $m = nk, q=mh=(nk)h = n(kh) \implies n|q$
### Dimostrazione 2)
$\exists k, h \in \mathbb{Z}$ tali che $m = nk, n = mh = (nk)h \implies n = nkh \Longleftrightarrow n(1-kh) = 0 \Longleftrightarrow$ o $n = 0$ o $(1-kh) = 0$.
Se $n = 0$, allora $m = 0k = 0$, quindi $n = m = 0$.
Se $1-kh = 0 \Longleftrightarrow kh = 1 \Longleftrightarrow$ $k = h = 1$ oppure $k = h = -1$.
Se $k = h = 1 \implies m=n$.
Se $k = h = - 1 \implies  m = -n$.

### Definziione 9.5 e (9.7)
Siano $n, m \in \mathbb{Z}$ non entrambi nulli e sia $d \in \mathbb{Z}$.
Si dice che $d$ è un Massimo Comun Divisore tra $n$ e $m$ se $d>0$ e valgono:
1. $d | n$ e $d|m$
2. Se $c \in \mathbb{Z}$ tale che $c|n$ e $c|m$ allora $c|d$.

### Proposizione 9.6
Siano $n,m \in \mathbb{Z}$ non entrambi nulli e supponiamo che $d, d'$ siano due MCD tra $n$ e $m$, allora $d = d'$.

### Dimostrazione
Sappiamo che $d > 0$ e $d'>0$.
Mettendo assieme la prima condzione per $d$ e la seconda per $d'$ e con $c = d$ $\implies  d|d'$.
Mettendo assieme la prima condzione per $d'$ e la seconda per $d$ e con $c = d'$ $\implies  d'|d$.
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
\begin{cases}
d|n
\end{cases}
$$
Lo stesso ragionamento si può fare con $m$ e dunque $d|m$. Perciò $d = (n, m)$.

(XXX) INPUT:
- $n, m \in \mathbb{Z}$ non entrambi nulli
- $S:=\{ s \in \mathbb{Z} | s > 0, s =xn+ym \text{ per qualche } x,y \in \mathbb{Z} \}$
- $d:= min(S)$

Ma $S$ è infinito, quindi non si può mettere in macchina.

### Corollario 9.8
Siano $n,m \in \mathbb{Z}$ non entrambi nulli, allora vale che $(n,m) = xn +ym$ per qualche $x, y \in \mathbb{Z}$.

### Osservazione 9.8
$n, m \in \mathbb{Z}$ non entrambi nulli. 
1) Osserviamo che la nozione di divisibilità non dipende dal segno: $d|n \Longleftrightarrow \exists k\in \mathbb{Z} : n=kd \Longleftrightarrow n=(-k)(-d)\Longleftrightarrow -d|n$
ma se $n = kd \Longleftrightarrow - n = (-k)d = k(-d)$ e quindi $d|-n$ e $-d | -n$.
Dunque se $d|n$ segue che $d|-n, -d|n, -d|-n$.
Dunque $(n,m)=(-n,m)=(n, -m)=(-n, -m)=(|n|, |m|)$.
2) Siccome $(n, m) > 0$, $c|n$ e $c|m$ $\implies$ $c|(n,m)$ $\implies$ $(n, m) = max \{ c \in \mathbb{Z} | \ c|n  \text{ e } c | m \}$.
3) $(n, 0) = (|n|, 0) = max\{ x \in \mathbb{Z} | \ c | |n| \text{ e } c | 0 \} = max\{ x \in \mathbb{Z} | \ c | |n| \} = |n| \implies (n,0) = |n|$.

### Definizione 9.10
Dati $n,m\in \mathbb{Z}$ non entrambi nulli, diciamo che $n$ e $m$ sono coprimi oppure primi tra loro se $(n,m) = 1$.

### Osservazione 9.11
Dati $n,m \in \mathbb{Z}$ come sopra, le seguenti affermazioni sono equivalenti:
1. $(n, m) = 1$
2. $\exists x,y \in \mathbb{Z}$ tali che $xn + ym = 1$

Proviamolo:
(1) $\implies$ (2) Corolloario 9.8 $\implies$ $\exists x,y \in \mathbb{Z}$  tali che $xn +ym = (n, m) = 1$
(2) $\implies$ (1) Supponiamo che $xn +ym =  1$ per qualche $x,y \in \mathbb{Z}$. Vale:
$$
(n, m) | n \text{ e } (n, m) | m \implies (n,m) | xn +ym = 1 \Longleftrightarrow (n, m) > 0, (n, m) | 1 \implies (n,m) = 1
$$
#### Esempio
$\forall n \in \mathbb{Z}$, $(n, n+1) = 1$: $(-1)n + 1(n+1)=1$.

### Proposizione 9.12
Siano $n,m \in \mathbb{Z}$ non entrambi nulli e sia $d := (n, m)$. Vale:
$$
\left(\frac{n}{d}, \frac{m}{d} \right) = 1
$$
### Dimostrazione
Grazie al corolloario 9.8, vale $d = xn + ym$ per qualche $x,y \in \mathbb{Z}$.
$$
\frac{d}{d} = \frac{xn+ym}{d} \Longleftrightarrow 1 = \frac{xn}{d} + \frac{ym}{d} = x\left( \frac{n}{d} \right) + y\left( \frac{m}{d} \right)
$$
Siccome $\frac{n}{d}$ e $\frac{m}{d}$ sono interi, allora $\left( \frac{n}{d}, \frac{m}{d} \right) = 1$.
### Proposizione 9.13
Siano $n,m \in \mathbb{Z}$ tali che $m \neq 0$. Eseguiamo la divisione di $n$ per $m$.
$$
\begin{cases}
n = qm +r  \\
0 \leq r < |m|
\end{cases}
$$
Con $q, r \in \mathbb{Z}$ unici.
Segue che $(n, m) = (m , r)$.
Questo è l'algoritmo di Euclide.
### Dimostrazione
$\mathcal{A}:= \{ c \in \mathbb{Z} | \ c|n \text{ e } c|m \}, \mathcal{B} := \{ c \in \mathbb{Z} | \ c |m \text{ e } c|r \}$
Osserviamo che $max(\mathcal{A}) = (n,m)$ e $max(\mathcal{B}) = (m, r)$. Per dimostrare il risultato è sufficiente far vedere che $\mathcal{A}=\mathcal{B}$.
Dimostriamo $\mathcal{A} \subset B$:
Sia $c \in \mathcal{A}$ ovvero $c|n$ e $c|m$. Quindi $c \in \mathcal{B}$ se $c|r$. Ma $r = 1\cdot n + (-q) \cdot m$, quindi per il lemma utile $c | r \implies c \in \mathcal{B}$.
Dimostraimo $\mathcal{B} \subset \mathcal{A}$:
Sia $c \in \mathcal{B}$ ovvero $c|m$ e $c|r$. Quindi $c \in \mathcal{A}$ se $c|n$. Ma $n = qm + 1 \cdot r$, quindi per il lemma utile $c|n \implies c \in \mathcal{A}$.

Dunque $\mathcal{A} = \mathcal{B} \implies (n,m) = (m, r)$.

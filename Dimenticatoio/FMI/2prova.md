### Principio di induzione di prima forma
Sia $\{ P(n) \}_{n \in \mathbb{N}}$ una famiglia di proposizione indicizzata su $n \in \mathbb{N}$. Supponiamo che:
- $P(0)$ sia vera
- Se $P(n)$ è vera allora $P(n+1)$ è vera.
Allora $P(n)$ è vera $\forall n \in \mathbb{N}$.

### Definizione di ordinamento
Sia $X$ un insieme e sia $\mathcal{R}\subset X\times X$ una relazione binaria. $\mathcal{R}$ si dice essere un ordinamento parziale se valgono:
- $x\mathcal{R}x, \forall x \in X$
- $x\mathcal{R}y,y\mathcal{R}x \implies x =y, \forall x,y\in X$
- $x\mathcal{R}y, y\mathcal{Rz} \implies x \mathcal{R}z, \forall x,y,z \in X$
Inoltre, se oltre alle precedenti vale anche che $x\mathcal{R}y$ o $y \mathcal{R}x$, $\forall x,y \in X$, allora $\mathcal{R}$ si dice essere un ordinamento totale.
$(X,\mathcal{R})$ si dice essere rispettivamente un insieme parzialmente o totalmente ordinato.
### Definizione di minimo
Sia $(X,\mathcal{R})$ un insieme parzialmente ordinato. Sia $A\subset X$. $z\in A$ si dice essere minimo di $A$ se $z \mathcal{R}a, \forall a \in A$. Il minimo è unico.

### Definizione di $\leq$ in $\mathbb{N}$
Definiamo $\leq \subset \mathbb{N} \times \mathbb{N}$ relazione binaria. Siano $n,m \in \mathbb{N}$, allora $n \leq m \Longleftrightarrow\exists k\in \mathbb{N}:n+k=m$.
$(\mathbb{N},\leq)$ è un insieme totalmente ordinato.

### Definizione buon ordinamento
$(X,\mathcal{R})$ si dice essere un insieme ben ordinato se è parzialmente ordinato e ogni sottoinsieme non-vuoto di $X$ ammette un minimo.

### Teorema del buon ordinamento dei naturali
$(\mathbb{N},\leq)$ è un insieme ben ordinato.

Dimostrazione:
Sia $A \subset \mathbb{N}$ senza minimo. Vogliamo dimostrare che allora $A=\emptyset$.
Consideriamo $B:=\mathbb{N}\setminus A$. Allora $A=\emptyset \Longleftrightarrow B=\mathbb{N}$.
Consideriamo la proposizione $P(n):=\{ 0,\dots,n \}\subset B$.
Osserviamo che se $P(n)$ è vera $\forall n\in \mathbb{N}$, allora $B = \mathbb{N}$ e dunque $A = \emptyset$.

Procediamo per induzione su $n \geq 0$.

$n=0$ (base dell'induzione):
Osserviamo che $n=0=min(\mathbb{N})$ e sicuramente $n=0 \not\in A$, perché altrimenti ne sarebbe il minimo, in quanto minimo di $\mathbb{N}$.
Segue che $n = 0 \in B \implies \{ 0 \} \subset B \implies P(0)$ vera.
La base dell'induzione è stata svolta.

$n\geq 0, n \implies n+1$ (passo induttivo):
Supponiamo che $P(n)$ sia vera per qualche $n\geq 0$, ovvero $\{ 0,\dots,n \} \subset B$ per qualche $n \geq 0$ (ipotesi induttiva). Vogliamo dimostrare che $\{ 0, \dots, n, n+1 \}\subset B$.
Per ipoitesi induttiva $\{ 0,\dots,n \}\subset B \implies A \subset \{ n+1, n+2, \dots \}$.
Osserviamo che $n+1 \not\in A$, perché altrimenti ne sarebbe certamente il minimo, in quanto $n+1=min(\{ n+1, n+2, \dots \})$.
Dunque $n+1 \not\in A \implies n+1 \in B \implies \{ 0, \dots,n,n+1 \} \subset B\implies P(n+1)$ è vera.
Il passo induttivo è stato svolto.

Grazie al principio di induzione di prima forma, $P(n)$ è vera $\forall n \in \mathbb{N}$, dunque $B=\mathbb{N}\Longleftrightarrow A=\emptyset$.

### Principio di induzione di seconda forma
Sia $\{ P(n) \}_{n\in \mathbb{N}}$ una famiglia di proposizione indicizzata su $n \in \mathbb{N}$. Supponiamo che valgano:
- $P(0)$ vera.
- Se $P(k)$ è vera $\forall k\in \mathbb{N}, 0\leq k<n$, allora $P(n)$ è vera.
Allora $P(n)$ è vera $\forall n\in \mathbb{N}$.

Dimostrazione:
Consideriamo l'insieme $A:=\{ n \in \mathbb{N}| P(n) \text{ falsa} \}$. Vogliamo dimostrare che $A=\emptyset$.
Supponiamo per assurdo che $A\neq \emptyset$.
Osserviamo che $A\neq \emptyset$ e $A \subset \mathbb{N}$, dunque per il buon ordinamento dei numeri naturali risulta che $\exists m :=min(A)$.
Osserviamo che $0 \not\in A$ poiché $P(0)$ è vera per ipotesi, dunque $m\neq 0$.
Inoltre per costruzione $\forall k \in\{ 0, \dots,m-1 \}, P(k)$ è vera. Ma allora per ipotesi segue che $P(m)$ è vera e dunque $m \not\in A$. Ma questo è assurdo.
Segue che $A=\emptyset$.

---
### Teorema esistenza e unicità del quoziente e del resto della divisione euclidea
Siano $n,m\in \mathbb{Z}, m\neq 0$. Allora $\exists!q,r\in \mathbb{Z}$ tali che:
$$
(\star)_{n} \begin{cases}
n = qm +r \\
0\leq r < |m|
\end{cases}
$$
è verificata.

Dimostrazione:

Siano $n,m \in \mathbb{Z}, n\geq 0, m>0$. Allora $m = |m|$.
Procediamo per induzione di seconda forma su $n \geq 0$.

$n = 0$ (base dell'induzione).
Osserviamo che in questo caso è sufficiente porre $q:=0$ e $r:= 0$. Infatti valie che:
$$
\begin{cases}
n=qm+r \\
0 \leq r < m
\end{cases} \Longleftrightarrow
\begin{cases}
0 = 0m+ 0 \\
0 \leq 0<m
\end{cases}
$$
e dunque $(\star)_{0}$ è verificata.
La base dell'induzione è stata svolta.

$n\geq 0, (\forall k,0\leq k<n)\implies n$ (passo induttivo).
Supponiamo che $\forall k\in \mathbb{Z}, 0 \leq k<n$, esistano $q,r\in \mathbb{Z}$ per cui $(\star)_{k}$ sia verificata (ipotesi induttiva).
Distinguiamo due casi:
Se $n < m$ allora è sufficiente porre $q:=0$ e $r:=n$, infatti vale che:
$$
\begin{cases}
n = qm + r \\
0 \leq r < m
\end{cases} \Longleftrightarrow
\begin{cases}
n = 0m + n \\
0 \leq n < m
\end{cases}
$$
e dunque $(\star)_{n}$ è verificata.
Se $n \geq m$ consideriamo $k:=n-m$. Osserviamo che $0 \leq k < n$, dunque è possibile applicare l'ipotesi induttiva su $k$, ovvero $\exists q,r \in \mathbb{Z}$ per i quali:
$$
\begin{cases}
k = qm +r \\
0 \leq r < m
\end{cases}\Longleftrightarrow
\begin{cases}
n-m = qm+r \\
0\leq r <m
\end{cases}\Longleftrightarrow
\begin{cases}
n = (q+1)m +r \\
0\leq r < m
\end{cases}
$$
Notiamo che $(\star)_{n}$ è verificata.
Il passo induttivo è stato svolto.

Grazie al principio di induzione di seconda forma, l'asserto del teorema vale $\forall n \in \mathbb{N}$.

Consideriamo ora il caso dove $n,m \in \mathbb{Z}, n<0,m>0$.
Eseguiamo la divisione euclidea con $-n>0, m=|m| > 0$.
Otteniamo $q,r\in \mathbb{Z}$ per i quali:
$$
\begin{cases}
-n = qm +r \\
0 \leq r < m
\end{cases} \Longleftrightarrow
\begin{cases}
n = -qm-r \\
0 \leq r < m
\end{cases}
$$
Distinguiamo due casi:
Se $r=0$ allora $r=0=-r$ e vale che:
$$
\begin{cases}
n=-qm+r \\
0\leq r<m
\end{cases}
$$
Dunque $(\star)_{n}$ è verificata.
Se $r>0$ allora:
$$
n = -qm -r  \Longleftrightarrow n = -qm - m +m-r \Longleftrightarrow n= (-q-1)m + (m-r)
$$
Osserviamo che $0 < m-r < m$. Vale dunque che:
$$
\begin{cases}
n=(-q-1)m + (m-r) \\
0 \leq (m-r) <m
\end{cases}
$$
Perciò $(\star)_{n}$ è verificata.

Consideriamo infine il caso in cui $n,m\in \mathbb{Z}$ e $m <0\implies-m=|m|$.
Eseguiamo la divisione tra $n$ e $-m > 0$.
$$
\begin{cases}
n = -mq +r  \\
0 \leq r < -m
\end{cases} \Longleftrightarrow
\begin{cases}
n = (-q)m +r \\
0 \leq r < |m|
\end{cases}
$$
e quindi $(\star)_{n}$ è verificata.

Dimostriamo ora l'unicità.
Siano $n,m\in \mathbb{Z}$ con $m > 0$ e siano $q,q',r,r' \in \mathbb{Z}$ tali per cui:
$$
\begin{cases}
n = qm + r \\
0 < r \leq |m|
\end{cases}\qquad
\begin{cases}
n = q'm +r' \\
0 \leq r' < |m|
\end{cases}
$$
Vale che $qm + r = n = q'm + r' \implies qm +r=q'm+r' \Longleftrightarrow(q-q')m=r'-r\implies|q-q'||m|=|r'-r|$.
Poiché $0 \leq r<|m|$ e $0 \leq r'<|m|$, $|r'-r|<|m|$.
Dunque:
$$
|q-q'||m| = |r'-r| < |m| \implies|q-q'||m|<|m| \implies |q-q'|<1 \implies|q-q'|=0\implies q=q'
$$
Ma allora:
$$
(q-q')m = r'-r \implies r'-r=0 \implies r =r'
$$
---

### Definzione insieme finito
Indichiamo con $I_{n}$, con $n \in \mathbb{N}$, l'insieme $\{ 0,\dots,n-1 \}$. In particolare $I_{0}=\emptyset$.
Un insieme $X$ si dice finito se $X \sim I_{n}$ per qualche $n \in \mathbb{N}$.

### Lemma dei cassetti
Siano $n,m \in \mathbb{N}$ e $X,Y$ due insiemi finiti tali che $n <m, X \sim I_{n}, Y\sim I_{m}$. Allora ogni funzione $f:Y \rightarrow X$ non è iniettiva.

Dimostrazione:
Procediamo per induzione di prima forma su $n\geq 0$.

$n = 0$ (base dell'induzione).
Sia $m \in \mathbb{N}, m> n=0$.
Sia $X \sim I_{n}$ e sia $Y \sim I_{m}$. Allora $X\sim I_{0} \implies X=\emptyset$ e $Y \sim I_{m} \implies Y\neq \emptyset$.
Ricordando che $X^{Y}=\emptyset^{Y}=\emptyset$, concludiamo che non esistono funzioni $f:Y\rightarrow X$, in particolare non esistono funzioni iniettivi $f:Y\rightarrow X$.
La base dell'induzione è stata svolta.

$n\geq 0, n \implies n+1$ (passo induttivo).
Sia $m\in \mathbb{N}, m > n+1$.
Sia $X \sim I_{n}$ e sia $Y \sim I_{m}$.
Supponiamo che l'asserto sia vero per qualche $n \in \mathbb{N}, n \geq 0$ (ipotesi induttiva). Vogliamo dimostrare che l'asserto è vero per $n+1$.
Sia $X \sim I_{n+1}$. Allora $\exists g:I_{n+1}\rightarrow X$ bigezione. Poniamo $x_{n}:=g(n)$. Poniamo $X':=X\setminus \{ x_{n} \}$.
A questo punto possiamo definire $g^{\star}:I_{n}\rightarrow X'$ dove $g^{\star}(a):=g(a),\forall a \in I_{n}$. Allora $g^{\star}$ è una bigezione e $X' \sim I_{n}$.

Supponiamo per assurdo che esista $f:Y\rightarrow X$ iniettiva.
Distinguiamo due casi:
Se $f(Y) \not\ni x_{n}$, allora $f(Y)\subset X'$. Dunque possiamo definire una funzione $f^{\star}:Y\rightarrow X'$ dove $f^{\star}(y):=f(y), \forall y\in Y$. Allora $f^{\star}$ è iniettiva.
$Y\sim I_{m}$ e $X'\sim I_{n}$, ma per ipotesi $m>n+1>n$. Per ipotesi induttiva $f^{\star}$ non può esistere e dunque $f$ non può esistere.
Se $f(Y) \ni x_{n}$ allora siccome $f$ è iniettiva per ipotesi, $\exists!y_{n}\in Y:f(y_{n})=x_{n}$. 
Poniamo $Y':=Y \setminus \{ y_{n} \}$, dunque $Y' \sim I_{m-1}$.
Allora possiamo definire $f^{\star}:Y' \rightarrow X'$ dove $f^{\star}(y):=f(y),\forall y\in Y'$. Allora $f^{\star}$ è iniettiva. $Y' \sim I_{m-1}$ e $X'\sim I_{n}$, ma per ipotesi $m>n+1\Longleftrightarrow m -1 >n$ e dunque per ipotesi induttiva $f^{\star}$ non esiste e dunque $f$ non esiste.
Il passo induttivo è stato svolto.

Grazie al principio di induzione di prima forma l'asserto è vero $\forall n\in \mathbb{N}$.

### Definizione cardinalità
Sia $X$ un insieme finito tale che $X \sim I_{n}$ per qualche $n \in \mathbb{N}$. $n$ viene chiamata cardinalità di $X$ e si scrive $|X|:=n$.

### Corollario
Siano $X,Y$ due insiemi finiti e siano $n,m\in \mathbb{N}$ tali che $X \sim I_{n}$ e $Y \sim I_{m}$. Allora $X \sim Y \Longleftrightarrow n = m$.

### Corollario
Siano $X$ un insieme finito e sia $Y \subset X$, allora $Y$ è finito e $|Y|\leq|X|$. Inoltre se $Y$ è sottoinsieme proprio di $X$ allora $|Y| < |X|$.

Dimostrazione:
Sia $n:=|X|$. Procediamo per induzione di prima forma su $n\geq 0$.

$n=0$ (base dell'induzione).
$n = 0 \implies|X|=0\implies X=\emptyset$. $Y\subset X \implies Y\subset \emptyset \implies Y=\emptyset$. Allora vale che $|Y|=0 \leq 0=|X|$.
La base dell'induzione è stata svolta.

$n\geq 0,n \implies n+1$ (passo induttivo).
Supponiamo l'asserto essere vero per qualche $n\geq 0$ (ipotesi induttiva), dimostriamo che è vero anche per $n+1$.

Sia $|X|=n+1\implies X\sim I_{n+1}\implies \exists g:I_{n+1}\rightarrow X$ bigezione.
Poniamo $x_{n}:=g(n)$. Poniamo $X':= X \setminus \{ x_{n} \}$. Possiamo definire $g^{\star}:I_{n}\rightarrow X'$ dove $g^{\star}(a):=g(a),\forall a\in I_{n}$. Allora $g^{\star}$ è una bigezione e dunque $X' \sim I_{n}$.

Distinguiamo due casi:
Se $Y \not\ni x_{n}$ allora $Y \subset X'$. Poiché $|X'|=n$ possiamo applicare l'ipotesi induttiva ottenendo che $|Y|\leq|X'|=|X|-1$. Allora $|Y|<|X|$. Infatti $Y \subsetneq X$ poiché $x_{n}\in X, x_{n}\not\in Y$. Dunque abbiamo verificato anche la seconda parte dell'enunciato.

Se $Y \ni x_{n}$ allora possiamo porre $Y':=Y\setminus x_{n}$. Allora $Y'\subset X'$ e $|X'|=n$ e dunque possiamo applicare l'ipotesi induttiva: $|Y|-1=|Y'|\leq|X'|=|X|-1 \implies|Y|-1\leq|X|-1\Longleftrightarrow|Y|\leq|X|$. Osserviamo che nel caso $Y \subsetneq X$, allora anche $Y'\subsetneq X'$ e per ipotesi induttiva: $|Y|-1=|Y'|<|X'|=|X|-1\implies|Y|-1<|X|-1\Longleftrightarrow |Y|<|X|$.

Il passo induttivo è stato svolto.
Grazie al principio di induzione di prima forma l'asserto è vero $\forall n\in \mathbb{N}$.

### Corollario
Ogni insieme finito non è equipotente ad alcun suo sottoinsieme proprio.

### Corollario
L'insieme dei numeri naturali è infinito.

---
### Definizione di MCD
Siano $n,m\in \mathbb{Z}$ non entrambi nulli. Sia $d\in \mathbb{Z}, d>0$. $d$ è detto massimo comune divisore di $n,m$ se:
- $d|n,d|m$
- Se $\exists c\in \mathbb{Z}:c|n,c|m$, allora $c|d$

### Definziione di mcm
Siano $n,m\in \mathbb{Z}$. Sia $M\in \mathbb{Z},M\geq 0$. $M$ è detto minimo comune multiplo di $n,m$ se:
- $n|M,m|M$
- Se $\exists c\in \mathbb{Z}:n|c,m|c$, allora $M|c$

### Proposizione
Vale che:
- $n|m,m|q\implies n|q, \forall n,m,q\in \mathbb{Z}$
- $n|m,m|n\implies n=m$ o $n=-m, \forall n,m\in \mathbb{Z}$

### Lemma utile
Siano $n,m\in \mathbb{Z}$ non entrambi nulli. Sia $c\in \mathbb{Z}$ tale che $c|n$ e $c|m$.
Allora $c|xn+ym,\forall x,y\in \mathbb{Z}$.

### Definizione di coprimo
Siano $n,m\in \mathbb{Z}$ non entrambi nulli. $n$ e $m$ sono coprimi tra loro se $(n,m)=1$.

### Proposizione
Siano $n,m\in \mathbb{Z}$ non entrambi nulli. Sia $d:=(n,m)$.
Allora $\left( \frac{n}{d}, \frac{m}{d} \right)=1$.

### Proposizione
Siano $n,m\in \mathbb{Z}$ non entrambi nulli e coprimi tra loro.
Allora valgono:
- $n|mq\implies n|q, \forall q\in \mathbb{Z}$
- $n|q$ e $m|q$ $\implies nm|q,\forall q\in \mathbb{Z}$

### Teorema esistenza e unicità di MCD
Siano $n,m\in \mathbb{Z}$ non entrambi nulli. Allora $\exists!d\in \mathbb{Z},d>0$ tale che $d=(n,m)$.

Dimostrazione esistenza:
Siano $n,m\in \mathbb{Z}$ non entrambi nulli.
Poniamo $S:=\{ s \in \mathbb{N}\setminus \{ 0 \}|s=xn+ym \text{ per qualche } x,y\in \mathbb{Z}\}$.
Osserviamo che $S\neq \emptyset$, infatti scegliendo $x:=sign(n)$ e $y:=sign(m)$ si ha che $s:=sign(n)n+sign(m)m=|n|+|m|>0\implies s \in S$.
Dunque $S\neq \emptyset$ e $S\subset \mathbb{N}$, allora per il buon ordinamento dei numeri naturali si ha che $\exists d:=min(S)$.
Dobbiamo provare che $d$ è $MCD(n,m)$.
$d=xn+ym$ per dei certi $x,y\in \mathbb{Z}$.
Supponiamo $\exists c\in \mathbb{Z},c>0$ tale che $c|n$ e $c|m$, allora per il lemma utile $c|xn+ym=d \implies c|d$.
Eseguiamo la divisione euclidea tra $n$ e $d$:
$$
\begin{cases}
n =qd+r \\
0 \leq r<d
\end{cases}
$$
Osserviamo che se proviamo che $r=0$ allora si ha che $d|n$. Supponiamo per assurdo che $r>0$.
Per l'ugaglianza si ha che $r=n-qd=n-q(xn+ym)=(1-qx)n+(-qy)m\implies r\in S$. Ma risulterebbe che $r<d$ e $r \in S$, ma ciò è assurdo perché contraddice la minimalità di $d$, segue che $r = 0$ e $d|n$.
La stesso passaggio può essere fatto eseguendo la divisione euclidea tra $m$ e $d$, ottenendo come risultato che $d|m$.
Dunque $d|n$ e $d|m$.
Le due condizioni per essere massimo comune divisore sono state soddisfatte, dunque $d$ è $MCD(n,m)$.

Dimostrazione unicità:
Siano $n,m\in \mathbb{Z}$ non entrambi nulli. Siano $d,d'\in \mathbb{Z}$ tali che $d>0,d'>0$ e siano entrambi massimi comuni divisori di $n,m$.
Per la prima proprietà di $d$ abbiamo che $d|n$ e $d|m$, ma per la seconda proprietà di $d'$ con $c:=d$ risulta che $d|d'$.
Per la prima proprietà di $d'$ abbiamo che $d'|n$ e $d'|m$, ma per la seconda proprietà di $d$ con $c:=d'$ risulta che $d'|d$.
Dunque $d|d'$ e $d'|d$. Per la proposizione precedente $d=d'$ oppure $d=-d'$, ma per ipotesi $d>0$ e $d'>0$, dunque $d=d'$.

### Teorema esistenza e unicità di mcm
Siano $n,m\in \mathbb{Z}$. Allora $\exists!M\in \mathbb{Z}, M\geq 0$ tale che $M=[n,m]$.
Inoltre se $n=m=0$ allora $M=0$. Altrimenti $M=\frac{|n||m|}{(n,m)}$.

Dimostrazione esistenza:
Siano $n=m=0$. Dimostriamo che $M=0$ è minimo comune multiplo di $n,m$.
Osserviamo che $n=m=0|0=M$ è verificata, dunque $n|M$ e $m|M$.
Supponiamo che $\exists c\in \mathbb{Z}$ tale che $n|c$ e $m|c$. $n=0|c\implies c=0$. Allora risulta vero che $c=0|0=M\implies c|M$.

Siano $n,m$ non entrambi nulli.
Siccome la nozione di divisibilità non risente del segno possiamo assumere che $n>0$ e $m> 0$.
Poniamo $M:=\frac{nm}{(n,m)}$.
Osserviamo che $(n,m)|n\implies \exists n'\in \mathbb{Z}:n'(n,m)=n$.
Osserviamo che $(n,m)|m\implies \exists m'\in \mathbb{Z}:m'(n,m)=m$.
$$
M=\frac{nm}{(n,m)}= \frac{n'(n,m)m'(n,m)}{(n,m)}=n'm'(n,m)=nm'=n'm
$$
Dunque $n|nm'=M\implies n|M$ e $m|n'm=M\implies m|M$. Perciò la prima proprietà del minimo comune multipla è soddisfatta.
Supponiamo che $\exists c\in \mathbb{Z}$ tale che $n|c$ e $m|c$.
Osserviamo che $(n,m)|n$ e $n|c$, perciò $(n,m)|c\Longleftrightarrow \exists c'\in \mathbb{Z}:c'(n,m)=c$.
Osserviamo che $n'=\frac{n}{(n,m)}$ e $m'=\frac{m}{(n,m)}$, dunque $(n',m')=1\Longleftrightarrow n',m'$ sono coprimi.
$n|c \implies \exists k\in \mathbb{Z}:kn=c$.
$m|c \implies \exists h\in \mathbb{Z}:hm=c$.
$$
\begin{align}
kn'(n,m) = kn = c = c'(n,m) \implies kn' = c' \implies n'|c' \\
hm'(n,m) = hm = c = c'(n,m) \implies hm' = c' \implies m'|c'
\end{align}
$$
$n'$ e $m'$ sono tra loro coprimi e per la proposizione precedente $n'm'|c' \implies M=n'm'(n,m)|c'(n,m)=c\implies M|c$.
Anche la seconda proprietà del minimo comune multiplo è stata soddisfatta.

Dimostrazione unicità:
Siano $n,m\in \mathbb{Z}$. Siano $M,M'\in \mathbb{Z}$ tali che $M\geq0,M'\geq0$ e siano entrambi minimi comuni multipli di $n,m$.
Per la prima proprietà di $M$ abbiamo che $n|M$ e $m|M$, ma per la seconda proprietà di $M'$ con $c:=M$ risulta che $M'|M$.
Per la prima proprietà di $d'$ abbiamo che $n|M'$ e $m|M'$, ma per la seconda proprietà di $d$ con $c:=M'$ risulta che $M'|M$.
Dunque $M|M'$ e $M'|M$. Per la proposizione precedente $M=M'$ oppure $M=-M'$, ma per ipotesi $M\geq0$ e $M'\geq0$, dunque $M=M'$.

---
### Definizione numero primo
Un numero $p \in \mathbb{Z}$ si dice essere primo se $p\geq 2$ e i suoi unici divisori sono $\pm 1, \pm p$.

### Proposizione
Sia $p \in \mathbb{Z}$ numero primo e siano $n_{1},\dots,n_{k}\in \mathbb{Z}$.
Se $p|n_{1}\dots n_{k}$ allora $p|n_{i}$ per qualche $i \in \{ 1,\dots,k \}$.
### Teorema fondamentale dell'aritmetica
Sia $n \in \mathbb{N}$ tale ceh $n\geq 2$. Allora $\exists p_{1},\dots,p_{a}$ con $a\in \mathbb{N}\setminus \{ 0 \}$ numeri primi eventualmente ripetuti tali che $n =p_{1}\dots p_{a}$ e a meno di riordinamento questa sequenza è unica, ovvero se $\exists q_{1},\dots q_{b}$ con $a \leq b$ tali che $n = q_{1}\dots q_{b}$ allora $a=b$ e $\exists \phi:\{ 1,\dots,b \}\rightarrow \{ 1,\dots,a \}$ bigezione per la quale $p_{i}=q_{\phi(i)},\forall i\in \{ 1,\dots,a \}$.

Dimostrazione esistenza:
Procediamo per induzione di seconda forma su $n\geq 2$.

$n=2$ (base dell'induzione).
Osserviamo che $n=2$ è un numero primo, dunque è sufficiente porre $a:=1$ e $p_{1}=2$. Infatti vale che $n = 2 = p_{1}$.
La base dell'induzione è stata svolta.

$n > 2, (\forall k,2\leq k<n)\implies n$ (passo induttivo).
Ipotizziamo che $\forall k, 2\leq k<n, k$ sia scomponibile in fattori primi per qualche $n \in \mathbb{N}, n\geq 2$ (ipotesi induttiva). Dimostriamo che anche $n$ lo sia.
Distinguiamo due casi:
Se $n$ è primo allora è sufficiente porre $a:=1$ e $p_{1} = n$. Infatti vale che $n=p_{1}$.
Se $n$ non è primo allora $\exists d_{1},d_{2}\in \mathbb{N}$ suoi divisori non banali $\implies d_{1} \neq 1, d_{1} \neq n, d_{2}\neq 1,d_{2} \neq n$.
Inoltre $n \geq 2 \implies d_{1}d_{2} \geq 2 \implies d_{1}\neq 0, d_{2} \neq 0$. Dunque $d_{1} \geq 2$ e $d_{2} \geq 2$.
A meno di scambiare $d_{1}$ e $d_{2}$ possiamo assumere che $d_{1} \leq d_{2}$.
Supponiamo per assurdo che $d_{2} \geq n$. Allora $n = d_{1}d_{2}\geq d_{1}n \geq 2n$ ma ciò è assurdo, quindi $d_{1} \leq d_{2}<n$.
Dunque $2 \leq d_{1} < n$ e $2 \leq d_{2} < n$. Allora è possibile applicare l'ipotesi induttiva: $\exists p_{1},\dots ,p_{a}$ con $a\in \mathbb{N} \setminus \{ 0 \}$ e $\exists p_{a+1},\dots p_{a+b}$ con $b \in \mathbb{N} \setminus \{ 0 \}$ primi eventualmente ripetuti per cui $d_{1} = p_{1}\dots p_{a}$ e $d_{2}=p_{a+1}\dots p_{a+b}$. Allora risulta che:
$$
n = d_{1}d_{2}=p_{1}\dots p_{a}p_{a+1}\dots p_{a+b}
$$
Il passo induttivo è stato svolto.
Grazie al principio di induzione di seconda forma l'asserto è vero $\forall n\in \mathbb{N},n\geq2$.

Dimostrazione unicità:
Sia $n \in \mathbb{N}, n\geq 2$.
Supponiamo che $\exists p_{1},\dots,p_{a}$ con $a \in \mathbb{N} \setminus \{ 0 \}$ primi eventualmente ripetuti e $\exists q_{1},\dots,q_{b}$ con $b \geq a$ primi eventualmente ripetuti per cui $n = p_{1}\dots p_{a}$ e $n = q_{1}\dots q_{b}$. 

Procediamo per induzione su $a\geq 1$:

$a = 1$ (base dell'induzione).
$a = 1 \implies n=p_{1}=q_{1}\dots q_{b}$.
Osserviamo che $p_{1}|p_{1}=q_{1}\dots q_{b}$. Per la proposizione precedente $p_{1}|q_{i}$ per qualche $i \in \{ 1,\dots,b \}$. A meno di riordinamento possiamo suppore che $p_{1}|q_{1}$. Siccome $p_{1}$ è primo i suoi unici divisori sono quelli banali, ma $q_{1}\geq 2$ perché primo e dunque $q_{1} = p_{1}$.
Supponiamo per assurdo che $b>a$. $p_{1} =q_{1}\dots q_{b} =p_{1}q_{2}\dots q_{b}\implies p_{1}=p_{1}q_{2}\dots q_{b}\implies 1 = q_{2}\dots q_{b}$, ma $q_{2}\geq 2$ e l'uguaglianza è assurda. Segue che $a = b$ e $p_{1} = q_{1}$.

$a \geq 1, a \implies a+1$ (passo induttivo).
$n = p_{1}\dots p_{a+1}=q_{1}\dots q_{b}$. Osserviamo che $p_{a+1}|p_{1}\dots p_{a+1}=q_{1}\dots q_{b}$. Dunque per la proposizione precedente $p_{a+1}|q_{i}$ per qualche $i \in \{ 1, \dots,b \}$. A meno di riordinamento possiamo assumere che $p_{a+1}|q_{b} \implies p_{a+1}=q_{b}$ perché $q_{b}$ è primo.
$p_{1}\dots p_{a+1}=q_{1}\dots q_{b}\implies p_{1}\dots p_{a}=q_{1}\dots q_{b-1}$. Per ipotesi induttiva sappiamo che $b-1=a \implies b = a+1$ e che a meno di riordinamento $p_{i}=q_{i}, \forall i \in \{ 1,\dots,a \}$. Assieme alle corrispondenze date dal passo induttivo si aggiunge che $p_{a+1}=q_{b}$. Dunque $a+1=b$ e a meno di riordinamento $p_{i}=q_{i}, \forall i \in \{ 1,\dots,a+1 \}$.
Il passo induttivo è stato svolto.
Grazie al principio di induzione di prima forma l'asserto è vero $\forall a \in \mathbb{N}, a \geq 1$.

---

### Teorema cinese del resto
Siano $n,m \in \mathbb{Z}$ e $n>0$ e $m > 0$. Siano $a,b \in \mathbb{Z}$. Si consideri il seguente sistema di congruenze:
$$
\begin{cases}
x \in \mathbb{Z} \\
x \equiv a\ (\text{mod}\ n) \\
x \equiv b\ (\text{mod}\ m)
\end{cases} \Longleftrightarrow
\begin{cases}
x \in \mathbb{Z} \\
[x]_{n} = [a]_{n} \\
[x]_{m} = [b]_{m} \\
\end{cases}
$$
Sia $S \subset \mathbb{Z}$ l'insieme delle soluzioni. Allora $S \neq \emptyset \Longleftrightarrow(n,m)|b-a$.
Inoltre, se $S\neq \emptyset$ allora $S=[c]_{[n,m]}$ dove $c\in S$ è soluzione.

Dimostrazione compatibilità:
Supponiamo che $S \neq \emptyset$, allora $\exists c\in S$ soluzione. Se $c$ è soluzione allora vale che $\exists k\in \mathbb{Z}:c = a+kn$ e $\exists h\in \mathbb{Z}:c=b+hm \implies a +kn=b+hm\implies b-a=kn-hm$, per definizione $(n,m)|n$ e $(n,m)|m$ e per il lemma utile vale che $(n,m)|kn-hm=b-a \implies(n,m)|b-a$.

Supponiamo che $(n,m)|b-a$. Sappiamo che $\exists x,y\in \mathbb{Z}:(n,m)=xn+ym$. Inoltre $(n,m)|b-a\Longleftrightarrow\exists k\in \mathbb{Z}:b-a=k(n,m)=k(xn+ym)=kxn+kym\implies b-kym=a+kxn=:c$. Notiamo che $c$ è soluzione e dunque $c \in S \implies S\neq \emptyset$.

Dimostrazione identificazione delle soluzioni:
Sia $S$ l'insieme delle soluzioni e sia $S\neq \emptyset$.
Vogliamo dimostrare che $S=[c]_{[n,m]}$ con $c \in S$.

Dimostrazione che $S \subset [c]_{[n,m]}$ con $c \in S$.
Sia $c' \in S$. Allora $\exists k,k',h,h'\in \mathbb{Z}$ per i quali:
$$
\begin{cases}
c = a + kn \\
c = b + hm \\
c' = a + k'n \\
c' = b + h'm
\end{cases}
$$
Osserviamo che $c-c'=a+kn-a-k'n=(k-k')n\implies n|c-c'$.
Osserviamo che $c-c'=b+hm-b-h'm=(h-h')m\implies m|c-c'$.
Per definizione $[n,m]|c-c' \Longleftrightarrow \exists s \in \mathbb{Z}:c-c'=s[n,m]\Longleftrightarrow c'=c-s[n,m] \Longleftrightarrow c'\in[c]_{[n,m]}$.

Dimostrazione che $[c]_{[n,m]} \subset S$ con $c \in S$.
Sia $c'\in[c]_{[n,m]}$. Allora $\exists k\in \mathbb{Z}:c'=c+k[n,m]$:
$$
\begin{align}
c' = c+k[n,m] &\implies [c']_{n} = [c + k[n,m]]_{n} \\
 & \implies [c']_{n} = [c]_{n} + [k[n,m]]_{n} \\
 & \implies [c']_{n} = [c]_{n} + [k]_{n}[[n,m]]_{n} \\
 & \implies [c']_{n} = [c]_{n} + [k]_{n}[0]_{n} \\
 & \implies [c']_{n} = [c]_{n} + [k \cdot 0]_{n} \\
 & \implies [c']_{n} = [c]_{n} + [0]_{n} \\
 & \implies [c']_{n} = [c + 0]_{n} \\
 & \implies [c']_{n} = [c]_{n} \\
 & \implies [c']_{n} = [a]_{n} \\
 & \implies c' \equiv a\ (\text{mod}\ n)
\end{align}
$$
$$
\begin{align}
c' = c+k[m,m] &\implies [c']_{m} = [c + k[m,m]]_{m} \\
 & \implies [c']_{m} = [c]_{m} + [k[m,m]]_{m} \\
 & \implies [c']_{m} = [c]_{m} + [k]_{m}[[m,m]]_{m} \\
 & \implies [c']_{m} = [c]_{m} + [k]_{m}[0]_{m} \\
 & \implies [c']_{m} = [c]_{m} + [k \cdot 0]_{m} \\
 & \implies [c']_{m} = [c]_{m} + [0]_{m} \\
 & \implies [c']_{m} = [c + 0]_{m} \\
 & \implies [c']_{m} = [c]_{m} \\
 & \implies [c']_{m} = [b]_{m} \\
 & \implies c' \equiv b\ (\text{mod}\ m)
\end{align}
$$
Segue che $c' \in S$ e dunque $[c]_{[n,m]}\subset S$.

---
### Proposizione
Siano $\alpha,\beta \in (\mathbb{Z} \big/_{n\mathbb{Z}})^{*}$. Allora:
- $\alpha \beta \in (\mathbb{Z} \big/_{n\mathbb{Z}})^{*},(\alpha \beta)^{-1}=\alpha^{-1}\beta^{-1}=\beta^{-1}\alpha^{-1}$.
- $\alpha^{-1}\in (\mathbb{Z} \big/_{n\mathbb{Z}})^{*}, (\alpha^{-1})^{-1} \in (\mathbb{Z} \big/_{n\mathbb{Z}})^{*}$

### Teorema di Fermat Eulero
Sia $n \in \mathbb{Z}, n > 0$.
Sia $\alpha \in (\mathbb{Z} \big/_{n\mathbb{Z}})^{*}$. Allora $\alpha^{\phi(n)}=[1]_{n}$.

Dimostrazione:
Definiamo la funzione $L_{\alpha}:(\mathbb{Z} \big/_{n\mathbb{Z}})^{*}\rightarrow (\mathbb{Z} \big/_{n\mathbb{Z}})^{*}$ dove $L_{\alpha}(\beta)=\alpha \beta,\forall \beta \in (\mathbb{Z} \big/_{n\mathbb{Z}})^{*}$. Per la proposizione precedente $L_{\alpha}$ è ben definita.
Dimostriamo che è iniettiva:
Sia $\beta_{1},\beta_{2}\in (\mathbb{Z} \big/_{n\mathbb{Z}})^{*}$ tali che $L_{\alpha}(\beta_{1})=L_{\alpha}(\beta_{2}) \implies \alpha \beta_{1}=\alpha \beta_{2} \implies \alpha \beta_{1} \alpha^{-1} = \alpha \beta_{2} \alpha^{-1} \implies \beta_{1}[1]_{n}=\beta_{2}[1]_{n} \implies \beta_{1}=\beta_{2}$.
Allora $L_{\alpha}$ è iniettiva. Inoltre $(\mathbb{Z} \big/_{n\mathbb{Z}})^{*}$ è un insieme finito e coincide con il suo dominio e con il suo codominio, segue che $L_{\alpha}$ è suriettiva. Allora $L_{\alpha}$ è bigettiva.
Sia $(\mathbb{Z} \big/_{n\mathbb{Z}})^{*}=\{ \beta_{1},\dots,\beta_{k} \}$ dove $k=\phi(n)$. Per la proposizione $\gamma:=\beta_{1}\dots \beta_{k}\in (\mathbb{Z} \big/_{n\mathbb{Z}})^{*}$.
Poiché $L_{\alpha}$​ è una funzione da $(\mathbb{Z} \big/_{n\mathbb{Z}})^{*}$ in sé, ed è bigettiva, essa induce una permutazione sull'insieme $(\mathbb{Z} \big/_{n\mathbb{Z}})^{*}$.
Per l'associatività e commutatività del prodotto in $(\mathbb{Z} \big/_{n\mathbb{Z}})$ e qunidi $(\mathbb{Z} \big/_{n\mathbb{Z}})^{*}$ abbiamo che:
$$
\beta_{1}\dots \beta_{k}= L_{\alpha}(\beta_{1})\dots L_{\alpha}(\beta_{k})=\alpha \beta_{1}\dots \alpha \beta_{k}=\alpha^{k}\beta_{1}\dots \beta_{k}
$$
Segue che $\gamma=\alpha^{k}\gamma \implies \gamma \gamma^{-1}=\alpha^{k}\gamma\gamma^{-1} \implies [1]_{n}=\alpha^{k}$.

### Piccolo teorema di Fermat
Sia $p \in \mathbb{Z}$ un numero primo. Sia $\alpha \in (\mathbb{Z} \big/_{p\mathbb{Z}})^{*}$. Allora $\alpha^{p-1}=[1]_{n}$.

Dimostrazione:
La dimostrazione è identica a quella del teorema precedente, ricordando che se $p$ è primo allora $\phi(p)=p-1$.

### Teorema fondamentale della crittografia RSA
Sia $n \in \mathbb{Z}, n > 0$. Sia $c \in \mathbb{Z}$ tale che $c > 0$ e $(c, \phi(n))= 1$.
Definiamo $P_{c}:(\mathbb{Z} \big/_{n\mathbb{Z}})^{*}\rightarrow (\mathbb{Z} \big/_{n\mathbb{Z}})^{*}$ dove $P_{c}(\alpha):=\alpha^{c}, \forall \alpha \in (\mathbb{Z} \big/_{n\mathbb{Z}})^{*}$. Allora $P_{c}$ è invertibile e la sua inversa è $P_{d}:(\mathbb{Z} \big/_{n\mathbb{Z}})^{*}\rightarrow (\mathbb{Z} \big/_{n\mathbb{Z}})^{*}$ dove $P_{d}(\alpha):=\alpha^{d},\forall \alpha \in (\mathbb{Z} \big/_{n\mathbb{Z}})^{*}$ con $d >0, d\in[c]^{-1}_{\phi(n)}$.

Dimostrazione:
Dimostriamo che $(P_{c} \circ P_{d}) = id_{(\mathbb{Z} \big/_{n\mathbb{Z}})^{*}}= (P_{d} \circ P_{c})$.
Sia $\alpha \in (\mathbb{Z} \big/_{n\mathbb{Z}})^{*}$.
Osserviamo che $(P_{c} \circ P_{d})(\alpha)=P_{c}(P_{d}(\alpha))=(\alpha^{c})^{d}=\alpha^{cd}=(\alpha^{d})^{c}=P_{d}(P_{c}(\alpha))=(P_{d} \circ P_{c})(\alpha)$.
Osserviamo che $[c]_{\phi(n)}[d]_{\phi(n)}=[1]_{\phi(n)} \implies [cd]_{\phi(n)}=[1]_{\phi(n)} \implies cd \equiv 1\ (\text{mod}\ \phi(n)) \implies \exists k\in \mathbb{Z}:cd=1+k\phi(n)$.
Allora $cd -1=k\phi(n)$. Osserviamo che $c > 0$ e $d > 0$, dunque $cd > 0$ e $cd - 1 \geq 0$. Ciò significa che $k\phi(n)\geq 0$. Poiché $\phi(n)>0$ possiamo condludere che $k \geq 0$.
$$
\alpha^{cd} = \alpha^{1 + k\phi(n)} = \alpha (\alpha^{\phi(n)})^{k} = \alpha [1]^{k}_{n} = \alpha [1^{k}]_{n} = \alpha [1]_{n} = \alpha
$$
### Corollario
Sia $n \in \mathbb{Z}, n > 0$. Sia $c \in \mathbb{Z}$ tale che $c > 0$ e $(c,\phi(n))=1$. Sia $a \in \mathbb{Z}$ tale che $(n, a)=1$.
Si consideri la seguente congruenza:
$$
x^{c} \equiv a\ (\text{mod}\ n)
$$
Sia $S$ l'insieme delle soluzioni.
Allora $S = [a^{d}]_{n} \subset \mathbb{Z}$ dove $d \in [c]^{-1}_{\phi(n)}, d>0$.

Dimostrazione:
La congruenza può essere riscritta nel seguente modo: $[x]^{c}_{n}=[a]_{n}$.
Poiché $c > 0$, vale che:
$$
[x]^{c}_{n} = [x]_{n}[x]_{n}^{c-1} = [a]_{n} \implies [x]_{n}([x]^{c-1}_{n}[a]^{-1}_{n}) = [a]_{n}[a]_{n}^{-1} \implies[x]_{n} ([x]^{c-1}_{n}[a]^{-1}_{n}) = [1]_{n}
$$
Segue che $[x]_{n} \in (\mathbb{Z} \big/_{n\mathbb{Z}})^{*}$ .
Ma allora $[x]^{c}_{n}=[a]_{n} \Longleftrightarrow P_{c}([x]_{n})=[a]_{n}$ e per il teorema fondamentale della crittografia RSA sappiamo che:
$$
P_{c}([x]_{n}) = [a]_{n} \Longleftrightarrow [x]_{n} = P_{d}([a]_{n}) = [a]_{n}^{d} =[a^{d}]_{n}
$$
$d$ può essere portato dentro perché $d>0$.

---

### Definzioni passeggiata, cammino, ciclo
Sia $G=(V,E)$ un grafo. Una sequenza $(v_{0},\dots,v_{n})$ di vertici tali che $v_{i}\in V, \forall i \in \{ 0,\dots,n \}$ si dice essere:
- una passeggiata in $G$ $n= 0$ o se $n \geq 1$ e $\{ v_{i}, v_{i+1} \}\in E, \forall i \in \{ 0,\dots,n-1 \}$.
- un cammino in $G$ se è una passeggiata in $G$ e $v_{i}\neq v_{j}, \forall i,j \in \{ 0,\dots,n \}, i\neq j$.
- un ciclo in $G$ se $n\geq 3$, è una passeggiata in $G$, $v_{0} = v_{n}$ e $(v_{0},\dots,v_{n-1})$ è un cammino in $G$.
In tutti i casi $n$ è detta essere la lunghezza del cammino, ciclo, passeggiata.

### Definizione di congiungibilità
Sia $G=(V,E)$ un grafo. Siano $v,w\in V$ due suoi vertici. Diremo che $v$ è congiungibile a $w$ per passeggiate (cammini) in $G$ se $\exists(v_{0},\dots,v_{n})$ passeggiata (cammino) per il quale $v_{0}=v$ e $v_{n}=w$.

### Teorema equivalenza tra tipi di congiungibilità
Sia $G=(V,E)$ un grafo e siano $v,w\in V$ suoi due vertici. $v$ è congiungibile per passeggiate in $G$ a $w$ se e solo se $v$ è congiungibile per cammini in $G$ a $w$.

Dimostrazione:
Supponiamo che $v$ sia congiungibile a $w$ per cammini in $G$. Allora $\exists(v_{0},\dots,v_{n})$ cammino in $G$ per cui $v_{0}=v$ e $v_{n}=n$.
Ma per definizione un cammino è una passeggiata, dunque questa implicazione è banalmente dimostrata.

Supponiamo che $v$ sia congiungibile a $w$ per passeggiate in $G$. Poniamo $\mathcal{P}:=\{ (v_{0},\dots,v_{n}) \text{ passeggiata in } G | v_{0}=v, v_{n}=w\}$.
Poniamo $\mathcal{A}:=\{ n \in \mathbb{N}|n=l(P) \text{ per qualche }P \in \mathcal{P}\}$.
Osserviamo che per ipotesi $\exists P:=(v_{0},\dots,v_{n})$ passeggiata in $G$ per cui $v_{0}=v$ e $v_{n}=w$, allora $P\in \mathcal{P} \implies \mathcal{P}\neq \emptyset \implies \mathcal{A}\neq \emptyset$.
Se $\mathcal{A}\neq \emptyset$ e $\mathcal{A}\subset \mathbb{N}$ allora grazie al buon ordinamento dei naturali $\exists m :=min(\mathcal{A}) \implies \exists P_{0}\in \mathcal{P}:l(P_{0})=m$.
Dimostriamo che $P_{0}$ è un cammino.
Supponiamo per assurdo che $P_{0}$ non sia un cammino, allora $\exists i,j \in \{ 0,\dots,n \},i\neq j$ per cui $v_{i}=v_{j}$. A meno di scambiare $i,j$ possiamo assumere che $i<j$. Sia $P_{1}$ la sequenza ordinata di vertici di $G$ ottenuta a partire da $P_{0}$ rimuovendo la sottosequenza $(v_{i+1},\dots, v_{j})$.
Si ha che $P_{1}=(v_{0},\dots,v_{i},v_{j+1},\dots,v_{n})$. Poiché $P_{0}$ è passeggiata in $G$ si ha che $\{ v_{k}, v_{k+1} \} \in E, \forall k\in \{ 0,\dots,n \}$. Inoltre $\{ v_{i},v_{j+1} \}=\{ v_{j},v_{j+1} \}\in E$. Segue che $P_{1}$ è una passeggiata in $G$, dunque $P_{1}\in \mathcal{P}\implies l(P_{1})\in \mathcal{A}$.
Osserviamo che $l(P_{1})=l(P_{0})-(j-i)<l(P_{0})=m$, ma ciò è assurdo perché contraddice la minimalità di $m$.

Segue che $P_{0}$ è un cammino e dunque $v$ è congiungibile a $w$ per cammini in $G$.

### Definizione
Sia $G=(V,E)$ un grafo e siano $v,w\in V$. $v$ è congiungibile a $w$ in $G$ se lo è per cammini o per passeggiate.

### Definizione
Sia $G=(V,E)$ un grafo e sia $\sim \subset V\times V$ una relazione binaria per la quale $v \sim w$ se e solo se $v$ è congiungibile a $w$.

### Teorema
$\sim$ definita come sopra è una relazione di equivalenza.

Dimostrazione:
Osserviamo che $v\sim v,\forall v\in V$ perché $(v)$ è una passeggiata. Segue che $\sim$ è riflessiva.

Supponiamo che $v\sim w$ con $v,w\in V$. Allora $\exists (v_{0},\dots v_{n})$ passeggiata in $G$ con $v_{0}=v$ e $v_{n}=w$. Allora $\{ v_{i+1},v_{i} \}=\{ v_{i},v_{i+1} \}\in E,\forall i \in \{ 0,\dots,n-1 \}$. Allora $(v_{n}=w, ...,v_{0}=v)$ è una passeggiata in $G \implies w \sim v$. Segue che $\sim$ è simmetrica.

Siano $v,w,z\in V$. Supponiamo che $v\sim w$ e $w\sim z$. Allora $\exists(v_{0},\dots,v_{n})$ passeggiata con $v_{0}=v$ e $v_{n}=w$ e $\exists(w_{0},\dots,w_{m})$ passeggiata con $w_{0} = w$ e $w_{n}=z$. Dunque $\forall i \in \{ 1,\dots,m-1 \}, \{ w_{i},w_{i+1} \}\in E$. Osserviamo che $v_{n}=w=w_{0} \implies v_{n}=w_{0}\implies \{ v_{n}, w_{1} \} = \{ w_{0}, w_{1} \}\in E$.
Dunque $(v = v_{0},\dots,v_{n},w_{1},\dots, z=w_{m})$ è una passeggiata in $G$ e perciò $v \sim z$.

---

### Definizione grafo finito
Un grafo $G=(V,E)$ si dice finito se $V$ è un insieme finito.

### Definizione grado di un vertice
Sia $G=(V,E)$ un grafo e sia $v\in V$. Allora:
$$
deg_{G}(v):= |\{ e \in E|v \in e \}|
$$
si dice essere grado di $v$ in $G$.

### Teorema caratterizzazione dei grafi finiti
Sia $G=(V,E)$ un grafo finito. Allora vale che:
$$
\sum_{v \in V} deg_{G}(v) = 2|E|
$$
Dimostrazione:
Siano $V= \{ v_{1}, \dots,v_{n} \}$ e $E=\{ e_{1}, \dots, e_{k} \}$.
Definiamo 
$$
m_{ij} := \begin{cases}
0 & v_{i} \not\in e_{j} \\
1 & v_{i} \in e_{j}
\end{cases}
$$
Per associatività e commutatività della somma in $\mathbb{Z}$ si ha che:
$$
\sum_{i=1}^{n} \sum_{j=1}^{k} m_{ij} = \sum_{j=1}^{k} \sum_{i=1}^{n} m_{ij}
$$
Consideriamo la seguente quantità vale che:
$$
\sum_{j=1}^{k} m_{ij} = |\{ j \in \{ 1,\dots,k \} | v_{i} \in e_{j} \}| = deg_{G}(v_{i}) \implies \sum_{i=1}^{n}  \sum_{j=1}^{k} m_{ij}=\sum_{i=1}^{n} deg_{G}(v_{i})= \sum_{v \in V} deg_{G}(v)
$$
Considerimao la seguente quantità vale che:
$$
\sum_{i=1}^{n} m_{ij} = |\{ i \in  \{ i, \dots, n \} | v_{i} \in e_{j} \}| = 2 \implies \sum_{j=1}^{k} \sum_{i=1}^{n} m_{ij}= \sum_{j=1}^{k} 2 = 2k = 2|E|
$$
Dunque il teorema è verificato.

### Lemma delle strette di mano
Sia $G=(V,E)$ un grafo finito. Allora il numero di vertici di grado dispari è pari.

Dimostrazione:
Poniamo $P:=\{ v\in V|deg_{G}(v) \text{ pari} \}$.
Poniamo $D:=\{ v\in V|deg_{G}(v) \text{ dispari} \}$.

Osserviamo che $P\cap D=\emptyset$ e $P \cup D=V$.
Dunque:
$$
\sum_{v\in P} deg_{G}(v) + \sum_{v\in D}deg_{G}(v) = \sum_{v \in V} deg_{G}(v)
$$
Dunque:
$$
\sum_{v\in D} deg_{G}(v) = \sum_{v\in V} deg_{G}(v) - \sum_{v\in D}deg_{G}(v) = 2|E|-\sum_{v\in P}deg_{G}(v)
$$
$2|E|$ è pari e la somma di numeri pari è sempre pari, perciò tutta la parte destra dell'uguaglianza è pari.
Osserviamo che $\forall v\in D, deg_{G}(v)$ è dispari e la somma di un numero pari di numeri dispari è pari, mentre la somma di un numero dispari di numeri dispari è dispari. Siccome la parte destra dell'uguaglianza è pari si ha che $|D|$ è pari.

---

### Definizione albero di copertura
Sia $G=(V,E)$ finito e connesso. Sia $T$ un sottografo di $G$. $T$ è detto albero di coperture se $T$ è un albero e $V(T)=V(G)$.
### Proposizione
Sia $T$ un grafo finito. Allora $T$ è un albero se e solo se $T$ è connesso e $T-e$ è sconnesso $\forall e\in E$.
### Teorema esistenza albero di coperture
Sia $G=(V,E)$ un grafo finito e connesso. Allora esiste almeno un suo albero di copertura.

Dimostrazione:
Poniamo $\mathcal{C}:=\{ C \text{ sottografo di } G | C \text{ connesso}, V(C)=V(G) \}$. Inoltre poniamo $\mathcal{A}:=\{ n \in \mathbb{N}|n = |E(C)| \text{ per qualche } C \in \mathcal{C}  \}$.
Osserviamo che $G$ è sottografo di $G$ $\implies$ $G \in \mathcal{C} \implies \mathcal{C\neq \emptyset} \implies \mathcal{A}\neq \emptyset$.
Osserviamo che $\mathcal{A\neq \emptyset}$ e $\mathcal{A \subset \mathbb{N}}$, allora per il buon ordinamento dei naturali $\exists \bar{n}:=min(\mathcal{A}) \implies \exists \bar{C}\in \mathcal{C}| \bar{n} = |E(\bar{C})|$.
Dimostriamo che $\bar{C}$ è un albero.
Supponiamo per assurdo che $\bar{C}$ non sia un albero. $\bar{C}$ è per costruzione connesso e quindi $\exists e\in E$ per il quale $\bar{C}-e$ è connesso.
Osserviamo che $V(\bar{C}-e)=V(\bar{C})=V(G) \implies \bar{C}-e\in \mathcal{C} \implies|E(\bar{C}-e)|\in \mathcal{A}$.
Osserviamo che $|E(\bar{C}-e)|=|E(\bar{C})|-1<|E(\bar{C})|=\bar{n}$. Ma ciò è assurdo, perché contraddice la minimalità di $\bar{n}$.
$\bar{C}$ è allora un albero.

---

### Definzione di albero
Sia $T=(V,E)$ un grafo. $T$ si dice essere un albero se è connesso e non contiene cicli.
### Lemma
Sia $T=(V,E)$ un albero con $|V|\geq 2$, allora $T$ ha almeno due foglie
### Lemma
Sia $G=(V,E)$ un grafo finito connesso, sia $v\in V$ foglia. Allora $G-v$ è finito e connesso.
### Lemma
Sia $T = (V,E)$ un albero, sia $v \in V$ foglia. Allora $T-v$ è un albero.

### Teorema di caraterrizzazioni degli alberi
Sia $T=(V,E)$ un grafo finito. $T$ è un albero se e solo se $T$ è connesso e $|V|-1=|E|$.

Dimostrazione:
Supponiamo che $T$ sia un albero. Dimotriamo che rispetta la formula di Eulero.
Sia $n:=|V|$. Procediamo per induzione su $n \geq 1$.

$n= |V|=1$ (base dell'induzione).
L'unico albero con $|V|=1$ è un vertice isolato senza lati. Dunque $|E|=0$. Ma allora $|V|-1=1-1=0=|E|$ è rispettata.
La base dell'induzione è stata svolta.

$n \geq 1, n \implies n+1$ (passo induttivo).
Supponiamo che ogni albero con $n$ vertici sia connesso e soddisfi la formual di Eulero.
Sia $T=(V,E)$ un albero con $|V|=n+1$.
Osserviamo che $n+1 = |V| \geq 2$, dunque per il lemma precedente $\exists v\in V$ foglia.
Consideriamo $T-v$, per il lemma precedente $T-v$ è un albero.
Osserviamo che $|V(T-v)|=|V(T)|-1=n+1-1=n$.
Osserviamo inoltre che $|E(T-v)|=|E(T)|-1$.
Applichiamo l'ipotesi induttiva su $T-v$, ottenendo che $T-v$ è connesso e $|E(T-v)| = |V(T-v)| - 1 \implies |E(T)|-1 =|V(T)|-1-1 \implies|V|-1=|E|$. Inoltre $T$ è connesso in quanto albero.
Il passo induttivo è stato svolto. L'asserto è vero qualsiasi albero.

Supponiamo che $T$ sia connesso e rispetti la formula di Eulero.
Sia $n:=|V|$. Procediamo per induzione su $n\geq 1$.

$n= |V|=1$ (base dell'induzione).
L'unico grafo con $|V|=1$ è un vertice isolato senza lati, che è connesso e senza cicli, quindi è un albero.
La base dell'induzione è stata svolta.

$n \geq 1, n \implies n+1$ (passo induttivo).
Supponiamo che ogni grafo connesso che rispetti la formuala di Eulero con $n$ vertici sia un albero.
Sia $T=(V,E)$ un grafo connesso che rispetti la formula di Eulero con $|V|=n+1$.
Supponiamo per assurdo che $T$ non possieda foglie, ovvero $deg_{T}(v) \geq 2, \forall v\in V$.
Per ipotesi $|V|-1 =|E| \implies 2|V|-2=2|E|$.
Dunque $2|V|-2=2|E|=\sum_{v \in V}deg_{T}(v)\geq 2|V|$, ma ciò è assurdo.
Dunque $\exists v\in V$ foglia. Consideriamo $T-v$ che per il lemma precedente è un sempre un grafo connesso.
Osserviamo che $|V(T-v)|=|V(T)|-1=n+1-1=n$.
Inoltre osserviamo che $|E(T-v)|=|E(T)|-1$.
Dunque $|V(T-v)|-1=|E(T-v)|$ è verificato in quanto $|V(T)|-1=|E(T)|$ lo è per ipotesi.
Applicando l'ipotesi induttiva a $T-v$ si ottiene che $T-v$ è un albero.
Supponiamo ora per assurdo che $T$ non sia un albero, siccome per ipotesi è connesso allora $\exists(v_{0},\dots v_{k})$ ciclo in $T$.
Osserviamo che $\forall i\in \{ 0,\dots,k \}, deg_{T}(v_{i})\geq 2$. Dunque $\forall i\in \{ 0,\dots,k \}, v_{i}\neq v\implies v_{i}\in V(T-v)$. Ma questo è assurdo perché $T-v$ è un albero e non può contenere cicli. Dunque $T$ è un albero.

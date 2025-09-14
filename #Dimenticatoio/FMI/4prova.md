### Teorema principio di induzione di prima forma
Sia $\{ P(n) \}_{n \in \mathbb{N}}$ una famiglia di proposizioni indicizzata su $n \in \mathbb{N}$. Supponiamo che:
1) $P(0)$ è vera
2) Se $P(n)$ è vera allora $P(n+1)$ è vera
Allora $P(n)$ è vera $\forall n \in \mathbb{N}$.

### Teorema del buon ordinamento
$(\mathbb{N}, \leq)$ è un insieme ben ordinato.

Dimostrazione:
Sia $A \subset \mathbb{N}$ tale che non ammette un minimo. Sia $B:=\mathbb{N} \setminus A$.
Dobbiamo dimostrare che $A =\emptyset$.
Consideriamo la seguente proposizione $P(n):= (\{ 0,\dots,n \} \subset B)$.
Se $P(n)$ è vera $\forall n \in \mathbb{N}$ allora $B = \mathbb{N} \Longleftrightarrow A= \emptyset$.

Procediamo per induzione su $n \geq 0$:
$n = 0$ (base dell'induzione).
Osserviamo che $0 = min(\mathbb{N})$, dunque $0 \not\in A$, altrimenti ne sarebbe sicuramente il minimo poiché $A \subset \mathbb{N}$.
$0 \not\in A \implies 0 \in B \implies {0} \subset B \implies P(0)$ vera. La base dell'induzione è stata verificata.

$n \geq 0, n \implies n+1$ (passo induttivo).
Supponiamo che $P(n)$ sia vera per qualche $n \geq 0$ (ipotesi induttiva), dimostriamo che $P(n+1)$ è vera.
Per ipotesi induttiva $\{ 0,\dots,n \} \subset B \implies A \subset \{ n+1, n+2 ,\dots. \}$. Osserviamo che $n+1 = min(\{ n+1, n+2,\dots \})$, dunque $n+1 \not\in A$, altrimenti ne sarebbe sicuramente il minimo poiché $A \subset \{ n+1, n+2, \dots \}$.
$n+1 \not\in A \implies n+1 \in B \implies \{ 0,\dots,n,n+1 \} \subset B \implies P(n+1)$ vera. Il passo induttivo è stato completato.

Grazie al princpio di induzione di prima forma $P(n)$ è vera $\forall n  \in \mathbb{N}$ $\implies B = \mathbb{N}$  e dunque $A = \emptyset$.

### Teorema principio di induzione di seconda forma
Sia $\{ P(n) \}_{n \in \mathbb{N}}$ una famiglia di proposizioni indicizzata su $n \in \mathbb{N}$. Supponiamo che:
1) $P(0)$ sia vera
2) Se $(P(k)$ è vera $\forall k, 0\leq k <n \implies P(n))$ è vera $\forall n \in \mathbb{N}$.
Allora $P(n)$ è vera $\forall n \in \mathbb{N}$.

Dimostrazione:
Sia $A=\{ n \in \mathbb{N}|P(n) \text{ falsa} \}$. Dobbiamo dimostrare che $A = \emptyset$.
Supponiamo per assurdo che $A \neq \emptyset$. Allora siccome $A \neq \emptyset$ e $A \subset \mathbb{N}$, per il buon ordinamento dei naturali vali che $\exists m = min(A)$.
Osserviamo che $0 \not\in A$ perché per ipotesi $P(0)$ è vera, dunque $m \neq 0$.
Siccome $m = min(A)$, allora $\forall k \in\{ 0,\dots,m-1 \}, k\not\in A \implies P(k)$ vera e per ipotesi si ha che $P(m)$ è vera e quindi $m \not\in A$, ma ciò è assurdo.
$A$ non può ammettere minimo dunque $A = \emptyset$.

---

### Teorema esistenza e unicità del quoziente e del resto della divisione euclidea
Siano $n,m\in \mathbb{Z}$ con $m\neq 0$, allora $\exists!q,r\in \mathbb{Z}$ tali che:
$$
\begin{cases}
n = qm +r \\
0\leq r < |m|
\end{cases}
$$
Dimostrazione esistenza:
Consideriamo la seguente condizione:
$$
(\star)_{n} \begin{cases}
n = qm + r \\
0 \leq r < |m|
\end{cases}
$$
Consideriamo inanzittutto il caso dove $n \geq 0$ e $m > 0$.
Procediamo per induzinoe di seconda forma su $n \geq 0$.
$n = 0$ (base dell'induzione).
Osserviamo che ponendo $q:=0$ e $r:= 0$ $(\star)_{0}$ è verificata, infatti vale che:
$$
\begin{cases}
0 = 0m + 0 \\
0 \leq 0 < m
\end{cases}
$$
$n > 0, (\forall k, 0\leq k < n) \implies n$ (passo induttivo).
Distinguiamo due casi:
se $n < m$ basta porre $q:= 0$ e $r:=n$, infatti vale che:
$$
\begin{cases}
n = 0m + n \\
0\leq n < m
\end{cases}
$$
se $n \geq m$ allora poniamo $k:=(n-m)$. Dunque $0 \leq k < n$, quindi per ipoitesi induttiva $\exists q,r \in \mathbb{Z}$ tali che:
$$
\begin{cases}
k = qm + r \\
0 \leq r < m
\end{cases} 
\Longleftrightarrow
\begin{cases}
n = (q+1)m + r \\
0 \leq r < m
\end{cases}
$$
e $(\star)_{n}$ è verificata.
Il passo induttivo è stato compltetato e per il principio di induzione di seconda forma l'asserto di esistenza di $q,r\in \mathbb{Z}$ è vero $\forall n \in \mathbb{Z}, n\geq 0$.

Consideriamo ora il caso dove $n < 0$ e $m > 0$.
Effettuiamo la divisione euclideo tra $-n > 0$ e $m$, ottenendo, $q,r \in \mathbb{Z}$ tali che:
$$
\begin{cases}
-n = qm + r \\
0 \leq r < m
\end{cases}
\Longleftrightarrow
\begin{cases}
n = -qm - r  \\
0\leq r < m
\end{cases}
$$
Distinguiamo due casi:
se $r = 0$ allora vale che:
$$
\begin{cases}
n = (-q)m + 0 \\
0 \leq 0 <m
\end{cases}
$$
e dunque $(\star)_{n}$ è verificata.
se $r > 0$ allora vale che:
$$
\begin{cases}
n = -qm-r \\
0\leq r < m \\
\end{cases}
\Longleftrightarrow
\begin{cases}
n = (-q-1)m + m-r \\
0 \leq r < m
\end{cases}
$$
Osserviamo che $0 < (m-r)<m$ poiché $0 < r < m$. Dunque vale che:
$$
\begin{cases}
n = -(q+1) + (m-r) \\
0 \leq (m-r) < m
\end{cases}
$$
Pertanto $(\star)_{n}$ è verificata.

Infine consideriamo il caso dove $n \in \mathbb{Z}, m <0$.
Eseguiamo la divisione euclidea tra $n$ e $-m > 0$, ottenendo $q, r\in \mathbb{Z}$ tali che:
$$
\begin{cases}
n = q(-m) + r \\
0 \leq r < -m
\end{cases}
\Longleftrightarrow
\begin{cases}
n = -qm +r  \\
0 \leq r < |m|
\end{cases}
$$
Dunque $(\star)_{n}$ è verificata.

Dimostrazione unicità:
Siano $n,m \in \mathbb{Z}$ con $m \neq 0$. Supponiamo che $\exists q,q',r,r'$ tali che:
$$
\begin{cases}
n = qm + r \\
0 \leq r < |m|
\end{cases} \qquad
\begin{cases}
n = q'm + r' \\
0 \leq r' < |m|
\end{cases}
$$
Vale dunque che $qm+r = n= q'm+r' \implies qm+r =q'm+r' \Longleftrightarrow (q-q')m = (r'-r) \implies |q-q'||m| = |r'-r|$.
Poiché $0 \leq r <|m|$ e $0 \leq r' <|m|$, vale che $|r'-r| <|m|$.
Pertanto:
$$
\begin{align}
|q-q'||m|=|r'-r|<|m| \implies |q-q'||m|<|m| \implies|q-q'|<1 \implies |q-q'|=0 \implies q-q' = 0 \implies q = q'
\end{align}
$$
Dunque il quoziente della divisione euclidea è unico. 
Ritornando all'ugaglianza precedente si ha che:
$$
(q-q')m = (r'-r) \implies 0=r'-r \implies r' = r
$$
Segue che anche il resto della divisione euclidea è unico.

---

### Lemma dei cassetti
Siano $n, m \in \mathbb{N}$, siano $X,Y$ due insiemi tali che $n<m$ e $X \sim I_{n}, Y \sim I_{m}$. Allora ogni funzione $f:Y \rightarrow X$ non è iniettiva.

Dimostrazione:
Procediamo per induzione su $n\geq 0$.
$n = 0$ (base dell'induzione)
Allora $X \sim I_{0}  \implies X = \emptyset$. 
$Y \sim I_{m}$ e $m > 0$, dunque $Y \neq \emptyset$.
Osserviamo che $X^{Y}=\emptyset^{Y}=\emptyset$, dunque non esistono funzioni da $Y$ a $X$, in particolare non esistono funzioni iniettive.
La base dell'induzione è verficata.

$n\geq 0, n\implies n+1$ (passo induttivo)
Supponiamo che l'asserto sia vero per qualche $n\geq 0$, dobbiamo verificare che sia vero anche per $n+1$.
Sia $m > n+1$.
Sia $X\sim I_{n+1}$ e $Y \sim I_{m}$. Allora $\exists g:I_{n+1}\rightarrow X$ una bigezione. Poniamo $x_{n}:=g(n)$ e $X':=X \setminus \{ x_{n} \}$.
Possiamo definire $g^{\star}:I_{n}\rightarrow X'$ dove $g^{\star}(a):=g(a), \forall a \in I_{n}$. Allora $g^{\star}$ è una bigezione e dunque $X' \sim I_{n}$.

Supponiamo per assurdo che esista $f:Y\rightarrow X$ iniettiva.
Distinguiamo due casi:
Se $f(Y)\not\ni x_{n} \implies f(Y)\subset X'$. Allora possiamo definire $f^{\star}:Y\rightarrow X'$ dove $f^{\star}(y):=f(y), \forall y \in Y'$. Allora $f^{\star}$ è iniettiva. Ma $Y \sim I_{m}$ e $X' \sim I_{n}$ e $m > n+1>n$, per ipotesi induttiva $f^{\star}$ non può esistere e dunque $f$ non può esistere.
Se $f(Y) \ni x_{n}$. Per iniettività di $f$, $\exists!y_{n}\in Y:f(y_{n})=x_{n}$. Poniamo $Y':=Y\setminus \{y_{n}\}$, dunque $Y' \sim I_{m-1}$. Allora possiamo definire $f^{\star}:Y'\rightarrow X'$ dove $f^{\star}(y):=f(y), \forall y\in Y'$. Allora $f^{\star}$ è iniettiva. Però $Y'\sim I_{m-1}$ e $X' \sim I_{n}$ e $m-1>n\Longleftrightarrow m> n+1$. Dunque per ipotesi induttiva $f^{\star}$ non può esistere e quindi $f$ non può esistere.

Il passo induttivo è stato fatto.
Grazie al principio di induzione l'asserto è vero $\forall n\in \mathbb{N}$.

### Corollario
Sia $n,m \in \mathbb{N}$ e siano $X,Y$ due insiemi tali che $X\sim I_{n}$ e $Y\sim I_{m}$. Allora $X \sim Y \Longleftrightarrow n = m$.
In particolare se $\exists n':X\sim I_{n'}$, allora $n = n'$.

### Definizione di cardinalità
Sia $X$ un insieme finito. Chiamiamo l'unico $n\in \mathbb{N}$ tale che $X \sim I_{n}$ cardinalità di $X$ e scriveremo $|X|=n$.

### Corollario
Sia $X$ un insieme finito, sia $Y \subset X$. Allora $|Y|\leq|X|$.
Inoltre se $Y \subsetneq X$, allora $|Y|<|X|$.

Dimostrazione:
Sia $n=|X|$. Procediamo per induzione su $n\geq 0$.

$n = 0$ (base dell'induzione).
$|X|=0 \implies X=\emptyset$. $Y \subset X=\emptyset \implies Y=\emptyset$.
Allora vale che $|Y|=0\leq 0=|X|$. La base dell'induzione è verificata.

$n \geq 0, n\implies n+1$ (passo induttivo).
Supponiamo vero l'asserto per qualche $n \geq 0$ (ipotesi induttiva). Dobbiamo dimostrare che l'asserto sia vero per $n+1$.
Sia $|X|=n+1$, allora $X \sim I_{n+1}$ e dunque $\exists g:I_{n+1}\rightarrow X$ bigezione.
Poniamo $x_{n}:=g(n)$ e $X' := X \setminus \{ x_{n} \}$. Allora $X'\sim I_{n}$ e $|X'|= n$.
Sia $Y \subset X$.
Distinguiamo due casi:
$Y \not\ni x_{n} \implies Y \subset X'$. Allora per ipotesi induttiva vale che $|Y|\leq |X'|=|X|-1\implies|Y|<|X|$, difatti $Y\subsetneq X$ dato che $x_{n} \in X$ ma $x_{n}\not\in Y$.
$Y \ni x_{n}$. Allora possiamo definire $Y':=Y \setminus \{ x_{n} \}$, dunque $|Y'|=|Y|-1$ e $Y' \subset X'$. Per ipotesi induttiva vale che $|Y|-1 = |Y'| \leq |X'| =|X|-1\implies|Y|\leq|X|$.
Inoltre osserviamo che nel caso $Y \subsetneq X$, allora $Y' \subsetneq X'$ (poiché $x_{n}$ è stato rimosso da entrambi) e per ipotesi induttiva si ha che $|Y|-1=|Y'|<|X'|=|X|-1 \implies |Y|<|X|$.

### Corollario
Un insieme finito non è equipotente ad alcun suo sottoinsieme proprio.

### Corollario
I numeri naturali sono infiniti, ovvero $\mathbb{N}$ non è un insieme finito.

---
### Definizione
Siano $n,m\in \mathbb{Z}$ non entrambi nulli, allora $d\in \mathbb{Z}, d>0$ viene detto essere massimo comune divisore di $n,m$ se:
- $d|n$ e $d|m$
- Per ogni $c \in \mathbb{Z}$ tale che $c|n$ e $c|m$ allora $c|d$

### Definizione
Siano $n,m\in \mathbb{Z}$, allora $M\in \mathbb{Z}, M\geq 0$ viene detto essere minimo comune multiplo di $n,m$ se:
- $n|M$ e $m|M$
- Per ogni $c \in \mathbb{Z}$ tale che $n|c$ e $m|c$ allora $M|c$.

### Proposizione
Siano $n,m\in \mathbb{Z}$ vale che:
- $n|m$ e $m|q$ allora $n|q$, $\forall q\in \mathbb{Z}$
- $n|m$ e $m|n$ allora $n=m$ o $n=-m$.

### Lemma utile
Siano $n,m\in \mathbb{Z}$. Sia $c \in \mathbb{Z}$ tale che $c|n$ e $c|m$, allora $c|xn+ym, \forall x,y\in \mathbb{Z}$.

### Definzione
Siano $n,m\in \mathbb{Z}$ non entrambi nulli, $n$ e $m$ sono detti coprimi se $(n,m)=1$.

### Proposizione
Siano $n,m\in \mathbb{Z}$ non entrambi nulli.
Vale che: $\left( \frac{n}{(n,m)}, \frac{m}{(n,m)} \right)=1$.

### Proposizione
Siano $n,m\in \mathbb{Z}$ coprimi tra loro. Allora:
- $n|mq \implies n|q, \forall q \in \mathbb{Z}$
- $n|q, m|q \implies nm|q, \forall q\in \mathbb{Z}$.

### Teorema
Siano $n,m\in \mathbb{Z}$ entrambi non nulli, allora $\exists! d\in \mathbb{Z}, d>0$ tale che $d=(n,m)$.

Dimsotrazione esistenza:
Sia $S:=\{ s \in \mathbb{N}\setminus \{ 0 \}| s =xn+ym \text{ per qualche } x,y \in \mathbb{Z} \}$.
Osserviamo che $S\neq \emptyset$, poiché è possibile porre $x:= sign(n), y:=sign(m)$, ottenendo che $s = sign(n)n + sign(m)m=|n|+|m|>0 \implies s \in S$.
Inoltre $S \subset \mathbb{N}$, dunque per il buon ordinamento dei naturali abbiamo che $\exists d=min(S)=xn+ym$ per qualche $x,y \in \mathbb{Z}$.
Dimostriamo che $d$ è $MCD$ di $n,m$.
Verifichiamo la seconda proprietà del $MCD$.
Sia $c \in \mathbb{Z}$ tale che $c|n$ e $c|m$, allora per il lemma utile $c|xn+ym=d \implies c|d$.
Verifichiamo la prima proprietà del $MCD$.
Eseguiamo la divisione euclidea tra $n$ e $d$, ottenendo $q,r\in \mathbb{Z}$ tali che:
$$
\begin{cases}
n = qd+ r \\
0 \leq r < d
\end{cases}
$$
Dimostriamo che $r = 0$. Supponiamo per assurdo che $r>0$. Allora $r = n-qd =n - q(xn+ym)=(1-qx)n + (-qy)m >0 \implies r \in S$. Ma allora $r \in S$ e $r < d$, ma ciò è assurdo perché contraddice la minimalità di $d$.
Segue che $r = 0$, pertanto $n = qd \implies d|n$.
La stessa procedura vale eseguendo al divisione tra $m$ e $d$, ottenendo che $d|m$.
Dunque $d|n$ e $d|m$, e la prima proprietà è soddisfatta.

Entrame le proprietà sono soddisfatte, dunque $d=(n,m)$.

### Teorema
Siano $n,m \in \mathbb{Z}$, allora $\exists!M\in \mathbb{Z},M\geq 0$ tale che $M = [n,m]$.
In particolare, se $n=m=0$ allora $M = 0$, altrimenti $M = \frac{|n||m|}{(n,m)}$.

Dimostrazione esistenza:
Consideriamo il caso dove $n=m=0$. Verifichiamo che $M = 0 = [n,m]=[0,0]$.
$n=m=0|0=M$ è verificata. Sia $c\in \mathbb{Z}$ tale che $n=m=0|c$, allora $c = 0$ e $M=0|0=c$ è verificata.

Consdieriamo il caso dove $n,m$ non sono entrambi nulli, allora ha senso parlare di $(n,m)$.
Siccome la nozione di divisibilità non risente del segno possiamo assumere che $n> 0$, $m>0$.
Osserviamo che $(n,m)|n \implies \exists n':n'(n,m)=n$ e $(n,m)|m\implies \exists m':m'(n,m)=m$.
Poniamo $M := \frac{nm}{(n,m)}$.
Vale che:
$$
M = \frac{nm}{(n,m)} = \frac{n'(n,m)m'(n,m)}{(n,m)} = n'm'(n,m) = nm'=n'm
$$
Vale che $n|nm'=M \implies n|M$ e $m|n'm = M \implies m|M$.
Sia $c \in \mathbb{Z}$ tale che $n|c$ e $m|c$. Poiché $(n,m)|n$ e $n|c$ si ha che $(n,m)|c \Longleftrightarrow \exists c':c = c'(n,m)$.
Osserviamo che $n' =\frac{n}{(n,d)}$ e $m'=\frac{m}{(n,m)}$, dunque per la proposizione vale che $(n',m')=1$.
Osserviamo che $n|c\Longleftrightarrow\exists k\in \mathbb{Z}:c = kn$.
Vale che:
$$
c = kn \Longleftrightarrow c'(n,m) = kn'(n,m) \Longleftrightarrow c'=kn' \implies n'|c'
$$
Allo stesso modo troviamo che $m'|c'$. Poiché $(n',m')=1$ si ha che $n'm'|c' \implies n'm'(n,m)|c'(n,m) \implies M|c$.

---
### Teorema cinese del resto
Siano $n,m \in \mathbb{Z}$ tali che $n>0$ e $m> 0$. Siano inoltre $a,b \in \mathbb{Z}$. Si consideri il seguente sistema di congruenze:
$$
\begin{cases}
x \in \mathbb{Z} \\
x \equiv a\ (\text{mod}\ n) \\
x\equiv b\ (\text{mod}\ m)
\end{cases}
$$
Sia $S$ l'insieme del precedente sistema. Allora $S\neq \emptyset \Longleftrightarrow (n,m)|b-a$.
Inoltre, se $S\neq \emptyset$, allora $S=[c]_{[n,m]}=\{ c+[n,m]k\in \mathbb{Z}|k\in \mathbb{Z} \} \subset \mathbb{Z}$, dove $c\in S$ è una particolare soluzione del sistema.

Dimostrazione compatibilità:
Supponiamo che $S\neq \emptyset$. Allora $\exists c\in S$, dunque $c \equiv a\ (\text{mod}\ n)$ e $c \equiv b\ (\text{mod}\ m)$.
$c \equiv a\ (\text{mod}\ n) \Longleftrightarrow\exists k\in \mathbb{Z}:c=a+kn$.
$c \equiv b\ (\text{mod}\ m)\Longleftrightarrow \exists h\in \mathbb{Z}:c = b+hm$.
Allora $a+kn=c=b+hm \implies a+kn = b+hm \Longleftrightarrow kn-hm=b-a$. Osserviamo che $(n,m)|n$ e $(n,m)|m$, dunque per il lemma utile $(n,m)|kn-hm=b-a \implies(n,m)|b-a$.

Viceversa, se supponiamo che $(n,m)|b-a$. Applicando l'algoritmo di Euclide con sostituzione a ritroso dei resti a $n,m$ troviamo $x,y \in \mathbb{Z}:xn+ym=(n,m)$.
Sappiamo che $(n,m)|b-a\implies \exists k\in \mathbb{Z}:b-a=k(n,m)\implies b-a=kxn+kym$.
Da cui:
$$
b-a = kxn +kym \Longleftrightarrow  b -kym = a +kxn =: c
$$
Allora $c \in S$, perché è vero che $c \equiv a\ (\text{mod}\ n)$ e che $c\equiv b\ (\text{mod}\ m)$. Pertanto $S \neq \emptyset$.

Dimostrazione calcolo di $S$:
Dimostriamo che $S \subset[c]_{[n,m]}$, dove $c$ è una soluzione particolare del sistema ($c\in S$).
Sia $c' \in S$ una soluzione particolare del sistema. Vale dunque che $\exists k,k',h,h'\in \mathbb{Z}$ per i quali:
$$
\begin{cases}
c = a + kn \\
c' = a + k'n \\
c = b + hm \\
c' = b +h'm
\end{cases}
$$
Da cui $c-c' = a+kn-a-k'n=(k-k')n \implies n|c-c'$.
Inoltre $c-c'=b+hm-b-h'm = (h-h')m \implies m|c-c'$.
Allora $[n,m]|c-c' \implies \exists g\in \mathbb{Z}:c-c' = g[n,m]\Longleftrightarrow c' =c - g[n,m] \implies c' \in[c]_{[n,m]}$.

Dimostriamo che $[c]_{[n, m]} \subset S$, dove $c$ è una soluzione particolare del sistema ($c \in S$).
Sia $c' \in [c]_{[n,m]}$. Allora $c'=c +k[n,m]$ per qualche $k \in \mathbb{Z}$. Passando alle classi di resto modulo $n$ otteniamo che:
$$
\begin{align}
[c']_{n} &= [c + k [n,m]]_{n} \\
 & = [c]_{n} + [k]_{n} [0]_{n} \\
 & = [a]_{n} + [0]_{n} \\
 & = [a]_{n}
\end{align}
$$
Dunque $[c']=[a]_{n} \Longleftrightarrow c'\equiv a\ (\text{mod}\ n)$.

Passando invece alle classi di resto modulo $m$ otteniamo che:
$$
\begin{align}
[c']_{m} &= [c + k [n,m]]_{m} \\
 & = [c]_{m} + [k]_{m} [0]_{m} \\
 & = [b]_{m} + [0]_{m} \\
 & = [b]_{m}
\end{align}
$$
Dunque $[c']=[a]_{n} \Longleftrightarrow c'\equiv a\ (\text{mod}\ n)$.

---
### Definizione grafo finito
Sia $G=(V,E)$ un grafo. $G$ è detto essere finito se $V$ è un insieme finito.

### Proposizione
Sia $G=(V,E)$ un grafo finito. $G$ è albero se e solo se è connesso e $G-e$ è sconnesso, $\forall e\in E$.

### Definizione albero di copertura
Sia $G=(V,E)$ un grafo finito e connesso e sia $T$ un suo sottografo. $T$ è detto albero di copertura di $G$ se $T$ è albero e $V(T)=V(G)$.

### Teorema
Sia $G=(V,E)$ un grafo finito e connesso, allora ha almeno un albero di copertura.

Dimostrazione:
Poniamo $\mathcal{C}:=\{ C \text{ sottografo di } G | C \text{ connesso}, V(T)=V(G) \}$.
Poniamo $\mathcal{A}:=\{ n \in \mathbb{N}|n = |E(C)|, \text{per qualche }C  \in \mathcal{C}\}$.
Osserviamo che $G$ è sottografo di sé stesso, inoltre $G$ è connesso per ipotesi e $V(G)=V(G)$ è banalmente vero, dunque $G \in \mathcal{C} \implies \mathcal{C} \neq \emptyset \implies \mathcal{A}\neq \emptyset$.
$\mathcal{A}\neq \emptyset$ e $\mathcal{A}\subset \mathbb{N}$, dunque per il buon ordinamento dei naturali vale che $\exists \bar{n} \in \mathcal{A}: \bar{n}=min(\mathcal{A})\implies \exists \bar{C}\in \mathcal{C}: |E(\bar{C})|=\bar{n}$.
Dimostriamo allora che $\bar{C}$ è un albero.
Supponiamo per assurdo che $\bar{C}$ non sia un albero, poiché connesso per ipotesi, grazie alla proposizione precedente sappiamo che $\exists e\in E(\bar{C})$ per cui $\bar{C}-e$ è connesso.
Osserviamo però che $V(\bar{C}-e)=V(\bar{C})=V(G)$, dunque $\bar{C}-e \in \mathcal{C}\implies |E(\bar{C})-e|\in \mathcal{A}$. Ma $|E(\bar{C}-e)|=|E(\bar{C})|-1 =\bar{n}-1<\bar{n}$, ma ciò porta ad un assurdo, perché contraddice la minimalità di $\bar{n}$.
Dunque $\bar{C}$ è un albero di copertura di $G$.

---

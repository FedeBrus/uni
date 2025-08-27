### Teorema principio di induzione di prima forma
Sia $\{ P(n) \}_{n \in \mathbb{N}}$ una famiglia di proposizioni indicizzata su $n \in \mathbb{N}$. Supponiamo che:
- $P(0)$ sia vera
- Se $P(n)$ è vera allora lo è anche $P(n+1)$.
Allora $P(n)$ è vera $\forall n\geq 0$.

### Definizione ordinamento
Sia $X$ un insieme e sia $\mathcal{R}$ una relazione $\mathcal{R}\subset X \times X$. $\mathcal{R}$ è detta ordinamento parziale di $X$ se valgono le seguenti:
- $x\mathcal{R}x, \forall x \in X$
- $x \mathcal{R}y, y\mathcal{R}x \implies x = y, \forall x,y\in X$
- $x\mathcal{R}y,y\mathcal{R}z \implies x\mathcal{R}z,\forall x,y,z\in X$
Inoltre se vale che $x\mathcal{R}y$ o $y\mathcal{R}x, \forall x,y \in X$, allora $\mathcal{R}$ viene detta ordinamento totale.

### Definizione della relazione $\leq$
Definiamo la relazione $\leq:\mathbb{N}\times \mathbb{N}$. Siano $n,m \in \mathbb{N}$, allora $n \leq m \Longleftrightarrow \exists k\in \mathbb{N}:n+k=m$.

### Definizione di minimo
Sia $X$ un insieme, sia $\leq$ un ordinamento di $X$ e sia $A \subset X$. Sia $m \in A$. $m$ è detto minimo di $A$ se vale che $m\leq a, \forall a\in A$.

### Definizione buon ordinamento
Sia $(X,\leq)$ un insieme totalmente ordinato, $(X,\leq)$ si dice essere ben ordinato se ogni sottoinsieme non vuoti di $X$ ammette un minimo.

### Teorema buon ordinamento dei naturali
$(\mathbb{N}, \leq)$ è ben ordinato.

Dimostrazione:
Sia $A \subset \mathbb{N}$ tale che $A$ non ha minimo.
Vogliamo dimostrare che $A=\emptyset$.
Poniamo $B:=\mathbb{N} \setminus A$.
Sia $P(n):=(\{ 0,\dots, n \}\subset B)$.
Osserviamo che se $P(n)$ è vera $\forall n\in \mathbb{N}$, allora $B=\mathbb{N} \Longleftrightarrow A=\emptyset$.
Procediamo per induzione su $n\geq 0$.
$n = 0$ (base dell'induzione).
Osserviamo che $n = 0 = min(\mathbb{N})$, dunque $0 \not\in A$ perché altrimenti ne sarebbe sicuramente il minimo. Segue che $0 \in B \implies \{ 0 \}\subset B \implies P(0)$ è verificata.
La base dell'induzione è stata verificata.

$n \geq 0, n \implies n+1$ (passo induttivo).
Supponiamo $P(n)$ vera per qualche $n\geq 0$ (ipotesi induttiva). Vogliamo dimostrare che $P(n+1)$ è vera, ovvero $\{ 0,\dots,n,n+1 \}\subset B$.
Osserviamoc che per ipotesi induttiva $\{ 0,\dots,n \} \subset B \implies A \subset \{ n+1,n+2,\dots \}$. Allora $n+1 \not\in A$, perché altrimenti ne sarebbe sicuramente il minimo, in quanto $n+1=min(\{ n+1,n+2,\dots \})$.
Segue che $n+1 \in B \implies \{ 0,\dots,n,n+1 \}\subset B \implies P(n+1)$ è vera. Il passo induttivo è stato completato.

Grazie al principio di induzione di prima forma, $P(n)$ è vera $\forall n \in \mathbb{N}$, dunque $B=\mathbb{N} \Longleftrightarrow A= \emptyset$.

### Teorema del principio di induzione di seconda forma
Sia $\{ P(n) \}_{n\in \mathbb{N}}$ una famiglia di proposizioni indicizzata su $n\in \mathbb{N}$. Supponiamo che:
- $P(0)$ sia vera.
- Se $P(k)$ è vera $\forall k:0\leq k<n$, allora $P(n)$ è vera.
Allora $P(n)$ è vera $\forall n\in \mathbb{N}$.

---
### Teorema di esistenza e unicità del quoziente e del resto della divisione Euclidea
Sia $n,m\in \mathbb{Z}$ con $m \neq 0$. Allora $\exists!q,r\in \mathbb{Z}$ per cui:
$$
(\star)_{n} \begin{cases}
n = mq+r \\
0\leq r < |m|
\end{cases}
$$
Dimostrazione esistenza:
Consideriamo il caso dove $n\geq 0,m > 0$.
Fissiamo $m > 0$.
Sia $P(n):= (\exists q,r\in \mathbb{Z}: (\star)_{n}\text{ vera})$.
Procediamo per induzione di seconda forma su $n \geq 0$:
$n = 0$ (base dell'induzione):
Osserviamo che basta porre $q:= 0$ e $r:=0$. Infatti,
$$
\begin{cases}
0 = m 0+0 \\
0 \leq 0 < m
\end{cases}
$$
è vera, dunque $(\star)_{0}$ è verificata e duqnue $P(0)$ è vera. La base dell'induzione è verificata.

$n > 0, (\forall k, 0\leq k<n) \implies n$.
Supponiamo $P(k)$ vera $\forall k, 0\leq k<n$ (ipotesi induttiva). Dobbiamo dimostrare che $P(n)$ è vera.
Distinguiamo due casi:
Se $n < m$, allora basta porre $q:= 0$ e $r:=n$. Infatti,
$$
\begin{cases}
n = m 0 + n \\
0 \leq n <m
\end{cases}
$$
è vera, dunque $(\star)_{n}$ è verificata e dunque $P(n)$ è vera.
Se $n\geq m$, allora poniamo $k:=n-m$. Poiché $0 \leq k < n$, è possibile applicare l'ipotesi induttiva ottenendo $q,r \in \mathbb{Z}$ per i quali:
$$
\begin{cases}
k = mq+r \\
0\leq r<m
\end{cases} \Longleftrightarrow
\begin{cases}
n-m=mq+r \\
0\leq r<m
\end{cases}\Longleftrightarrow
\begin{cases}
n=(q+1)m +r \\
0\leq r <m
\end{cases}
$$
Ma allora $(\star)_{n}$ è verificata e dunque $P(n)$ è vera.
Il passo induttivo è stato completato.
Grazie al principio di induzione di seconda forma, $P(n)$ è vera $\forall n \geq 0$.

Consideriamo il caso dove $n < 0, m > 0$.
Fissiamo $m > 0$.
Eseguiamo la divisione euclidea tra $-n>0$ e $m > 0$. Otteniamo dunque $q,r\in \mathbb{Z}$ tali che:
$$
\begin{cases}
-n = qm + r \\
0 \leq r < m
\end{cases} \Longleftrightarrow
\begin{cases}
n = -qm -r \\
0\leq r < m
\end{cases}
$$
Distinguiamo due casi:
Se $r = 0$, allora $(\star)_{n}$ è verificata. Infatti vale che:
$$
\begin{cases}
n = (-q)m + 0  \\
0 \leq 0 < m
\end{cases}
$$
Se $r > 0$, allora vale che:
$$
\begin{cases}
n = -qm -e \\
0\leq r < m
\end{cases} \Longleftrightarrow
\begin{cases}
n = -qm-m+m-r \\
0\leq r < m
\end{cases} \Longleftrightarrow
\begin{cases}
n=(-q-1)m +(m-r) \\
0\leq r<m
\end{cases}
$$
Osserviamo che $0<m-r<m$ e dunque vale che:
$$
\begin{cases}
n = (-q-1)m + (m-r) \\
0\leq m-r <m
\end{cases}
$$
Pertanto $(\star)_{n}$ è verificata.

Consideriamo infine il caso dove $n \in \mathbb{Z}, m <0$.
Eseguiamo la divisione euclidea tra $n$ e $-m > 0$, ottenendo $q,r\in \mathbb{Z}$ per cui:
$$
\begin{cases}
n=-mq+r \\
0\leq r < -m
\end{cases} \implies
\begin{cases}
n = m(-q) +r \\
0\leq r<|m|
\end{cases}
$$
Ma allora $(\star)_{n}$ è verificata.

Dimostrazione unicità:
Siano $n,m \in \mathbb{Z}$ con $m \neq 0$. Siano $q,q',r,r'\in \mathbb{Z}$ tali per cui:
$$
\begin{cases}
n = mq+ r \\
0\leq r<|m|
\end{cases}\qquad
\begin{cases}
n = mq'+r' \\
0\leq r'<|m|
\end{cases}
$$
Dunque vale che $mq+r=n=mq'+r' \implies mq+r=mq'+r' \Longleftrightarrow (q-q')m=r'-r \implies|q-q'||m|=|r'-r|$.
Poiché $0\leq r <|m|$ e $0\leq r'<|m|$, $0 \leq |r'-r|<|m|$.
Allora:
$$
|q-q'||m|=|r'-r|<|m| \implies|q-q'||m|<|m| \implies|q-q'|<1 \implies|q-q'|=0 \implies q=q'
$$
Dunque il quoziente della divisione euclidea è unico.
Tornando a una delle uguaglianze precedenti:
$$
(q-q')m=r'-r \implies 0=r'-r \implies r=r'
$$
Dunque anche il resto della divisione euclidea è unico.

---
### Definizione di insieme finito
Sia $X$ un insieme, $X$ si dice finito se $\exists n\in \mathbb{N}$ per cui $X \sim I_{n}$.

### Lemma dei cassetti
Siano $n,m\in \mathbb{N}$ e siano $X,Y$ insiemi per i quali $n<m, X\sim I_{n}, Y\sim I_{m}$. Allora ogni funzione $f:Y\rightarrow X$ non è ineittiva.

Dimostrazione:
Procediamo per induzione su $n\geq 0$.
$n=0$ (base dell'induzione).
Osserviamo che $X\sim I_{n}=I_{0}\implies X=\emptyset$. Inoltre $m> n$ e $Y \sim I_{m}\implies Y\neq \emptyset$. Si ha che $X^{Y}=\emptyset^{Y}=\emptyset$, quindi non esistono funzioni da $Y$ a $X$, tantomeno ne esistono di iniettive.

$n\geq 0, n \implies n+1$ (passo induttivo).
Supponiamo che l'asserto sia vero per qualche $n\geq 0$ (ipotesi induttiva), dobbiamo dimostrare che sia vero anche per $n+1$.

Sia $m > n+1$.
Sia $X\sim I_{n+1}$. Dunque $\exists g:I_{n+1}\rightarrow X$ bigezione. Poniamo $x_{n}:=g(n)$. Poniamo $X':=X\setminus \{ x_{n} \}$. Allora è possibile definire $g^{\star}:I_{n}\rightarrow X'$ bigezione dove $g^{\star}(a):=g(a),\forall a\in I_{n}$. Allora $g^{\star}$ è una bigezione e di conseguenza $X'\sim I_{n}$.

Supponiamo per assurdo che $\exists f:Y\rightarrow X$ iniettiva.

Distinguiamo due casi:
Se $f(Y) \not\ni x_{n} \implies f(Y)\subset X'$. Allora è possibile definire $f^{\star}:Y\rightarrow X'$ dove $f^{\star}(y)=f(y),\forall y\in Y$. Allora $f^{\star}$ è iniettiva, ma $Y\sim I_{m}$ e $X' \sim I_{n}$ e per ipotesi $m>n+1>n$, dunque per ipotesi induttiva $f^{\star}$ non può esistere. Segue che $f$ non può esistere.
Se $f(Y) \ni x_{n}$ allora, siccome $f^{-1}(x_{n})\neq \emptyset$ e $f$ è iniettiva, $\exists! y_{n}\in Y:f(y_{n})=x_{n}$. Poniamo $Y':=Y\setminus \{ y_{n} \}$, dunque $Y' \sim I_{m-1}$. Osserviamo che $f(Y')\subset X'$. A questo punto possiamo definire $f^{\star}:Y' \rightarrow X'$ dove $f^{\star}(y):=f(y), \forall y\in Y'$. Segue che $f^{\star}$ è iniettiva, ma $Y'\sim I_{m-1}$, $X'\sim I_{n}$ e $m-1>n \Longleftrightarrow m>n+1$, perciò per ipotesi induttiva $f^{\star}$ non può esistere. Segue che $f$ non può esistere.

Il passo induttivo è stato completato. Grazie al principio di induzione di prima forma l'asserto del teorema è vero $\forall n\in \mathbb{N}$.

### Definizione di cardinalità
Sia $X$ un insieme e sia $n \in \mathbb{N}$ tale per cui $X \sim I_{n}$, chiamaremo $n$ cardinalità di $X$ e scriveremo $|X|:=n$.

### Corollario
Siano $n,m\in \mathbb{N}$ e siano $X,Y$ insiemi tali che $X\sim I_{n}$ e $Y \sim I_{m}$. Allora $Y\sim X \Longleftrightarrow n = m$.
In particolare se $\exists n'\in \mathbb{N}$ tale per cui $I_{n} \sim X\sim I_{n'}$, allora $n = n'$.

Dimostrazione:
Supponiamo che $X\sim Y$. Supponiamo per assurdo che $n\neq m$, a meno di scambio tra $n,m$ possiamo assumere che $n<m$. Allora per il lemma dei cassetti non può esistere alcuna funzione iniettiva da $Y$ a $X$, ma ciò contraddice l'ipotesi di equipotenza tra $X$ e $Y$.
Supponiamo che $n=m$. Allora $X \sim I_{n}=I_{m}\sim Y$. Ricordando che la composizione di bigezioni è bigettiva, si ha che $X \sim Y$.

### Corollario
Sia $X$ un insieme finito. Se $Y \subset X$ allora $Y$ è finito e $|Y|\leq|X|$.
Inoltre se $Y \subsetneq X$, allora $Y$ è finito e $|Y|<|X|$.

Dimostrazione:
Sia $n:=|X|$, procediamo per induzione su $n\geq 0$.

$n = 0$ (base dell'induzione):
$|X|=0=n\implies X=\emptyset \implies Y=\emptyset$. Allora la base dell'induzione è verificata in quanto $|Y|=|\emptyset|=0\leq 0=|\emptyset|=|X|$ è verificata.

$n \geq 0, n \implies n+1$ (passo induttivo):
Supponiamo vero l'asserto del corollario per qualche $n \geq 0$ (ipotesi induttiva). Dobbiamo dimostrare che tale asserto è vero anche per $n+1$.
$X \sim I_{n+1}$ dunque $\exists g:I_{n+1}\rightarrow X$ bigezione. Sia $x_{n}:=g(n)$. Sia $X':=X\setminus \{ x_{n} \}$. Segue che $X'\sim I_{n}$ e $|X'|=|X|-1$.

Distinguiamo due casi:
$Y \not\ni x_{n}\implies Y\subsetneq X, Y\subset X'$. Allora è possibile applicare l'ipotesi induttiva, per la quale $|Y|\leq|X'|=|X|-1\implies|Y|<|X|$.
$Y \ni x_{n}$. Allora definiamo $Y':=Y\setminus x_{n}$. Allora $|Y'|=|Y|-1$ e $Y'\subset X'$. Ora è possibile applicare l'ipotesi induttiva, con la quale troviamo che $|Y|-1=|Y'|\leq |X'|=|X|-1 \implies|Y| \leq|X|$.
Osserviamo che nel caso $Y \subsetneq X \implies Y' \subsetneq X'$, applicando l'ipotesi induttiva otteniamo che $|Y|-1=|Y'|< |X'|=|X|-1 \implies|Y| <|X|$.

---

### Definizione di MCD e mcm
Siano $n,m\in \mathbb{Z}$ non entrambi nulli, sia $d>0, d\in \mathbb{Z}$ tale che:
- $d|n,d|m$
- Se $\exists c\in \mathbb{Z}$ tale che $c|n,c|m$, allora $c|d$
Allora $d$ viene detto massimo comune divisore di $n,m$.

Siano $n,m\in \mathbb{Z}$, sia $M\geq 0, m \in \mathbb{Z}$ tale che:
- $n|M,m|M$
- Se $\exists c \in \mathbb{Z}$ tale che $n|c,m|c$, allora $M|c$
Allora $M$ viene detto minimo comune multiplo di $n,m$.

### Proposizione
Sia $n,m\in \mathbb{Z}$. Vale che:
- Se $n|m$ e $m|q$ allora $n|q,\forall q\in \mathbb{Z}$
- Se $n|m$ e $m|n$ allora $n=m$ o $n=-m$

### Lemma utile
Sia $n,m \in \mathbb{Z}$. Sia $c \in \mathbb{Z}$ tale che $c|n$ e $c|m$, allora $c|xn+ym,\forall x,y\in \mathbb{Z}$.

### Definizione di coprimi
Siano $n,m \in \mathbb{Z}$ non entrambi nulli. $n$ e $m$ sono detti coprimi tra loro se $(n,m)=1$.

### Proposizione
Siano $n,m\in \mathbb{Z}$ non entrambi nulli. Allora vale che:
 - $n|mq \implies n|q$
 - $n|q$ e $m|q$ $\implies nm|q$

### Proposizione
Siano $n,m\in \mathbb{Z}$ non entrambi nulli. Allora vale che:
$$
\left( \frac{n}{(n,m)}, \frac{m}{(n,m)} \right)= 1
$$
### Teorema esistenza e unicità di MCD
Siano $n,m\in \mathbb{Z}$ non entrambi nulli. Allora $\exists!d\in \mathbb{Z}, d>0$ massimo comune divisore di $n,m$.

Dimostrazione esistenza:
Sia $S:=\{ s \in \mathbb{N}\setminus \{ 0 \}|s=xn+ym, \text{ per qualche } x,y \in \mathbb{Z} \}$.
Osserviamo che $S\neq \emptyset$, in quanto è possibile scegliere $s = sign(n)n+sign(m)m =|n|+|m|>0 \implies s \in S$.
Dunque $S\neq \emptyset$ e $S \subset \mathbb{N}$, per il teorema di buon ordinamento dei natuali abbiamo che $\exists d=min(S)$.

Dimostriamo che $d$ è MCD di $n,m$.
Poiché $d\in S$, $\exists x,y\in \mathbb{Z}$ particolari tali che $d=xn+ym$.

Sia $c\in \mathbb{Z}$ tale che $c|n$ e $c|m$, allora per il lemma utile $c|xn+ym=d \implies c|d$, dunque la seconda proprietà del MCD è soddisfatta.

Eseguiamo la divisione euclidea tra $n$ e $d$, ottenendo $q,r\in \mathbb{Z}$ per cui:
$$
\begin{cases}
n = qd+ r \\
0 \leq r < d
\end{cases}
$$
Supponiamo che $r>0$. Allora $r=n-qd=n-q(xn+ym)=(1-qx)n+(-qy)m$. Dunque $r$ è combinazione lineare positiva di $n,m$, segue che $r \in S$. Ma ciò è assurdo, in quanto $r<d$ e ciò contraddirebbe la minimalità di $d$.
Perciò $r = 0$ e $n = qd \implies d|n$.
Lo stesso procedimento vale per la divisione euclidea tra $m$ e $d$, concludendo che $d|m$. Poiché $d|n$ e $d|m$ anche la prima proprietà del MCD è soddisfatta.

Dimostrazione unicità.
Supponiamo che esistano $d>0, d'>0$ entrambi MCD di $n,m$.
Per la prima proprietà di MCD di $d$ si ha che $d|n$ e $d|m$, per la seconda proprietà di MCD di $d'$, scegliendo $c:=d$ risulta che $d|d'$.
Per la prima proprietà di MCD di $d'$ si ha che $d'|n$ e $d'|m$, per la seconda proprietà di MCD di $d$, scegliendo $c:=d'$ risulta che $d'|d$.
Per la proposizione menzionata, $d|d', d'|d \implies d=d'$ o $d=-d'$, poiché $d>0$ e $d'>0$ può essere vera solo la prima, ovvero $d=d'$.

### Teorema esistenza e unicità di mcm
Siano $n,m\in \mathbb{Z}$. Allora $\exists!M\in \mathbb{Z},M\geq 0$ minimo comune multiplo di $n,m$. Inoltre vale che se $n=m=0$ allora $M = 0$. Se invece $n,m$ non sono entrambi nulli allora $M=\frac{|n||m|}{(n,m)}$.

Dimostrazione esistenza:
Supponiamo che $n=m=0$. Poniamo $M:=0$. Vale che $n=m=0|0=M$.
Sia $c\in \mathbb{Z}$ tale che $n=m=0|c$, allora $c=0$. Vale che $M=0|0=c$.
Dunque $M=0$ è mcm di $n,m$ con $n=m=0$.
Supponiamo invece che $n,m$ non siano entrambi nulli.
Poiché la nozione di divisibilità non riesente del segno possiamo suppore che $n>0$ e $m> 0$.
Osserviamo che per definizione $(n,m)|n\Longleftrightarrow\exists n':n=n'(n,m)$.
Osserviamo che per definizione $(n,m)|m\Longleftrightarrow\exists m':m=m'(n,m)$.
Poniamo $M:=\frac{nm}{(n,m)}=\frac{n'(n,m)m'(n,m)}{(n,m)}=n'm'(n,m)=nm'=n'm$.
Osserviamo che $n|nm'=M\implies n|M$ e che $m|n'm=M\implies m|M$, dunque la prima proprietà dell'mcm è soddisfatta.
Osseviamo che $n'=\frac{n}{(n,m)}$ e che $m'=\frac{m}{(n,m)}$, dunque per la proposizione precedente $(n',m')=1$.

Sia $c\in \mathbb{Z}$ tale che $n|c$ e $m|c$. Siccome $(n,m)|n$ e $n|c$, si ha che $(n,m)|c\Longleftrightarrow\exists c'\in \mathbb{Z}:c=c'(n,m)$.
Inoltre $n|c \Longleftrightarrow \exists k\in \mathbb{Z}:kn=c$. Vale che $kn'(n,m)=kn=c=c'(n,m) \implies kn'=c' \implies n'|c'$.
Inoltre $m|c \Longleftrightarrow \exists h\in \mathbb{Z}:hm=c$. Vale che $hm'(n,m)=hm=c=c'(n,m) \implies hm'=c' \implies m'|c'$.
Per via della proposizione precedente $n'|c, m'|c \implies n'm'|c'\implies n'm'(n,m)|c'(n,m)=M|c$.

Dimostrazione unicità.
Supponiamo che esistano $M\geq0, M'\geq0$ entrambi mcm di $n,m$.
Per la prima proprietà di mcm di $M$ si ha che $n|M$ e $m|M$, per la seconda proprietà di mcm di $M'$, scegliendo $c:=M$ risulta che $M'|M$.
Per la prima proprietà di mcm di $M'$ si ha che $n|M'$ e $m|M'$, per la seconda proprietà di mcm di $M$, scegliendo $c:=M'$ risulta che $M|M'$.
Per la proposizione menzionata, $M|M', M'|M \implies M=M'$ o $M=-M'$, poiché $M\geq0$ e $M'\geq0$ può essere vera solo la prima, ovvero $M=M'$.

---
### Teorema cinese del resto
Siano $n,m \in \mathbb{Z}$ con $n>0$ e $m>0$. Siano inoltre $a,b \in \mathbb{Z}$. Si consideri il seguente sistema di congruenze:
$$
\begin{cases}
x \in \mathbb{Z} \\
x \equiv a\ (\text{mod}\ n) \\
x \equiv b\ (\text{mod}\ m) \\
\end{cases}
$$
Sia $S\subset \mathbb{Z}$ l'insieme delle soluzioni del precedente sistema. Allora $S \neq \emptyset \Longleftrightarrow (n,m)|b-a$.
Inoltre, se $S\neq \emptyset$, allora $S=[c]_{[n,m]}$ dove $c\in S$ è una soluzione particolare del sistema.

Dimostrazione compatibilità:
Supponiamo che $S\neq \emptyset$. Allora $\exists c\in S$ soluzione.
Allora $\exists k\in \mathbb{Z}:c=a+kn$ e $\exists h \in \mathbb{Z}: c=b+hm$. Vale che $a+kn=c=b+hm \implies a+kn=b+hm \Longleftrightarrow b-a=kn-hm$.
Per definizione $(n,m)|n$ e $(n,m)|m$, dunque per il lemma utile $(n,m)|kn-hm=b-a \implies(n,m)|b-a$.

Supponiamo che $(n,m)|b-a$. Allora $\exists k\in \mathbb{Z}:b-a=k(n,m)$.
Applicando l'algoritmo di euclide con sostituzione a ritroso dei resti alla coppia $(n,m)$ otteniamo $x,y\in \mathbb{Z}$ per cui $(n,m)=xn+ym$.
Segue che $b-a=k(n,m)\Longleftrightarrow b-a= kxn+kym \Longleftrightarrow b-kym = a+kxn =:c$.
Vale che $c \equiv a\ (\text{mod}\ n)$ e che $c\equiv b\ (\text{mod}\ m)$ e di conseguenza $c \in S$.


Dimostriamo $S=[c]_{[n,m]}$ dimostrando che $S \subset[c]_{[n,m]}$ e che $[c]_{[n,m]}\subset S$.
Dimostrazione $S \subset [c]_{[n,m]}$.
Sia $c$ una soluzione particolare del sistema e sia $c' \in S$.
Valgono:
$$
\begin{cases}
c \equiv a\ (\text{mod}\ n) \\
c \equiv b\ (\text{mod}\ m) \\
c' \equiv a\ (\text{mod}\ n) \\
c' \equiv b\ (\text{mod}\ m)
\end{cases}
$$
Dunque $\exists k,k',h,h'$ per i quali:
$$
\begin{cases}
c = a + kn \\
c = b + hm \\
c' = a + k'n \\
c' = b + h'm \\
\end{cases}
$$
Dunque $c'-c=a+kn-a-k'n=(k-k')n\implies n|c'-c$.
Per definizione $[n,m]|n$ e per la proposizione $[n,m]|c'-c \implies \exists s\in \mathbb{Z}:c'-c=s[n,m] \implies c'=c+s[n,m] \implies c'\in[c]_{[n,m]}$.

Dimostrazione $[c]_{[n,m]} \subset S$.
Sia $c$ una soluzione particolare del sistema e sia $c' \in [c]_{[n,m]}$.
Vale che $\exists k\in \mathbb{Z}: c'=c+k[n,m]$. Passando alle classi di resto modulo $n$ si ottiene che $[c']_{n}=[c+k[n,m]]_{n}=[c]_{n}=[a]_{n} \implies c'\equiv a\ (\text{mod}\ n)$.
Passanod invece alle classi di resto modulo $m$ si ottiene che $[c']_{m}=[c+k[n,m]]_{m}=[c]_{m}=[b]_{m}\implies c'\equiv b\ (\text{mod}\ m)$.
$c' \in S$ perché soluzione.

---

### Proposizione
Sia $n>0$.
Siano $\alpha, \beta \in (\mathbb{Z} \big/_{n\mathbb{Z}})^{*}$. Vale che:
- $\alpha \beta \in (\mathbb{Z} \big/_{n\mathbb{Z}})^{*}$ e $(\alpha \beta)^{-1}=\alpha^{-1}\beta^{-1}=\beta^{-1}\alpha^{-1}$
- $\alpha^{-1}\in (\mathbb{Z} \big/_{n\mathbb{Z}})^{*}$ e $(\alpha^{-1})^{-1} = \alpha$

### Teorema di Fermat Eulero
Sia $n>0$.
Sia $\alpha \in (\mathbb{Z} \big/_{n\mathbb{Z}})^{*}$. Allora $\alpha^{\phi(n)}=[1]_{n}$

Dimostrazione:
Sia $n\in \mathbb{Z},n>0$. Sia $\alpha \in (\mathbb{Z} \big/_{n\mathbb{Z}})^{*}$.
Definiamo la funzione $L_{\alpha}:(\mathbb{Z} \big/_{n\mathbb{Z}})^{*}\rightarrow (\mathbb{Z} \big/_{n\mathbb{Z}})^{*}$ dove $L_{\alpha}(\beta)=\alpha \beta$. Per la proposizione precedente sappiamo che $L_{\alpha}$ è ben definita.
Dimostiamo che $L_{\alpha}$ è iniettiva.
Siano $\beta_{1},\beta_{2}\in (\mathbb{Z} \big/_{n\mathbb{Z}})^{*}$ tali che $L_{\alpha}(\beta_{1})=L_{\alpha}(\beta_{2})$. Allora:
$$
L_{\alpha}(\beta_{1}) = L_{\alpha}(\beta_{2}) \implies \alpha\beta_{1} = \alpha \beta_{2} \implies \alpha \beta_{1} \alpha^{-1} = \alpha \beta_{2} \alpha^{-1} \implies [1]_{n} \beta_{1}=[1]_{n}\beta_{2} \implies \beta_{1} = \beta_{2}
$$
Dunque $L_{\alpha}$ è iniettiva. Siccome $(\mathbb{Z} \big/_{n\mathbb{Z}})^{*}$ è un insime finito (in particolare $\phi(n)=|(\mathbb{Z} \big/_{n\mathbb{Z}})^{*}|$) e coincide sia con il dominio che il codominio di $L_{\alpha}$, si ha che $L_{\alpha}$ è surgettiva.
$L_{\alpha}$ è sia iniettiva che surgettiva, dunque è bigettiva. Dominio e codominio di $L_{\alpha}$ coincidono e $L_{\alpha}$ è bigettiva, dunque $L_{\alpha}$ induce una permutazione sugli elementi di $(\mathbb{Z} \big/_{n\mathbb{Z}})^{*}$.

Sia $\{ \beta_{1},\dots,\beta_{k} \} = (\mathbb{Z} \big/_{n\mathbb{Z}})^{*}$ dove $k:=\phi(n)$.
Per associatività e commutatività del prodotto in $(\mathbb{Z} \big/_{n\mathbb{Z}})$ (e di conseguenza in $(\mathbb{Z} \big/_{n\mathbb{Z}})^{*}$), si ha che:
$$
\beta_{1}\dots \beta_{k}= L_{\alpha}(\beta_{1})\dots L_{\alpha}(\beta_{k})=\alpha \beta_{1}\dots \alpha \beta_{k} =\alpha^{k}\beta_{1}\dots \beta_{k}
$$
Poniamo $\gamma:= \beta_{1}\dots \beta_{k}$. 
Per la proposizione precedente $\gamma \in (\mathbb{Z} \big/_{n\mathbb{Z}})^{*}$, perciò ha senso parlare di $\gamma^{-1}$.
Dal risultato precedente si ricava che $\gamma=\alpha^{k}\gamma \implies \gamma\gamma^{-1}=\alpha^{k}\gamma \gamma^{-1}\implies [1]_{n}=\alpha^{k}$.

### Teorema fondamnetale della crittografia RSA
Sia $n>0$. Sia $c>0$ tale che $(c, \phi(n))=1$.
Sia $P_{c}:(\mathbb{Z} \big/_{n\mathbb{Z}})^{*}\rightarrow (\mathbb{Z} \big/_{n\mathbb{Z}})^{*}$ dove $P_{c}(\alpha)=\alpha^{c}, \forall \alpha \in (\mathbb{Z} \big/_{n\mathbb{Z}})^{*}$.
Allora $P_{c}$ è invertibile e la sua inversa è $P_{d}$, dove $d>0$ e $d \in[c]_{\phi(n)}^{-1}$.

Dimostrazione:
Dobbiamo dimostare che $(P_{c} \circ P_{d})= id_{(\mathbb{Z} \big/_{n\mathbb{Z}})^{*}}$ e che $(P_{d} \circ P_{c})=id_{(\mathbb{Z} \big/_{n\mathbb{Z}})^{*}}$.

Sia $\alpha \in (\mathbb{Z} \big/_{n\mathbb{Z}})^{*}$.
Osserviamo che $(P_{d} \circ P_{c})(\alpha)=(P_{d} \circ P_{c})(\alpha)= \alpha^{cd}$.
Siccome per ipotesi $d \in[c]^{-1}_{\phi(n)}$, si ha che $\exists k\in \mathbb{Z}: cd = 1+k\phi(n) \implies cd-1=k\phi(n)$.
$c> 0$ e $d> 0$ $\implies cd>0 \implies cd -1 \geq 0 \implies k\phi(n) \geq 0$. $\phi(n) > 0$ sempre e dunque $k\geq 0$.
Vale che:
$$
\alpha^{cd} = \alpha^{1+k\phi(n)}=\alpha \alpha^{k\phi(n)}=\alpha(\alpha^{\phi(n)})^{k}
$$
Grazie al teorema di Fermat-Eulero sappiamo che $\alpha^{\phi(n)}=[1]_{n}$. Perciò (ricordando che $k\geq 0$ e dunque può essere portato all'interno della classi di resto modulo $n$):
$$
	\alpha^{cd}=\alpha[1]^{k}_{n} = \alpha[1^{k}]_{n} = \alpha[1]_{n} =\alpha
$$

### Corollario
Sia $n > 0$. Sia $c > 0$ e $a \in \mathbb{Z}$ tali per cui $(c, \phi(n))=1$ e $(\alpha, n)=1$. Si consideri la congruenza:
$$
x^{c}\equiv a\ (\text{mod}\ n)
$$
Sia $S\subset \mathbb{Z}$ l'insieme delle soluzioni della congruenza. Allora $S = [a^{d}]_{n} \subset \mathbb{Z}$, dove $d>0$ e $d \in[c]_{\phi(n)}^{-1}$.

Dimostrazione:
La congruenza può essere riscritta come $[x]^{c}_{n}=[a]_{n}$. Se riusciamo a dimostrare che $[x]^{c}_{n} \in (\mathbb{Z} \big/_{n\mathbb{Z}})^{*}$ allora la congruenza può essere risolta grazie al teorema fondamentale.

$c>0\Longleftrightarrow c-1\geq 0$.
Vale che:
$$
[x]^{c}_{n} = [x]_{n} [x]^{c-1}_{n} = [a]_{n} \implies [x]_{n} ([x]_{n}^{c-1} [a]_{n}^{-1}) = [1]_{n}
$$
Ma allora $[x]_{n} \in (\mathbb{Z} \big/_{n\mathbb{Z}})^{*}$. Grazie al teorema fondamentale della crittografia RSA abbiamo che $[x]^{c}_{n} = [a]_{n} \Longleftrightarrow P_{c}([x]_{n})= [a]_{n} \Longleftrightarrow [x]_{n}= P_{d}([a]_{n}) \Longleftrightarrow [x]_{n}= [a]_{n}^{d} \Longleftrightarrow [x]_{n}=[a^{d}]_{n}$.

---

### Definizione numero primo
Sia $p \in \mathbb{Z}$, $p$ si dice essere numero primo se $p \geq 2$ e i suoi unici divisori sono $\pm 1, \pm p$.

### Proposizione
Sia $p$ un numero primo e siano $n_{1},\dots,n_{k} \in \mathbb{Z}$. Se $p|n_{1}\dots n_{k}\implies p|n_{i}$ per qualche $i \in \{ 1,\dots,k \}$.
### Teorema fondamentale dell'aritmetica
Sia $n \in \mathbb{N}, n \geq 2$. Allora $n$ può essere scomposto in fattori primi, ovvero $\exists p_{1},\dots,p_{a}$ numeri primi eventualmente ripetuti con $a\in \mathbb{N}\setminus \{ 0 \}$ per i quali $n = p_{1}\dots p_{a}$, inoltre questa fattorizzazione è unica, ovvero se $\exists q_{1},\dots q_{b}$ numeri primi eventulamente ripetuti con $b\geq a$ tali che $n = q_{1}\dots q_{b}$ allora $a=b$ e $\exists \phi:\{ 1,\dots,a \} \rightarrow \{ 1,\dots,b \}$ bigezione per cui $p_{i}=q_{\phi(i)}, \forall i \in \{ 1,\dots,a \}$.

Dimsotrazione esistenza:
Procediamo per induzione di seconda forma su $n\geq 2$.
$n=2$ (base dell'induzione):
Osserviamo che $n = 2$ è primo, dunque basta porre $a:=1, p_{1}:=2$, infatti $n = p_{1}=2$.

$n > 2, (\forall k, 2\leq k<n)\implies n$.
Supponiamo che $\forall k, 2\leq k<n$, $k$ possa essere scomposto in fattori primi eventualmente ripetuti (ipotesi induttiva). Dimostriamo che $n$ possa essere scomposto in fattori primi eventualmente ripetuti.
Distinguiamo due casi:
se $n$ è primo, allora basta porre $a:=1$ e $p_{1}:=n$, infatti vale che $n=p_{1}$.
se $n$ non è primo allora $\exists d_{1},d_{2}\in \mathbb{N}$ suoi divisori non banali tali che $n =d_{1}d_{2}$. Dunque per costruzione $d_{1} \neq 1,n$ e $d_{2}\neq 1,n$.
A meno di scambiare $d_{1},d_{2}$ possiamo assumere che $d_{1}\leq d_{2}$.
Supponiamo per assurdo che $d_{1} = 0$. Allora varrebbe che $n=d_{1}d_{2}=0d_{2}=0$, ma $n \geq 2$ e ciò è assurdo.
Segue che $2 \leq d_{1} \leq d_{2}$.
Supponiamo per assurdo che $d_{2}>n$. Allora varrebbe che $n=d_{1}d_{2}>d_{1}n\geq2n$ ma ciò è assurdo, dunque $2 \leq d_{1} \leq d_{2}<n$.
Applichiamo l'ipotesi induttiva su $d_{1}$ e $d_{2}$, ottendendo $a$ numeri primi eventualmente ripetuti $p_{1},\dots,p_{a}$ per cui $d_{1} = p_{1}\dots p_{a}$ e $b$ numeri primi eventualmente ripetuti $p_{a+1},\dots,p_{a+b}$ per cui $d_{2} = p_{a+1}\dots p_{a+b}$.
Vale allora che:
$$
n = d_{1}d_{2}=p_{1}\dots p_{a} p_{a+1}\dots p_{a+b}
$$
Dove $p_{i}$ è primo $\forall i\in \{ 1,\dots,a+b \}$. Il passo induttivo è stato completato. Grazie al teorema del principio di induzione di seconda forma l'asserto del teorema è vero $\forall n\in \mathbb{N}, n\geq 2$.

Dimostrazione unicità:
Sia $n \in \mathbb{N}, n\geq 2$. Supponiamo che $\exists p_{1},\dots,p_{a}$ con $a \in \mathbb{N}\setminus \{ 0 \}$ numeri primi eventualmente ripetuti tali che $n = p_{1}\dots p_{a}$ e che $\exists q_{1}\dots q_{b}$ con $b \geq a$ numeri primi eventualmente ripetuti tali che $n = q_{1}\dots q_{b}$.

Procediamo per induzione di prima forma su $a \geq 1$.
$a = 1$ (base dell'induzione).
Si ha che $n=p_{1}=q_{1}\dots q_{b}\implies p_{1}=q_{1}\dots q_{b}$. Siccome $p_{1}|p_{1}=q_{1}\dots q_{b}$, per la proposizione precedente $p_{1}|q_{i}$ per qualche $i \in \{ 1,\dots,b \}$. A meno di riordinamento possiamo assumere che $p_{1}|q_{1}$, ma siccome $q_{1}$ è primo e $p_{1}\geq 2$ deve essere che $p_{1}=q_{1}$.
Supponiamo per assurdo che $b>a$.
Allora $p_{1}=q_{1}\dots q_{b} \implies p_{1}=p_{1}q_{2}\dots q_{b}\implies 1=q_{2}\dots q_{b}$. Ma $q_{i}\geq 2$, $\forall i\in \{ 1,\dots,b \}$ e dunque l'uguaglianza è assurda. Segue che $a=b$.
Dunque $a=b$ e $p_{1} = q_{1}$, perciò la base dell'induzione è stata verificata.

$a\geq 1, a \implies a+1$.
Supponiamo che la scomposizione in $a$ fattori sia unica a meno di riordinamento per qualceh $a\geq 1$ (ipotesi induttiva). Dimostriamo che sia unica anche con $a+1$ fattori.
Si ha che $n = p_{1}\dots p_{a+1}=q_{1}\dots q_{b}$. Siccome $p_{a+1}|p_{1}\dots p_{a+1}=q_{1}\dots q_{b}$ allora $p_{a+1}$ divide $q_{i}$ per qualche $i \in \{ 1,\dots,b \}$. A meno di riordinamento possiamo assumere che $p_{a+1}|q_{b}$, ma siccome $q_{b}$ è primo e $p_{a+1}\geq 2$  deve essere che $p_{a+1}=q_{b}$.
Allora $p_{1}\dots p_{a+1}=q_{1}\dots q_{b} \implies p_{1}\dots p_{a+1}=q_{1}\dots q_{b-1}p_{a+1} \implies p_{1}\dots p_{a}=q_{1}\dots q_{b-1}$. Per ipotesi induttiva sappiamo che $a = b-1 \Longleftrightarrow a+1=b$ e che a meno di riordinamento $p_{i}=q_{i}, \forall i\in \{ 1,\dots,a \}$. A conoscenza del fatto che alle corrispondenze date dall'ipotesi induttiva si aggiunge che $p_{a+1}=q_{b}$, il passo induttivo è stato completato.
Grazie al teorema del principio di induzione di prima forma sappiamo che l'asserto di unicità è vero $\forall a\geq 1$.

---
### Definzione albero di copertura
Sia $G=(V,E)$ un grafo finito e connesso. 
Sia $T$ un sottografo di $G$. 
$T$ è detto albero di copertura di $G$ se è albero e $V(T)=V(G)$.

### Proposizione
Sia $T$ un grafo finito. $T$ è un albero se e solo se $T$ è connesso e $T-e$ è sconnesso $\forall e\in E(T)$.
### Teorema di copertura dei grafi finiti
Sia $G=(V,E)$ un grafo finito e connesso. Allora esiste almeno un suo albero di copertura.

Dimostrazione:
Sia $\mathcal{C}:=\{ C \text{ sottografo di } G| C \text{ connesso}, V(C)=V(G)  \}$. 
Sia $\mathcal{A}:=\{ n \in \mathbb{N} | n =|E(C)| \text{ per qualche }C \in \mathcal{C}\}$.
Osserviamo che $G$ è sottografo connesso di $G$, dunque $G\in \mathcal{C}\implies|E(G)| \in \mathcal{A} \implies \mathcal{A}\neq \emptyset$.
Poiché $\mathcal{A}\subset \mathbb{N}$ e $\mathcal{A}\neq \emptyset$, per il buon ordinamento di $\mathbb{N}$ si ha che $\exists \bar{n}=min(\mathcal{A}) \implies \exists \bar{C}\in \mathcal{C}:|E(\bar{C})|=\bar{n}$.
Se dimostriamo che $\bar{C}$ è un albero, $\bar{C}$ sarebbe un albero di copertura di $G$, pertanto esisterebbe almeno un albero di copertura di $G$.
Supponiamo per assurdo che $\bar{C}$ non sia un albero, $\bar{C}\in \mathcal{C}$ è connesso, dunque $\exists e\in E(\bar{C})$ per cui $\bar{C}-e$ è connesso.
Osserviamo che $V(\bar{C}-e)=V(\bar{C})=V(G)$, pertanto $\bar{C}-e\in \mathcal{C}\implies|E(\bar{C}-e)|\in \mathcal{A}$.
Ma $|E(\bar{C}-e)|=|E(\bar{C})|-1=\bar{n}-1<\bar{n}$ e ciò è assurdo, pertanto $\bar{C}$ è un albero.

---
### Definzione passeggiata, cammino, ciclo
Sia $G=(V,E)$ un grafo e sia $(v_{0},\dots,v_{n})$ una sequenza ordinata di $n$ vertici di $G$, ovvero $v_{i}\in V(G), \forall i\in \{ 0,\dots,n \}$. $(v_{0},\dots,v_{n})$ viene detta:
- Passeggiata se $n = 0$ o se $n\geq 1$ e $\forall i \in \{ 0,\dots,n-1 \}, \{ v_{i},v_{i+1} \} \in E(G)$. 
- Cammino se è passeggiata e $v_{i}\neq v_{j},\forall i,j\in \{ 1,\dots,n \}, i \neq j$.
- Ciclo se $n \geq 3$ ed è passeggiata e vale che $v_{0} = v_{n}$ e $(v_{0},\dots,v_{n-1})$ è un cammino.
In ogni caso $n$ è detta essere lunghezza della passeggiata, cammino, ciclo.

### Definizione di congiungibilità per passeggiate o per cammini
Sia $G=(V,E)$ un grafo. Siano $v,w\in V$. $v$ si dice congiungibile per passeggiate (o per cammini) a $w$ se $\exists(v_{0}=v, \dots,v_{n}=w)$ passeggiata (o cammino) in $G$.

### Teorema
Sia $G=(V,E)$ un grafo e siano $v,w\in V(G)$ suoi vertici, $v$ è congiungibile per passeggiate a $w$ se e solo se $v$ è congiungibile per cammini a $w$.

Dimostrazione:
Supponiamo che $v$ sia congiungibile per cammini a $w$, allora $\exists(v_{0},\dots,v_{n})$ cammino in $G$ per cui $v = v_{0}$ e $w = v_{n}$, ma un cammino è anche una passeggiata dunque $v$ è congiungibile per passeggiate a $w$.

Supponiamo che $v$ sia congiungibile per passeggiate a $w$. Poniamo $\mathcal{P}:=\{ (v_{0},\dots,v_{n}) \text{ passeggiata in } G | v_{0} =v, v_{n}=w \}$. Poniamo $\mathcal{A}:=\{ n \in \mathbb{N}|n=l(P) \text{ per qualche }P \in \mathcal{P} \}$.
Osserviamo che per ipotesi $v$ è congiungibile a $w$ per passeggiate dunque $\mathcal{P}\neq \emptyset \implies \mathcal{A\neq \emptyset}$.
Osserviamo che $\mathcal{A}\subset \mathbb{N}$ e $\mathcal{A}\neq \emptyset$ dunque per il buon ordinamento dei naturali $\exists m=min(\mathcal{A}) \implies \exists P_{0}:l(P_{0})=m$.
Dimostriamo che $P_{0}$ è un cammino.
Supponiamo per assurdo che $P_{0}=(v_{0},\dots,v_{n})$ non sia un cammino, allora $\exists i,j \in \{ 0,\dots,m \}, i\neq j$ per cui $v_{i}=v_{j}$. A meno di scambio tra $i$ e $j$ possiamo assumere che $i<j$.
Sia $P_{1}$ la sequenza ordinata di vertici di $G$ ottenuta da $P_{0}$ rimuovendo la sottosequenza $(v_{i+1},\dots v_{j})$ di lunghezza $(j-i)$. Allora $P_{1}$ è della forma $(v_{0},\dots,v_{i},v_{j+1},\dots ,v_{n})$.
Osserviamo che $P_{1}$ è una passeggiata, perché $\{ v_{i},v_{i+1} \} \in E(G), \forall i\in \{ 0,\dots,m \}$, inoltre $v_{i}=v_{j} \implies\{ v_{i}, v_{j+1} \}=\{ v_{j}, v_{j+1} \} \in E(G)$. Segue che $P_{1}\in \mathcal{P}$ e $\mathcal{A}\ni l(P_{1})=l(P_{0})-(j-i)< l(P_{0})=m$, ma ciò è assurdo perché contraddice la minimalità di $m$.
Dunque $P_{0}$ è un cammino e $v$ è congiungibile a $w$ per cammini.

### Definizione relazione di congiungibilità
Sia $G=(V,E)$ un grafo e sia $\sim \subset V\times V$ una relazione binaria tale che $v\sim w\Longleftrightarrow v$ è congiungibile a $w$, $\forall v,w \in V$.

### Teroema
Sia $G=(V,E)$ un grafo. La relazione $\sim$ definita come sopra è una relazione di equivalenza:

Dimostrazione:
Osserviamo che $(v)$ è una passeggiata $\forall v\in V$, dunque $v \sim v, \forall v\in V$.
Siano $v,w\in V$ tali che $v\sim w$, allora $\exists(v_{0},\dots,v_{n})$ passeggiata in $G$ per cui $v_{0} = v, v_{n}=w$. Per definizione $\{ v_{i}, v_{i+1} \} = \{ v_{i+1}, v_{i} \}\in E, \forall i \in \{ 0,\dots,n-1 \}$, dunque $(v_{n}=w,\dots,v_{0}=v)$ è una passeggiata in $G$ e di conseguenza $w \sim v$.
Siano $v,w,z \in V$ tali che $v\sim w$ e $w\sim z$. Allora $\exists(v_{0},\dots,v_{n})$ passeggiata in $G$ per cui $v_{0} = v$ e $v_{n}=w$ e $\exists(w_{0},\dots,w_{m})$ passeggiata in $G$ per cui $w_{0} = w$ e $w_{m}=z$. Segue che $w_{0} = v_{n}$. Allora $(v_{0},\dots,v_{n},w_{1},\dots,w_{m})$ è una passeggiata, poiché $\forall i\in \{ 0,\dots,n -1\}, \{ v_{i},v_{i+1} \} \in E$ e $\forall i\in \{ 0,\dots,m-1 \}, \{ w_{i}, w_{i+1} \} \in E$, inoltre $\{ v_{n}, w_{1} \}=\{ w_{0},w_{1} \}\in E$. Segue che $v \sim z$.

---
### Definizione grafo finto
Un grafo $G=(V,E)$ viene detto essere finito se $V$ è un insieme finito.
### Definizione grado di un grafo
Sia $G=(V,E)$ un grafo e sia $v \in V$.
$$
deg_{G}(v) = |\{ e \in E |v \in E \}|
$$
### Caratterizzazione dei grafi finiti
Sia $G=(V,E)$ un grafo finito. Allora:
$$
\sum_{v \in V} deg_{G}(v) = 2|E|
$$
Dimostrazione:
Sia $G=(V,E)$ un grafo finito con $V=\{ v_{1},\dots,v_{n} \}$ e $E = \{ e_{1},\dots,e_{k} \}$.
Definiamo
$$
m_{ij} = \begin{cases}
1  & v_{i} \in e_{j} \\
0 & v_{i} \not\in e_{j}
\end{cases}
$$
Per associatività e commutatività dell'addizione in $\mathbb{Z}$ vale che:
$$
\sum_{i=1}^{n} \sum_{j=1}^{k} m_{ij} = \sum_{j=1}^{k} \sum_{i=1}^{n} m_{ij}
$$
Consideriamo $\sum_{j=1}^{k} m_{ij}$, vale che:
$$
\sum_{j=1}^{k} m_{ij} = |\{ j \in \{ 1,\dots,k \} | v_{i} \in e_{j} \}| = deg_{G}(v_{i}) \implies \sum_{i=1}^{n} \sum_{j=1}^{k} m_{ij} = \sum_{i=1}^{n} deg_{G}(v_{i}) = \sum_{v \in V} deg_{G}(v)
$$
Consideriamo $\sum_{i=1}^{n} m_{ij}$, vale che:
$$
\sum_{i=1}^{n} m_{ij} = |\{ i \in \{ 1,\dots,n \}| v_{i} \in e_{j} \}| = 2 \implies \sum_{j=1}^{k}  \sum_{i=1}^{n} m_{ij} = \sum_{j=1}^{k} 2 = 2k = 2|E|
$$
Dunque
$$
\sum_{v \in V} deg_{G}(v) = 2|E|
$$
### Lemma delle strette di mano
Il numero di vertici di un grafo di grado dispari è pari.

Dimostrazione:
Sia $G=(V,E)$ un grafo.
Sia $P := \{ v \in V | deg_{G}(v) \text{ pari} \}$.
Sia $D := \{ v \in V | deg_{G}(v) \text{ dispari} \}$.
Vale che $P \cap D = \emptyset$ e $P \cup D =V$.

Per la caraterrizzazione dei grafi finiti vale che:
$$
\sum_{v \in V}  deg_{G}(v) = 2|E| \Longleftrightarrow \sum_{v \in D} deg_{G}(v) + \sum_{v\in P} deg_{G}(v) = 2|E| \Longleftrightarrow \sum_{v \in D} deg_{G}(v)= 2|E| - \sum_{v\in P} deg_{G}(v)
$$
Osserviamo che $2|E|$ è pari e $\sum_{v \in P}deg_{G}(v)$ è pari in quanto somma di numeri pari, segue che la parte destra dell'ugaglianza è pari.
Pertanto $\sum_{v \in D} deg_{G}(v)$ deve essere pari. La somma di un numero dispari di numeri dispari è dispari mentre la somma di un numero pari di numeri dispari è pari, dunque $|D|$ deve essere pari.

---

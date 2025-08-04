### Principio di induzione di prima forma
Sia $\{ P(n) \}_{n\in \mathbb{N}}$ una famiglia di proposizione indicizzata su $n \in \mathbb{N}$. Supponiamo che:
- $P(0)$ sia vera
- Se $P(n)$ è vera allora $P(n+1)$ è vera
Allora $P(n)$ è vera $\forall n \in \mathbb{N}$.

### Definizione di ordinamento
Sia $X$ un insieme e sia $\mathcal{R}\subset X\times X$ una relazione. $\mathcal{R}$ viene chiamato ordinamento parziale di $X$ se valgono:
- $x\mathcal{R}x, \forall x \in X$
- $x \mathcal{R}y$ e $y\mathcal{R}x$ $\iff x = y, \forall x,y \in X$
- $x\mathcal{R}y$ e $y\mathcal{R}z \implies x \mathcal{R} z, \forall x,y,z \in X$
Allora $(X,\mathcal{R})$ si dice essere un insieme parzialmente ordinato.
Inoltre, se oltre alle precedenti vale che $\forall x,y \in X, x\mathcal{R}y$ o $y \mathcal{R}x$, allora l'ordinamento si dice essere totale.
Allora $(X,\mathcal{R})$ si dice essere un insieme totalmente ordinato.

### Definizione di minimo
Sia $(X, \mathcal{R})$ un insieme parzialmente ordinato. Sia $A \subset X$ e sia $z \in A$. $z$ si dice essere minimo di $A$ se vale che $z \mathcal{R}a, \forall a \in A$.
### Osservazione
Se il minimo esiste, per la proprietà antisimmetrica è unico.

### Definizione di $\leq$ in $\mathbb{N}$
Definiamo $\leq \subset \mathbb{N}\times \mathbb{N}$. Siano $n, m \in \mathbb{N}$. Allora $n \leq m \Longleftrightarrow \exists k\in \mathbb{N}:n+k=m$.

### Proposizione
$(\mathbb{N}, \leq)$ è un insieme totalmente ordinato.

### Definizione
Sia $(X, \mathcal{R})$ un insieme parzialmente ordinato, allora $(X, \mathcal{R})$ si dice essere ben ordinato se ogni sottoinsieme non-vuoto di $X$ ammette un minimo.

### Teorema del buon ordinamento dei naturali
$(\mathbb{N}, \leq)$ è ben ordinato.

Dimostrazione:
Sia $A \subset \mathbb{N}$ tale che $A$ non ammette un minimo. Sia $B:=\mathbb{N}\setminus A$.
Vogliamo dimostrare che $A=\emptyset \Longleftrightarrow B= \mathbb{N}$.
Sia $P(n)$ la seguente proposizione:
$$
P(n):= (\{ 0, \dots, n \} \subset B)
$$
Se riusciamo a dimostrare che $P(n)$ è vera $\forall n \in \mathbb{N}$ allora risulta che $B = \mathbb{N}$ e dunque $A = \emptyset$.
Sia $n \in \mathbb{N}$, procediamo per induzione su $n \geq 0$.

Passo base, $n = 0$:
Osserviamo che $0 = min(\mathbb{N})$ e dunque $0 \not\in A$, perché altrimenti ne sarebbe il minimo. Segue che $0 \in B \implies \{ 0 \} \subset B \implies P(0)$ è vera. Il passo base è stato svolto.

Passo induttivo, $n \geq 0, n \implies n+1$:
Supponiamo che $P(n)$ sia vera. Allora $\{ 0, \dots, n \} \subset B \implies A \subset \{ n+1, n+2, \dots \}$. Osserviamo che $n+1 \not\in A$, perché altrimenti ne sarebbe il minimo. Segue che $n+1 \in B$ e dunque $\{ 0, \dots, n, n+1 \} \subset B \implies P(n+1)$ è vera.
Il passo induttivo è stato svolto.

Grazie al principio di induzione di prima forma $P(n)$ è vera $\forall n \in \mathbb{N}$. Ma allora $B = \mathbb{N} \iff A = \emptyset$.
Segue che $(\mathbb{N}, \leq)$ è un insieme ben ordinato.

### Principio di induzione di seconda forma
Sia $\{ P(n) \}_{n \in \mathbb{N}}$ una famiglia di proposizioni indicizzata su $n \in \mathbb{N}$. Supponiamo che:
- $P(0)$ sia vera
- Se $P(k)$ è vera $\forall k \in \mathbb{N}, 0 \leq k <n$ allora $P(n)$ è vera, $\forall n \in \mathbb{N}$
Allora $P(n)$ è vera $\forall n\in \mathbb{N}$.

Dimostrazione.
Poniamo $A:=\{ n \in \mathbb{N} | P(n) \text{ falsa} \}$.
Supponiamo per assurdo che $A \neq \emptyset$.
Poiché $A \subset \mathbb{N}$ allora $\exists m:= min(A)$.
Per ipotesi $P(0)$ è vera e dunque $0 \not\in A \implies m \neq 0$.
Inoltre siccome $m = min(A)$, sappiamo che $\forall k \in\{ 0, \dots, m - 1 \}, k\not\in A \implies P(k)$ è vera.
Allora $P(m)$ deve essere vera, ma ciò è assurdo. Dunque $A = \emptyset$.

----

### Teorema di esistenza e unicità del quoziente e del resto della divisione euclidea
Siano $n,m \in \mathbb{Z}$ e $m \neq 0$. Allora $\exists!q,r \in \mathbb{Z}$ tali che:
$$
(\star)_{n} \begin{cases}
n = mq + r \\
0\leq r < |m|
\end{cases}
$$
Dimotrazione:
Siano $n, m \in \mathbb{Z}$ e $m \neq 0$.
Consideriamo inanzitutto il caso in cui $n \geq 0$ e $m > 0 \implies m = |m|$.
Verifichiamo $(\star)_{n}$ procedendo per induzione di seconda forma su $n \geq 0$.

Passo base, $n = 0$.
Osserviamo che $(\star)_{0}$ è verificata ponendo $q:=0$ e $r:=0$. Infatti vale che $n = 0 = 0m + 0$ e $0 \leq 0 < m$.
Il passo base è stato svolto.

Passo induttivo, $(\forall k, 0\leq k < n) \implies n$:
Ipotizziamo che l'asserto valga $\forall k\in \mathbb{N}, 0\leq k < n$. Distinguiamo due casi:
Se $n < m$, allora ponendo $q:=0$ e $r:=n$, $(\star)_{n}$ è verificata. Infatti vale che $n = 0m + n$ e $0 \leq n < m$.
Se $n \geq m$, poniamo $k:= n-m$. Siccome $0 \leq k < n$ possiamo applicare l'ipotesi induttiva, ovvero $\exists q,r \in \mathbb{Z}$ tali che:
$$
\begin{cases}
k = mq + r \\
0 \leq r < m
\end{cases} \implies
\begin{cases}
n - m = m q +r \\
0 \leq r < m
\end{cases} \implies
\begin{cases}
n = (q+1)m + r \\
0 \leq r < m
\end{cases}
$$
Allora $(\star)_{m}$ è verificata. Il passo induttivo è stato svolto.
Grazie al principio di induzione di seconda forma, l'asserto è vero $\forall n \in \mathbb{N}$.

Consideriamo ora il caso dove $n < 0, m > 0 \implies m = |m|$.
Eseguiamo la divisione euclidea tra $-n > 0$ e $m > 0$: otteniamo $q,r \in \mathbb{Z}$ tali che:
$$
\begin{cases}
-n = mq +r \\
0 \leq r < m
\end{cases} \implies
\begin{cases}
n = (-q)m + (-r) \\
0 \leq r < m
\end{cases}
$$
Distinguiamo due casi:
Se $r = 0$, allora $r = -r$ e $(\star)_{n}$ è verificata.
Se $r > 0$, allora:
$$
\begin{cases}
n = (-q)m + (-r) \\
0 \leq r < m
\end{cases} \implies
\begin{cases}
n = (-q)m -m + (m - r) \\
0 \leq r < m
\end{cases}
\implies
\begin{cases}
n = (-q - 1)m + (m -r) \\
0 \leq r < m
\end{cases}
$$
Segue che $(\star)_{n}$ è verificata, infatti $n = (-q-1)m + (m-r)$ e $0 < m -r  < m$.

Infine consideriamo il caso in cui $m < 0 \implies -m > 0$.
Eseguiamo la divisione euclidea tra $n$ e $-m$: otteniamo $q,r \in \mathbb{Z}$ tali che:
$$
\begin{cases}
n = q(-m) + r \\
0 \leq r< -m= |m|
\end{cases} \implies
\begin{cases}
n = (-q)m + r \\
0 \leq r < |m|
\end{cases}
$$
Dunque $(\star)_{n}$ è verificata.

Dimostriamo ora l'unicità di $q,r$.
Siano $n, m \in \mathbb{Z}$ con $m\neq 0$ e siano $q,q',r,r' \in \mathbb{Z}$ tali che:
$$
\begin{cases}
n = qm +r \\
0 \leq r < |m|
\end{cases}
\qquad
\begin{cases}
n =q'm + r' \\
0 \leq r' < |m| \\
\end{cases}
$$
Allora vale che $qm +r = n = q'm+r' \implies qm+r=q'm+r' \Longleftrightarrow (q-q')m = r'-r \implies |q-q'||m| = |r'-r|$.
Osserviamo che $|r'-r| < |m|$. Vale che:
$$
|q-q'||m| < |m| \implies|q-q'|<1 \implies q-q' = 0 \Longleftrightarrow q =q'
$$
Ma allora $(q-q')m = r'-r \implies 0m = r'-r \implies r=r'$.

---
### Definizione insieme finito
Indichiamo con $I_{n}$ con $n \in \mathbb{N}$ l'insieme $\{ 0, \dots, n - 1 \}$. In particolare $I_{0} = \emptyset$.
Sia $X$ un insieme. $X$ si dice essere finito se $\exists n\in \mathbb{N}$ tale che $X \sim I_{n}$.

### Lemma dei cassetti
Siano $X, Y$ insiemi e siano $n,m \in \mathbb{N}$ tali che $n < m$ e $X \sim I_n$ e $Y \sim I_{m}$. Allora ogni funzione $f:Y\rightarrow X$ non è iniettiva.

Dimostrazione.
Procediamo per induzione su $n \geq 0$.

Passo base, $n=0$:
Sia $m > n = 0$.
Sia $X \sim I_{n} = I_{0} \implies X = \emptyset$. 
Sia $Y \sim I_{m} \neq I_{0} \implies Y \neq \emptyset$.
Ricordando che $X^{Y}=\emptyset^{Y}=\emptyset$, sappiamo che non esiste alcuna funzione $f:Y\rightarrow X$ e in particolare non esiste alcuna funzione iniettiva $f:Y\rightarrow X$.
Il passo base è stato svolto.

Passo induttivo, $n \geq 0$, $n \implies n+1$:
Supponiamo vero l'asserto per $n$.
Sia $m > n+1$.
Sia $X \sim I_{n+1}$.
Allora esiste una bigezione $g:I_{n+1}\rightarrow X$. Poniamo $x_{n}:= g(n)$.
Poniamo $X':= X\setminus \{ x_{n} \}$.
Poniamo $g^{\star}:I_{n}\rightarrow X'$, dove $g^{\star}(a):=g(a), \forall a\in X'$. Osserviamo che $g^{\star}$ è una bigezione, dunque $X'\sim I_{n}$.

Supponiamo per assurdo che esista una funzione $f:Y\rightarrow X$ iniettiva.
Distinguiamo due casi:
- $f(Y) \not\ni x_{n}\implies f(Y) \subset X'$:
Possiamo definire $f^{\star}:Y\rightarrow X'$ con $f^{\star}(y):=f(y), \forall y \in Y$, allora $f^\star$ è iniettiva. Ma $Y\sim I_{m}$ e $X'\sim I_{n}$ e $m>n+1>n$, per ipotesi induttiva ciò è assurdo, quindi $f^{\star}$ non può esistere e di conseguenza $f$ non può esistere.
- $f(Y) \ni x_{n}$:
Siccome $f$ è iniettiva, $\exists!y_{n}\in Y$ tale che $f(y_{n})=x_{n}$.
Poniamo $Y' := Y \setminus \{ y_{n} \} \implies Y' \sim I_{m-1}$. 
Allora possiamo definire $f^{\star}:Y' \rightarrow X'$ dove $f^{\star}(y):=f(y), \forall y\in Y'$. Osserviamo che $f^{\star}$ è iniettiva. Ma $Y'\sim I_{m - 1}$ e $X' \sim I_{n}$ e $m > n+1 \Longleftrightarrow m-1 > n$, per ipotesi induttiva ciò è assurdo, quindi $f^{\star}$ non può esistere e di conseguenza $f$ non può esistere.
Il passo induttivo è stato svolto.
Grazie al principio di induzione di prima forma l'asserto è vero $\forall n\in \mathbb{N}$.

### Definizione
Sia $X$ un insieme finito, dunque $\exists n \in \mathbb{N}$ tale che $X \sim I_{n}$. Indichiamo allora $|X|=n$ la cardinalità di $X$.

### Corollario
Siano $X,Y$ due insiemi finiti e siano $n,m\in \mathbb{N}$ tali che $X\sim I_{n}$ e $Y \sim I_{m}$. Allora vale che $X \sim Y \Longleftrightarrow n=m$.

Dimostrazione:
Supponiamo che $n = m$. Allora $X \sim I_{n} = I_{m} \sim Y$. Le due bigezioni possono essere composte per ottenere una bigezione, dunque $X \sim Y$.
Supponiamo che $X \sim Y$. Supponiamo per assurdo che $n \neq m$, a meno di scambiare $n$ e $m$ possiamo assumere che $n < m$. Poiché $X \sim Y$ esiste una bigezione $f:Y\rightarrow X$ $\implies f$ è iniettiva.
Per il lemma dei cassetti ciò è assurdo $\implies n = m$.

### Corollario
Sia $X$ un insieme finito e sia $Y \subset X$. Allora $Y$ è finito e vale che $|Y|\leq|X|$. Inoltre, se $Y$ è un sottoinsieme proprio di $X$ allora $|Y|<|X|$.

Dimostrazione:
Sia $n:=|X|$. Procediamo per induzione su $n\geq 0$.

Passo base, $n=0$:
$n = 0 \implies|X| =0 \implies X=\emptyset$. Sia $Y \subset X$.
Allora $Y \subset X = \emptyset \implies Y=\emptyset$. Allora l'asserto è verificato, infatti vale $|Y|=0\leq 0 = |X|$ e $Y \sim I_{0} \implies Y$ finito.

Passo induttivo, $n \geq 0, n \implies n+1$:
Sia $X$ un insieme tale che $|X| = n+1 \implies X \sim I_{n+1} \implies \exists g:I_{n+1}\rightarrow X$ bigezione. Poniamo $x_{n}:=g(n)$. Poniamo $X':=X\setminus \{ x_{n} \} \implies |X'|=|X|-1=n$.
Sia $Y \subset X$.
Distinguiamo due casi:
- $Y \not\ni x_{n} \implies Y \subset X', Y \subsetneq X$
Applicando l'ipotesi induttiva a $X'$ e $Y$ risulta che $|Y| \leq |X'| <|X|\implies|Y|<|X|$. 
- $Y \ni x_{n}$
Poniamo $Y':=Y\setminus \{ x_{n} \} \implies |Y'| = |Y|-1$. Segue che $Y' \subset X'$. Applicando l'ipotesi induttiva risulta che $|Y'|\leq |X'| \implies|Y|-1 \leq |X|-1 \iff |Y|\leq|X|$.
Osserviamo che se $Y \subsetneq X \implies Y' \subsetneq X'$ in quanto $x_{n}$ è stato rimosso ad entrambi. Allora per ipotesi induttiva $|Y'| < |X'| \implies |Y|-1 < |X| - 1 \Longleftrightarrow |Y|< |X|$.

### Corollario
Ogni insieme finito non è equipotente ad alcun suo sottoinsieme proprio.

### Corollario
L'insieme $\mathbb{N}$ dei naturali è infinito.

---

### Definizione di MCD
Siano $n,m\in \mathbb{Z}$ non entrambi nulli. Sia $d>0$ tale che:
- $d|n$ e $d|m$
- Sia $c\in \mathbb{Z}$ tale che $c|n$ e $c|m$, allora $c|d$.
Allora $d$ è detto essere MCD di $n,m$ e $(n,m):=d$.

### Proposizione
Vale che:
- $n|m$ e $m|q$ $\implies n|q, \forall n,m,q \in \mathbb{Z}$
- $n|m$ e $m|n$ $\Longleftrightarrow$ $n = m$ o $n = -m$.

### Lemma utile
Siano $n,m \in \mathbb{Z}$. Sia $c\in \mathbb{Z}$ tale che $c|n$ e $c|m$, allora $c|xn+ym, \forall x,y \in \mathbb{Z}$.

### Teorema
Siano $n,m\in \mathbb{Z}$ non entrambi nulli, allora $\exists!d\in \mathbb{Z}, d>0$ tale che $d$ è MCD di $n,m$.

Dimostrazione unicità:
Siano $n, m \in \mathbb{Z}$ non entrambi nulli.
Siano $d,d'>0$ entrambi MCD di $n,m$.
Per la prima proprietà di $d$, $d|n$ e $d|m$ e per la seconda proprietà di $d'$ con $c:=d$ si ha che $d|d'$.
Per la prima proprietà di $d'$, $d'|n$ e $d'|m$ e per la seconda proprietà di $d$ con $c:=d'$ si ha che $d'|d$.
$d|d'$ e $d'|d \Longleftrightarrow d=d'$ o $d=-d'$. $d, d' >0 \implies d = d'$.

Dimostrazione esistenza:
Sia $S:=\{ s \in \mathbb{N}\setminus \{ 0 \}| s= xn+ym \text{ per qualche } x,y \in \mathbb{Z} \}$.
Osserviamo che $S \neq \emptyset$, infatti ponendo $x:=sign(n)$ e $y:=sign(m)$ si ha che $xn+ym = sign(n)n+sign(m)m=|n|+|m| > 0 \implies|n|+|m| \in S$.
Poiché $S\neq \emptyset$ e $S \subset \mathbb{N}$, per il buon ordinamneto dei naturali risulta che esiste il minimo di $S$.
Sia $d = min(S) =xn+ym>0$ per qualche $x,y \in \mathbb{Z}$. Proviamo che $d$ è $MCD$ di $n,m$.

Supponiamo che $\exists c\in \mathbb{Z}$ tale che $c|n$ e $c|m$, allora per il lemma utile si ha che $c|d=xn+ym$.

Eseguiamo la divisione euclidea tra $n$ e $d$:
$$
\begin{cases}
n = qd + r \\
0 \leq r < d
\end{cases}
$$
Se riusciamo a provare che $r = 0$ allora risulta che $n = qd \implies d|n$.
Supponiamo per assurdo che $r > 0$. $r$ può essere scritto come $r=n-qd=n-q(xn+ym)=n-qxn-qym=(1-qx)n+(-qy)m \implies r \in S$. Ma $r < d$, ciò è assurdo perché contraddice la minimalità di $d$.
Dunque $r = 0 \implies d|n$.
Lo stesso vale per la divisione euclidea tra $m$ e $d$.
Sia ha dunque che $d|n$ e $d|m$.

Allora $d=(n,m)$.

### Definizione di mcm
Siano $n,m\in \mathbb{Z}$ e sia $M\in \mathbb{Z}, M\geq 0$ tale che:
- $n|M$ e $m|M$
- Se $\exists c\in \mathbb{Z}$ tale che $n|c$ e $m|c$, allora $M|c$
Allora $M$ è detto essere mcm di $n,m$ e $[n,m]:=M$.

### Proposizione
Siano $n,m \in \mathbb{Z}$ non entrambi nulli, $n$ e $m$ si dicono coprimi tra loro se $(n,m) = 1$.

### Proposizione
Siano $n,m\in \mathbb{Z}$ non entrambi nulli, allora $\left( \frac{n}{(n,m)}, \frac{m}{(n,m)} \right) = 1$.

### Proposizione
Siano $n,m \in \mathbb{Z}$ tali che $(n,m)=1$, allora vale che:
- $n|mq \implies n|q, \forall q\in \mathbb{Z}$
- $n|q$ e $m|q$ $\implies$ $nm|q, \forall q\in \mathbb{Z}$.

### Teorema
Siano $n,m \in \mathbb{Z}$. Allora $\exists!M\in \mathbb{Z}, M\geq 0$ tale che $M$ è mcm di $n,m$. Inoltre se $n=m=0$ allora $M=0$.
Se $n,m$ non sono entrambi nulli allora $M=\frac{|n||m|}{(n,m)}$.

Dimostrazione unicità:
Siano $n, m \in \mathbb{Z}$. Siano $M,M'>0$ entrambi MCD di $n,m$.
Per la prima proprietà Mi $M$, $n|M$ e $m|M$ e per la seconda proprietà di $M'$ con $c:=M$ si ha che $M'|M$.
Per la prima proprietà Mi $M'$, $n|M'$ e $m|M'$ e per la seconda proprietà di $M$ con $c:=M'$ si ha che $M|M'$.
$M|M'$ e $M'|M \Longleftrightarrow M=M'$ o $M=-M'$. $M, M' >0 \implies M = M'$.

Dimostrazione esistenza:
Supponiamo che $n = m = 0$. Poniamo $M:=0$. 
Allora vale che $n=m=0|0=M$.
Sia $c\in \mathbb{Z}$ tale che $n = m = 0|c \implies c=0$, ma allora $M = 0|0 = c$ è verificata.

Supponiamo che $n,m$ non siano entrambi nulli.
Ricordando che nozione di divisibilità non risente del segno, possiamo assumere che $n,m > 0$.
Poniamo $M:=\frac{nm}{(n,m)}$.
Osserviamo che $(n,m)|n \implies \exists n'\in \mathbb{Z}: n = n'(n,m)$.
Osserviamo che $(n,m)|m \implies \exists m'\in \mathbb{Z}: m = m'(n,m)$.
$$
M = \frac{nm}{(n,m)} = \frac{n'(n,m)m'(n,m)}{(n,m)} = n'm'(n,m) = nm' = n'm
$$
Osserviamo che $n|nm' = M$ e $m|n'm = M$, dunque la prima proprietà è soddisfatta.
Sia $c\in \mathbb{Z}$ tale che $n|c$ e $m|c$.
Osserviamo che $(n,m)|n$ e $n|c$, per la proposizione precedente $(n,m)|c \Longleftrightarrow \exists c' \in \mathbb{Z} : c = c'(n,m)$.
Per la proposizione precedente $\left( \frac{n}{(n,m)}, \frac{m}{(n,m)} \right) = (n',m') = 1$.
Inoltre $n|c \Longleftrightarrow \exists k\in \mathbb{Z} : kn = c$.
Inoltre $m|c \Longleftrightarrow \exists h\in \mathbb{Z} : hm = c$.
Ricordando che $(n,m)>0$ vale che:
$$
c'(n,m) = c = kn =kn'(n,m) \implies c'=kn' \implies n'|c'
$$
$$
c'(n,m) = c = hm =hm'(n,m) \implies c'=hm' \implies m'|c'
$$
Siccome $(n',m')=1$, per la proposizione precedente vale che $n'm'|c' \implies M = n'm'(n,m)|c'(n,m)=c$.
Anche la seconda proprietà è soddisfatta, dunque $M$ è mcm di $n,m$.

---

### Definizione di un numero primo
Sia $p \in \mathbb{Z}$, $p$ è detto primo se $p \geq 2$ e i suoi unici divisori sono $\pm 1, \pm p$.

### Proposizione
Sia $p$ primo e siano $n_{1},\dots,n_{k}\in \mathbb{Z}$. Se $p | n_{1}\dots n_{k}$ allora $p|n_{i}$ per qualche $i \in \{ 1, \dots,k \}$.

### Teorema fondamentale dell'aritmetica
Sia $n \in \mathbb{N}, n > 2$ allora $n$ può essere scomposto in fattori primi. Ovvero $\exists(p_{1},\dots,p_{a})$, con $a\in \mathbb{N} \setminus \{ 0 \}$ dove $p_{i}$ primo $\forall i\in \{ 1, \dots, a \}$ tale che $n=p_{1}\dots p_{a}$ e questa sequenza è unica, ovvero se $\exists(q_{1},\dots,q_{b})$ con $b \in \mathbb{N} \setminus \{  0 \}, a \leq b$ dove $q_{i}$ primo $\forall i \in \{ 1,\dots,b \}$ tale che $n = q_{1}\dots q_{b}$ allora $a = b$ e $\exists \phi:\{ 1,\dots,a \} \rightarrow \{ 1,\dots,b \}$ bigezione per cui $p_{i}=q_{\phi(i)}, \forall i \in \{ 1,\dots,a \}$.

Dimostrazione esistenza:
Procediamo per induzione di seconda forma shifatato su $n\geq 2$.
Passo base, $n = 2$:
Osserviamo che $n = 2$ è numero primo, dunque è sufficente porre $a:= 1$ e $p_{1}:=2$, risulta vero che $n = p_{1}=2$.
Il passo base è stato svolto.

Passo induttivo, $(\forall k, 2 \leq k< n) \implies n$:
Distinguiamo due casi: se $n$ è un numero primo è sufficiente porre $a:= 1$ e $p_{i}:=n$, infatti risulta vero che $n = p_{1}$.
Se $n$ non è primo allora $\exists d_{1},d_{2} \in \mathbb{N}$ suoi divisori non banali tali che $n = d_{1}d_{2}$. Dunque $d_{1},d_{2} \neq 1, n$.
$n > 2 \implies d_{1},d_{2} \neq 0$.
Dunque $d_{1}\geq 2,d_{2}\geq2$. 
A meno di scambio tra $d_{1}$ e $d_{2}$ possiamo assumere che $d_{1} \leq d_{2}$. Supponiamo per assurdo che $d_{2} \geq n$. Varebbe che $n = d_{1}d_{2} \geq d_{1}n \geq 2n$, ma ciò è assurdo. Dunque $d_{1} < n,d_{2} < n$.
Risulta che $2 \leq d_{1}<n$ e $2 \leq d_{2} < n$. Allora possiamo utilizzare l'ipotesi induttiva e scomporre $d_{1}$ e $d_{2}$, dunque $\exists (p_{1},\dots,p_{a}), (p_{a+1}, \dots, p_{a+b})$ tali che $d_{1} = p_{1}\dots p_{a}$ e $d_{2}=p_{a+1}\dots p_{a+b}$.
Ma allora $n = d_{1}d_{2}=p_{1}\dots p_{a}p_{a+1}\dots p_{a+b}$.
Dunque $n$ può essre scomposto di $a+b$ numeri primi eventualmente ripetuti.
Il passo induttivo è stato svolto.

Grazie al principio di induzione di seconda forma shiftato, l'asserto è vero $\forall n \in \mathbb{N}, n > 2$.

Dimostrazione unicità.
Sia $n > 2, n \in \mathbb{N}$.
Supponiamo che $\exists(p_{1}, \dots, p_{a})$ e che $\exists(q_{1},\dots,q_{b})$ con $a \leq b$ sequenze di primi eventualmente ripetuti tali che $n = p_{1}\dots p_{a}=q_{1}\dots q_{a}$. Dimostriamo che $a=b$ e che a meno di riordinamento, $p_{i}=q_{i}, \forall i \in \{ 1, \dots, a \}$.

Procediamo per induzione di prima forna shiftato su $a \geq 1$.
Passo base, $a = 1$:
$n = p_{1} = q_{1}\dots q_{b}$. Osserviamo che $p_{1}|p_{1}=q_{1}\dots q_{b}$. Per la proposizione precedente $p_{1}|q_{i}$ per qualche $i \in \{ 1, \dots, b \}$. A meno di riordinamento possiamo supporre che $p_{1}|q_{1}$. Ma gli unici divisori di $p_{1}$ sono $\pm 1, \pm p_{1}$, ma $q_{1}>2$ essendo primo. Allora $p_{1} = q_{1}$.
Supponiamo per assurdo che $b > a$.
Dunque $p_{1} = q_{1}\dots q_{b} \implies p_{1} = p_{1}q_{2}\dots q_{b} \implies 1 = q_{2}\dots q_{b}$, ma $q_{i} > 2, \forall i \in \{ 2, \dots,b \}$, dunque l'ugaglianza risulta assurda, dunque $a = b$ e $p_{1} = q_{1}$.
Il passo base è stato svolto.

Passo induttivo, $a \geq 1, a \implies a+1$:
$n = p_{1}\dots p_{a+1} = q_1\dots q_{b}$. Osserviamo che $p_{a+1}|p_{1}\dots p_{a+1}=q_{1}\dots q_{b}$. Per la proposizione precedente $p_{a+1}|q_{i}$ per qualche $i \in \{ 1,\dots,b \}$. A meno di riordinamento possiamo supporre che $p_{a+1}|q_{b}$. Ma gli unici divisori di $p_{a+1}$ sono $\pm 1, \pm p_{a+1}$, ma $q_{b}>2$ essemdo primo. Allora $p_{a+1}=q_{b}$.
Dunque $p_{1}\dots p_{a+1}=q_{1}\dots q_{b} \implies p_{1}\dots p_{a}=q_{1}\dots q_{b-1}$. Osserviamo che $b \geq a+1 \implies b-1\geq a$.
Applicando l'ipotesi induttiva sappiamo che $a = b - 1$ e che $p_{i}=q_{i}, \forall i \in \{ 1, \dots, a \}$.
Segue che $a + 1 = b$ e che a meno di riordinamento $p_{i} = q_{i}, \forall i\in \{ 1,\dots,a+1 \}$ in quanto le corrispondenze da $1$ ad $a$ sono date dal passo induttivo e precedentemente si è mostrato che $p_{a+1}=q_{b}$.
Il passo induttivo è stato fatto.
Grazie al principio di induzione di prima forma shiftato l'asserto è vero $\forall a \in \mathbb{N}, a \geq 1$.

---

### Teorema cinese del resto
Sia $n,m \in \mathbb{Z}, n>0,m >0$ e siano $a, b \in \mathbb{Z}$. Si consideri il seguente sistema di congruenze:
$$
\begin{cases}
x \in \mathbb{Z} \\
x \equiv a\ (\text{mod } n) \\
x \equiv b\ (\text{mod } m)
\end{cases}
$$
Sia $S$ l'insiemde delle soluzioni.
Allora $S \neq \emptyset \Longleftrightarrow (n,m)|b-a$.
Inoltre, se $S \neq \emptyset$ e $c \in S$, allora $S = [c]_{[n,m]}$.

Dimostrazione compatibilità:
Supponiamo che $S \neq \emptyset$, allora sia $c \in S$. 
$c \equiv a\ (\text{mod}\ n) \implies \exists k\in \mathbb{Z}: c = a + kn$.
$c \equiv b\ (\text{mod}\ m) \implies \exists h\in \mathbb{Z}: c = b + hm$.
Allora $a + kn = b + hm \Longleftrightarrow b-a=kn-hm$. $(n,m)|n$ e $(n,m)|m$ per definizione, per il lemma utile $(n,m)|kn-hm=b-a$.

Supponiamo invece che $(n,m)|b-a$. Eseguendo l'algoritmo di euclide a ritroso su $(n,m)$ si ottiene che $(n,m)=xn+ym$ per qualche $x,y\in \mathbb{Z}$. 
$(n,m)=xn+ym|b-a \Longleftrightarrow \exists k\in \mathbb{Z}:b-a=k(xn+ym)\Longleftrightarrow b+ (-yk)m=a +(kx)n =: c$.
Risulta che $c = a+ (kx)n \implies c \equiv a\ (\text{mod }n)$.
Risulta che $c = b+ (-ky)m \implies c \equiv b\ (\text{mod }m)$.
Ma allora $c \in S$.

Dimostrazione calcolo della soluzione.
Sia $S \neq \emptyset$ e sia $c \in S$.
Dimostriamo che $S \subset[c]_{[n,m]}$
Sia $c' \in S$, allora valgono le seguenti:
$$
\begin{cases}
c = a+kn \\
c = a+k'n \\
c' = b+hm \\
c' = b+h'm
\end{cases}
$$
$c-c' = a+kn -a -k'n=(k-k')n \implies n|c-c'$.
$c-c' = b+hm -b -h'm=(h-h')m \implies m|c-c'$.
Per definizione $[n,m]|c-c' \Longleftrightarrow \exists s \in \mathbb{Z} : c-c' = s[n,m] \Longleftrightarrow c'=c+ (-s)[n,m]\Longleftrightarrow c' \in [c]_{[n,m]}$.

Dimostriamo che $[c]_{n,m} \subset S$.
Sia $c' \in [c]_{[n,m]}$, allora $c' = c + k[n,m]$ per qualche $k \in \mathbb{Z}$ $\implies [c']_{n} = [c+k[n,m]]_{n} \implies [c']_{n}=[c]_{n}+[k]_{n}[0]_{n} \implies [c']_{n}=[a]_{n}$. Lo stesso ragionamento vale per $m$, concludendo che $[c']_{m}=[b]_{m}$.
Ma allora $c'$ è soluzione $\implies c' \in S$.

---
### Proposizione
Siano $\alpha, \beta \in (\mathbb{Z} \big/_{n\mathbb{Z}})^{*}$. Allora:
- $\alpha \beta \in (\mathbb{Z} \big/_{n\mathbb{Z}})^{*}$ e $(\alpha \beta)^{-1}=\alpha^{-1}\beta^{-1}$
- $\alpha^{-1} \in (\mathbb{Z} \big/_{n\mathbb{Z}})^{*}$ e $(\alpha^{-1})^{-1}=\alpha$

### Teorema di Fermat-Eulero
Sia $n \in \mathbb{N}, n > 0$ e sia $\alpha \in (\mathbb{Z} \big/_{n\mathbb{Z}})^{*}$. Allora $\alpha^{\phi(n)} = [1]_{n}$.

Dimostrazione
Sia $\alpha \in (\mathbb{Z} \big/_{n\mathbb{Z}})^{*}$
Definiamo la funzione $L_{\alpha}: (\mathbb{Z} \big/_{n\mathbb{Z}})^{*} \rightarrow (\mathbb{Z} \big/_{n\mathbb{Z}})^{*}$ dove $L_{\alpha}(\beta):= \alpha \beta, \forall \beta \in (\mathbb{Z} \big/_{n\mathbb{Z}})^{*}$. Per la proposizione precedente sappiamo che $L_{\alpha}$ è ben definita.
Dimostriamo che $L_{\alpha}$ è iniettiva.
Siano $\beta_{1},\beta_{2} \in (\mathbb{Z} \big/_{n\mathbb{Z}})^{*}$ tali che $L_{\alpha}(\beta_{1}) = L_{\alpha}(\beta_{2}) \Longleftrightarrow \alpha \beta_{1} = \alpha \beta_{2} \implies \alpha \beta_{1}\alpha^{-1} = \alpha\beta_{2}\alpha^{-1} \Longleftrightarrow [1]_{n}\beta_{1} =[1]_{n}\beta_{2} \Longleftrightarrow \beta_{1} = \beta_{2}$.
Allora $L_{\alpha}$ è iniettiva.
Poiché $L_{\alpha}$ è iniettiva e $(\mathbb{Z} \big/_{n\mathbb{Z}})^{*}$ è un insieme finito ($\phi(n) = |(\mathbb{Z} \big/_{n\mathbb{Z}})^{*}|$) e coincide sia con il dominio che il codominio di $L_{\alpha}$, segue che $L_{\alpha}$ è surgettiva e dunque bigettiva.
Sia che $(\mathbb{Z} \big/_{n\mathbb{Z}})^{*} = \{ \beta_{1}, \dots, \beta_{\phi(n)} \}$.
Allora per l'associatività e commutatività del prodotto in $(\mathbb{Z} \big/_{n\mathbb{Z}})$ e di conseguenza anche in $(\mathbb{Z} \big/_{n\mathbb{Z}})^{*}$:
$$
\beta_{1}\dots \beta_{\phi(n)} = L_{\alpha}(\beta_{1})\dots L_{\alpha}(\beta_{\phi(n)})= \alpha \beta_{1}\dots \alpha \beta_{\phi(n)}=a^{\phi(n)}\beta_{1}\dots \beta_{\phi(n)}
$$
Poniamo $\gamma: = \beta_{1}\dots \beta_{\phi(n)}\in (\mathbb{Z} \big/_{n\mathbb{Z}})^{*}$, perciò ha senso parlare di $\gamma^{-1}$.
Risulta che $\gamma=\alpha^{\phi(n)}\gamma \implies \gamma \gamma^{-1}=\alpha^{\phi(n)}\gamma \gamma^{-1} \implies [1]_{n} = \alpha^{\phi(n)}$.

### Piccolo teorema di Fermat
Sia $p$ un numero primo. Sia $\alpha \in (\mathbb{Z} \big/_{p\mathbb{Z}})^{*}$.
Allora $\alpha^{p-1}=[1]_{p}$.

Dimostrazione:
La dimostrazione del teorema precedente rimane valida, ricordando che $\phi(p)=p -1,\forall p$ primo.

### Teorema fondamentale della crittografia RSA
Sia $n \in \mathbb{N}, n > 0$. Sia $c \in \mathbb{N}, c > 0$ tale che $(c, \phi(n))=1$.
La funzione $P_{c}:(\mathbb{Z} \big/_{n\mathbb{Z}})^{*}\rightarrow (\mathbb{Z} \big/_{n\mathbb{Z}})^{*}$ dove $P_{c}(\alpha):=\alpha^{c}, \forall \alpha \in (\mathbb{Z} \big/_{n\mathbb{Z}})^{*}$ è invertibile e la sua inversa è $P_{d}$, dove $d\in[c]^{-1}_{\phi(n)}$.

Dimostrazione:
Dimostriamo che $(P_{d} \circ P_{c})=(P_{c} \circ P_{d}) = id_{(\mathbb{Z} \big/_{n\mathbb{Z}})^{*}}$

Sia $\alpha \in (\mathbb{Z} \big/_{n\mathbb{Z}})^{*}$.
Osserviamo che $(P_{d} \circ P_{c})(\alpha) = P_{d}(P_{c}(\alpha))= P_{d}(\alpha^{c})=(\alpha^{c})^{d}=\alpha^{cd}=\alpha^{dc}=(\alpha^{d})^{c}=P_{c}(\alpha^{d})=P_{c}(P_{d}(\alpha))=(P_{c} \circ P_{d})(\alpha)$.
Poiché $d \in [c]_{\phi(n)}^{-1}$ per ipotesi si ha che $cd = [1]_{\phi(n)} \Longleftrightarrow \exists k\in \mathbb{Z}:cd=1+k\phi(n)\Longleftrightarrow cd -1=k\phi(n)$.
Osserviamo che per ipotesi $c>0, d>0\implies cd >0 \implies cd-1\geq 0 \implies k\phi(n)\geq0$. $\phi(n)>0$ quindi $k\geq 0$.
Vale che: $\alpha^{cd}=\alpha^{1+k\phi(n)}=\alpha \alpha^{\phi(n)k}=\alpha(\alpha^{\phi(n)})^{k}=\alpha[1]_{n}^{k}=\alpha [1^{k}]_{n}=\alpha [1]_{n}=\alpha$.

### Corollario
Sia $n \in \mathbb{N}, n>0$. Sia $c\in \mathbb{N}, c>0$ tale che $(c, \phi(n))=1$. Sia inoltre $a\in \mathbb{Z}$ tale che $(a, n)=1$. Si consideri la seguente congruenza:
$$
x^{c} \equiv a\ (\text{mod }n)
$$
Sia $S$ l'insieme delle soluzioni. Allora $S=[a^{d}]_{n}$, dove $d \in[c]^{-1}_{\phi(n)}$.

Dimostrazione:
La congruenza può essere riscritta come $[x]^{c}_{n}=[a]_{n}$.
Siccome $c>0$ vale che:
$$
[x]_{n}^{c}=[x]_{n}[x]^{c-1}_{n} =[a]_{n}
$$
Siccome $(a,n)=1$, $[a]_{n}$ è invertibile in $(\mathbb{Z} \big/_{n\mathbb{Z}})^{*}$.
Allora:
$$
[x]_{n}[x]_{n}^{c-1}[a]^{-1}_{n}= [a]_{n}[a]^{-1}_{n} \implies [x]_{n}([x]_{n}^{c-1}[a]_{n}^{-1})= [1]_{n}
$$
Dunque $[x]_{n}$ è invertibile con inversa $[x]^{c-1}_{n}[a]_{n}^{-1}$. Dunque $[x]_{n}\in (\mathbb{Z} \big/_{n\mathbb{Z}})^{*}$.
Allora la congruenza iniziale può essere riscritta come $P_{c}(x)=a$ e per il teorema fondamentale $x=P_{d}(a)$.

---

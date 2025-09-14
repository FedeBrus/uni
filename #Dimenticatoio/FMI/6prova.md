### Definizione MCD
Siano $n,m\in \mathbb{Z}$ non entrambi nulli. Sia $d\in \mathbb{Z},d>0$ tale che:
- $d|n,d|m$
- Sia $c\in \mathbb{Z}$ tale che $c|n$ e $c|m$, allora $c|d$
Allora $d$ è detto essere massimo comune divisore di $n,m$.
### Definizione mcm
Siano $n,m\in \mathbb{Z}$. Sia $M \in \mathbb{Z}, M\geq 0$ tale che:
- $n|M, m|M$
- Sia $c\in \mathbb{Z}$ tale che $n|c$ e $m|c$, allora $M|c$
Allora $M$ è detto essere un minimo comune multiplo di $n,m$.
### Proposizione
Siano $n,m\in \mathbb{Z}$, allora vale che:
- $n|m$ e $m|q$ $\implies n|q,\forall q\in \mathbb{Z}$
- $n|m$ e $m|n$ $\implies$ $n=m$ o $n=-m$
### Lemma utile
Siano $n,m \in \mathbb{Z}$. Sia $c \in \mathbb{Z}$ tale che $c|n$ e $c|m$, allora $c|xn+ym,\forall x,y\in \mathbb{Z}$.
### Definizione coprimi
Siano $n,m\in \mathbb{Z}$ non entrambi nulli. $n$ e $m$ vengono detti coprimi tra di loro se $(n,m)=1$.
### Proposizione
Siano $n,m\in \mathbb{Z}$ non entrambi nulli, allora vale che $\left( \frac{n}{(n,m)}, \frac{m}{(n,m)} \right)=1$.
### Proposizione
Siano $n,m\in \mathbb{Z}$ non entrambi nulli tali che $(n,m)=1$. Valgono allora le seguenti:
- $n|mq \implies n|q, \forall q\in \mathbb{Z}$
- $n|q$ e $m|q \implies nm|q, \forall q\in \mathbb{Z}$
### Teorema esistenza e unicità di MCD
Siano $n,m \in \mathbb{Z}$ non entrambi nulli, allora $\exists!d\in \mathbb{Z}, d>0$ tale che $d$ è massimo comune divisore di $n,m$.

Dimostrazione esistenza:
Si consideri l'insieme $S:=\{ s \in \mathbb{N}\setminus \{ 0 \}|s = xn+ym\text{ per qualche }x,y \in \mathbb{Z} \}$.
Osserviamo che scegliendo $x:=sign(n)$ e $y:=sign(m)$, $s:=xn+ym=sign(n)n+sign(m)m=|n|+|m|>0$ e dunque $s \in S\implies S\neq \emptyset$.
Siccome $S\neq \emptyset$ e $S\subset \mathbb{N}$, per il buon ordinamento dei naturali, $\exists d=min(S)$. Siccome $d \in S$, $d=xn+ym$ per qualche $x,y\in \mathbb{Z}$.
Dimostriamo che $d=xn+ym$ è massimo comune divisore di $n,m$.
Sia $c\in \mathbb{Z}$ tale che $c|n$ e $c|m$, allora per il lemma utile $c|xn+ym=d\implies c|d$. Dunque $d$ soddisfa la seconda prorietà del massimo comune divisore.
Eseguiamo la divisione euclidea tra $n$ e $d$, ottenendo $q,r\in \mathbb{Z}$ per cui:
$$
\begin{cases}
n =qd+r \\
0\leq r < d
\end{cases}
$$
Supponiamo per assurdo che $r>0$. Allora vale che $r=n-qd=n-q(xn+ym)=(n-qx)n+(-qy)m>0 \implies r\in S$, ma $r < d$ e ciò è assurdo perché contraddice la minimalità di $d$ in $S$.
Pertanto $r = 0$ e $n=qd\implies d|n$.
Lo stesso procedimento vale per la divisione euclidea tra $m$ e $d$, ottenendo che $d|m$.
Dunque $d|n$ e $d|m$ e quindi $d$ soddisfa la prima proprietà del massimo comune divisore.

Dimostrazione unicità:
Supponiamo che $\exists d,d'\in \mathbb{Z}$, $d>0$ e $d'>0$ entrambi MCD di $n,m$.
Per la prima proprietà di MCD di $d$ abbiamo che $d|n$ e $d|m$, per la seconda proprietà di MCD di $d'$ allora $d|d'$.
Per la prima proprietà di MCD di $d'$ abbiamo che $d'|n$ e $d'|m$, per la seconda proprietà di MCD di $d$ allora $d'|d$.
Quindi $d|d'$ e $d'|d$, per la proposizione precedente $d=d'$ o $d=-d'$, ma $d>0$ e $d'> 0$, quindi $d=d'$.

### Teorema esistenza e unicità di mcm
Siano $n,m\in \mathbb{Z}$  non entrambi nulli, allora $\exists!M\in \mathbb{Z},M>0$ tale che $M$ è minimo comune multiplo di $n,m$.
Inoltre $M=\frac{|n||m|}{(n,m)}$.

Dimostrazione esistenza:
Osserviamo che $(n,m)|n \implies \exists n'\in \mathbb{Z}:n=n'(n,m)$ e $(n,m)|m\implies \exists m'\in \mathbb{Z}:m=m'(n,m)$.
Siccome la nozione di divisibilità non riesente del segno, possiamo assumere che $n>0$ e $m>0$.
Poniamo $M:=\frac{nm}{(n,m)}$.
Vale che:
$$
M= \frac{nm}{(n,m)} =\frac{n'(n,m)m'(n,m)}{(n,m)} =n'm'(n,m)=n'm=nm'
$$
Osserviamo che $n|nm' \implies n|M$ e che $m|n'm \implies m|M$, pertanto $M$ soddisfa la prima proprietà di minimo comune multiplo.
Sia $c\in \mathbb{Z}$ tale che $n|c$ e $m|c$.
Osserviamo che $(n,m)|n$ e $n|c$, ma per la proposizione precedente allora $(n,m)|c \Longleftrightarrow \exists c'\in \mathbb{Z}:c = c'(n,m)$.
Inoltre $n'=\frac{n}{(n,m)}$ e $m'=\frac{m}{(n,m)}$, quindi $(n',m')=1$.
Osserviamo che $n|c\Longleftrightarrow\exists k\in \mathbb{Z}:c=kn$. Ma allora vale che:
$$
c'(n,m)=c=kn=kn'(n,m) \implies c'(n,m) = kn'(n,m) \implies c'=kn' \implies n'|c'
$$
Osserviamo che $m|c\Longleftrightarrow\exists h\in \mathbb{Z}:c=hm$. Ma allora vale che:
$$
c'(n,m)=c=hm=hm'(n,m) \implies c'(n,m) = hm'(n,m) \implies c'=hm' \implies m'|c'
$$
Dunque $n'|c'$, $m'|c'$ e $(n',m')=1$, e per la proposizione precedente vale che $n'm'|c' \implies n'm'(n,m)|c'(n,m)\implies M|c$.

Dimostrazione unicità:
Supponiamo che $\exists M,M'\in \mathbb{Z}$, $M>0$ e $M'>0$ entrambi mcm di $n,m$.
Per la prima proprietà di mcm di $M$ abbiamo che $n|M$ e $m|M$, per la seconda proprietà di mcm di $M'$ allora $M'|M$.
Per la prima proprietà di mcm di $M'$ abbiamo che $n|M'$ e $m|M'$, per la seconda proprietà di mcm di $M$ allora $M|M'$.
Quindi $M|M'$ e $M'|M$, per la proposizione precedente $M=M'$ o $M=-M'$, ma $M>0$ e $M'>0$, quindi $M=M'$.

---
### Definizione albero di copertura
Sia $G$ un grafo finito e connesso, sia $T$ un sottografo di $G$ tale che $T$ è connesso e $V(T)=V(G)$, allora $T$ è detto essere un albero di copertura di $G$.

### Proposizione
Sia $T$ un grafo finito. $T$ è un albero se e solo se $T$ è connesso e $T-e$ è sconnesso $\forall e\in E(T)$.

### Teorema
Sia $G$ un grafo finito e conneso, allora $G$ possiede almeno un albero di copertura.

Dimostrazione:
Si considerino gli insiemi $\mathcal{C}:=\{ C \text{ sottografo di } G|C\text{ connesso},V(C)=V(G) \}$ e $\mathcal{A}:=\{ n\in \mathbb{N}|n=|E(C)| \text{ per qualche } C \in \mathcal{C} \}$.
Osserviamo che $G$ è sottografo di $G$, per ipotesi $G$ è connesso e $V(G)=V(G)$ è banalmente vera, pertanto $G\in \mathcal{C} \implies |E(G)| \in\mathcal{A} \implies \mathcal{A\neq \emptyset}$.
Siccome $\mathcal{A}\subset \mathbb{N}$ e $\mathcal{A}\neq \emptyset$, per il buon ordinmaneto dei naturali vale che $\exists \bar{n}=min(\mathcal{A})\implies \exists \bar{C} \in \mathcal{C}:|E(\bar{C})|=\bar{n}$.
$\bar{C}$ è sottografo di $G$, connesso e vale che $V(\bar{C})=V(G)$, dunque se riusciamo a dimostrare che è un albero allora $\bar{C}$ è un albero di copertura di $G$ e l'asserto del teorema è verificato.
Supponiamo per assurdo che $\bar{C}$ non sia un albero.
Allora per la proposizione precedente, siccome $\bar{C}$ è connesso per ipotesi, $\exists e\in E(\bar{C})$ per cui $\bar{C}-e$ è connesso. Vale che $V(\bar{C}-e)=V(\bar{C})=V(G)$, pertanto $\bar{C}-e \in \mathcal{C}\implies |E(\bar{C}-e)|\in \mathcal{A}$.
Ma $|E(\bar{C}-e)|=|E(\bar{C})-\{ e \}|=|E(\bar{C})|-1< |E(\bar{C})|=\bar{n}$, ma ciò è assurdo perche contraddirebbe la minimalità di $\bar{n}$ in $\mathcal{A}$.
Segue che $\bar{C}$ è un albero e dunque albero di copertura di $G$.

---
### Teorema cinese del resto
Siano $n,m \in \mathbb{Z}, n>0, m>0$ e siano $a,b \in \mathbb{Z}$. Si consideri il seguente sistema di congruenze:
$$
\begin{cases}
x\equiv a\ (\text{mod}\ n) \\
x\equiv b\ (\text{mod}\ m)
\end{cases}
$$
Sia $S\subset \mathbb{Z}$ l'insieme delle soluzioni del precedente sistema di congruenze.
Allora $S\neq \emptyset \Longleftrightarrow (n,m)|b-a$.
Inoltre, se $S\neq \emptyset$, ovvero il sistema è compatibile, allora $S=[c]_{[n,m]}$, dove $c\in S$ è una particolare soluzione del sistema.

Dimostrazione compatibilità:
Supponiamo che $S\neq \emptyset$, scegliamo $c\in S$ soluzione del sistema. Allora $c\equiv a\ (\text{mod}\ n)\Longleftrightarrow \exists k\in \mathbb{Z}:c=a+kn$ e $c\equiv b\ (\text{mod}\ m)\Longleftrightarrow\exists h\in \mathbb{Z}:c=b+hm$.
Pertanto $a+kn = b+hm  \Longleftrightarrow b-a=kn-hm$. Siccome $(n,m)|n$ e $(n,m)|m$, per il lemma utile $(n,m)|kn-hm=b-a \implies (n,m)|b-a$.

Supponiamo che $(n,m)|b-a$. Allora $\exists k\in \mathbb{Z}:b-a=k(n,m)$.
Applicando l'algoritmo di Euclide con sostituzione a ritroso dei resti troviamo $x,y\in \mathbb{Z}$ che $(n,m)=xn+ym$.
Dunque $b-a=k(n,m)\Longleftrightarrow b-a=k(xn+ym) \Longleftrightarrow b-a = kxn +kym \Longleftrightarrow  a+kxn =b-kym=:c$.
Pertanto vale che $c\equiv a\ (\text{mod}\ n)$ e $c\equiv b\ (\text{mod}\ m)$, dunque $c \in S$.

Dimostrazione compatibilità:
Supponiamo che $S\neq \emptyset$ e sia $c \in S$ una soluzione particolare.
Dimostriamo che $S  = [c]_{[n,m]}$.

Dimostrazione $S\subset[c]_{[n,m]}$.
Sia $c' \in S$ una soluzione. Allora $\exists k,k',h,h'$ che:
$$
\begin{cases}
c = a+kn \\
c' = a+k'n \\
c = b+hm \\
c' = b+h'm
\end{cases}
$$
Vale che $c'-c=a+kn-a-k'n \Longleftrightarrow c'-c= (k-k')n \implies c'=c+(k-k')n \implies n|c'-c$.
Vale che $c'-c=b+hm-b-h'm \Longleftrightarrow c'-c= (h-h')m \implies c'=c+(h-h')m \implies m|c'-c$.
Per definizione $n|[n,m]$ e $m|[n,m]$ e pertanto $[n,m]|c'-c$, ovvero $\exists s \in \mathbb{Z}:c'-c = s[n,m]\implies c'=c+s[n,m] \implies c' \in[c]_{[n,m]}$.

Dimostriamo che $[c]_{[n,m]} \subset S$.
Sia $c'\in[c]_{[n,m]}$. Allora $\exists k \in \mathbb{Z}:c'=c+k[n,m]$. Passando alle classi resto modulo $n$ abbiamo che:
$$
\begin{align}
[c']_{n} &= [c+k[n,m]]_{n} \\
&=  [c]_{n} + [k]_{n}[[n,m]]_{n} \\
 & = [c]_{n} +[k]_{n}[0]_{n} \\
 & = [c]_{n} + [0]_{n} \\
 & = [a]_{n}
\end{align}
$$
$$
\begin{align}
[c']_{m} &= [c+k[n,m]]_{m} \\
&=  [c]_{m} + [k]_{m}[[n,m]]_{m} \\
 & = [c]_{m} +[k]_{m}[0]_{m} \\
 & = [c]_{m} + [0]_{m} \\
 & = [b]_{m}
\end{align}
$$
---

### Notazione
Sia $n\in \mathbb{N}$. Indicheremo con $I_{n}:=\{ 0,\dots,n-1 \}$. Inoltre poniamo $I_{0}:=\emptyset$.
### Lemma dei cassetti
Siano $X,Y$ due insiemi e siano $n,m \in \mathbb{N}$ tali che $n<m, I_{n}\sim X, I_{m}\sim Y$. Allora ogni funzione $f:Y\rightarrow X$ non è iniettiva.

Dimostrazione:
Procediamo per induzione su $n\geq 0$:

$n = 0$ (base dell'induzione).
Se $n=0$ allora $X \sim I_{n}=I_{0} \implies X=\emptyset$. Inoltre $m>0=n$, dunque $Y\sim I_{m}\neq \emptyset \implies Y\neq \emptyset$. Ricordando che $X^{Y}=\emptyset^{Y}=\emptyset$, non esistono funzioni $f:Y\rightarrow X$, pertanto non esistono funzioni iniettive $f:Y\rightarrow X$.

$n\geq 0, n\implies n+1$ (passo induttivo).
Supponiamo l'asserto vero per qualche $n\geq 0$, dimostriamo che sia vero per $n+1$.
Sia $m>n+1$.
Sia $X\sim I_{n+1}$, allora $\exists g:I_{n+1}\rightarrow X$ bigezione. Poniamo $x_{n}:=g(n)$ e poniamo $X':= X \setminus \{ x_{n} \}$.
Possiamo definire $g^{\star}:I_{n}\rightarrow X'$, $g^{\star}(k):=g(k), \forall k \in I_{n}$, allora $g^{\star}$ è bigettiva, dunque $I_{n}\sim X'$.

Supponiamo per assurdo che $\exists f:Y\rightarrow X$.
Distinguiamo due casi:
$f(Y) \not\ni x_{n} \implies f(Y) \subset X'$, dunque possiamo definire $f^{\star}:Y\rightarrow X'$, dove $f^{\star}(y):=f(y),\forall y\in Y$. Allora $f^{\star}$ è iniettiva, ma $I_{m}\sim Y$, $I_{n}\sim X$ e $m>n+1>n$. Per ipotesi induttiva $f^{\star}$ non esiste e dunque $f$ non esiste.
$f(Y) \ni x_{n} \implies f^{-1}(x_{n})\neq \emptyset$. Per l'iniettività di $f$ si ha che $\exists!y_{n}=f(x_{n})$. Poniamo $Y':=Y\setminus \{ y_{n} \}$ e dunque $Y' \sim I_{m-1}, Y'\subset X'$. Possiamo definire $f^{\star}:Y'\rightarrow X'$ dove $f^{\star}(y):=f(y),\forall y\in Y'$, allora $f^{\star}$ è iniettiva, ma $I_{m-1}\sim Y', I_{n}\sim X'$ e $m-1>n \Longleftrightarrow m>n+1$, dunque $f^{\star}$ non può esistere e di conseguenza $f$ non esiste.

Dunque non può esistere $f$ e il passo induttivo è stato completato. Grazie al principio di induzione di primo grado l'asserto è vero $\forall n\geq 0$.

### Definizione


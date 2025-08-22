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
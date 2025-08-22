### Teorema principio di induzione di prima forma
Sia $\{ P(n) \}_{n \in \mathbb{N}}$ una famiglia di proposizioni indicizzata su $n \in \mathbb{N}$. Supponiamo che:
- $P(0)$ sia vera
- Se $P(n)$, allora $P(n+1)$ è vera.
Allora $P(n)$ è vera $\forall n \in \mathbb{N}$.

### Definizone di ordinamento
Sia $X$ un insieme e sia $\mathcal{R}\subset X \times X$ una relazione binaria. $\mathcal{R}$ è detta essere una relazione di ordinamento parziale di $X$ se valgono le seguenti:
- (riflessività) $x\mathcal{R}x, \forall x \in X$
- (antisimmetria) $x\mathcal{R}y$ e $y\mathcal{R}x \implies x = y, \forall x,y \in X$
- (transitività) $x\mathcal{R}y$ e $y \mathcal{R}z \implies x \mathcal{R}z, \forall x,y,z \in X$
Inoltre se oltre alle precedenti vale anche:
- (totalità) $x\mathcal{R}y$ o $y \mathcal{R}x, \forall x,y \in X$.
Allora $\mathcal{R}$ è detto essere un ordinamento totale di $X$.

### Definizione di minimo
Sia $(X,\leq)$ un insieme parzialmente ordinato e sia $A \subset X$. Sia $a \in A$, $a$ è detto essere minimo di $A$ se $a\leq z, \forall z\in A$.

### Definizione di $\leq$ in $\mathbb{N}$
Definiamo la relazione binaria $\leq \subset \mathbb{N}\times \mathbb{N}$ come segue:
$$
n \leq m \text{ se } \exists k \in \mathbb{N}:n+k = m
$$
### Proposizione naturali totalmente ordinati
$(\mathbb{N},\leq)$ è un insieme totalmente ordinato.

### Definizione buon ordinamento
Un insieme totalmente ordinato $(X,\leq)$ si dice essere ben ordinato se ogni sottinsieme non vuoti di $X$ ammette un minimo.

### Teorema buon ordinamneto dei naturali
$(\mathbb{N},\leq)$ è un insieme ben ordinato.

Dimostrazione:
Sia $A \subset \mathbb{N}$ tale che non ammette un minimo. Dobbiamo provare che $A = \emptyset$.
Consideriamo $B:=\mathbb{N} \setminus A$. $A \neq \emptyset \Longleftrightarrow B= \mathbb{N}$.
Sia $P(n)$ con $n \in \mathbb{N}$ la seguente proposizione:
$$
P(n):=(\{ 0,\dots,n \}\subset \mathbb{N})
$$
Se riusciamo a dimostrare che $P(n)$ è vera $\forall n \in \mathbb{N}$ allora $B=\mathbb{N} \Longleftrightarrow A=\emptyset$.
Procediamo per induzione su $n \geq 0$.
$n = 0$ (base dell'induzione)
Osserviamo che $0 \not\in A$, perché altrimenti ne sarebbe sicuramente il minimo in quanto addirittura $0 = min(\mathbb{N})$. Pertanto $0 \in B \implies \{ 0\} \subset B$. Questo dimostra che $P(0)$ è vera.
La base dell'induzione è stata verificata.

$n \geq 0, n \implies n+1$ (passo induttivo).
Supponiamo $P(n)$ vera per qualche $n \in \mathbb{N}$ (ipotesi induttiva). Dimostraimo che $P(n+1)$ è vera:
Osserviamo che per ipotesi $\{ 0,\dots,n \}\subset B \implies A \subset \{ n+1,n+2,\dots \}$. Allora $n+1 \not\in A$, perché altrimenti ne sarebbe sicuramente il minimo in quanto addirittura $n+1 = min(\{ n+1,n+2,\dots \})$. Pertanto $n+1 \in B\implies \{ 0,\dots,n+1 \}\subset B$. Ciò dimostra che $P(n+1)$ è vera.
Il passo induttivo è stato completato.

Grazie al principio di induzione di prima forma sappiamo che $P(n)$ è vera $\forall n \in \mathbb{N}$, dunque $B=\mathbb{N} \Longleftrightarrow A=\emptyset$.

### Teorema principio di induzione di seconda forma
Sia $\{ P(n) \}_{n\in \mathbb{N}}$ una famiglia di proposizioni indicizzata su $n \in \mathbb{N}$. Supponiamo che valgano le seguenti:
- $P(0)$ è vera.
- Se $\forall k \in \mathbb{N}, 0\leq k <n$, $P(k)$ è vera, allora $P(n)$ è vera.
Allora $P(n)$ è vera $\forall n \in \mathbb{N}$.

Dimostrazione:
Si consideri l'insieme $A:=\{ n \in \mathbb{N}|P(n)\text{ falsa} \}$.
Dimostriamo che $A=\emptyset$.
Supponiamo per assurdo che $A\neq \emptyset$.
Allora $A\subset \mathbb{N}$ e $A\neq \emptyset$, dunque per il buon ordinamento dei natrali, $\exists m\in A:m=min(A)$.
Osserviamo che per ipotesi $P(0)$ è vera, dunque $0 \not\in A\implies m>0$.
Poiché $m$ è minimo di $A$, $\forall k, 0\leq k<m$ vale che $P(k)$ è vera, ma allora per ipotesi $P(m)$ è vera, pertanto $m \not\in A$, ma questo è assurdo.
Pertanto $A=\emptyset$.

---

### Teorema esistenza e unicità del quoziente e del resto della divisione euclidea
Siano $n, m \in \mathbb{Z}$ con $m \neq 0$, allora $\exists!q,r\in \mathbb{Z}$ per i quali:
$$
(\star)_{n} \begin{cases}
n = qm +r \\
0\leq r < |m|
\end{cases}
$$

Dimostrazione esistenza:
Consideriamo il caso dove $n \geq 0$ e $m > 0$.
Procediamo per induzione su $n \geq 0$:
$n = 0$ (base dell'induzione)
Se $n = 0$ basta porre $q:=0$ e $r:=0$, i quali soddisfano $(\star)_{0}$, infatti vale che:
$$
\begin{cases}
0 = 0m+0 \\
0\leq 0 <m
\end{cases}
$$
La base dell'induzione è stata verificata.
$n > 0, (\forall k,0\leq k<n)\implies n$ (passo induttivo).
Supponiamo che per qualche $n > 0$, l'asserto di esistenza sia vero $\forall k,0\leq k<n$. Dimostriamo che sia vero anche per $n$.
Distinguiamo due casi:
Se $n < m$ basta porre $q:=0$ e $r:=n$, i quali soddisfano $(\star)_{n}$, infatti vale che:
$$
\begin{cases}
n = 0m+n \\
0 \leq n < m
\end{cases}
$$
Se $n \geq m$, poniamo $k:=n-m$. Osserviamo che $0 \leq k<n$, pertanto è possibile applicare l'ipotesi induttiva con $k$, ottenendo $q,r \in \mathbb{Z}$ per i quali:
$$
\begin{cases}
k = qm+ r \\
0\leq r<m
\end{cases}\Longleftrightarrow
\begin{cases}
n-m=qm+r \\
0\leq r<m
\end{cases} \Longleftrightarrow
\begin{cases}
n = (q+1)m +r \\
0\leq r < m
\end{cases}
$$
Pertanto $(\star)_{n}$ è stata soddisfatta.
Il passo induttivo è stato completato.
Grazie al principio di induzione di seconda forma, l'esistenza del quoziente e del resto è verficata $\forall n\geq 0$.

Consideriamo ora il caso dove $n < 0$ e $m> 0$.
Eseguiamo la divisione euclidea tra $-n>0$ e $m > 0$, ottenendo $q,r\in \mathbb{Z}$ per i quali:
$$
\begin{cases}
-n = qm+r \\
0\leq r < m
\end{cases} 
\Longleftrightarrow
\begin{cases}
n= -qm-r \\
0\leq r <m
\end{cases}
$$
Distinguiamo ora due casi:
Se $r = 0$ abbiamo finito, in quanto $(\star)_{n}$ è soddisfatta, infatti vale che:
$$
\begin{cases}
n = -qm+0 \\
0\leq 0 <m
\end{cases}
$$
Se $r> 0$, vale che:
$$
\begin{cases}
n = -qm-m+m-r \\
0 \leq r < m
\end{cases}
\Longleftrightarrow
\begin{cases}
n = (-q-1)m + (m - r) \\
0\leq r < m
\end{cases}
$$
Osserviamo che $0 < (m-r) < m$, ma allora $(\star)_{n}$ è soddisfatta, in quanto vale:
$$
\begin{cases}
n = (-q-1)m+(m-r) \\
0 \leq (m-r) < m
\end{cases}
$$
Consideriamo infine il caso dove $n \in \mathbb{Z}$ e $m < 0$.
Eseguiamo la divisione euclidea tra $n$ e $-m > 0$, ottenendo $q,r \in \mathbb{Z}$ per i quali:
$$
\begin{cases}
n = q(-m) +r \\
0\leq r < -m
\end{cases}\Longleftrightarrow
\begin{cases}
n = (-q)m + r\\
0 \leq r |m|
\end{cases}
$$
Dunque $(\star)_{n}$ è soddisfatta.

Dimostrazione unicità:
Supponiamo che $\exists q,q',r,r'\in \mathbb{Z}$ tali che:
$$
\begin{cases}
n = qm+r \\
0\leq r < |m|
\end{cases}\qquad
\begin{cases}
n = q'm + r' \\
0 \leq r' < |m|
\end{cases}
$$
Allora vale che $qm+r = n = q'm+r' \implies qm+r=q'm+r'\Longleftrightarrow (q-q')m=r'-r\implies|q-q'||m|=|r'-r|$.
Osserviamo che $|r'-r|<|m|$, dato che $0 \leq r < |m|$ e $0 \leq r'<|m|$.
Pertanto vale che:
$$
\begin{align}
|q-q'||m|=|r'-r|<|m| \implies|q-q'||m|<|m| \implies|q-q'|<1 \implies |q-q'| = 0 \implies q= q'
\end{align}
$$
Ma se $q=q'$ allora vale che:
$$
(q-q')m = r'-r \implies 0m = r'-r \implies r = r'
$$
Pertanto quoziente e resto della divisione euclidea sono unici.

---

### Teorema cinese del resto
Sia $n,m\in \mathbb{Z},n>0,m >0$ e siano $a,b \in \mathbb{Z}$. Si consideri il seguente sistema di congruenze:
$$
\begin{cases}
x \equiv a\ (\text{mod}\ n) \\
x \equiv b\ (\text{mod}\ m)
\end{cases}
$$
Sia $S\subset \mathbb{Z}$ l'insieme delle soluzioni del sistema. Allora $S\neq \emptyset \Longleftrightarrow(n,m)|b-a$.
Inoltre, se il sistema è compatibile, ovvero $S=\emptyset$, allora $S = [c]_{[n,m]}$ dove $c \in S$ è una soluzione particolare del sistema.

Dimostrazione compatibilità:
Supponiamo che $S\neq \emptyset$, prendiamo $c \in S$. Allora $\exists k,h\in \mathbb{Z}:c =a+kn=b+hm \implies a+kn=b+hm \Longleftrightarrow kn-hm=b-a$.
Osserviamo che per definizione $(n,m)|n$ e $(n,m)|m$, dunque per il lemma utile $(n,m)|kn-hm=b-a \implies(n,m)|b-a$.

Supponiamo invece che $(n,m)|b-a$. Allora $\exists k\in \mathbb{Z}:b-a=k(n,m)$. Applicando l'algoritmo di Euclide con sostituzione a ritroso troviamo $x,y\in \mathbb{Z}:(n,m)=xn+ym$.
Dunque vale che $b-a=k(xn+ym) \Longleftrightarrow b-a = kxn+kym \Longleftrightarrow kxn+a =b-kym=:c$. Segue che $c \equiv a\ (\text{mod}\ n)$ e $c \equiv b\ (\text{mod}\ m)$, di conseguenze $c \in S \implies S\neq \emptyset$.

Dimostrazione che $S=[c]_{[n.m]}$, dove $c$ è una particolare soluzione del sistema.
Dimostriamo che $S \subset[c]_{[n,m]}$.
Sia $c' \in S$, allora vale che:
$$
\begin{cases}
c\equiv a\ (\text{mod}\ n) \\
c \equiv b\ (\text{mod}\ m) \\
c'\equiv a\ (\text{mod}\ n) \\
c'\equiv b\ (\text{mod}\ m)
\end{cases}
$$
Dunque $\exists k,k',h,h'\in \mathbb{Z}$ per cui:
$$
\begin{cases}
c = a+kn \\
c =b+hm \\
c' = a+k'n \\
c' = b+h'm
\end{cases}
$$
Osserviamo che $c-c' = a+kn-(a+k'n) \Longleftrightarrow c-c' = (k-k')n \implies n|c-c'$.
Osserviamo che $c-c' = b+hm-(b+h'm) \Longleftrightarrow c-c' = (h-h')m \implies m|c-c'$.
Ma allora per definizione vale che $[n,m]|c-c' \Longleftrightarrow \exists s\in \mathbb{Z}: c-c' = s[n,m] \implies c' =c-s[n,m]$, ovvero $c' \equiv c\ (\text{mod}\ [n,m]) \Longleftrightarrow c' \in[c]_{[n,m]}$.

Dimostriamo che $[c]_{[n,m]}\subset S$.
Osserviamo che $c\equiv a\ (\text{mod}\ n)$, ovvero $[c]_{n}=[a]_{n}$.
Osserviamo che $c\equiv b\ (\text{mod}\ m)$, ovvero $[c]_{m}=[b]_{m}$.
Sia $c' \in [c]_{[n,m]}$, ovvero $c' \equiv c\ (\text{mod}\ [n,m])\Longleftrightarrow \exists k\in \mathbb{Z}:c'=c+k[n,m]$.
Passando alle classi di resto modulo $n$ troviamo che:
$$
\begin{align}
[c']_{n} &= [c + k [n,m]]_{n} \\
 & = [c]_{n} + [k]_{n} [[n,m]]_{n} \\
 & = [a]_{n} + [k]_{n} [0]_{n} \\
 & = [a]_{n} + [0]_{n} \\
 & = [a]_{n}
\end{align}
$$
Pertanto $[c']_{n}=[a]_{n}$, ovvero $c'\equiv a\ (\text{mod}\ n)$.
Lo stesso procedimento vale passando alle classi di resto modulo $m$, ricordando che $[c]_{m}=[b]_{m}$ si ottiene che $[c']_{m}=[b]_{m}$, ovvero $c'\equiv b\ (\text{mod}\ m)$.
Ciò dimostra che $c'\in S$.

---

### Proposizione
Sia $n\in \mathbb{Z},n>0$ e siano $\alpha,\beta \in (\mathbb{Z} \big/_{n\mathbb{Z}})^{*}$. Valgono le seguenti:
- $\alpha \beta \in (\mathbb{Z} \big/_{n\mathbb{Z}})^{*}$ e $(\alpha \beta)^{-1}=\alpha^{-1}\beta ^{-1}=\beta ^{-1}\alpha ^{-1}$
- $\alpha ^{-1}\in (\mathbb{Z} \big/_{n\mathbb{Z}})^{*}$ e $(\alpha ^{-1})^{-1}=\alpha$

### Teorema di Fermat Eulero
Sia $n \in \mathbb{Z}, n>0$ e sia $\alpha \in (\mathbb{Z} \big/_{n\mathbb{Z}})^{*}$. Allora $\alpha^{\phi(n)}=[1]_{n}$.
Equivalentemente, $\forall,a \in \mathbb{Z}$ tali che $(a,n)=1$, vale che $a^{\phi(n)}\equiv 1\ (\text{mod}\ n)$.

Dimostrazione:
Definiamo la funzione $L_{\alpha}:(\mathbb{Z} \big/_{n\mathbb{Z}})^{*}\rightarrow (\mathbb{Z} \big/_{n\mathbb{Z}})^{*}$ dove $L_{\alpha}(\beta)=\alpha \beta,\forall \beta \in (\mathbb{Z} \big/_{n\mathbb{Z}})^{*}$. Grazie alla proposizione precedente $L_{\alpha}$ è ben definita.
Dimostriamo che $L_{\alpha}$ è iniettiva.
Siano $\beta_{1},\beta_{2} \in (\mathbb{Z} \big/_{n\mathbb{Z}})^{*}$ tali che $L_{\alpha}(\beta_{1})=L_{\alpha}(\beta_{2})$. Vale che:
$$
\begin{align}
L_{\alpha}(\beta_{1}) &= L_{\alpha}(\beta_{2}) \Longleftrightarrow \alpha \beta_{1} = \alpha \beta_{2} \implies \alpha \beta_{1}\alpha ^{-1} = \alpha \beta_{2} \alpha ^{-1} \implies [1]_{n}\beta_{1} = [1]_{n}\beta_{2} \implies \beta_{1}=\beta_{2}
\end{align}
$$
Dunque $L_{\alpha}$ è iniettiva.
Siccome $(\mathbb{Z} \big/_{n\mathbb{Z}})^{*}$ è un insieme finito e coincide sia con il dominio che codominio di $L_{\alpha}$ e $L_{\alpha}$ è iniettiva, dunque $L_{\alpha}$ è suriettiva e di conseguenza bigettiva.
Sia $k:=\phi(n)$ e sia $(\mathbb{Z} \big/_{n\mathbb{Z}})^{*}=\{ \beta_{1},\dots,\beta_{k} \}$. Si ha che $L_{\alpha}(\beta_{1}),\dots,L_{\alpha}(\beta_{k})$ sono tutti e soli gli elementi di $(\mathbb{Z} \big/_{n\mathbb{Z}})^{*}$ a meno di riordinamento, in quanto $L_{\alpha}$ è bigettiva e dominio e codominio coincidono.
Siccome il prodotto è associativo e commutativo in $(\mathbb{Z} \big/_{n\mathbb{Z}})$ e di conseguenza anche in $(\mathbb{Z} \big/_{n\mathbb{Z}})^{*}$, vale allora che:
$$
\beta_{1}\dots \beta_{k} = L_{\alpha}(\beta_{1}),\dots,L_{\alpha}(\beta_{k}) =  \alpha \beta_{1}\dots \alpha\beta_{k} = \alpha^{k}\beta_{1}\dots \beta_{k}
$$
Sia $(\mathbb{Z} \big/_{n\mathbb{Z}})^{*} \ni \gamma:= \beta_{1}\dots \beta_{k}$. Allora vale:
$$
\gamma = \alpha^{k}\gamma \implies \gamma \gamma ^{-1} = \alpha^{k}\gamma \gamma ^{-1} \implies [1]_{n} =  \alpha^{k}[1]_{n} \implies[1]_{n} = \alpha^{k} \implies[1]_{n} = \alpha^{\phi(n)}
$$
Sia ora $a \in \mathbb{Z}$ tale che $(a,n)=1$, allora $[a]_{n}\in (\mathbb{Z} \big/_{n\mathbb{Z}})^{*}$. Vale allora che:
$$
[a]_{n}^{\phi(n)} = [1]_{n} \implies[a^{\phi(n)}]_{n} = [1]_{n} \implies a^{\phi(n)} \equiv 1\ (\text{mod}\ n)
$$
---
### Definzione di albero
Sia $T=(V,E)$ un grafo. $T$ è un albero se è connesso e non contiene cicli.

### Proposizione
Sia $G=(V,E)$ un grafo connesso e sia $v \in V$ una foglia. Allora $G-v$ è un grafo connesso.

### Proposizione
Sia $T=(V,E)$ un albero e sia $v \in V$ una foglia. Allora $T-v$ è un albero.

### Proposizione
Sia $T=(V,E)$ un albero con $|V|\geq 2$. Allora $T$ contiene almeno due foglie.

### Teorema
Sia $T=(V,E)$ un grafo finito. Allora $T$ è albero se e solo se è connesso e vale che $|V|-1=|E|$ (formula di Eulero).

Dimostrazione:
Supponiamo che $T=(V,E)$ sia un albero.
Procediamo per induzione su $n:=|V|\geq 1$.
$n=1$ (base dell'induzione).
Osserviamo che l'unico albero $T=(V,E)$ con $|V|=n=1$ vertici consite di un vertice isolato, pertanto è connesso e vale che $|V|-1=1-1=0=|E| \implies|V|-1=|E|$.

$n \geq 1, n\implies n+1$ (passo induttivo)
Supponiamo che ogni albero con $n$ vertici sia connesso e soddisfi la formula di Eulero (ipotesi induttiva). Dimostriamo che ciò valga anche per tutti gli alberi con $n+1$ vertici.
Sia $T=(V,E)$ un albero con $|V|=n+1$ vertici. Poiché $n\geq 1$ vale che $n+1\geq 2$ e per la proposizione precedente $\exists v\in V$ tale che $v$ è foglia. Consideriamo allora $T-v$ che per la proposizione precedente sappiamo essere un albero.
Allora applicando l'ipotesi induttiva su $T-v$ troviamo che:
$$
|V(T-v)|-1=|E(T-v)|
$$
Osserviamo che $|V(T-v)|=|V|-1$ e poiché $deg_{T}(v)=1$ vale che $|E(T-v)|=|E|-1$.
Dunque:
$$
|V(T-v)|-1=|E(T-v)| \Longleftrightarrow|V|-1-1=|E|-1 \Longleftrightarrow|V|-1=|E|
$$
Pertanto $T$ soddisfa la formula di Eulero. Inoltre $T$ è connesso in quanto albero per ipotesi e il passo induttivo è stato completato, pertanto l'implicazione vale per ogni $n\geq 1$.

Supponiamo invece che $T=(V,E)$ sia un grafo connesso che soddisfi la formula di Eulero.
Procediamo per induzione su $n:=|V|\geq 1$.
$n=1$ (base dell'induzione).
Osserviamo che l'unico grafo connesso con $|V|=n=1$ vertici consiste di un vertice isolato, pertanto è un albero.

$n\geq 1, n \implies n+1$ (passo induttivo)
Supponiamo che ogni grafo connesso che soddisfi la formula di Eulero con $n$ vertici sia un albero (ipotesi induttiva). Dimostriamo che ciò valga anche per tutti i grafi connessi che soddisfino la formula di Euelero con $n+1$ vertici.
Sia $G=(V,E)$ un grafo connesso che soddisfi la formula di Eulero con $|V|=n+1$ vertici. Dimostriamo che $G$ abbia almeno una foglia.
Osserviamo che siccome $G$ è connesso per ipotesi $deg_{G}(v)\neq 0,\forall v\in V$. Supponiamo per assurdo che non contenga foglie, ovvero $deg_{G}(v)\geq 2,\forall v\in V$, dalla caratterizzazione dei grafi finiti otteniamo che:
$$
2|V|-2=2|E|=\sum_{v\in V}deg_{G}(v) \geq \sum_{v\in V} 2 = 2|V|
$$
Ma ciò è chiaramente assurdo. Pertanto $\exists v\in V:deg_{G}(v)=1$. Consideriamo $G-v$, che per la proposizione precedente è un grafo connesso. Inoltre $|V(G-v)|=|V|-1$ e $|E(G-v)|=|E|-1$ poiché $v$ è foglia.
Vale che:
$$
|V|-1=|E| \Longleftrightarrow |V(G-v)|=|E(G-v)|+1 \Longleftrightarrow |V(G-v)|-1=|E(G-v)|
$$
Di conseguenza $G-v$ è connesso e soddisfa la formula di Eulero. Siccome $|V(G-v)|=|V|-1=n+1-1=n$, per ipotesi induttiva $G-v$ è un albero.
Ora supponiamo per assurdo che $G$ non sia un albero, allora $\exists Q$ ciclo in $G$. Siccome $deg_{G}(w)\geq 2, \forall w\in Q$ si ha che $Q$ non passerebbe per $v$ e quindi $Q$ sarebbe un ciclo anche in $G-v$, ma ciò è assurdo perché $G-v$ è albero.
Pertanto $G$ è un albero.

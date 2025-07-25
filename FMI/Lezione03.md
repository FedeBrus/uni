#### Esercizio 1.10
Siano $X, Y, Z$ tre insiemi non vuoti e siano $f:X \rightarrow Y$ e $g:Y \rightarrow Z$ due funzioni.
- Provare che $f$ e $g$ iniettive $\implies$ $g \circ f$ iniettiva.
- Provare che $f$ e $g$ surgettive $\implies$ $g \circ f$ surgettive.
- Provare che $f$ e $g$ bigettive $\implies$ $g \circ f$ bigettive.

Soluzione:
Il terzo punto può essere banalmente risolto risolvendo i primi due.
Supponiamo $f, g$ iniettive. Siano $x_{1},x_{2}\in X$ tali che $x_{1} \neq x_{2}$. Poiché $f$ è iniettiva, $f(x_{1}) \neq f(x_{2})$. Poiché $g$ è iniettiva, $g(f(x_{1})) \neq g(f(x_{2}))$. Ma $g(f(x_{1})) = (g \circ f)(x_{1})$ e $g(f(x_{2}))=(g \circ f)(x_{2})$. Quindi $(g \circ f)(x_{1}) \neq (g \circ f)(x_{2})$, quindi $(g \circ f)$ è iniettiva.
Supponiamo $f,g$ surgettive. Poiché $g$ è surgettiva, $\forall z \in Z,\exists y \in Y$ tale che $g(y) = z$. Poiché $f$ è surgettiva, allora $\exists x \in X$ tale che $f(x) = y$. Vale che $(g \circ f)(x) = g(f(x)) = g(y) = z$. Vista l'arbitrarietà di $z$, si ha che $(g \circ f)$ è surgettiva.

Nota: Se $(g \circ f)$ è bigettiva, vuol dire che esiste una sua inversa $(g \circ f)^{-1} = f^{-1} \circ g^{-1}$.

#### Esercizio 1.11
Siano $X, Y, I$ insiemi, $f:X\rightarrow Y$ e $A_{i}\subset Y,\forall i \in I$. Si provi che:
$$
f^{-1} \left (\bigcap_{i \in I} A_{i}\right) = \bigcap_{i \in I}  f^{-1} \left(A_{i}\right) 
$$
I due insiemi sono uguali se uno è contenuto nell'altro.
Dimostriamo che $f^{-1} \left (\bigcap_{i \in I} A_{i}\right) \subset \bigcap_{i \in I}  f^{-1} \left(A_{i}\right)$. 
Sia $x \in f^{-1}\left( \bigcap_{i \in I} A_{i} \right) \implies f(x) \in  \bigcap_{i \in I} A_{i} \implies f(x) \in A_{i}, \forall i \in I$. Dunque $x \in f^{-1}(A_{i}), \forall i \in I$, il che vuol dire che sicuramente $x \in \bigcap_{i\in I}f^{-1}(x)$.

Dimostriamo che $\bigcap_{i \in I}f^{-1}(A_{i}) \subset f^{-1} \left (\bigcap_{i \in I} A_{i}\right)$. 
Sia $x \in \bigcap_{i\in I}f^{-1}(A_{i}) \implies x \in f^{-1}(A_{i}), \forall i \in I \implies f(x) \in A_{i}, \forall i \in I$. Dunque $f(x) \in \bigcap_{i \in I} A_{i}$, il che vuol dire che sicuramente $x \in \bigcap_{i \in I}f^{-1}(x)$.

Si provi che:
$$
f^{-1} \left (\bigcup_{i \in I} A_{i}\right) = \bigcup_{i \in I}  f^{-1} \left(A_{i}\right) 
$$
Dimostriamo che $f^{-1}\left( \bigcup_{i \in I} A_{i} \right) \subset \bigcup_{i \in I}f^{-1}(A_{i})$.
Sia $x \in f^{-1}\left( \bigcup_{i \in I} A_{i} \right) \implies f(x)\in \bigcup_{i\in I}A_{i}\implies f(x)\in A_{i}$, per qualche $i \in I$. Dunque $x \in f^{-1}(A_{i})$ per qualche $i \in I$, ma allora $x \in \bigcup_{i \in I}f^{-1}(x)$.

Dimostriamo che $\bigcup_{i \in I}f^{-1}(A_{i}) \subset f^{-1}\left( \bigcup_{i \in I} A_{i} \right)$.
Sia $x \in \bigcup_{i \in I} f^{-1}(A_{i}) \implies x \in f^{-1}(A_{i})$, per qualche $i \in I$. Dunque $f(x) \in A_{i}$, per qualche $i \in I$, ma allora $f(x) \in \bigcup_{i \in I}A_{i}$ e quindi $x \in f^{-1}\left( \bigcup_{i \in I}A_{i} \right)$

## Insiemi equipotenti (cenni)
### Definizione 2.1 equipotenza
Siano $X, Y$ due insiemi, diciamo che $X$ è equipotente a $Y$ oppure che $X$ ha la stessa cardinalità di $Y$ se $\exists f:X\rightarrow Y$ una bigezione, ovvero una funzione bigettiva. In questo caso scriveremo $X \sim Y$.

#### Proposizione 2.2
Siano $X, Y, Z$ tre insiemi, valgono:
1. $X \sim X$ (DIM $id_{X}:X \rightarrow X$ è una bigezione).
2. $X \sim Y$ e $Y \sim Z \implies X \sim Z$ (DIM se $f:X \rightarrow Y$ bigezione e $g:Y\rightarrow Z$ bigezione, sappiamo che $(f \circ g)$ è bigezione).
3. $X \sim Y \implies Y \sim X$ (DIM se $f:X \rightarrow Y$ bigezione esiste anche $f^{-1}:Y \rightarrow Z$ bigezione).

### Definizione insieme cardinale (idea della costruzione)
La classe di insiemi cardinali possiede delle proprietà.
1. $\forall X$ insieme, $X \sim |X|$
2. $|X|\sim|Y|\implies|X|=|Y|$
![[insiemi_cardinali|1000]]
#### Cardinalità finita
$|\emptyset| = \emptyset$
$|\{ 0 \}| = \{ 0 \} \Longleftrightarrow |\{ 0 \}| = 1$
$|\{ 0,1 \}| = \{ 0,1 \} \Longleftrightarrow |\{ 0, 1 \}| = 2$
$\dots$
### Lemma 2.4
Siano $X, Y$ due insiemi, vale:
$$
X \sim Y \Longleftrightarrow |X| = |Y|
$$
Dimostrazione $\impliedby$:
$$
X \xrightarrow[\sim]{\exists f} |X| = |Y| \xleftarrow[\sim]{\exists g} Y \implies g^{-1} \circ f: X \xrightarrow[\sim]{}Y \implies X \sim Y
$$
Dimostrazione $\implies$:
$$
X \sim Y \implies |X| \xleftarrow[\sim]{\exists h} X \xrightarrow[\sim]{\exists f}Y \xrightarrow[\sim]{\exists g}|Y| \implies g \circ f \circ h^{-1} : |X| \xrightarrow[\sim]{g \circ f \circ h^{-1}} |Y| \implies|X| \sim |Y| \implies |X| = |Y|
$$
## Assiomi di Peano
$$
\mathbb{N} = \{ 0,1,2,3,4,5,\dots \}
$$
### Assioma 2.5
Esiste almeno un elemento.
$$
0 \in \mathbb{N}
$$
### Assioma 2.6
Esiste una funzione iniettiva.
$$
\exists succ: \mathbb{N} \rightarrow \mathbb{N} \text{ iniettiva}
$$
### Assioma 2.7
$$
succ(\mathbb{N}) \subset \mathbb{N} \setminus \{ 0 \} \Longleftrightarrow \forall n \in \mathbb{N}; succ(n) \neq 0
$$
### Assioma 2.8 (di induzione)
Sia $A$ un sottoinsieme di $\mathbb{N}$. Supponiamo che $A$ soddisfi le seguenti due proprietà:
1. $\underbrace{ 0 \in A }_{ \text{base dell'induzione} }$ 
2. $\forall n \in \mathbb{N}, \underbrace{ n \in A }_{ \text{ipotesi induttiva} } \implies \underbrace{ succ(n) \in A }_{ \text{passo induttivo} }$ 
Allora $A = \mathbb{N}$.

### Proposizione 2.9
Sia $n\in \mathbb{N} \setminus \{ 0 \}$. Allora $\exists!m\in \mathbb{N}$ tale che $succ(m) = n$. $m$ è detto predecessore di $n$.
### Dimostrazione
Se $m$ esiste allora è certamente unica, perché $succ$ è iniettiva.
Supponiamo che l'asserto sia falso, ovvero $\exists n\in \mathbb{N}\setminus\{ 0 \}$ tale che $\forall m\in \mathbb{N}, succ(m) \neq n$. Poniamo $A:=\mathbb{N}\setminus\{ n \}$. Osserviamo che sicuramente $0 \in A$, perchè $n \neq 0$, dunque $A$ soddisfa (1).
Sia $m \in A$, $succ(m)\neq n$ per ipotesi, quindi $succ(m)\in A$, che dimostra che $A$ soddisfa (2).
Quindi $A = \mathbb{N}$, ma allora l'esistenza di $n$ è assurda e quindi $\forall n \in \mathbb{N}\setminus\{ 0 \}, \exists m\in \mathbb{N} : succ(m)=n$.

### Corollario 2.9
$\mathbb{N}$ è equipotente a $\mathbb{N} \setminus \{ 0 \}$, ovvero $|\mathbb{N}|=|\mathbb{N}\setminus\{ 0 \}|$

### Dimostrazione
Osserviamo che:
- Asssioma 3 $\Longleftrightarrow$ $succ(\mathbb{N}) \subset \mathbb{N}\setminus\{ 0 \}$
- Prop 2.9 $\Longleftrightarrow succ(\mathbb{N})=\mathbb{N}\setminus\{ 0 \}$
Quindi possiamo definire al funzione $succ': \mathbb{N} \rightarrow \mathbb{N}\setminus\{ 0 \}, succ'(n):=succ(n), \forall n \in \mathbb{N}$. $succ'$ è una bigezione.

## Teorema 2.10 Principio di induzione di prima forma
Sia $\{ P(n) \}_{n\in \mathbb{N}}$ una famiglia di proposizioni indicizzata su $\mathbb{N}$. Supponiamo che:
1. $P(0)$ è vera
2. $\forall n \in \mathbb{N}, P(n) \implies P(succ(n))$ è vera, ovvero devo verificare che se $P(n)$ è vera allora anche $P(succ(n))$ è vera.

Allora $P(n)$ è vera $\forall n \in \mathbb{N}$.
### Dimostrazione
Poniamo $A:= \{ n \in \mathbb{N} | P(n) \text{ è vera} \}$. Valgono:
- (1) $\implies 0 \in A$
- (2) $\implies \forall n \in \mathbb{N}$ tale che $P(n) \text{ è vera} \implies n \in A \implies P(succ(n))\text{ è vera} \implies succ(n) \in A$. Per l'assioma 4 $A = \mathbb{N}$, ovvero $P(n)\text{ è vera } \forall n \in \mathbb{N}$.
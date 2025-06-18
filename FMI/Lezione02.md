### Def funzione come legge
Siano $X$ e $Y$ due insiemi non vuoti.
Una funzione $f_{\text{legge}}:X \rightarrow Y$ è una legge (intesa come concetto primitivo) che ad ogni elemento $x \in X$ associa un solo elemento $y \in Y$.

In questo caso l'insieme $X$ è il dominio e l'insieme $Y$ è il suo codominio. $y = f(x)$ è il valore assunto da $f$ su $x$.

#### Equivalenza tra le due nozioni di funzione come relazione e come legge
Queste due definizioni di funzione sono equivalenti se e solo se $X, Y \neq \emptyset$, altrimenti bisogna fare riferimento alla definizione più formale.

### Osservazione
Se $A$ è un insieme, allora con $2^{A}$ si indica l'insieme delle parti di $A$, ovvero gli elementi di $2^{A}$ sono tutti e soli i sottoinsiemi di $A$.

### Def potenza di insiemi
Dati $X$ e $Y$ due insiemi (eventualmente vuoti, perciò bisogna considerare la definizione di funzione come relazione), indichiamo $Y^{X}$ come l'insieme di tutte le funzioni $f \subset X \times Y$ da $X$ in $Y$.

### Osservazione
Poiché esiste l'insieme delle parti di ogni insieme dato, allora:
$$
Y^{X} = \{ f \in 2^{X \times Y} | \underbrace{ \forall x \in X, \exists! y \in Y : (x, y)\in f }_{ P(f) } \}
$$
Per l'assioma di separazione, se si parte da un insieme e ad ogni elemento è associabile una certa affermazione $P(f)$, l'insieme ottenuto è un insieme, dunque $Y^{X}$ è un insieme.
#### Esercizio 1.6
Determinare $Y^{\emptyset}$ e $\emptyset^{X}$:

Per definizione $Y^{\emptyset} = \{ f \in 2^{\emptyset \times Y} | \forall x \in \emptyset, \exists!y \in Y : (x, y) \in f \}$, ovvero l'insieme $\{ f  | f: \emptyset \rightarrow Y \}$, quindi $Y^{\emptyset}$ contiene solamente la funzione vuota associa a $Y$ e dunque $Y^{\emptyset} = \{ \emptyset \}$.

Per definizione $\emptyset^{X} = \{ f \in 2^{X \times \emptyset} | \forall x \in X, \exists!y \in \emptyset : (x, y) \}$, ovvero l'insieme $\{ f | f : X \rightarrow \emptyset \}$, ma per definizione di funzione ogni elemento del dominio deve essere mappato a uno e uno solo elemento del codominio, ma il codominio in questo caso è l'insieme vuoto, dunque non è possibile costruire una tale funzione. Dunque $\emptyset^{X} =  \emptyset$

Soluzione:
$X = \emptyset \implies X \times Y = \emptyset \times Y = \emptyset$
$2^{X \times Y} = 2^{\emptyset} = \{ \emptyset \} \implies$ l'unica relazione tra $\emptyset$ e $Y$ è $f=\emptyset$.
$Y^{\emptyset} = \{ f \in \{ \emptyset \} | \forall x \in f, \exists!y \in Y: (x,y) \in f\}$
Non ci sono verifiche da fare, quindi $Y^{\emptyset} = \{ \emptyset \}$.

Dal caso precedente se abbiamo $\emptyset^{\emptyset}$ sappiamo che è $\{ \emptyset \}$.

Sia $X \neq \emptyset$ e voglio calcolare $\emptyset^{X}$
$\emptyset^{X} = \{ f \in \{ \emptyset \} | \forall x \in X, \exists!y \in f: (x, y) \in f \}$
Non esisterà mai una $y$ per alcuna $x$. Dunque $\emptyset^{X} = \emptyset$.

Difatti $|Y^{\emptyset}| = |Y|^{|\emptyset|} = |Y|^{0} = 1$ e $|\emptyset^{X}| = |\emptyset|^{|X|}=0^{|X|} =0$

#### Esempio (1.12) Identità
La funzione $id_{X}: X \rightarrow X$ definita ponendo $id_{X}(x):=x$, si dice identità di $X$.

### Def (1.15) Composizione
Siano $X, Y, Z$ insiemi non vuoti e siano $f:X\rightarrow Y$ e $g:Y\rightarrow Z$. Definiamo la composizione di $f$ con $g$ come la funzione $g \circ f: X \rightarrow Z$ il seguente:
$$
(g \circ f) (x) := g(f(x)), \forall x \in X
$$
### Definizione Immagine
Siano $X, Y$ due insiemi non vuoti e sia $f:X \rightarrow Y$ una funzione. Dato un sottoinsieme $A$ di $X$, definiamo l'immagine di $A$ tramite $f$ ponendo:
$$
f(A) := \{ f(x) \in Y | x \in A \}
$$
Se $A = X$, allora $f(X)$ si dice essere l'immagine di $f$.

### Definizione Controimmagine e Fibra
Siano $X, Y$ due insiemi non vuoti e sia $f:X \rightarrow Y$ una funzione. Dato un sottoinsieme $B$ di $Y$, definiamo la controimmagine di $B$ tramite $f$ ponendo:
$$
f^{-1}(B) := \{ x \in X |f(x) \in B \} 
$$
In particolare, se $B = \{ b \}$, allora $f^{-1}(\{ b \})$ si indica con $f^{-1}(b)$ e $f^{-1}(b)$ si dice fibra di $f$ sopra $b$.
### Osservazione
$$
f^{-1}(b) = \{ x \in X | f(x) = b \}
$$
Dunque una fibra rappresenta l'insieme delle soluzioni di $f(x) = b$.
### Def Iniettività
Sia $f: X \rightarrow Y$ una funzione.
Diciamo che $f$ è iniettiva se $\forall x_{1},x_{2}\in X : x_{1} \neq x_{2}\implies f(x_{1}) \neq f(x_{2})$, ovvero se le sue fibre sono vuote o singoletti.
### Def Suriettiva 
Sia $f: X \rightarrow Y$ una funzione.
Diciamo che $f$ è suriettiva se $f(X) = Y$, ovvero $\forall y\in Y, \exists x \in X : f(x) = y$, ovvero se le sue fibre sono non vuote.
### Def Bigettiva
Sia $f: X \rightarrow Y$ una funzione.
Diciamo che $f$ è bigettiva se è al contempo iniettiva e suriettiva, ovvero se le sue fibre sono singoletti.
#### Esempio
Consideriamo:
1. $f_{1}:\mathbb{R}\rightarrow \mathbb{R}, f_{1}(x):= x^{2}$
2. $f_{2}:\mathbb{R}\rightarrow \mathbb{R}^{+}, f_{2}(x) := x^{2}$
3. $f_{3}:\mathbb{R}^{+}\rightarrow \mathbb{R}^{+}, f_{3}(x) := x^{2}$

$f_{1}$ non è iniettiva, non è suriettiva e non è bigettiva.
$f_{2}$ non è iniettiva, è suriettiva e non è bigettiva.
$f_{3}$ è iniettiva, è suriettiva ed è bigettiva.

## Bigettività e invertibilità
### Def invertibilità
Sia $f:X \rightarrow Y$ una funzione tra insiemi non vuoti.
Diciamo che $f$ è invertibile se $\exists g:Y \rightarrow X  : g(f(x)) = x,  \forall x \in X$, ovvero $g \circ f = id_{X}$ e $f \circ g = id_{Y}$. Si dice che $g$ è un'inversa di $f$.

### Proposizione (1.21)
Sia $f:X \rightarrow Y$ una funzione bigettiva. Allora $f$ è invertibile ed esiste una sola inversa di $f$, detta $f^{-1}:Y\rightarrow X$.

### Dimostrazione
Osserviamo che $\forall y \in Y, f^{-1}(y) = \{ x_{y} \}$ per qualche unico $x_{y} \in X$ (ovvero $f(x_{y}) = y$). Definiamo $g:Y\rightarrow X$ ponendo $g(y) := x_{y}, \forall y \in Y$.
Vale:
- $(f \circ g)(y) = f(g(y)) = f(x_{y}) = y, \forall y \in Y$, ovvero $(f \circ g) = id_{Y}$
- $\forall x \in X, (f \circ g)(f(x)) = f(x) = (f \circ g \circ f)(x) =f((g \circ f)(x)) \implies (g \circ f)(x) = x$
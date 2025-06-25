Il lambda calcolo è un linguaggio semplice e Turing-completo.
Base teorica per i linguaggi funzionali.

Dato un insieme numerabile di variabili $V$, si ah che:
$$
e ::= x | \lambda x.e|ee
$$
dove $x \in V$ variabile. $\lambda x.e$ è una funzione che prende come input il parametro $x$ e evaluta un'espressione $e$ (astrazione). $ee$ è l'applicazione tra due espressioni.
Dunque le componenti del lambda-calcolo sono:
- variabili
- astrazioni
- applicazioni

### Astrazione
L'astrazione di un termine rispetto ad una variabile $x$: $\lambda x.e$, ovvero la funzione che quando applicata ad un valore $v$ produce $e$ in cui $v$ sostituisce $x$.

### Applicazione
L'applicazione di una funzione ad un argomento: $e_{1}e_{2}$, ovvero l'applicazione della funzione $e_{1}$ all'argomento $e_{2}$.

### Variabili free e bound
L'insieme delle variabili free di un espressione è definito da:
- $F_{v}(x) = \{ x \}$
- $F_{v}(\lambda x.e) = F_{v}(e) \setminus \{ x \}$
- $F_{v}(e_{1}e_{2}) = F_{v}(e_{1}) \cup F_{v}(e_{2})$

$$
\begin{align}
F_{v}(\lambda x.y(\lambda y.xyu)) &= F_{v}(y(\lambda y.xyu)) \setminus \{ x \} \\
 & = \left(  F_{v}(y) \cup F_{v}(\lambda y.xyu) \right)  \setminus \{ x \} \\
 & = \left( \{ y \} \cup (F_{v}(xyu)\setminus \{ y \})  \right)  \setminus \{ x \} \\
 & = (\{ y \} \cup ((F_{v}(x) \cup F_{v}(y) \cup F_{v}(u)) \setminus \{ y \})) \setminus \{ x \} \\
 & = (\{ y \} \cup(\{ x,y,u \} \setminus \{ y \})) \setminus \{ x \} \\
 & = \{ x,y,u \} \setminus \{ x \}  \\
 & = \{ y, u \}
\end{align}
$$
L'insieme delle variabili bound di un espressione è definito da:
- $B_{v}(x) = \emptyset$
- $B_{v}(\lambda x.e) = \{ x \} \cup B_{v}(e)$
- $B_{v}(e_{1}e_{2})=B_{v}(e_{1}) \cup B_{v}(e_{2})$

$$
\begin{align}
B_{v}(\lambda x.y(\lambda y.xyu)) &= B_{v}(y(\lambda y.xyu)) \cup \{ x \}  \\
 & = B_{v}(y)  \cup B_{v}(\lambda y.xyu) \cup \{ x \} \\
 & = B_{v}(xyu) \cup \{ y, x \} \\
 & = B_{v}(x) \cup B_{v}(y) \cup B_{v}(u) \cup \{ y,x \} \\
 & = \{ y,x \}
\end{align}
$$

### Convenzioni
L'associatività delle applicazioni è a sinistra:
$$
xyzw =(((x)y)z)w
$$
Il corpo di una lambda si estende il più possibile verso destra.
$$
\lambda x.x \lambda z.xzx = \lambda x.(x \lambda z. (xzx))
$$
Astrazioni consecutive possono venire uncurriate:
$$
\lambda xyz.e = \lambda x.\lambda y.\lambda z.e
$$
### Beta riduzione
La beta riduzione è il modo in cui si svolge la computazione nel lambda calcolo.
$$
(\lambda x.e_{1})e_{2} \rightarrow e_{1} [e_{2} / x]
$$
Un termine della forma $(\lambda x.e_{1})e_{2}$, ovvero un termine con un'astrazione alla sua sinsitra, è detto beta-redex. Una forma beta-normale è un termine che non contiene beta-redex.

### Regole di sostituzione
In $(\lambda x.e_{1})e_{2} \mapsto e_{1}[e_{2}/x]$ dove $e_{1}$ è un valore:
- Se $e_{1} = x$, $x[e_{2}/x] = e_{2}$
- Se $e_{1} = y$ e $y \neq x$, $y[e_{2}/x] = y$

In $(\lambda x.e_{1})e_{2} \mapsto e_{1}[e_{2}/x]$ dove $e_{1}$ è un'applicazione $e_{11}e_{12}$:
- $(e_{11}e_{12})[e_{2}/x] = (e_{11}[e_{2} / x] e_{12}[e_{2} / x])$

In $(\lambda x.e_{1})e_{2} \mapsto e_{1}[e_{2}/x]$ dove $e_{1}$ è un'astrazione $\lambda y.e$:
- Se $y \neq x$ e $y \not\in F_{v}(e_{2})$, $(\lambda y.e)[e_{2} / x] = \lambda y.(e[e_{2} / x])$
- Se $y = x$, $(\lambda y.e)[e_{2} / x] = \lambda y. e$
- Se $y \neq x$ e $y \in F_{v}(e_{2})$? In questo caso si alfa-converte $e_{1}$ e dopo si può sostituire.

### Equivalenza
Date due espressioni $e_{1}$ e $e_{2}$ sono equivalenti quando differiscono nei nomi delle variabili bound.

Se $y$ non è presente in $e$:
- $\lambda x.e \equiv \lambda y.(e[y / x])$
Questa è chiamata alfa-equivalenza.
Due espressioni sono alfa-equivalenti se si può ottenerne una dall'altra sostituendone una parte con una alfa-equivalente.

La alfa-conversione può essere utilizzata per evitare di avere cattura di variabili nella sostituzione.

Ricorda che non è possibile modificare il nome di variabili libere.

### Note
Le beta-riduzioni non sono simmetriche e non è detto che terminino.

### Teorema della confluenza
Se $e$ può essere ridotto a $e_{1}$ da una beta-riduzione e $e$ può essere ridotto a $e_{2}$ da una beta-riduzione, allora esiste $e_{3}$ tale che sia $e_{1}$ che $e_{2}$ possono essere beta-ridotti ad essa.

Ciò vuol dire che se $e$ può essere ridotta in forma normale, allora l'ordine delle riduzioni non ha importanza.
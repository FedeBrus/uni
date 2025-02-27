 
In questo caso l'insieme $X$ è il dominio e l'insieme $Y$ è il suo codominio. $y = f(x)$ è il valore assunto da $f$ su $x$.

#### Oss
Se $A$ è un insieme, allora con $2^{A}$ si indica l'insieme delle parti di $A$, ovvero gli elementi di $2^{A}$ sono tutti e soli i sottoinsiemi di $A$.

$$
Y^{X} = \{ f \in 2^{X \times Y} | \forall x \in X, \exists!y\in Y : (x, y) \in f \}
$$
### Def Iniettività
Sia $f: X \rightarrow Y$ una funzione.
Dicimao che $f$ è iniettiva se $\forall x_{1},x_{2}\in X : x_{1} \neq x_{2}\implies f(x_{1}) \neq f(x_{2})$, ovvero se le sue fibre sono vuote o singoletti.
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
Diciamoc che $f$ è invertibile se $\exists g:Y \rightarrow X  : g(f(x)) = x,  \forall x \in X$, ovvero $g \circ f = id_{X}$ e $f \circ g = id_{Y}$. Si dice che $g$ è un'inversa di $f$.

### Proposizione (1.21)
Sia $f:X \rightarrow Y$ una funzione bigettiva. Allora $f$ è invertibile ed esiste una sola inversa di $f$, detta $f^{-1}:Y\rightarrow X$.

#### Dim
Osservo che $\forall y \in Y, f^{-1}(y) = \{ x_{y} \}$ per qualche unico $x_{y} \in X$ (ovvero $f(x_{y}) = y$). Definiamo $g:Y\rightarrow X$ ponendo $g(y) := x_{y}, \forall y \in Y$.
Vale:
- $(f \circ g)(y) = f(g(y)) = f(x_{y}) = y, \forall y \in Y$, ovvero $(f \circ g) = id_{Y}$
- $\forall x \in X, (f \circ g)(f(x)) = f(x) = (f \circ g \circ f)(x) =f((g \circ f)(x)) \implies (g \circ f)(x) = x$

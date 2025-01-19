## Funzioni
Dati due insiemi $A, B$ non vuoti, una funzione consiste di 3 elementi:
$$
f : A \rightarrow B
$$
- insieme di partenza
- insieme di arrivo
- legge che associa *ad ogni* elemento di $A$ *un unico* elemento di $B$, che si denota con $f(a) \in B$ con $a \in A$ 

##### Esempio:
$f(x) = x^{2}$ non è una funzione, bisogna specificare l'insieme di partenza e l'insieme di arrivo.

![[funzione.png]]

### Composizione di funzione
Dati 3 insiemi non vuoti $A, B, C$ e due funzioni $f: A \rightarrow B$ e $g: B \rightarrow C$.
$$
\forall a \in A \mapsto f(a) \in B \mapsto g(f(a)) \in C
$$
$$
g(f(a)) = (g \circ f)(a)
$$
Che è definita nei punti di $B$ dove arriva $f$.

### Grafico di una funzione
$$
\begin{align}
&f: A \rightarrow B
&\mathrm{Gr}(f): \{ (a, b) \in A \times B : b = f(a) \} \subseteq A \times B
\end{align}
$$
### Iniettività, surgettività, bigettività
Def: Sia $f: A \rightarrow B$ una funzione, si dice che:
1. la funzione è iniettiva quando:
$$
\begin{align}
\forall a_{1}, a_{2} \in A \qquad a_{1} \neq a_{2} \implies f(a_{1}) \neq f(a_{2}) \in B \\
\forall a_{1}, a_{2} \in A \qquad a_{1} = a_{2} \impliedby f(a_{1}) = f(a_{2}) \in B
\end{align}
$$
2. La funzione si dice surgettiva quando:
$$
\forall b\in B \qquad \exists a\in A : b = f(a)
$$
3. la funzione si dice bigettiva quando è sia iniettiva che surgettiva.

![[esempio_funzioni.png|700]]

Quando una funzione $f$ è bigettiva è possibile definire la sua funzione inversa:
$$
g : B \rightarrow A 
$$
tale che:
- $\forall a \in A \quad g(f(a)) = a$
- $\forall b \in B \quad f(g(b)) = b$

##### Esempio
$f(x) = x^{2}$

| Partenza       | Arrivo         | Iniettiva | Surgettiva |
| -------------- | -------------- | --------- | ---------- |
| $\mathbb{R}$   | $\mathbb{R}$   | X         | X          |
| $\mathbb{R}$   | $[0, +\infty)$ | X         | V          |
| $[0, +\infty)$ | $\mathbb{R}$   | V         | X          |
| $[0,+\infty)$  | $[0, +\infty)$ | V         | V          |
| $(0, +\infty)$ | $(-\infty, 0)$ | /         | /          |
##### Applicazione:
$$
f(x) = f(y) \implies x = y
$$
solo se $f$ è iniettiva, ad esempio:

1. $7^{2x+3} = 7^{x + 42} \implies 2x + 3 = x + 42$, perché $7^{x}$ è iniettiva.
2. $\log_{7}(2x+3) = \log_{7}(x +42) \implies 2x + 3 = x+42$, perché $\log_{7}x$ è iniettiva.
3. $\cos(2x + 3) = \cos(x + 42) \implies 2x +3 =x + 42$, perché $\cos x$ è iniettiva, ma per fare ciò bisogna restringere l'insieme di partenza a $\left[ 0, \frac{\pi}{2} \right]$

### Immagine e controimmagine
Sia $f: A \rightarrow B$, consideriamo $E \subseteq A$.
$f(E)$ è l'immagine di $E$ in $B$ tramite $f$.
$$
\begin{align}
f(E) &= \{f(a) : a \in E\} \qquad \text{(elenco)} \\ \\
f(E) &= \{b \in B : \exists a \in E \text{ per cui } b = f(a)\} \qquad \text{(proprietà)}
\end{align}
$$
Sia $F \subseteq B$, $f^{-1}(F)$ è la controimmagine di $F$ in $A$ tramite $f$.
$$
f^{-1}(F) = \{a \in A : f(a) \in F\}
$$
### Simmetrie
Sia $f : \mathbb{R} \rightarrow \mathbb{R}$ 
- $f$ si dice pari se $f(x) = f(-x)\qquad \forall x \in \mathbb{R}$
- $f$ si dice dispari se $f(x) = -f(-x) \qquad \forall x \in \mathbb{R}$
- $f$ si dice periodica se $\exists T>0$ per cui $f(x + Tn) = f(x) \qquad \forall x \in \mathbb{R},n \in \mathbb{Z}$

$T$ è detto periodo di $f$, se ne esistono più di 1, il minimo tra esso è detto il periodo (minimo) di $f$.

Graficamente
- $f$ è pari se il suo grafico è simmetrico rispetto all'asse delle ordinate.
- $f$ è dispari se il suo grafico è simmetrico rispetto all'origine del piano.
- $f$ è periodica di periodo $T$ se il grafico di $f : [0, T] \rightarrow \mathbb{R}$  si ripete identico negli intervalli di periodicità.

$f(x) = 0$ è l'unica funzione da $\mathbb{R}$ a $\mathbb{R}$ sia pari che dispari.
$$
f(x) = -f(-x) = f(-x) = -f(x) = 0
$$
### Monotonia
Una funzione $f: \mathbb{R} \rightarrow \mathbb{R}$ si dice:
- debolmente crescente se $y > x \implies f(y) \geq f(x)$.
- strettamente crescente se $y > x \implies f(y) > f(x)$ 
- debolmente decrescente se $y < x \implies f(y) \leq f(x)$.
- strettamente decrescente se $y < x \implies f(y) < f(x)$ 

Se $f$ rispetta una di queste proprietà allora si dice che $f$ è monotona.
La stretta monotonia implica la debole monotonia.

Ogni funzione strettamente monotona è iniettiva.

### Monotonia e disequazioni
$$
\begin{align}
f(\text{mostro}_{1}) &> f(\text{mostro}_{2}) \\
 & \Downarrow \\
\text{mostro}_{1} &> \text{mostro}_{2}
\end{align}
$$
Ciò è vero se la funzione $f$ è strettamente crescente.

$$
\begin{align}
f(\text{mostro}_{1}) &< f(\text{mostro}_{2}) \\
 & \Downarrow \\
\text{mostro}_{1} &<  \text{mostro}_{2}
\end{align}
$$

Ciò è vero se la funzione $f$ è strettamente decrescente.

Siano $f: \mathbb{R} \rightarrow \mathbb{R}$ e $g : \mathbb{R} \rightarrow \mathbb{R}$.
$$
\mathbb{R} \ni x \mapsto g(f(x)) \in \mathbb{R}
$$
- se $f$ e $g$ sono entrambe strettamente crescenti:
$$
x > y \implies g(f(x)) > g(f(y))
$$
- se $f$ e $g$ sono entrambe strettamente decrescenti:
$$
x > y \implies g(f(x)) > g(f(y))
$$
- se $f$ e $g$ sono una strettamente crescente e una strettamente decrescente:
$$
x > y \implies g(f(x)) < g(f(y))
$$
### Fatto
Se due funzioni sono iniettive anche la loro composizione è iniettiva.
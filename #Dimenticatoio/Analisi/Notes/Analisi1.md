## Insieme

Gli insiemi possono essere definiti per elenco o per proprietà:
$$
A = \{1, 2,3\} \quad B = \{x : x^{2} < 2\}
$$
##### Oss:
non conta l'ordine degli elementi o il numero di istanze di un certo elemento.
### Insieme delle parti
Dato un insieme $A$ si dice insieme delle parti di $A$ l'insieme costituito da tutti i sottoinsiemi di $A$. Ad es:
$$
A = \{k, 9\}
$$
$$
\wp(A) = \{ \emptyset, \{ k \}, \{ 9 \}, \{ k, 9 \} \}
$$
In generale: 
$$
\wp(A) = \{ B : B \subseteq A \}
$$
### Cardinalità
$$
|A| = \text{numero degli elementi di A} = k
$$
$$
|\wp(A)| = 2^{k}
$$
### Prodotto cartesiano
Dati due insiemi si definisce il loro prodotto cartesiano $A \times B$ l'insieme delle coppie di elementi ordinate $(a, b)$ in cui $a \in B$ e $b \in B$. Ad es:
$$
A = \{ 1, 2 \} \quad B = \{ a, b \}
$$
$$
A \times B = \{ (1, a), (2, a), (1, b), (2, b) \}
$$
##### Oss:
1. $A \times B \neq B \times A$
2. $|A \times B| = |A||B|$ ad esempio: $|A \times \emptyset| = 0$
### Insiemi numerici
$\mathbb{N} = \{ 0,1,2,3,\dots \}$
$\mathbb{Z} = \{ \dots,-2, -1, 0, 1, 2, \dots \}$
$\mathbb{Q} = \{r : r = \frac{p}{q} \text{ dove }p, q \in \mathbb{Z} \text{ e } q \neq 0\}$
$\mathbb{R} =\text{numeri reali}$
$\mathbb{C} =\text{numeri complessi}$
#### Proprietà algebriche dei reali
Sono legate a due operazioni fondamentali: somma e prodotto.
- Somma
	1. $a + b = b + a \quad \forall a,b \in \mathbb{R}$ 
	2. $a+(b+c)=(a+b)+c \quad \forall a,b,c \in \mathbb{R}$
	3. $\exists! 0 \in \mathbb{R} : 0 + b = b \quad \forall b \in \mathbb{R}$
	4. $\forall a \in \mathbb{R} \quad \exists!b \in \mathbb{R} : a+b=0$
- Prodotto
	1. $a \cdot b = b \cdot a \quad \forall a,b \in \mathbb{R}$ 
	2. $a\cdot(b\cdot c)=(a\cdot b)\cdot c \quad \forall a,b,c \in \mathbb{R}$
	3. $\exists! 1 \in \mathbb{R} : 1 \cdot b = b \quad \forall b \in \mathbb{R}$
	4. $\forall a \in \mathbb{R}\setminus \{ 0 \} \quad \exists!b \in \mathbb{R} : a \cdot b = 1$
$$
a \cdot (b + c) = a \cdot b + a \cdot c \quad \forall a, b, c \in \mathbb{R}
$$
#### Proprietà di ordinamento
Dati $x \in R, y \in \mathbb{R}$ allora $x \leq y \vee x \geq y \quad \forall x, y \in \mathbb{R}$
1. $x\leq x \quad \forall x \in \mathbb{R}$
2. $x \leq y \wedge y\leq z \implies x \leq z \quad \forall x, y ,z \in \mathbb{R}$ 
3. $y\leq x \wedge x\leq y \leftrightarrow x=y \quad \forall x, y \in \mathbb{R}$
#### Ordinamento e operazioni
1. $x \leq y \implies x+z \leq y+z \quad \forall z \in \mathbb{R}$
2. $x\leq y\implies \begin{cases} x\cdot z\leq y\cdot z &\text{se } z \geq 0\\ x\cdot z\geq y\cdot z &\text{se } z \leq 0 \end{cases}\quad\forall z\in \mathbb{R}$

## Assioma di continuità
Afferma che tra due numeri reali c'è sempre un numero infinito di numeri reali e dimostra che i reali sono più dei razionali. 

Siano $A, B \subseteq \mathbb{R} \text{ e } A, B \neq \emptyset$.
Supponiamo che $A$ "stia tutto a sinistra di $B$", ossia $a \leq b \quad \forall a \in A, \forall b \in B$.
Allora $\exists c \in \mathbb{R} : a \leq c \quad \forall a \in A$  e  $c \leq b \quad \forall b \in B$.

Se $A \cap B \neq \emptyset$, essa consisterà di un solo elemento $c$, che sarà uguale al minimo di $B$ e il massimo di $A$.

Questo assioma vale per i reali e non per i razionali:
$$
\begin{array}{l}
A = \{ x \in \mathbb{Q} : x^{2} \leq 2, x \geq 0\} \\
B = \{ x \in \mathbb{Q} : x^{2} \geq 2, x \geq 0 \} \\
c = \sqrt{2} \notin \mathbb{Q}
\end{array}
$$
Si deduce che esistono più $\mathbb{R}$ che $\mathbb{Q}$.

Ogni punto della retta è identificabile con un numero reale, tra due reali ce n'è sempre un altro.

## Massimo
Sia $A \subseteq \mathbb{R}$ e $A \neq \emptyset$, di dice che $M \in \mathbb{R}$ è il massimo di $A$ e si scrive $M=max(A)$ se
$$
\begin{align}
&M \geq a \quad \forall a \in A \\
&M \in A 
\end{align}
$$

## Minimo
Sia $A \subseteq \mathbb{R}$ e $A \neq \emptyset$, di dice che $m \in \mathbb{R}$ è il minimo di $A$ e si scrive $m=min(A)$ se
$$
\begin{align}
&m \leq a \quad \forall a \in A \\
&m \in A 
\end{align}
$$
##### Oss:
1. max e min non esistono necessariamente, ad es: $\mathbb{N}, [0,2), (0,1)$
2. se esistono allora sono unici

## Maggiorante
Sia $A \subseteq \mathbb{R}$ e $A \neq \emptyset$, si dice che $b \in \mathbb{R}$ è maggiorante dell'insieme $A$ se $b \geq a \quad \forall a \in A$

## Minorante
Sia $A \subseteq \mathbb{R}$ e $A \neq \emptyset$, si dice che $b \in \mathbb{R}$ è maggiorante dell'insieme $A$ se $b \leq a \quad \forall a \in A$

##### Oss:
1. come minimo e massimo, non esistono sempre, ad es. $\mathbb{N}$.
2. quando esistono sono infiniti.

Esempio:
$$
A = [0, 1)
$$
ha come maggioranti tutti i reali $b \geq 1$ e come minoranti tutti i reali $b\leq0$.

## Insiemi limitati
Un'insieme $A \subseteq \mathbb{R}$ e $A \neq \emptyset$ si dice:
- limitato superiormente se $A$ ha maggioranti
- limitato inferiormente se $A$ ha minoranti
- limitato se $A$ è limitato superiormente e inferiormente

Se $A$ è limitato, $\exists b \in \mathbb{R} : |a| \leq b \quad \forall a \in A$, $b$ funge da minorante e maggiorante in base al suo segno (non è detto che sia il minorante o maggiorante più vicino).

## Estremi
Sia $A \subseteq \mathbb{R}$ e $A \neq \emptyset$, allora per definizione:
- se $A$ non è limitato superiormente, il suo limite superiore $sup(A) = +\infty$.
- se $A$ non è limitato inferiormente, il suo limite inferiore $inf(A) = -\infty$.
- se $A$ è limitato superiormente, allora si definisce $sup(A)$ come il minimo dei maggioranti, che sono un sottoinsieme dei reali.
- se $A$ è limitato inferiormente, allora si definisce $inf(A)$ come il massimo dei minoranti, che sono un sottoinsieme dei reali.

### Teorema
se $A \subseteq \mathbb{R}$ e $A \neq \emptyset$, allora $sup(A)$ e $inf(A)$ esistono sempre.
#### Dim (per l'estremo superiore)
Supponiamo che $A$ sia limitato superiormente, se così non fosse allora $supA =+\infty$ per definizione.
Consideriamo l'insieme $B$ dei suoi maggioranti.
Per definizione $a \leq b \quad \forall a \in A, \forall b \in B$.
Per l'assioma di continuità esiste almeno un $c \in \mathbb{R}$ tale che:
$$
\begin{align}
 & a\leq c \quad \forall a\in A \Longleftrightarrow c \text{ è maggiorante di A } \Longleftrightarrow c \in B \\
 & c \leq b \quad \forall b \in B \Longleftrightarrow c \text{ è il minimo dell'insieme B }
\end{align}
$$
Essendo $c$ il minimo dell'insieme dei maggioranti di $A$, si ha che per definizione $sup(A) = c$.

Dunque:
1. $sup$ e $inf$ esistono sempre.
2. $sup$ e $inf$ sono unici.
3. a) se esiste $max(A) = M \implies M \equiv sup(A)$ 
3. b) se esiste $min(A) = m \implies m \equiv inf(A)$ 
4. $sup(A)$ e $inf(A)$ non è necessariamente un elemento di $A$, se lo è allora valgono le 3.

|                                          | $sup$        | $inf$         | $max$ | $min$ |
| ---------------------------------------- | ------------ | ------------- | ----- | ----- |
| $\mathbb{Z}$                             | $+\infty$    | $-\infty$     | N.E.  | N.E.  |
| $\mathbb{Q}$                             | $+\infty$    | $-\infty$     | N.E.  | N.E.  |
| $\mathbb{N}$                             | $+\infty$    | 0             | N.E.  | 0     |
| $\{ x \in \mathbb{R} : 0 < x^{2} < 3 \}$ | $\sqrt{ 3 }$ | $-\sqrt{ 3 }$ | N.E.  | N.E.  |
## Caratterizzazione di $sup$ e $inf$
con $A \subseteq \mathbb{R}$ e $A \neq \emptyset$ 
- $sup(A) =+\infty \Longleftrightarrow \forall M \in \mathbb{R} \quad \exists a\in A : a \geq M$
- $inf(A) =-\infty \Longleftrightarrow \forall m \in \mathbb{R} \quad \exists a\in A : a \leq m$

nel caso dell'insieme vuoto, per convenzione:
- $sup(\emptyset) =-\infty$
- $inf(\emptyset) =+\infty$
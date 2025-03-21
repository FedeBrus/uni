Concetti primitivi: elemento e insieme.
Teoria degli insiemi, usando il fondamento di appartenenza ($\in$).
Scriveremo $x \in A$, $x$ elemento dell'insieme A, uguale a $A \ni x$, $A$ contiene $x$.
Scriveremo $x \notin A$, $x$ non è elemento dell'insieme $A$.

#### Oss
Un insieme può essere anche un elemento. Un elemento non può essere un insieme.
#### Esempio:
$$
\begin{align}
X &= \{ 1,2,3 \} \\
2^{X} = \mathcal{P}(X) &= \{ \emptyset, \{ 1 \}, \{ 2 \}, \{ 3 \}, \{ 1,2 \}, \{ 2,3 \}, \{ 1,3 \}, \{ 1,2,3 \} \}
\end{align}
$$

### Paradosso di Russell
Consideriamo la seguente "stringa" nel linguaggio della teoria degli insiemi.
$$
A =\{ x | x \notin x \}
$$
Supponiamo che $A$ sia un'insieme.
$A$ è l'insieme di tutti gli insiemi $x$ tali che non contengono se stessi.

Domanda: $A$ è veramente un'insieme? 
Dobbiamo verificare che dato ogni elemento della teoria, tale elemento appartiene o meno ad $A$.
Poiché abbiamo assunto che $A$ sia un insieme, allora è anche un elemento della teoria. 
Dunque $A \in A$ oppure $A \not\in A$.
Se è vera la prima, non soddisfa la condizione che definisce $A$.
Se è vera la seconda, soddisfa la condizione che definisce $A$.
Sono assurde entrambe.
Quindi la stringa di partenza non può descrivere un'insieme.

### Assioma (1.1) estensionalità
Dati due insiemi $A, B$, $A = B \Longleftrightarrow (\forall x: x \in A \Longleftrightarrow x \in B)$
### Def (1.2) vuoto
$\emptyset$ l'insieme vuoto è unico e non contiene elementi, $\forall x : x \not\in \emptyset$
### Def (1.5) sottoinsieme
Sia $X, Y$ due insiemi.
Scriviamo $X \subset Y$ o $Y \supset X$ se $\forall x, x \in X \implies x \in Y$, in questo caso $X$ si dice sottoinsieme di $Y$.
##### Esercizio
$X \subset X$ è vera? 
>Sì, è vera.

Se è vero che $X \subset Y$ e $X \neq Y$, allora si scrive $X \subsetneq Y$
In questo caso $X$ si dice essere un sottoinsieme proprio di $Y$.

### Assioma 1.6 (Separazione)
Sia $X$ un insieme e per ogni $x \in X$ sia $P(x)$ una affermazione che abbia senso sull'elemento $x$.
#### Esempio:
$X = \mathbb{N}$
$\forall x \in \mathbb{N}, P(x) =\text{"divisibile per 2"}$

Allora $\{ x | x \in X, P(x) \text{ è vera} \} = \{ x \in X | P(x) \}$ è un vero insieme.

Tornando all'esempio:
$$
\{ n \in \mathbb{N} | P(x) \} = \{ 0, 2, 4, 6, \dots \}
$$
#### Oss
L'insieme che ha per elementi tutti gli insiemi non esiste.

### Dimostrazione
Supponiamo che esista un insieme $U$ i cui elementi sono tutti gli insiemi. Prendiamo un suo elemento $x$ con $P(x) = \text{"}x \not\in x\text{"}$.
Per l'assioma di separazione si avrebbe che $\{ x \in U | x \not\in x \}$ è un'insieme e ci ritroviamo con il paradosso di Russell.

## Operazioni tra insiemi
Siano $X, Y$ insiemi.
$X \cup Y := \{ x | x \in X \text{ o } x \in Y \}$
$X \cap Y := \{ x | x \in X \text{ e } x \in Y \}$
$X\setminus Y := \{ x | x \in X, x \not\in Y \}$
Se $X \subset Y$, allora $Y \setminus X$ si dice complementare di $X$ in $Y$ e si denota $\mathcal{C}_{Y}(X)$.
$X \times Y := \{ (x,y) | x \in X, y \in Y \}$

## Famiglie di insiemi
Sia $I$ un insieme non vuoto chiamato insieme degli indici, ai cui elementi sono associati insiemi, in modo da creare una famiglia di insiemi.
$\{ A_{i} \}_{i \in I}$ è la famiglia di insiemi indicizzata da $I$.

$$\bigcup_{i \in I} A_{i} =\{ x | \exists i : x \in A_{i} \}$$
$$\bigcap_{i \in I} A_{i} =\{ x | \forall i : x \in A_{i} \}$$

## Relazioni e funzioni
Siano $X, Y$ due insiemi si dice relazione tra $X$ e $Y$ un sottoinsieme $\mathcal{R} \subset X \times Y$.
Se dati $x \in X$, $y \in Y$, la coppia $(x, y) \in \mathcal{R}$, si dice che $x \mathcal{R} y$ e $x$ è in $\mathcal{R}$ relazione con $y$. Se $(x, y) \not\in \mathcal{R}$, si che che $x \cancel{ \mathcal{R} } y$.

### Def (1.10) funzione come relazione
Siano $X, Y$ due insiemi e $f \subset X \times Y$ una relazione tra $X$ e $Y$. Si dice funzione da $X$ a $Y$ e si indica $f : X \rightarrow Y$ se $\forall x \in X, \exists! y \in Y : (x, y) \in f$.
Una funzione $f: X \rightarrow Y$ è una terna $(X, Y, f)$, dove $f \subset (X \times Y)$ e soddisfa la proprietà.

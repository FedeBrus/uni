Supponiamo di avere una serie finita 
$$
(A_{i})^{n}_{i=1}, \qquad\{ A\}_{i=1}^{n} , \qquad A_{1},A_{2},\dots,A_{n} \subseteq \Omega
$$
$$
\begin{align}
\left(\bigcup_{i = 1}^{n} A_{i} \right)^{c} &= \bigcap_{i = 1}^{n} A_{i}^{c} \\
\left(\bigcap_{i = 1}^{n} A_{i} \right)^{c} &= \bigcup_{i = 1}^{n} A_{i}^{c}
\end{align}
$$
Supponiamo di avere una successione numerabile
$$
(A_{i})^{+\infty}_{i = 1}, \qquad  \{ A_{i} \}^{+\infty}_{i = 1}, \qquad A_{1},A_{2},A_{3},\dots \subseteq \Omega
$$
$$
\begin{align}
\left(\bigcup_{i = 1}^{+\infty} A_{i} \right)^{c} &= \bigcap_{i = 1}^{+\infty} A_{i}^{c} \\
\left(\bigcap_{i = 1}^{+\infty} A_{i} \right)^{c} &= \bigcup_{i = 1}^{+\infty} A_{i}^{c}
\end{align}
$$
### Def Insieme delle parti (Insieme potenza)
L'insieme delle parti è la collezione di tutti i sottoinsiemi di $\Omega$. Indichiamo con $\# \Omega$ la cardinalità di $\Omega$.
Se $\Omega$ è finito allora $\# \mathcal{P}(\Omega)=2^{\# \Omega}$.

### Def Tribù ($\sigma$-algebra)
Consideriamo uno spazio campionario $\Omega$.
Una classe $\mathcal{A}$ di parti di $\Omega$ si dice una tribù se:
1. $\Omega \in \mathcal{A}$
2. $A \in \mathcal{A} \Longleftrightarrow  A^{c}\in \mathcal{A}$
3. Se $\{ A_{i} \}_{i=1}^{+\infty}$ tale che $A_{i}\in \mathcal{A}, \forall i\in \mathbb{N}$, allora $\bigcup_{i = 1}^{+\infty} A_{i}\in \mathcal{A}$.

### Def Algebra
La definizione è uguale a quella di tribù, tranne che la (3.) è sostituita dalla seguente:
Se $\{A_{i}\}^{n}_{i = 1}$ tale che $A_{i} \in \mathcal{A}, i \in \mathbb{N}$, allora $\bigcup_{i = 1}^{n} A_{i} \in \mathcal{A}$.

Una sigma algebra è un'algebra.

### Def Evento
Dato uno spazio campionario $\Omega$ e una sua tribù $\mathcal{A}$ chiameremo evento un qualsiasi elemento di $\mathcal{A}$.

#### Esempio
$\Omega = \{ 1,2 \}$
$\mathcal{A_{0}} = \{ \emptyset, \Omega \}$ è la più piccola tribù che possiamo costruire (osservare come sono verificate le 3 proprietà).
$\mathcal{A_{\star}} = \{ \emptyset, \{ 1 \}, \Omega \}$ invece non è una tribù, perché considerando $\{ 1 \}$, la seconda proprietà non è soddisfatta.
$\mathcal{A}_{1} = \{ \emptyset, \{ 1 \}, \{ 2 \}, \Omega \}$ è la più grande tribù che possiamo costruire (per un $\Omega$ di due elementi).

#### Esercizio 
Data una tribù di $\mathcal{A}$ di $\Omega$ allora $\emptyset \in \mathcal{A}$.

Se $\mathcal{A}$ è una tribù allora sappiamo che $\Omega \in \mathcal{A}$. Per la seconda proprietà abbiamo che $\Omega^{c} = \emptyset \in \mathcal{A}$.

#### Esercizio
Mostrare che dato un insieme finito $\Omega$ e un'algebra $\mathcal{A}$ di $\Omega$, allora $\{ A_{i} \}^{n}_{i = 1}$ tali che $A_{i}\in \mathcal{A}, \forall i = 1,\dots,n$, avrò che $\bigcap_{i = 1}^{n} A_{i} \in \mathcal{A}$.

$A_{i} \in A$ allora $A_{i}^{c} \in A$. Quindi $\bigcup_{i = 1}^{n}A_{i}^{c} \in \mathcal{A}$ per le proprietà dell'algebra. Ma per de Morgan può essere riscritto come $\left(  \bigcap_{i = 1}^{n} A_{i} \right)^{c}  \in \mathcal{A}$ e quindi $\bigcap_{i = 1}^{n} A_{i} \in \mathcal{A}$.

### Teorema
Date due algebre $\mathcal{A}_{1}, \mathcal{A}_{2}$ di $\Omega$, allora $\mathcal{A} = \mathcal{A}_{1} \cap \mathcal{A}_{2}$ è un'algebra di $\Omega$.

#### Dimostrazione
Notiamo che $\Omega \in \mathcal{A_{1}}$ e $\Omega \in \mathcal{A}_{2}$, ma allora $\Omega \in \mathcal{A}_{1}\cap \mathcal{A}_{2} = \mathcal{A}$. Quindi $\mathcal{A}$ soddisfa la prima proprietà.
Consideriamo $A \in \mathcal{A}$, ovvero $A \in \mathcal{A}_{1}$, $A \in \mathcal{A_{2}}$. Allora $A^{c}\in \mathcal{A}_{1}, A^{c}\in \mathcal{A}_{2}$ e quindi $A^{c} \in \mathcal{A}$. Quindi $\mathcal{A}$ soddisfa la seconda proprietà
Consideriamo $A, B \in \mathcal{A}$, allora $A, B \in \mathcal{A}_{1}$ e $A, B \in \mathcal{A}_{2}$, quindi $A \cup B \in \mathcal{A}_{1}$ e $A \cup B \in \mathcal{A}_{2}$, per cui $A \cup B \in \mathcal{A}$. Quindi $\mathcal{A}$ soddisfa al terza proprietà.

La stesso teorema vale per le tribù.
#### Esempio
$\Omega = \{ 1, 2, 3 \}$
$\mathcal{A}_{1} = \{ \emptyset, \Omega, \{ 1 \}, \{ 2, 3 \} \}$
$\mathcal{A}_{2} = \{ \emptyset, \Omega, \{ 2 \}, \{ 1, 3 \} \}$
$\mathcal{A}_{1} \cap \mathcal{A}_{2} = \{ \emptyset, \Omega \}$, questa è un'algebra.
$\mathcal{A}_{1} \cup \mathcal{A}_{2} = \{ \emptyset, \Omega, \{ 1 \}, \{ 2 \}, \{ 2, 3 \}, \{ 1, 3 \} \}$, questa non è un algebra.
#### Esempio
Consideriamo un $\Omega$ e consideriamo $A_{\star} = \{ A \subseteq \Omega : A \text{ è un insieme finito} \}$, quest'ultima è un'algebra? No, ad esempio quando $\Omega$ è numerabile.

### Definizione Tribù generata da una famiglia di insiemi
Consideriamo una famiglia $\mathcal{F}$ di sottoinsiemi di $\Omega$. Chiameremo $\mathcal{A}_{\mathcal{F}}$ la tribù generata da $\mathcal{F}$.
$$
\mathcal{A}_{\mathcal{F}} = \bigcap \{ \mathcal{A} : \mathcal{A} \text{ è una tribù}, \mathcal{F} \subseteq \mathcal{A} \}
$$
#### Esempio
$\Omega = \{ 1,2,3 \}$
$\mathcal{F} = \{ \{ 1 \}, \{ 1,2 \} \}$
$\mathcal{A}_{\mathcal{F}} = \{ \emptyset, \Omega, \{ 1 \}, \{ 2,3 \}, \{ 1,2 \}, \{ 3 \}, \{ 1, 3 \}, \{ 2 \} \}$
### Definizione Spazio probabilizzabile
Dato uno spazio campionario $\Omega$ e una tribù $\mathcal{A}$ di $\Omega$, chiameremo la coppia $(\Omega, \mathcal{A})$ uno spazio probabilizzabile.
#### Esempio
$\Omega = \{ 0, 1 \}$, le due tribù possibili sono $\mathcal{A}_{1} = \{ \emptyset, \{ 0 \}, \{ 1 \}, \Omega \}$ e $\mathcal{A}_{2} = \{ \emptyset, \Omega \}$. I due spazi probabilizzabili sono $(\Omega, \mathcal{A}_{1}), (\Omega, \mathcal{A}_{2})$.
#### Esempio
$\Omega = \{ 1,2,3,4,5,6 \}$ (lancio di un dado).
$\mathcal{A}_{1} = \mathcal{P}(\Omega)$.
$\mathcal{A}_{2} = \{ \emptyset, \Omega \}$
$\mathcal{A}_{3}= \{ \emptyset, \Omega , \{ 1 \}, \{ 2,3,4,5,6 \} \}$

Gli spazi sono $(\Omega, \mathcal{A}_{1})$, $(\mathcal{\Omega, \mathcal{A}_{2}})$ e $(\Omega, \mathcal{A}_{3})$.
### Definizione Probabilità assiomatica di Kolmogorov
Dato uno spazio probabilizzabile $(\Omega, \mathcal{A})$, una funzione di probabilità $Pr$ è una applicazione di questo tipo:
$$
Pr : \mathcal{A} \rightarrow \mathbb{R}^{+}
$$
e deve avere le seguenti proprietà:
1. (Non negatività) $A \in \mathcal{A} \implies Pr(A) \geq 0$.
2. (Normalizzazione) $Pr(\Omega) = 1$.
3. ($\sigma$-additività) se $\{ A_{i} \}_{i = 1}^{+\infty}$ tali che $A_{i} \in \mathcal{A}, \forall i \in \mathbb{N}$ e a due a due incompatibili ($A_{i} \cap A_{j} = \emptyset, \forall i,j : i \neq j$), allora $Pr\left( \bigcup_{i = 1}^{+\infty} A_{i} \right) = \sum_{i=1}^{+\infty} Pr(A_{i})$.

Per le algebre c'è un analogo detta additività: se $\{ A_{i} \}_{i = 1}^{n}$ tali che $A_{i} \in \mathcal{A}, \forall i = 1,\dots,n$ e a due a due incompatibili ($A_{i} \cap A_{j} = \emptyset, \forall i,j: i \neq j$), allora $Pr\left( \bigcup_{i = 1}^{n} A_{i} \right) = \sum_{i=1}^{n}Pr(A_{i})$.

Noi utilizzeremo sempre tribù.
### Definizione Spazio probabilizzato
Dato $\Omega$, una tribù $\mathcal{A}$ di $\Omega$ e una probabilità $Pr$ definita sullo spazio probabilizzabile $(\Omega, \mathcal{A})$, chiamiamo la terna $(\Omega, \mathcal{A}, Pr)$ uno spazio probabilizzato.
#### Esempio
Consideriamo il lancio di un dado:
$\Omega = \{ 1,2,3,4,5,6 \}$
$\mathcal{A}=\mathcal{P}(\Omega)$ e dunque $\# \mathcal{A} = 2^{6}$.
$(\Omega, \mathcal{A})$ spazio probabilizzabile.
Assumiamo che $Pr(\{ 1 \}) = Pr(\{ 2 \}) = \dots = Pr(\{ 6 \}) = p$. 
$1 = Pr(\Omega) = Pr(\{ 1,2,3,4,5,6 \}) = Pr(\{ 1 \} \cup \{ 2 \} \cup \{ 3 \} \cup \{ 4 \} \cup \{ 5 \} \cup \{ 6 \})$
Ma questi singoletti sono tra loro disgiunti e sono tutti all'interno della nostra tribù.
$Pr(\{ 1 \} \cup \{ 2 \} \cup \{ 3 \} \cup \{ 4 \} \cup \{ 5 \} \cup \{ 6 \}))=\sum_{i=1}^{6} Pr(\{ i \}) = \sum_{i=1}^{6}p = 6p$.
Dunque $6p = 1 \Longleftrightarrow p = \frac{1}{6}$.
$Pr(\{ 1,2 \}) = Pr(\{ 1 \} \cup \{ 2 \}) = Pr(\{ 1 \}) + Pr(\{ 2 \}) = \frac{1}{6}+\frac{1}{6}= \frac{1}{3}$.
Dato $A \in \mathcal{A}$ allora $Pr(A) = \frac{\#A}{\#\Omega} = \frac{\#A}{6}$.
Lo spazio probabilizzato è $(\Omega, \mathcal{A}, Pr)$.
#### Esempio
$\Omega = \{ 1,2,3,4,5,6 \}$ e $\mathcal{A} = \{ \emptyset, \{ 1 \}, \{ 2,3,4,5,6 \}, \Omega \}$.
Assumiamo che $Pr(\{ 1 \}) = p \in [0,1]$.
- $Pr(\emptyset) = 0$.
- $Pr(\{ 1 \}) = p$
- $Pr(\{ 2,3,4,5,6 \}) = 1-p$
- $Pr(\Omega)=1$
In questo caso $Pr(\{ 2 \})$ non ha senso, perché in questo spazio non è un evento.
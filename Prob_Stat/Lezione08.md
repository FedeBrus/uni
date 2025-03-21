#### Esempio
5% delle persone ha la pressione alta.
75% delle persone con pressione alta beve alcolici.
50% delle persone con pressione normale beve alcolici.

Qual è la probabilità che una persona che beve alcolici abbia la pressione alta.
$$
\begin{align}
A &= \{ \text{pressione alta} \} \\
B &= \{ \text{beve alcolici} \} \\
\Omega &= \{ A \cap B, A^{c} \cap B, A \cap B^{c}, A^{c} \cap B^{c} \} \\
\mathcal{A}  &= \mathcal{P}(\Omega)
\end{align}
$$
Inoltre:
$$
\begin{align}
P(A) &= 0.05 \\
P(B|A)  & = 0.75 \\
P(B|A^{c}) & = 0.5
\end{align}
$$
Inoltre:
$$
\begin{align}
P(A^{c}) = 1 - P(A) = 0.95
\end{align}
$$
Dobbiamo calcolare $P(A|B)$.
$$ 
P(A|B) = \frac{P(B | A)P(A)}{P(B|A)P(A)+ P(B|A^{c})P(A^{c})} = 0.0732
$$
#### Esempio
La scatola $A$ contiene 2 palline bianche e 2 nere.
La scatola $B$ contiene 3 palline bianche e 2 nere.

Si trasferisce una pallina da $A$ a $B$. Poi si estrae da $B$ una pallina che risulta essere bianca.
Qual è la probabilità che sia bianca la pallina che è stata trasferita.

$$
\begin{align}
b_{A} &= \{ \text{bianca da A} \} \\
b_{B} &= \{ bianca da B \} \\
n_{A} &= \{ nera da A \} \\
n_{B} &= \{ nera da B \}
\end{align}
$$
Ciò che si deve calcolare è $P(b_{A}|b_{B})$.
$$
P(b_{A}|b_{B}) = \frac{P(b_{B}|b_{A})P(b_{A})}{P(b_{B}|b_{A})P(b_{A})+P(b_{B}|n_{A})P(n_{A})} = \frac{\frac{2}{3} \cdot \frac{1}{2}}{\frac{2}{3} \cdot \frac{1}{2}+ \frac{1}{2} \cdot \frac{1}{2}} =\frac{4}{7}
$$
#### Esempio
Una scatola contiene $n$ palline nere e $b$ palline bianche.
Si estrae una pallina dalla scatola e la si reinserisce. Inoltre si inseriscono 2 palline del colore estratto e 3 del colore non estratto.
Calcolare la probabilità che in 4 estrazioni successive si ottenga la stringa ordinata $B_{1},N_{2},N_{3},B_{4}$.

$$
\begin{align}
P(B_{1} \cap N_{2} \cap N_{3} \cap B_{4}) &= P(B_{4} | B_{1} \cap N_{2} \cap N_{3})P(B_{1} \cap N_{2} \cap N_{3})  \\
 & = P(B_{4}|B_{1} \cap N_{2} \cap N_{3})P(N_{3} | B_{1} \cap N_{2}) P(B_{1} \cap N_{2}) \\
 & = P(B_{4}|B_{1} \cap N_{2} \cap N_{3})P(N_{3} | B_{1} \cap N_{2}) P(N_{2}|B_{1}) P(B_{1})
\end{align}
$$
Dunque:
$$
\begin{align}
P(B_{1}) &= \frac{b}{b+n} \\
P(N_{2}|B_{1}) &= \frac{n+3}{n+b+5} \\
P(N_{3}|B_{1} \cap N_{2}) &= \frac{n+5}{n+b+10} \\
P(B_{4}|B_{1} \cap N_{2} \cap N_{3}) &= \frac{b+8}{n+b+15} 
\end{align}
$$
#### Esempio
Una scatola contiene 5 palline bianche e 6 nere. Si estraggono due palline in blocco, se ne registra il colore, e se ne inseriscono 2 palline dello stesso colore di quelle estratte.
$$
\begin{align}
A = \{ \text{le due palline estratte la seconda volte sono bianche} \} \\
\end{align}
$$
Gli elenchi sono del tipo $[CC]_{i}$ dove $C$ è il colore e $i$ il numero dell'estrazione, senza tener conto dell'ordine.
$$
\begin{align}
P([BB]_{2}) &= P([BB]_{2} \cap \Omega) \\
 & = P([BB]_{2} |[BB]_{1}) P([BB]_{1})+ P([BB]_{2} | [NN]_{1})P([NN]_{1}) + P([BB]_{2}|[BN]_{1})P([BN]_{1}) \\
 & = \frac{27}{243}
\end{align}
$$
Calcoliamo gli addendi:
$$
\begin{align}
P([BB]_{2}|[BB]_{1})P([BB]_{2}) &= \frac{\binom{7}{2}}{\binom{13}{2}} \cdot \frac{\binom{5}{2}}{\binom{11}{2}} \\
P([BB]_{2}|[BN]_{1})P([BN]_{2}) &= \frac{\binom{6}{2}}{\binom{13}{2}} \cdot \frac{\binom{5}{1} \binom{6}{1}}{\binom{11}{2}} \\
P([BB]_{2}|[NN]_{1})P([NN]_{2}) &= \frac{\binom{5}{2}}{\binom{13}{2}} \cdot \frac{\binom{6}{2}}{\binom{11}{2}} \\
\end{align}
$$
#### Esempio
Indichiamo con $A_{i}, B_{i}, C_{i}$, gli eventi "scegli la porta A, B, C all'i-esima volta".
$$
\begin{align}
P(A_{1}) &= \frac{3}{6} \\
P(B_{1})  &= \frac{1}{6} \\
P(C_{1}) &= \frac{2}{6}
\end{align}
$$
$$
\begin{align}
P(B_{2}|A_{1}) = P(C_{2} | A_{1}) = \frac{1}{2} \\
P(A_{2}|B_{1}) =  P(C_{2} | B_{1}) = \frac{1}{2}
\end{align}
$$
La probabilità di impiegarci 3 giorni è: $B_{1} \cap C_{2}$.
La probabilità di impiegarci 5 giorni è: $(A_{1} \cap B_{2}) \cup (B_{1} \cap A_{1})$
Dunque la probabilità che esca in 3 o 5 giorni è: $P((B_{1} \cap C_{2})+ (A_{1}\cap B_{2})+ (B_{1} \cap A_{2}))$
$$
\begin{align}
P((B_{1} \cap C_{2})+ (A_{1}\cap B_{2})+ (B_{1} \cap A_{2}))  &= P(C_{2}|B_{1})P(B_{1}) + P(B_{2}|A_{1})P(A_{1}) + P(A_{2}|B_{1})P(B_{1}) \\
 & = \frac{1}{2} \cdot \frac{1}{6} + \frac{1}{2} \cdot \frac{1}{2} + \frac{1}{2} \cdot \frac{1}{6} = \frac{5}{12}
\end{align}
$$
## Probabilità sui reali
$\Omega = \mathbb{R}$
Non possiamo utilizzare più la tribù data dall'insieme potenza. Dobbiamo ridurre il numero di eventi.

Consideriamo tutti gli intervalli della forma $(a, b]$ con $a \leq b$.
$\mathcal{F}= \{ (a, b]: a \leq b, a \in \mathbb{R}, b \in \mathbb{R} \}$
In questo caso $\mathcal{F}$ non è una tribù.
Consideriamo allora $\mathcal{A}_{\mathcal{F}} = \sigma(\mathcal{F}) = \bigcap \{ \mathcal{A} : \mathcal{A} \text{ tribu' e } \mathcal{F} \subseteq \mathcal{A} \}$.

### Definizione Tribù dei Borealiani
$$
\mathcal{B}(\mathbb{R}) := \mathcal{A}_{\mathcal{F}}
$$
con $\mathcal{F}$ come sopra.
$(\mathbb{R}, \mathcal{B}(\mathbb{R}))$ è uno spazio probabilizzabile.

Esempi:
- $(a, b) \in \mathcal{B}(\mathbb{R})$
- $[a, b] \in \mathcal{B}(\mathbb{R})$
- $[a, b) \in \mathcal{B}(\mathbb{R})$
- $(-\infty, b] \in \mathcal{B}(\mathbb{R})$
- $(a, +\infty) \in \mathcal{B}(\mathbb{R})$
- $\{ a \} \in \mathcal{B}(\mathbb{R})$
- gli insiemi numerabili di $\mathbb{R}$ sono Borealiani

### Definizione Funzione di distribuzione
Una funzione di distribuzione $F$ è:
- non decrescente
- continua a destra ($\forall x_{0} \in \mathbb{R}, \lim_{ x \to x_{0}^{+} } F(x) = F(x_{0})$)
- ammette limite a sinsitra
- $\lim_{ x \to +\infty } F(x) = 1$
- $\lim_{ x \to -\infty } F(x) = 0$
- $P((a, b]) = F(b) - F(a)$

#### Esempio


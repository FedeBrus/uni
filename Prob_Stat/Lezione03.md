#### Esempio
![[Tabellone]]
Assumiamo che lanciando una freccetta is prenda sempre il tabellone.
Assumiamo che la probabilità di colpire una regione sia proporzionale all'area della corona.

$\Omega = \{ 1,2,3 \}$
$\mathcal{F} = \{ \{ 1 \}, \{ 2 \}, \{ 3 \} \}$
Per casa enumerare la seguente tribù.
$\mathcal{A}_{\mathcal{F}} = \{ \Omega, \emptyset, \{ 1 \}, \{ 2 \}, \{ 3 \}, \{ 2, 3 \}, \{ 1,3 \}, \{ 1, 2 \} \}$
$(\Omega, \mathcal{A}_{\mathcal{F}})$ Spazio proibabilizzabile.
$$
\begin{align}
P(\{ 3 \}) &= \frac{\pi\left( \frac{1}{3} r\right)^{2}}{\pi r^{2}}=\frac{1}{9} \\
P(\{ 2 \}) &= \frac{\pi\left( \frac{2}{3} r\right)^{2}-\pi\left( \frac{1}{3}r \right)^{2}}{\pi r^{2}} \\
P(\{ 1 \}) &= \frac{\pi r^{2}-\pi\left( \frac{2}{3}r \right)^{2}}{\pi r^{2}} \\
P(\{ 2, 3 \}) &= P(\{ 2 \} \cup \{ 3 \}) = P(\{ 2 \}) + P(\{ 3 \}) = \frac{4}{9}
\end{align}
$$
## Regole
### Regola 1
Se $A$ è un evento con $P(A)$ allora $P(A^{c})=1-P(A)$.

Ogni spazio campionario può essere descritto così:
$$
\Omega = A \cup A^{c}
$$
Mentra l'insieme vuoto può essere descritto così:
$$
\emptyset = A \cap A^{c}
$$
Per la (3) abbiamo che $P(\Omega) = P(A \cup A^{c}) = P(A) + P(A^{c})$. Dalla (2) sappiamo che $P(\Omega) = 1$, da cui segue che $P(A^{c}) = 1- P(A)$.

Nota:
$\emptyset = \Omega^{c}$, quindi $P(\emptyset) = 1 -P(\Omega) = 1-1 = 0$
### Regola 2
Se $A, B$ sono due eventi, allora $Pr(A \cup B) = Pr(A) + Pr(B)-Pr(A \cap B)$.
Notiamo che:
$$
A \cup B = A \cup (B \cap A^{c})
$$
$$
A \cap (B \cap A^{c}) = \emptyset
$$
$$
B = (A \cap B) \cup (B \cap A^{c})
$$
Per la (3), $P(A \cup B) = P(A \cup (B \cap A^{c})) = P(A)+P(B \cap A^{c})$.
Per la (3), $P(B) = P((A \cap B) \cup (B \cap A^{c})) = P(A \cap B)+ P(A^{c} \cap B)$.

Ora consideriamo $P(A \cup B)-P(B) = P(A) + P(B \cap A^{c}) - P(A \cap B) - P(B \cap A^{c})$.
### Regola 3
Se $A \subseteq B$, allora $P(A) \leq P(B)$.
$$
\begin{align}
B &= (A \cap B) \cup (A^{c} \cap B) \\
 & = A \cup (A^{c} \cap B)
\end{align}
$$
Quindi $P(B) = P(A)+P(A^{c} + B) \geq P(A)$, perché $P(A^{c} \cap B) \geq 0$ per l'assioma (1).

Nota:
La regola 3 implica che qualsiasi evento $A$ abbia $P(A) \leq 1$, perché $A \subseteq \Omega \implies P(A) \leq P(\Omega) \implies P(A)\leq 1$.
Nota:
Se abbiamo due eventi $A, B$ equivalenti allora $B \subseteq A$ e $A \subseteq B$, quindi $P(B) \leq P(A)$ e $P(A) \leq P(B)$, dunque $P(A) = P(B)$.
### Regola 4
Disuguaglianza di Bonferroni.
Se $A_{1},A_{2},A_{3},\dots, A_{n}$ sono $n$ eventi allora
$$
\sum_{i=1}^{n} P(A_{i}) - \sum_{1\leq i < j \leq n} P(A_{i} \cap A_{j}) \leq P\left( \bigcup_{i = 1}^{n} A_{i} \right) \leq \sum_{i=1}^{n} P(A_{i}) \qquad n \geq 1
$$
La seconda disuguaglianza si chiama "proprietà di sub-additività della probabilità".

### Costruzione di una probabilità in uno spazio probabilizzabile dove $\Omega$ è al più numerabile
$$
\Omega = \{ \omega_{1}, \omega_{2}, \dots \} = \{ \omega_{i} \}_{i = 1}^{+\infty}  \qquad \mathcal{A} = \mathcal{P}(\Omega)
$$
Ad ogni $\omega_{i} \in \Omega$ si assegna un peso $p(\{ \omega_{i} \}), i = 1,\dots$
- $p(\{ \omega_{i} \}) \geq 0$
- $\sum_{i=1}^{+\infty}P(\{ \omega_{i} \}) = 1$
La probabilità di un evento $A$ è data da:
$$
P(A) = P \left( \bigcup_{\omega_{i} \in \mathcal{A}}\{ \omega_{i} \} \right) = \sum_{\omega_{i}\in \mathcal{A}} P(\{ \omega_{i} \}) = \sum_{\omega_{i} \in \mathcal{A}} p(\{ \omega_{i} \})
$$
Nota:
$\Omega = \bigcup_{i = 1}^{\infty} \omega_{i}$, $1 = P(\Omega)=P\left( \bigcup_{i = 1}^{\infty} \omega_{i} \right) =\sum_{i=1}^{\infty}P(\{ \omega_{i} \}) = \sum_{i=1}^{\infty}p$, ammesso che ogni evento elementare sia equiprobabile.
Ma $\sum_{i = 1}^{\infty}$ è $0$ se $p = 0$ e $+\infty$ se $p>0$. Ma questo è un problema, quindi se lo spazio è numerabile gli eventi NON POSSONO essere equiprobabili.

#### Esempio
$\Omega = \{ 0,1,2,\dots \}$
$\mathcal{A} = \mathcal{P}(\Omega)$
dove
$P(\{ n \}) = \frac{1}{2^{n + 1}}$

#### Esercizio:
1) $P(\{ n \}) \geq 0, \forall n \in \mathbb{N}_{0}$
2) $\sum_{n=0}^{+\infty}P(\{ n \}) = 1$ (Sugg: serie geometriche)

Calcolare la probabilità che $\{ n \text{ è un numero pari} \}$, considerando lo $0$ pari.

$\{ n \text{ è un numero pari} \} = \{ 0, 2, 4, 6, \dots \} =\{ 0 \} \cup \{ 2 \} \cup \{ 4 \} \cup \{ 6 \} \cup \dots$.
L'evento complementare è $\{ n \text{ è un numero dispari} \}$, scomponibile come sopra.
$$
\begin{align}
P(\{ n\text{ è dispari} \}) &= P(\{ 1 \}) + P(\{ 3 \}) + P(\{ 5 \}) + \dots \\
 & = \frac{1}{2^{2}} + \frac{1}{2^{4}} + \frac{1}{2^{6}} + \dots \\
 & = \sum_{i=1}^{+\infty} \left( \frac{1}{4} \right)^{i}  = \sum_{i=1}^{+\infty} q^{i} = \frac{1}{1 - q} -  1 = \frac{4}{3} - 1 = \frac{1}{3}
\end{align}
$$
Di conseguenza $P(\{ n \text{ è pari} \}) = 1 - P(\{ n \text{ è dispari} \}) = 1-\frac{1}{3} = \frac{2}{3}$.

## Prodotto di spazi campionari e di tribù
Data una famiglia di spazi probabilizzabili $\{ (\Omega_{i}, \mathcal{A}_{i}) \}_{i\in \mathcal{I}}$, allora possiamo costruire uno spazio prodotto probabilizzabile $(\Omega,\mathcal{A})$.
$$
\Omega = \bigtimes_{i \in \mathcal{I}} \Omega_{i} 
$$
Spazio campionario prodotto (ottenuto come prodotto cartesiano).

$$
\mathcal{A} = \bigotimes_{i\in \mathcal{I}} \mathcal{A_{i}} 
$$
Tribù prodotto.
Consideriamo $A_{i} \in \mathcal{A_{i}}$ tale che $A_{i} \neq \Omega_{i}$ al più per un numero finito di indici $i$ e otteniamo $\prod_{i \in \mathcal{I}} A_{i}$, questo è un "rettangolo".
$\mathcal{A}$ è la tribù generata da questi "rettangoli".
$\mathcal{(\Omega, \mathcal{A})}$ è uno spazio probabilizzabile.

Supponiamo ora che ogni spazio sia probabilizzato $\{(\Omega_{i}, \mathcal{A_{i}}, P_{i})\}_{i\in \mathcal{I}}$.
#### Esempio
lancio di due monete.
- Prima moneta: $\Omega_{1} = \{ T, C \}$, $\mathcal{A}_{1} = \{ \emptyset, \{ T \}, \{ C \}, \Omega_{1} \}$, $(\Omega_{1}, \mathcal{A}_{1})$
- Seconda moneta: $\Omega_{2} = \{ T, C \}$, $\mathcal{A}_{2} = \{ \emptyset, \{ T \}, \{ C \}, \Omega_{2} \}$, $(\Omega_{2}, \mathcal{A}_{2})$

$\Omega = \Omega_{1} \times \Omega_{2} = \{ (T, T), (T, C), (C, T), (C, C) \}$
$\mathcal{A} = \mathcal{A}_{1} \otimes \mathcal{A}_{2} = \mathcal{P}(\Omega)$
Siano:
$$
P_{1} = \begin{cases}
\frac{1}{2}  \text{ se } \omega_{1}=T \\
\frac{1}{2}  \text{ se } \omega_{1}=C \\
\end{cases}
$$
dove $\omega_{1}$ è il risultato del primo esperimento.
$$
P_{1} = \begin{cases}
\frac{3}{4}  \text{ se } \omega_{2}=T \\
\frac{2}{4}  \text{ se } \omega_{2}=C \\
\end{cases}
$$
dove $\omega_{2}$ è il risultato del secondo esperimento.
$(\Omega_{2}, \mathcal{A}_{2}, P_{2})$ e $(\Omega_{2}, \mathcal{A}_{2}, P_{2})$.

Se assumiamo che i due esperimenti non si influenzino tra di loro allora $P((\omega_{1}, \omega_{2})) = P_{1}(\omega_{1}) \cdot P_{2}(\omega_{2})$.
### Probabilità Prodotto
$$
P\left( \prod_{i\in \mathcal{I}} A_{i} \right) = \prod_{i\in \mathcal{I}} P_{i}(A_{i})
$$
#### Esercizio 14 pag 31
$\Omega_{1} = \{ S, N \}, i = 1,2,3$
$\mathcal{A}_{i}=\{ \emptyset, S, N, \Omega_{i} \}, i = 1,2,3$

$\Omega = \Omega_{1} \times \Omega_{2} \times \Omega_{3}$
$\mathcal{A} = \bigotimes_{i = 1}^{3} \mathcal{A_{i}} = \mathcal{P}(\Omega)$
$E_{1} = \{ \text{almeno due signore usano questo prodotto} \} = \{ \{ S, S, S \}, \{ S, S, N \}, \{ S, N, S \}, \{ N, S, S \} \}$. Quindi $\#E_{1} = 4$.
$E_{2} = \{ \text{la seconda signora usa il prodotto} \} = \{ \{ S, S, S \}, \{ N, S, S \}, \{ S, S, N \}, \{ N, S, N \} \}$, $\#E_{2} = 4$.
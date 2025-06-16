#### Esercizio
$$
\begin{align}
A &= \{ \text{il controllo } C_{1} \text{ e' superato} \} \\
B &= \{ \text{il controllo } C_{2} \text{ e' superato} \}
\end{align}
$$
$$
P(A) = 0.8, \qquad P(B) = 0.9, \qquad P(A \cap B) = 0.75
$$
Sapendo che una ruota è difettosa, qual è la probabilità che non abbia superato il controllo $C_{1}$.
$$
\begin{align}
\Omega &= \{ A \cap B, A^{c} \cap B, A \cap B^{c}, A^{c} \cap B^{c} \} \\
\mathcal{A} &= \mathcal{P}(\Omega)
\end{align}
$$
$$
\begin{align}
H &= \{ \text{la ruota e' difettosa} \} \\
&= \{ A^{c} \cap B, A \cap B^{c}, A^{c} \cap B^{c} \}  \\
&= (A \cap B)^{c} \\
&= A^{c} \cup B^{c}
\end{align}
$$
$$
P(H) = P((A \cap B)^{c}) = 1 - P(A \cap B) = 0.25
$$
$$
\begin{align}
P(A^{c}) &= P((A^{c} \cap B) \cup (A^{c}\cap B^{c})) \\
P(A^{c}|H)  &= \frac{P(A^{c} \cap H)}{P(H)} = \frac{P(A^{c} \cap (A^{c} \cup B^{c}))}{P(H)} \\
 & = \frac{P(A^{c})}{P(H)} = \frac{1 - P(A)}{P(H)} = \frac{0.2}{0.25} = 0.8
\end{align}
$$
Calcolare la probabilità che non abbia superato solo $C_{1}$ dato il fatto che la ruota è difettosa.
Stiamo considerando $\{ A^{c} \cap B \}$.
$$
\begin{align}
P(A^{c}\cap B | H) &= \frac{P(A^{c} \cap B \cap H)}{P(H)} = \frac{P(A^{c} \cap B)}{P(H)} = \frac{P(B \setminus A \cap B)}{P(H)} \\
 & = \frac{P(B) - P(A  \cap B)}{P(H)} = \frac{0.9 - 0.75}{0.25} = \frac{0.15}{0.25} = 0.6
\end{align}
$$
#### Esercizio
Un dado regolare viene lanciato 3 volte, qual è la probabilità che i punteggi realizzati nei 3 lanci siano tutti differenti.
$$
\begin{align}
\Omega_{i} &= \{ 1,2,3,4,5,6 \}, \qquad i = 1,2,3 \\
\mathcal{A}_{i}  & = \mathcal{P(\Omega_{i})} \qquad i = 1,2,3
\end{align}
$$
$$
\begin{align}
\Omega &= \bigtimes_{i = 1}^{3} \Omega_{i} \\
\mathcal{A}  &= \bigotimes_{i = 1}^{3} \mathcal{A}_{i}
\end{align}
$$
$$
\begin{align}
A_{1} &= \{ \text{punteggio qualunque nel primo lancio} \} \\
A_{2}  &= \{ \text{punteggio del secondo lancio diverso dal primo} \} \\
A_{3}  &= \{ \text{punteggio del terzo lancio diverso dal primo e dal secondo} \}
\end{align}
$$
$A = A_{1} \cap A_{2} \cap A_{3} \implies P(A) = P(A_{1} \cap A_{2} \cap A_{3})$. 
Sia $H = A_{1} \cap A_{2}$, invertendo la formula per la probabilità condizionale si ha che:
$$
P(A) =  P(A_{3} | H) P(H) = P(A_{3} | A_{2} \cap A_{1}) P (A_{2} \cap A_{1}) = P(A_{3}|A_{2}\cap A_{1}) P(A_{2} | A_{1}) P(A_{1})
$$
Sappiamo che $P(A_{1}) = 1$.
$P(A_{2}|A_{1}) = \frac{5}{6}$
$P(A_{3}|A_{2} \cap A_{1}) = \frac{4}{6}$

Dunque $P(A) = 1 \cdot \frac{5}{6} \cdot \frac{4}{6} = \frac{24}{36} = \frac{2}{3}$.

### Definizione classe completa di eventi (partizione di un insieme)
Dato uno spazio probabilizzabile $(\Omega, \mathcal{A})$, la famiglia di eventi $\{ A_{n} \}_{n=1}^{+\infty}$ è detta classe completa di $(\Omega, \mathcal{A})$ se:
- $A_{n} \in \mathcal{A}$
- $\bigcup_{n = 1}^{+\infty} A_{n} = \Omega$
- $A_{i} \cap A_{j} = \emptyset, \forall i \neq j, \qquad i, j = 1,2,\dots$

## Teorema delle probabilità totali
Consideriamo uno spazio probabilizzato $(\Omega, \mathcal{A, P})$ e una partizione $\{ A_{n} \}^{+\infty}_{n=1}$ tale che $P(A_{n}) > 0, \forall n$. Consideriamo $B \in \mathcal{A}$. Allora:
$$
P(B) = \sum_{n=1}^{+\infty} P(A_{n}\cap B) = \sum_{n=1}^{+\infty}  P(A_{n})P(B | A_{n})
$$
### Dimostrazione
$$
\Omega = \bigcup_{n = 1}^{+\infty} A_{n}
$$
Inoltre $\Omega \cap B = B = \left( \bigcup_{n = 1}^{+\infty}A_{n} \right) \cap B = \bigcup_{n = 1}^{+\infty}(A_{n}\cap B)$. Siccome $A_{i} \cap A_{j} = \emptyset \implies (A_{i} \cap B) \cap (A_{j} \cap B) = \emptyset$. 
Quindi $P(B) = P\left( \bigcup_{n = 1}^{+\infty} ( A_{n} \cap B) \right) = \sum_{n=1}^{+\infty}P(A_{n} \cap B) = \sum_{n=1}^{+\infty} P(A_{n})P(B|A_{n})$.

#### Esempio
$U_{1}$ e $U_{2}$ sono due scatole:
- La prima scatola contiene 5 palline bianche 15 nere.
- La seconda scatola contiene 8 palline bianche e 18 nere.
Si sceglie a caso una delle due urne e si estrae una pallina.
Sia:
$$
B = \{ \text{estrazione di 1 pallina bianca} \}
$$
$$
\begin{align}
P(B | U_{1}) &= \frac{1}{3} \\
P(B | U_{2}) &= \frac{4}{9} \\
P(U_{1}) &= P(U_{2}) = \frac{1}{2} \\
P(B) &= P(B | U_{1}) P(U_{1}) + P(B | U_{2}) P(U_{2}) = \frac{1}{3} \cdot \frac{1}{2} + \frac{4}{9} \cdot \frac{1}{2} = \frac{1}{6} + \frac{2}{9} = \frac{7}{18}
\end{align}
$$

:::: Rifare come bisogna farlo rigorosamente a casa
#### Esempio

| $R_{1}$ | $R_{2}$ | $R_{3}$ | $R_{4}$ | $R_{5}$ |                           |
| ------- | ------- | ------- | ------- | ------- | ------------------------- |
| $10$    | $22$    | $19$    | $30$    | $19$    | $\%$ Forza lavoro         |
| $5$     | $2$     | $3$     | $1$     | $8$     | $\%$ Tasso disoccupazione |
Estrando a caso un individuo qual è la probabilità che sia disoccupato.
$$
\begin{align}
A_{i} = \{ \text{l'individuo appartiene alla regione } R_{i} \} \\
D = \{ \text{l'individuo e' disoccupato} \}
\end{align}
$$
$P(A_{1}) = 0.1, P(A_{2}) = 0.22, P(A_{3}) = 0.19, P(A_{4}) = 0.3, P(A_{5}) = 0.19$
$P(D|A_{1}) = 0.05, P(D|A_{2}) = 0.02, P(D|A_{3}) = 0.03, P(D|A_{4}) = 0.01, P(D|A_{5}) = 0.08$.
$$
P(D) = \sum_{n=1}^{5}  P(D|A_{i}) P(A_{i}) \approx 0.033
$$
Vogliamo sapere $P(A_{1}|D)$.
$$
P(A_{1}|D) = \frac{P(A_{1} \cap D)}{P(D)} = \frac{P(D|A_{1}) P(A_{1})}{\sum_{i=1}^{5} P(D|A_{i})P(A_{i})} \approx 0.15
$$
Questo modo di procedere si chiama Teorema di Bayes.

:::: Riscrivere bene per casa
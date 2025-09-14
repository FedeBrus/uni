Un'azienda compra il materiale di cancelleria per i suoi dipendenti da tre fornitori.
$$
\begin{align}
P(A) &= 0.04 \\
P(B) &= 0.63 \\
P(C) &= 0.33
\end{align}
$$
Seguono i tassi di difettosità dei prodotti per azienda:
$$
P(D) = \{ \text{il prodotto e' difettoso} \}
$$
$$
\begin{align}
P(D|A) &= 0.06 \\
P(D|B) &= 0.03 \\
P(D|C) &= 0.04
\end{align}
$$
$$
\Omega = \{ A \cap D, A \cap D^{c}, B \cap D, B \cap D^{c}, C \cap D, C \cap D^{c} \}
$$
$$
\mathcal{A} = \mathcal{P}(\Omega)
$$
1) Qual è la probabilità che una penna sia difettosa?

Essendo che la totalità della cancelleria proviene da queste 3 aziende esse formano una partizione di $\Omega$.
Dunque la probabilità di $D$ è data da:
$$
P(D) = P(D|A)P(A) + P(D|B)P(B) + P(D|C)P(C) = 0.0345
$$

2) Qual è la probabilità che data una penna difettosa, essa provenga dall'azienda $C$?
Qui si utilizza il teorema di Bayes
$$
P(C|D) = \frac{P(D|C)P(C)}{P(D|A)P(A) + P(D|B)P(B) + P(D|C)P(C)} = \frac{0.0132}{0.0345} = \frac{44}{115} = 0.38261
$$
3) Qual è la probabilità che data una penna difettosa, essa non provenga dall'azienda $B$?
Anche qui si utilizza Bayes con qualche banale modifica, ovvero prendendo il complementare dell'evento al numeratore:
$$
P(B^{c}|D) = \frac{P(D|C)P(C)+P(D|A)P(A)}{P(D|A)P(A) + P(D|B)P(B) + P(D|C)P(C)} = \frac{0.0156}{0.0345} = \frac{52}{115} = 0.45217
$$

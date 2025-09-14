Un’urna contiene 16 palline, numerate da 1 a 16. Si estraggono due palline con reimmissione.
1) Qual è la probabilità che almeno una delle due palline pescate sia etichettata con un numero strettamente maggiore di 11?
$$
\Omega_{i} = \{ 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16 \}
$$
$$
\Omega = \Omega_{1} \times \Omega_{2}
$$
$$
\begin{align}
A &= \{ (x,y) \in \Omega | x>11 \} \\
B &= \{ (x,y) \in \Omega | y>11 \}
\end{align}
$$
$$
\mathcal{F} = \{ A, B \}
$$
$$
\mathcal{A} = \mathcal{A}_{\mathcal{F}}
$$
$$
P(A \cup B) = P(A) + P(B) - P(A \cap B) = \frac{5 \cdot 16 + 16 \cdot 5 - 5 \cdot 5}{16 \cdot 16} = \frac{135}{256}
$$

2) Qual è la probabilità che la somma dei numeri sulle due palline sia pari sapendo che almeno una delle due palline pescate è etichettata con un numero strettamente maggiore di 11
$$
C = \{ (x,y) \in \Omega | x + y \text{ pari} \}
$$
Consideriamo la seguente partizione di $A$:
$$
\begin{align}
D &= \{ \text{il numero uscito e' pari } \} \\
D^{c} &= \{ \text{il numero uscito e' dispari } \}
\end{align}
$$
Noi vogliamo calcolare:
$$
P(C|A) = \frac{P(C \cap A)}{P(A)} = \frac{P(C|D)P(D) + P(C|D^{c})P(D^{c})}{P(D)+P(D^{c})} = \frac{\frac{1}{2} \cdot \frac{3}{16} + \frac{1}{2} \cdot \frac{2}{16}}{\frac{5}{16}} = \frac{1}{2}
$$
Volendo, si poteva arrivare a questa soluzione tramite il calcolo combinatorio:
$$
\frac{\frac{(3 \cdot 8) + (2 \cdot 8)}{256}}{\frac{5 \cdot 16}{256}} = \frac{1}{2}
$$
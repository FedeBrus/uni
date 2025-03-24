Due dadi d20. Perdi se il minore dei dadi è <= 8.

1) Qual è la probabilità di perdere?

$$
\begin{align}
\Omega_{1} &= \{ 1,2, \dots,20 \} \\
\Omega_{2}  &= \{ 1,2, \dots, 20 \}
\end{align}
$$
$$
\begin{align}
\Omega &= \Omega_{1} \times \Omega_{2} \\
\mathcal{A} &= \mathcal{P}(\Omega)
\end{align}
$$
Se almeno uno de due dadi è <= 8 allora is perde. Questo vuol dire che i casi favorevoli sono tutte le coppie $(x, y)$ dove o $x$ o $y$ sono inferiori o uguali a 8. Espriamoci meglio:
$$
\begin{align}
A &= \{ (x, y) \in \Omega | x \leq 8 \} \\
B &= \{ (x, y) \in \Omega | y \leq 8 \}
\end{align}
$$
Sapendo che $\#\Omega = 20^2 = 400$
$$
\begin{align}
P(A) &= \frac{8 \cdot 20}{400} = \frac{160}{400} \\
P(B) & = \frac{8 \cdot 20}{400} = \frac{160}{400}
\end{align}
$$
Ora bisogna calcoalre $P(A \cup B)$:
$$
P(A \cup B) = P(A) + P(B) - P(A \cap B)
$$
Noi conosciamo anche $\#(A \cap B) = 8^2 = 64$.
$$
P(A \cup B) = \frac{160 + 160 - 64}{400} = \frac{256}{400} = 0.64
$$
2) Calcolare la probabilità di perdere sapendo che nel primo dado è uscito 11
In pratica l'esercizio ci chiede di calcolare $P(B | A^{c})$
$$
P(B|A^{c}) = \frac{P(B \cap A^{c})}{P(A^{c})} = \frac{\frac{8 \cdot 12}{400} }{\frac{12 \cdot 20}{400}} = \frac{8}{ 20}
$$
3) Calcolare la probabilità che esca lo stesso risultato su entrambi i dadi.
Sia $C = \{ (x, y) \in \Omega | x = y \}$, sappiamo che essendoci solamente 20 valori possibili per $x$ e siccome $y = x$ allora $\#C = 20$.
$$
P(C) = \frac{20}{400}
$$

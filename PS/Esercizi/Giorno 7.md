In questo esperimento casuale ci sono 6 sacchetti di biglie colorate e un dado equilibrato a 6 facce. In tutti i
sacchetti ci sono 9 biglie rosse, denotate con $R$ e 14 biglie nere, denotate con $N$.
Lanciamo il dado e ne osserviamo il risultato: indichiamo con $n$ il numero ottenuto. A questo punto prendiamo
$n$ sacchetti e peschiamo una biglia da ciascuno di essi.
1) Qual è la probabilità che alla fine si peschi esattamente $(N, R)$?

Notiamo che il lancio del dado è indipendente dall'estrazione della pallina, poiché tutti i sacchetti contengono lo stesso numero di palline. Dunque:
$$
P((N, R)) = P(D_{2}) \cdot (P(N) \cdot P(R)) = \frac{1}{6} \left( \frac{14}{23} \cdot \frac{9}{23} \right) = \frac{21}{529}
$$

2) Qual è la probabilità che alla fine si peschi esattamente $(N, R, N)$?
Allo stesso modo, siccome tutti gli eventi sono indipendenti:
$$
P((N, R, N)) = P(D_{3}) \cdot (P(N) \cdot P(R) \cdot P(N)) = \frac{1}{6} \left( \frac{14}{23} \cdot \frac{9}{23} \cdot \frac{14}{23} \right) = \frac{294}{12167}
$$
3) Qual è la probabilità che si estraggano almeno $5N$?
Questa probabilità è data dalla somma di eventi incompatibili. La probabilità che esca $5$ nel dado e che tutti i sacchetti diano una pallina nera, sommata alla probabilità che esca 6 nel dado e tutti i sacchetti diano una pallina nera, sommata alla probabilità che esca 6 nel dado e tutti tranne 1 sacchetti danno una pallina nera.
$$
\begin{align}
P(\geq5N) &= P((N, N, N, N,N)) + P((N, N, N, N, N, N)) + 6P((R, N, N, N, N, N))  \\
 &= \frac{1}{6} \left( \frac{14}{23} \right)^{5} + \frac{1}{6}\left( \left( \frac{14}{23} \right)^{6} + 6 \left( \left( \frac{14}{23}^{5} \right)\left( \frac{9}{23} \right) \right) \right)  \\
 &= 0.05510148511
\end{align}
$$
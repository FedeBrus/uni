### Teorema dello score
Sia $n\geq 2$, $n \in \mathbb{N}$, $d=(d_{1},\dots,d_{n}) \in \mathbb{N}^{n}$ tale che $d_{1} \leq \dots \leq d_{n} \leq n-1$. Definiamo $d'=(d_{1}',\dots,d'_{n-1}) \in \mathbb{N}^{n-1}$ come
$$
d_{i} = \begin{cases}
d_{i} & i < n - d_{n}, \forall i \in \{ 1, \dots, n - 1 \} \\
d_{i} - 1  &  i \geq n - d_{n}
\end{cases}
$$
Allora $d$ è lo score di un grafo se e solo se $d'$ è lo score di un grafo.
#### Esercizio
$d = (2,2,2,2,3,3,3,5,6)$ è lo score di un grafo? In caso di risposta affermativa determinare tale grafo.

Svolgimento:
Poiché $9 \geq 2$ e $6 \leq 8 = 9 - 1$, possiamo applicare il teorema dello score.
$$
\begin{array}{c|c|c}
d & (2,2,2,2,3,3,3,5,6) & 6 \leq 9 - 1

\end{array}
$$
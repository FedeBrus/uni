#### Esercizio
Su uno spazio campionario $\Omega$ ci sono due sottoinsiemi $A, B \subseteq \Omega$
$$
\begin{align}
P(A^{c}) &= 0,3 \\
P(B) &= 0,4 \\
P(A \cap B^{c}) &= 0,5
\end{align}
$$
$$
\Omega = \{A \cap B, A \cap B^{c}, A^{c} \cap B, A^{c} \cap B^{c}\}
$$
Devono essere eventi elementari.
Un modo per costruire questo spazio è partire da uno spazio che parla solo di $A$:
$$
\Omega_{A} = \{ A, A^{c} \}
$$
Idem per $B$:
$$
\Omega_{B} = \{ B, B^{c} \}
$$
E infine trovare lo spazio prodotto:
$$
\Omega = \Omega_{A} \times \Omega_{B} = \{ (A, B), (A, B^{c}), (A^{c}, B), (A^{c}, B^{c}) \}
$$
Come è fatta la tribù?
$$
\mathcal{F} = \{ A, B \}
$$
$$
\mathcal{A} = \sigma(\mathcal{F}) = \mathcal{P}(\Omega)
$$
Quindi $P(A) = 1 - P(A^{c}) = 0.7$.
Possiamo considerare $A = (A \cap B^{c}) \cup (A \cap B)$ e quindi hanno la stessa probabilità.
$$
\begin{align}
P(A) &= P(A \cap B^{c}) + P(A \cap B) \\
0,7  & = 0,5 + P(A \cap B)
\end{align}
$$
Da cui $P(A \cap B) = 0,2$

Con lo stesso trucco si ricava $P(B)$:
$P(B) = P((B \cap A) \cup (B \cap A^{c})) = P(A \cap B) + P(B \cap A^{c}) \Longleftrightarrow P(B \cap A^{c}) = 0,2$

Infine:
$P(A^{c}\cap B^{c}) = P((A \cup B)^{c}) = 1 - P(A \cup B) = 1 - P(A) - P(B) + P(A \cap B) = 0,1$

#### Esercizio
Mazzo di carte (52 carte) e ne estraiamo una in maniera casuale.
$\Omega = \{ 1,2,3,\dots,52 \}$
Con: fiori, picche, cuori, quadri. Con: asso, 2, 3, 4, 5, 6, 7, 8, 9, 10, J, Q, K.
Qual è la probabilità di estrarre una figura qualsiasi o una carta di fiori.
Consideriamo gli eventi $A_{1} = \{ \text{e'  uscita una figura} \} = \{ 11,12,13,24,25,26,37,38,39, 50, 51, 52 \}$, $A_{2} = \{ \text{e' uscito un fiore} \} = \{ 1,2,3,4,5,6,7,8,9,10,11 \}$.
Prendiamo $\mathcal{F} = \{ A_{1}, A_{2} \}$
$\mathcal{A}_{\mathcal{F}} = \sigma(\mathcal{F}) = \{ \emptyset, \Omega, A_{1}, A_{2}, A_{1}^{c}, A_{2}^{c}, A_{1} \cup A_{2}, \dots \}$.
Considerando lo spazio probabilizzabile $(\Omega, \mathcal{P}(\Omega))$.
La probabilità di ogni carta è $P(\{ \omega \}) = \frac{1}{52}, \omega \in \Omega$.
$$
\begin{align}
P(A_{1}) &= \frac{12}{52} = \frac{\#A_{1}}{\#\Omega} \\
P(A_{2}) &= \frac{13}{52} = \frac{\#A_{2}}{\#\Omega}
\end{align}
$$
La domanda dell'esercizio è trovare $P(A_{1} \cup A_{2}) = P(A_{1}) + P(A_{2}) - P(A_{1} \cap A_{2})$.
Sapendo che $P(A_{1} \cap A_{2}) = P(\{ 11,12,13 \}) = \frac{3}{52}$
Dunque la risposta alla domanda originale è $\frac{22}{52}$.
#### Esempio
Si lanciano due dadi a $6$ facce bilanciati.
$$
\Omega_{i} = \{ 1,2,3,4,5,6 \}, \qquad i = 1,2
$$
Prendiamo come tribù l'insieme delle parti perché non sappiamo bene di cosa parlare:
$$
\mathcal{A_{i}} = \mathcal{P}(\Omega), \qquad i=1,2
$$
Abbiamo $\Omega = \Omega_{1} \times \Omega_{2}$ e $\mathcal{A} = \mathcal{A}_{1} \otimes \mathcal{A}_{2}$.
Sappiamo che $P_{i}(\{ j \}) = \frac{1}{6}, i = 1,2; j = 1,\dots,6$
Quindi $P((i,j)) = P_{1}(\{ i \}) \cdot P_{2}(\{ j \}) = \frac{1}{36}$.

Calcola la probabilità che la somma dei due dadi sia pari.
Contando le combinazioni messe in una tabella si ha che tale probabilità sia $\frac{1}{2}$.
Calcola la probabilità che la somma dei due dadi sia uguale a $5$.
Contando le combinazioni messe in una tabella si ha che tale probabilità sia $\frac{1}{9}$.
Calcola la probabilità che il valore assoluto della differenza dei due dadi sia uguale a $3$.
Contando le combinazioni messe in una tabella si ha che tale probabilità sia $\frac{1}{6}$.

## Calcolo combinatorio
Consideriamo un insieme $S = \{ a_{1}, \dots,a_{n} \}$ di oggetti distinti.
Un allineamento è una $r$-upla $\underbrace{ (a_{1},a_{2},a_{3},\dots) }_{ r }$. Due allineamenti sono considerati diversi se:
1. Contengono oggetti diversi
2. Gli oggetti appaiono in un ordine diverso.
3. Gli oggetti si ripetono un numero diverso di volte.

### Disposizioni con ripetizioni $D_{n,r}^{\star}$
Quando due allineamenti differiscono per almeno uno di questi motivi si chiamano disposizioni con ripetizioni $D_{n,r}^{\star} = n^{r}$
#### Esempio
Sia $S = \{ a_{1},a_{2},a_{3} \}, n = 3, r = 2$
$S \times S = \{ (a_{1},a_{1}), (a_{1},a_{2}), (a_{1},a_{3}), (a_{2},a_{1}), (a_{3},a_{1}), (a_{2},a_{2}), (a_{3},a_{2}), (a_{2},a_{3}), (a_{3},a_{3}) \}$
$\#(S\times S) = D_{3,2}^{\star} = 3^{2} = 9$

### Disposizione senza ripetizioni $D_{n, r}$
In questo caso si considerano solo (1) e (2) ma ogni elemento può comparire una sola volta.
$D_{n, r} = n(n-1)\dots(n-r+1)$.
Introducendo la notazione di fattoriale: $n! = n(n-1)(n-2)\dots 2\cdot 1$. Inoltre $0! = 1$.
Dunque $D_{n,r} = \frac{n!}{(n-r)!}$
### Permutazione $P_{n}$
Le permutazioni possono essere definite come disposizioni speciali $P_{n} \equiv D_{n,n} = \frac{n!}{0!} = n!$
### Combinazioni $C_{n,r}$
In questo caso si considera solo (1) ma l'ordine non è importante e un oggetto può comparire al più una volta.
$C_{n, r} = \frac{D_{n,r}}{P_{r}} = \frac{n!}{(n-r)!r!} = \binom{n}{r}$
##### Esercizio
Comitato costituito da $5$ persone scelte a caso tra $10$.
Una persona può comparire al più una volta. L'ordine non è importante.
Dunque le combinazioni sono $C_{10,5} = \frac{10!}{5!5!} = 252$.
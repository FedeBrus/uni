#### Esempio
Una scimmia digita tre tasti in maniera casuale su una tastiera da 100 tasti. Qual è la probabilità che la scimmia digiti una parola di 3 lettere che inizi con consonante e che finisca con 2 vocali. (20 consonanti e 6 vocali). La parola non deve avere senso compiuto.
Si calcoli la probabilità di questo evento.
$$
\begin{align}
\Omega_{i} &= \{ 1,\dots,100 \} \qquad i = 1,2,3 \\
\mathcal{A}_{i} &= \mathcal{P}(\Omega_{i})  \qquad i = 1,2,3
\end{align}
$$
$$
\begin{align}
\Omega &= \Omega_{1}\times \Omega_{2}\times \Omega_{3} = \{ (i, j, k) : i, j, k = 1, \dots,100 \}  \\
\mathcal{A} &= \mathcal{A}_{1} \otimes \mathcal{A}_{2} \otimes \mathcal{A}_{3}
\end{align}
$$
Con il calcolo combinatorio si può calcolare $\#\Omega$:
$$
\#\Omega = D_{100, 3}^{\star} = 100^{3}
$$
Probabilità dell'evento generico:
$$
P_{\Omega}((i,j,k)) = \frac{1}{\#\Omega} = \frac{1}{100^{3}}
$$
Probabilità dell'evento considerato:
$$
P_{\Omega}(\text{CVV}) = \frac{20 \cdot 6 \cdot 6}{\#\Omega}
$$
#### Esempio
Consideriamo il seguente insieme $\{ A_{1},A_{2},A_{3},A_{4},A_{5}, B_{1}, B_{2}, C_{1}, D_{1}, D_{2}, R_{1},R_{2} \}$.
Qual è la probabilità che estraendo da questo insieme una lettera alla volta, compaia l'allineamento $\{ A, B, A, D,A,C,A,D,A,B,R,A \}$. (Estrazione senza reinsetimento)
$$
\begin{align}
\Omega &= \{ \text{tutte le permutazioni degli 11 oggetti distinti} \} \\
\mathcal{A}  & = \mathcal{P}(\Omega)
\end{align}
$$
$$
\#\Omega = P_{11} = 11!
$$
- le "A" possono essere collocate in $5!$ modi diversi.
- le "B" possono essere collocate in $2!$ modi diversi.
- le "R" possono essere collocate in $2!$ modi diversi.
- la "C" e la "D" possono essere collocate in $1!$ modi diversi.
$$
P_{\Omega}(\{ A, B, R, A, D,A,C,A,D,A,B,R,A \}) = \frac{5! \cdot 2! \cdot 2! \cdot 1! \cdot 1!}{11!} = \frac{1}{83160}
$$
#### Esempio
Un'urna contiene 100 palline di cui 30 bianche e 70 rosse. Vengono eseguite 10 estrazioni senza reinserimento. Si determini la probabilità che vengano estratte esattamente 5 palline bianche.
Eventi elementari: 
$$
\{a_{1},a_{2},\dots,a_{10}\} \qquad a_{i} = \begin{cases}
B = \text{pallina bianca} \\
R = \text{pallina rossa}
\end{cases} \qquad i = 1, \dots,  10
$$
$\Omega = \{ \text{Insieme di tutti questi allineamenti} \}$. Nota: l'ordine non è importante e una pallina può comparire al più una volta sola.
$\#\Omega = C_{100, 10} = \binom{100}{10}$.
Bisogna riempire 5 slot con 30 palline bianche, i possibili allineamenti sono $C_{30,5}=\binom{30}{5}$.
Bisogna riempire 5 slot con 30 palline rosse, i possibili allineamenti sono $C_{70,5} = \binom{70}{5}$.
$$
P_{\Omega} = \frac{C_{30,5} \cdot C_{70,5}}{C_{100, 10}} = \frac{\binom{30}{5} \binom{70}{5}}{\binom{100}{10}}
$$
Per casa fare l'esercizio contando l'ordine.
Nel caso l'ordine delle palline bisogna considerare il numero di eventi elementari il numero di disposizioni totali senza ripetizione:
$$
\#\Omega = D_{100, 10} = \frac{100!}{90!}
$$
Dopodiché, intuitivamente il numero di casi favorevoli è dato prendendo il numero totale di gruppi di 10 palline tali che 5 palline siano rosse e 5 siano bianche (il numeratore di prima) e moltiplicarlo per tutti i possibili modi di disporre 10 palline.

Infine il calcolo finale è:
$$
P_{\Omega} = \frac{C_{30,5} \cdot C_{70, 5} \cdot P_{10}}{D_{100,10}} 
$$
#### Esempio
Assumiamo che la probabilità di essere nati in un certo giorno dell'anno sia uguale per qualsiasi giorno dell'anno. Un anno è composto da $365$.
Determinare la probabilità che $n$ persone scelte a caso abbiano tutte compleanno in un giorno diverso.
$$
\Omega = (a_{1},\dots,a_{n}) \qquad a_{i} \in \{ 1, \dots, 365 \}
$$
$$
\#\Omega = D_{365, n}^{\star} = 365^{n}
$$
$$
\#A = \#\{ \text{le n persone hanno tutte compleanno in un giorno diverso} \} = \begin{cases}
D_{365, n}  \qquad n \leq 365 \\
0 \qquad n > 365
\end{cases}
$$
$$
P(A) = \begin{cases}
\frac{D_{365, n}}{D_{365, n}^{\star}} \qquad n \leq 365 \\
0 \qquad n > 365
\end{cases}
$$
## Probabilità condizionale/condizionata
Supponiamo di avere uno spazio probabilizzato $(\Omega, \mathcal{A}, P)$
Ad esempio il lancio di un dado: $\Omega = \{ 1,2,3,4,5,6 \}$, $\mathcal{A} = \mathcal{P}(\Omega)$, $P(\{ i \}) = \frac{1}{6}$.
Consideriamo i seguenti eventi:
$$
\begin{align}
H & = \{ \text{e' uscito un numero pari} \} \\
A & = \{ \text{e' uscito un numero minore di 4} \} \\
B & = \{ \text{e' uscito il numero 3} \}
\end{align}
$$
$H$ sarà chiamato evento condizionante oppure "evento che è accaduto". 
Se l'evento è accaduto significa che la sua probabilità $P(H) > 0$ in riferimento a $\Omega$. A questo punto possiamo costruire uno spazio nuovo, chiamato spazio di probabilità condizionato $(\Omega_{H},\mathcal{A}_{H}, P_{H})$, dove $\Omega_{H} = H$, $\mathcal{A}_{H}=\{ A \cap H : A \in \mathcal{A} \}$. In questo spazio $P_{H}(H) = 1$ e $P_{H}(A) = \frac{P(A \cap H)}{P(H)}$. Siccome $A$ non è dentro la tribù $\mathcal{A}_{H}$ questo è un abuso di notazione, dunque d'ora in avanti scriveremo $P(A | H)$.
Quindi è possibile considerare lo spazio $(\Omega, \mathcal{A}, P(\bullet | H))$.
Tornando all'esempio: $P(A | H) = \frac{P(A \cap H)}{P(H)} = \frac{\frac{1}{6}}{\frac{1}{2}} = \frac{1}{3}$, $P_{H}(B)$ non è definita.
#### Esempio
Si lanciano due dadi equilibrati a 6 facce. Si conosce che la somma dei due risultati è 6, qual è la probabilità che il primo risultato sia 3.
$\Omega_{i} = \{ 1,\dots,6 \} \qquad i = 1,2, \qquad \mathcal{A}_{i}= \mathcal{P}(\Omega_{i}) \qquad P_{i}\left( \{ j \} = \frac{1}{6} \right) \qquad i = 1,2; j= 1, \dots, 6$
$\Omega = \Omega_{1} \times \Omega_{2} \qquad \mathcal{A} = \mathcal{A}_{1} \otimes \mathcal{A}_{2} \qquad P(\{ j, k \}) = P_{1}(\{ j \}) \cdot P_{2}(\{ k \}) \qquad j,k = 1,\dots,6$
Consideriamo $(\Omega, \mathcal{A}, P)$ e $H = \{ \text{la somma dei risultati e' 6} \} = \{ (1,5), (2,4), (3,3), (4,2), (5,1) \}, A =\{ \text{ il primo dado e' 3} \} =\{ (3,1), (3,2), (3,3), (3,4), (3,5), (3,6) \}$
$$
\begin{align}
P(H) &= \frac{\#H}{\#\Omega} = \frac{5}{36} \\
P(A) & = \frac{\#A}{\#\Omega} = \frac{6}{36} \\
P(A \cap H)  & = \frac{1}{36} \\
P(A | H) & = \frac{P(A \cap H)}{P(H)} = \frac{1}{5}
\end{align}
$$

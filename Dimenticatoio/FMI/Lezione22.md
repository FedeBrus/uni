### Definizione 17.16
Si dice che un grafo $G$ è hamiltioniano se ammette almeno un ciclo hamiltoniano, ovvero un ciclo che percorre tutti i suoi vertici.
Se $G=(V, E)$, un ciclo della forma $(v_{0},v_{1},\dots,\underbrace{ v_{n} }_{ = v_{0} })$ è hamiltoniano se $\{ v_{0},v_{1},\dots,v_{n-1} \} = V$
### Osservazione
Un grafo hamiltoniano è sempre un grafo finito e possiede almeno tre vertici, inoltre è sicuramente connesso.

### Lemma 17.18 
Un grafo hamiltoniano è 2-connesso.

### Dimostrazione
Sia $G= (V,E)$ un grafo hamiltoniano. Sappiamo che $|V|\geq 3$. Disponendo i vertici in una disposizione planare in modo che siano i vertici di un poligono regolare. Allora possiamo supporre che i lati di tale poligono formino il ciclo hamiltoniano. Se si considera ora $G - v_{i}$, qualsiasi $v_{i}$, il grafo $G-v_{i}$ possiede un cammino verde che connette tutti gli altri vertici.

### Osservazione
Hamiltonianità $\implies$ 2-connessione $\implies$ connessione.

### Definizione 17.20
Un vertice $v \in V$ di un grafo $G=(V,E)$ si dice foglia di $G$ se $deg_{G}(v) = 1$.

### Lemma 17.22
Un grafo 2-connesso non ha foglie. In particolare, ogni grafo hamiltoniano (essendo 2-connesso) non ha foglie.
### Dimostrazione
Sia $G=(V,E)$ un grafo 2-connesso, dunque $|V(G)| \geq 3$.
Sia $f$ una foglia e sia $\{ g, f \}$ l'unico lato insistente su $f$. Allora $G-g$ è sconnesso con componenti connesse con vertici $\{ f \}$ e $\{v \in V(G) | v \neq f, g \}$ indotto da un altro vertice.
Siccome non è connesso allora sicuramente non è 2-connesso e dunque non può essere neanche hamiltoniano.

#### Esercizio 17.23
Quali di questi vettori può essere lo score di un grafo 2-connesso, oppure hamiltoniano.
1. $d_{1} = (1,1,2,2,2,3,3,4)$
2. $d_{2} = (0,3,3,3,3,3,3,4,4)$ 
3. $d_{3} = (1,2,2,2,5,6,6,6,6,6)$
4. $d_{4} = (2,2,2,2,3)$

$d_{1}$ non può essere un grafo 2-connesso perché possidere almeno una foglia. Essendo non 2-connesso è anche non-hamiltoniano.
$d_{2}$ non può essere un grafo connesso, perché contiene un vertice isolato che forma una sua componente connessa. Dunque non può essere 2-connesso e dunque non può essere hamiltoniano.
$d_{3}$ contiene una foglia, dunque non è 2-connesso e hamiltoniano.
$d_{4}$ non è nemmeno un grafo.
$$
\boxed{\overset{\text{Grafi}}{\boxed{\overset{\text{Grafi connessi}}{\boxed{\overset{\text{Grafi connessi senza foglie}}{\boxed{\overset{\text{Grafi 2-connessi}}{\boxed{\overset{\text{Grafi hamiltoniani}}{}}}}}}}}}}
$$
### Come affrotare la domanda di teoria
Elencare le definizioni necessarie.
Enunciare il teorema in modo completo.
Prima di dimostrare il teorema, ricordiamo i seguenti risultati. (enunciare lemmi senza dimostrazione).
Dimostrazione.

### Isomorfismi tra grafi
Siano $G$ e $G'$ due grafi finiti isomorfi. Valgono le seguenti proprietà:
1. $score(G) = score(G')$.
2. $G$ e $G'$ hanno lo stesso numero di componenti connesse. In particolare sono entrambi connessi o entrambi sconnessi.
3. $G$ e $G'$ sono entrambi 2-connessi oppure entrambi non 2-connessi.
4. $G$ e $G'$ sono entrambi hamiltoniani oppure entrambi non hamiltoniani.
5. $G$ e $G'$ hanno lo stesso numero di 3-cicli, 4-cicli, ...

#### Esercizio 18.1
Si dica se i seguenti 3 grafi sono isomorfi tra loro.

$$
\begin{align}
score(G) &= (3,3,3,3,3,3,6) \\
score(G') &= (3,3,3,3,3,3,6) \\
score(G'') &= (3,3,3,3,3,3,6) \\
\end{align}
$$
Sono tutti e 3 connessi, dunque non si può dire nulla.
Saltiamo il 3° passo.
Il primo è hamiltoniano, mentre gli altri due no. Sicuramente $G$ non è isomorfo a $G'$ e a $G''$.
Rimane però il dubbio tra $G'$ e $G''$.

Possiamo costruire un isomorfismo partendo dalle sicurezze. Ad esempio dobbiamo sicuramente mappare $g'$ a $g''$. Dopodiché diffondendo si sarebbe dovuto prendere il vertice adiacente di grado massimo e mappare il vertice di grado massimo adiacente a $g'$ al vertice di grado massimo adiacente a $g''$.
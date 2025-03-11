Una scatola contiene O-ring
- 30 di diametro 10mm
- 30 di diametro 9mm
- 30 di diametro 11mm

Estraete un O-ring, qual è la probabilità che compiendo questa operazione si estragga un O-ring del diametro di 10mm.
> 1/3

$Pr(\text{estrarre O-ring del diametro di 10}) = \frac{30}{90} = \frac{1}{3}$
$30$ sono i casi favorevoli
$90$ sono i casi totali

Questo approccio si chiama "Probabilità frequentista".
>Analizzo accuratamente gli O-ring prima di sceglierlo in modo che sia di 10mm.
>Cerco tre O-ring di dimensione diversa, li ordino e scelgo quello centrale.

La probabilità dipende molto da come descriviamo il contesto.
Dunque è necessaria una formalizzazione:

### Def Esperimento aleatorio
Un esperimento si dice aleatorio, per un certo individuo, in un certo istante, se l'individuo non è ancora in grado di indicarne con sicurezza il risultato (indipendentemente se l'esperimento sia già avvenuto o meno).

### Def Esito (o evento elementare)
L'esito è un possibile risultato del nostro esperimento aleatorio.
(Gli eventi elementari sono tra loro incompatibili).

### Def Spazio campionario
Lo spazio campionario è la collezione di tutti gli eventi elementari, lo indicheremo con $\Omega$. Gli elementi di $\Omega$ sono a due a due incompatibili. Gli elementi di $\Omega$ sono esaustivi, cioè ci devono essere tutti i possibili risultati.

#### Esempio
Abbiamo una scatola contenente 3 palline, una rossa, una bianca e una verde.
Il nostro esperimento aleatorio è l'estrazione di una pallina.
Gli esiti sono:
- Verde
- Bianco
- Rosso
Quindi $\Omega=\{ \text{Verde}, \text{Bianco}, \text{Rosso} \}$.

#### Esempio
Il nostro esperimento aleatorio è il lancio di un D6.
Gli esiti sono:
- 1
- 2
- 3
- 4
- 5
- 6
Quindi $\Omega = \{ 1,2,3,4,5,6 \}$.

Notare che possiamo dare etichette agli eventi elementari:
$$
\{ \text{esce il numero 1} \} = \{ 1 \} = A_{1}
$$
Consideriamo ora il seguente evento:
$$
\{ \text{esce un numero pari} \} = \{ 2,4,6 \} = A_{2}
$$
non è un evento elementare, perché l'interesezione $\{ 2 \} \cap A_{2} \neq \emptyset$.

Consideriamo ora il seguente evento:
$$
\{ \text{esce il numero più piccolo di 3} \} = \{ 1, 2 \} = A_{3}
$$
nemmeno questo è un evento elementare.

In un altro esperimento
$$
A_{1} = \{ 1,3,5 \}, A_{2} = \{ 2, 4, 6 \} \\
$$
$$
\Omega = \{ A_{1}, A_{2} \}
$$
A seconda dell'interesse che ho, posso definire gli eventi elementari nella maniera più opportuna.

#### Esempio
Lancio di due D6.
Eventi elementari: $\{ (i, j) \}, \qquad i,j = 1, \dots,6$
$$
\Omega = \{ (1, 1), \dots, (1, 6), (2,1), \dots, (2,6), \dots, (6,6) \}
$$
Dunque $\# \Omega = 36$.

Oppure:
$$
\begin{align}
\text{Lancio del primo dado}:  \Omega_{1} &= \{ 1,2,3,4,5,6 \} \\
\text{Lancio del secondo dado}:  \Omega_{2} &= \{ 1,2,3,4,5,6 \}
\end{align}
$$
$$
\Omega = \Omega_{1} \times \Omega_{2}
$$
Ora possiamo definire eventi del tipo: 
$$
\begin{align}
A &= \{ \text{almeno una faccia e' pari} \} \\
B_{1} &= \{ \text{Solo il primo risultato e' pari} \} \\
B_{2} &= \{ \text{Solo il secondo risultato e' pari} \} \\
B_{3} &= \{ \text{Entrambi i risultati sono pari} \} \\
A &= B_{1} \cup B_{2} \cup B_{3} \\
B_{i} \cap B_{j} &= \emptyset \qquad i,j = 1,2,3\qquad i\neq j
\end{align}
$$

### Def Insiemi disgiunti
Dati due insiemi $A, B \subseteq \Omega$, sono disgiunti se $A \cap B \neq \emptyset$.

### Regole di De Morgan
$$
\begin{align}
(A \cup B)^{c} &= A^{c} \cap B^{c} \\
(A \cap B)^{c} &= A^{c} \cup B^{c} \\
(A^{c})^{c}  &= A
\end{align}
$$
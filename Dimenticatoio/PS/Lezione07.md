#### Esempio
Nella stanza A ci sono due scatole: una bianca e una nera.
Nella scatola bianca ci sono 90 caramelle alla menta e 10 alla liquirizia, in quella nera ci sono 720 caramelle alla menta e 180 alla liquirizia.
Gigi sa quante caramelle ci sono in ciascuna scatola e preferisci quella alla menta, dunque sceglie quella bianca.

Dopodiché entra nella stanza B, dove sono presenti 2 scatole: une bianca e una nera.
Nella scatola bianca ci sono 160 caramelle alla menta e 640 alla liquirizia, in quella nera ci sono 20 alla menta e 180 alla liquirizia.
Dunque sceglie quella bianca.

Dopodiché entra nella stanza C, dove nella scatola bianca vengono versate tutte le caramelle delle scatole bianche precedenti e idem per la nera.
Dunque sceglia la nera.

Questo è un paradosso di Simpson.

#### Esempio
Efficacia di un farmaco.
$$
\begin{align}
\Omega_{M} &= \{ S, I \} \qquad \text{Malattia}\\
\Omega_{F} &= \{ T, C \} \qquad \text{Farmaco} \\
\Omega_{P} &= \{ M, F \} \qquad \text{Paziente}
\end{align}
$$

| Farmaco | Paziente | Malattia | Frequenze assolute |
| ------- | -------- | -------- | ------------------ |
| T       | M        | S        | 8                  |
| C       | M        | S        | 4                  |
| T       | F        | S        | 12                 |
| C       | F        | S        | 2                  |
| T       | M        | I        | 5                  |
| C       | M        | I        | 3                  |
| T       | F        | I        | 15                 |
| C       | F        | I        | 3                  |

$P(S|T) = \frac{8 + 12}{8+12+15+5} = \frac{1}{2}$
$P(S|C) = \frac{4 + 2}{4+2+3+3} = \frac{1}{2}$

$P(S|T,M) = \frac{8}{8+5} = \frac{8}{13}$ 
$P(S|C,M) = \frac{4}{4+3} = \frac{4}{7}$

Quindi $P(S |T, M) > P(S|C,M)$.

$P(S|T,F) = \frac{12}{12 + 15} = \frac{12}{27}$
$P(S|C, F) = \frac{2}{2+3} = \frac{2}{5}$

Quindi $P(S|T,F) > P(S|C,F)$.

$$
\begin{align}
0.5 = P(S|T) &= \frac{P(S \cap T)}{P(T)} = \frac{P(S \cap T \cap \Omega_{P})}{P(T)} = \frac{P(S \cap T \cap M) + P(S \cap T \cap F)}{P(T)} \\
 & = \frac{P(S \cap T \cap M)}{P(T)} \cdot \frac{P(T \cap M)}{P(T \cap M)} + \frac{P(S \cap T \cap F)}{P(T)} \cdot \frac{P(T \cap F)}{P(T \cap F)} \\
 & = P(S|T \cap M) P(M | T) + P(S | T \cap F) P(F | T) \\
 & = 0.615 \cdot 0.325 + 0.444 \cdot 0.675
\end{align}
$$
$$
\begin{align}
0.5 = P(S|C)  &= P(S|C \cap M)P(M | C) + P(S | C \cap F)P(F|C) \\
 & = 0.571 \cdot 0.583 + 0.4 \cdot 0.417
\end{align}
$$
Qui è chiaro il motivo del paradosso.

## Teorema di Bayes
Consideriamo uno spazio probabilizzato $(\Omega, \mathcal{A}, P)$ e prendiamo una successione di eventi $\{ A_{i} \}_{i = 1}^{+\infty}$ in modo che siano una partizione di $\Omega$. Assumiamo che $P(A_{i}) > 0, \forall i$. Allora dato un evento $B$ tale che $P(B) > 0$ abbiamo che:
$$
P(A_{i} | B) = \frac{P(B | A_{i}) P(A_{i})}{\sum_{j=1}^{+\infty}  P(B|A_{j})P(A_{j})}
$$
### Dimostrazione
Consideriamo $P(A_{i} \cap B)$. Sappiamo per ipotesi che $P(A_{i}), P(B) > 0$. Allora:
$$
P(A_{i}|B)P(B) = P(A_{i} \cap B) = P(B|A_{i})P(A_{i})
$$
Quindi:
$$
P(A_{i}|B) = \frac{P(B | A_{i}) P(A_{i})}{P(B)}
$$
Questa si chiama formula di Bayes.
Ora è possibile calcolare $P(B)$ tramite il teorema delle probabilità totali e il teorema è dimostrato.
#### Esercizio
$A = \{ \text{gioca a basket} \}$
$M = \{ \text{il giocatore e' maschio} \}$
$F = \{ \text{il giocatore e' femmina} \}$

$P(M) = 0.26$
$P(A | M) = 0.45$
$P(A|F) = 0.25$

Bisogna determinare la probabilità che scegliendo a caso un giocatore di pallacanestro, questo sia maschio.
Quindi dobbiamo calcolare $P(M|A)$.
$$
P(M | A) = \frac{P(A \cap M)}{P(A)} = \frac{P(A|M)P(M)}{P(A|M)P(M) + P(A|F)P(F)}
$$
Sapendo che $P(F) = 1 - P(M) = 0.74$.
$$
P(M | A) = \frac{0.45 \cdot 0.26}{0.45 \cdot 0.26 + 0.25 \cdot 0.74} = 0.387
$$
:::: Aggiungere Omega

### Definizione Indipendenza Stocastica
Partiamo da uno spazio probabilizzato $(\Omega, \mathcal{A}, P)$ e due eventi $A, B$. Diremo che $A$ e $B$ sono stocasticamente indipendenti se $P(A \cap B) = P(A)\cdot P(B)$.

Supponendo che $P(B) > 0$:
$$
P(A | B) = \frac{P(A \cap B)}{P(B)} \underbrace{ = }_{ S.I. }  \frac{P(A) \cdot P(B)}{P(B)} = P(A)
$$
Quindi il fatto che $B$ sia accaduto è ininfluente.

Se due eventi $A, B$ tali che $P(A) > 0, P(B) > 0$ e incompatibili, allora $0 = P(\emptyset) = P(A \cap B)$.
Se sono stocasticamente indipendenti allora $0 = \underbrace{ P(A) \cdot P(B) }_{ >0 }$ ma questo è assurdo. 
Se $A, B$ sono stocasticamente indipendenti, allora $A^{c}, B$ sono tra loro stocasticamente indipendenti.
:::: Esercizio per casa sono stocasticamente inipendenti

#### Esercizio
Dato un D6, $\Omega = \{ 1, \dots, 6 \}, \mathcal{A} = \mathcal{P}(\Omega), P(\{ i \}) = \frac{1}{6}, \forall i \in \Omega$
$A = \{ 2,4,6 \}, P(A) = \frac{1}{2}$
$B = \{ 3, 6 \}, P(B) = \frac{1}{3}$
$P(A \cap B) = P(\{ 6 \}) = \frac{1}{6}$
$P(A)P(B) = \frac{1}{6}$
Quindi $A, B$ sono stocasticamente indipendenti.

Consideriamo ora:
$$
P_{1}(\{ i \}) = 
\begin{cases} 
\frac{1}{12} \text{ se } i = 1,2,3,4 \\
\frac{1}{3} \text{ se } i = 5,6
\end{cases}
$$
$P(A) = \frac{1}{2}$
$P(B) = \frac{5}{12}$
$P(A \cap B) = \frac{1}{3}$
$P(A)P(B) = \frac{5}{24}$
Dunque ora $A,B$ non sono stocasticamente indipendenti.

### Definizione Indipendenza Stocastica per $n$ eventi
Diremo che $A_{1},\dots,A_{n}$ sono stocasticamente indipendenti se:
$$
P(A_{i_{1}} \cap  \dots  \cap A_{i_{k}}) = \prod_{j=1}^{k} P(A_{i_{j}}) = P(A_{i_{1}}) \cdot \dots \cdot P(A_{i_{k}})
$$
per ogni $k = 2,3, \dots, n$ e per tutti gli allineamenti $i_{1} < i_{2} < i_{3}< \dots <i_{k}$ di interi da $1$ a $n$.

#### Esercizio
Gli eventi sono $(M, M), (M, F), (F, M), (F, F)$.
$A_{1} = \{ \text{primo figlio M} \} = \{ (M, M), (M, F) \}$
$A_{2} = \{ \text{due figli di sesso diverso} \} = \{ (M, F), (F, M) \}$
$A_{3} = \{ \text{secondo figlio M} \} = \{ (M, M), (F, M) \}$

Sono $A_{1},A_{2},A_{3}$ stocasticamente indipendenti?
$A_{1} \cap A_{2} = \{ (M, F) \}$
$A_{1} \cap A_{3} = \{ (M, M) \}$
$A_{2} \cap A_{3} = \{ (F, M) \}$

Supponendo che $P(A_{i}) = \frac{1}{2}, i = 1,2,3$. $P(A_{i} \cap A_{j}) = \frac{1}{4} = P(A_{i})P(A_{j}) = \frac{1}{2} \cdot \frac{1}{2}$, quindi $A_{i}$ e $A_{j}$ sono stocasticamente indipendenti $\forall i,j=1,2,3; i \neq j$.

$0 = P(\emptyset) = P(A_{1} \cap A_{2} \cap A_{3}) \neq P(A_{1}) P(A_{2}) P(A_{3}) = \frac{1}{8}$

:::: fare esercizio 45 per vedere un caso parallelo per verdere un caso parallelo

## 2017-02-06
### 1
Possiamo prendere come spazio campionario il seguente:
$$
\Omega = \{ (A \cap B), (A \cap B^{c}), (A^{c} \cap B), (A^{c} \cap B^{c}) \}
$$
Dove:
$$
\begin{align}
A &= \{ \text{cane} \} \\
B  & = \{ \text{gatto} \}
\end{align}
$$
Analizziamo bene i dati forniti dal problema:
$$
\begin{align}
P(A) &= 0.06 \\
P(B|A) &= 0.83 \\
P(B) &= 0.11
\end{align}
$$
Ci viene chiesta la probabilità di:
$$
P(A \cap B) = P(B|A)P(A) = 0.498
$$
Dopo ci viene chiesto:
$$
P(A|B) = \frac{P(A \cap B)}{P(B)} = 0.4527273
$$
Notiamo che:
$$
P((A \cap B) \cap (A \cap B^{c})) = P(A \cap (B \cap B^{c})) = P(A \cap \emptyset) = P(\emptyset) = 0
$$
Calcolando ora:
$$
P(A \cap B^{c}) = P(B^{c}|A)P(A) = (1- P(B|A))P(A) = 0.0102 \neq 0
$$
Essendo $P(A\cap B)$ e $P(A \cap B^{c})$ entrambi non negativi si ha che:
$$
P(A \cap B)P(A \cap B^{c}) \neq 0 = P((A \cap B) \cap (A \cap B^{c}))
$$
Dunque i due eventi non sono indipendenti stocasticamente, sono solo incompatibili. In particolare sono compatibili perché la loro intersezione è l'insieme vuoto.
### 2
$$
F(x) = \begin{cases}
0 & x < 0 \\
\frac{x}{4}  & 0\leq x <1 \\
\frac{1}{2} + \frac{x-1}{4} & 1 \leq x < 2 \\
\frac{11}{12} & 2 \leq x < 3 \\
1 & x \geq 3
\end{cases}
$$
Stiamo parlando di una funzione di ripartizione dove la probabilità è il salto dei punti di discontinuità.
$$
\begin{align}
P(X = 1)  & = F(1) - F(1^{-}) = \frac{1}{2} - \frac{1}{4} = \frac{1}{4} \\
P(X = 2)  & = F(2) - F(2^{-}) = \frac{11}{12} - \frac{3}{4} = \frac{1}{6} \\
P(X = 3)  & = F(3) - F(3^{-}) = 1 - \frac{11}{12} = \frac{1}{12}
\end{align}
$$
Il calcolo per l'intervallo segue la stessa formula.
$$
P\left( \frac{1}{2} < X < \frac{3}{2} \right) = F\left( \frac{3}{2} \right) - F\left( \frac{1}{2} \right) = \frac{5}{8} - \frac{1}{8} = \frac{1}{2}
$$
Abbiamo a che fare con una funzione di distribuzione mista, perciò non è assolutamente continua e dunque non ha densità. Inoltre non è dotata nemmeno di funzione di probabilità.

### 3
La famiglia parametrica in questione è la famiglia della variabili aleatorie Bernoulliane: $X_{i}, i \in \{ 1,2,3,\dots,14 \}$

Utilizziamo il metodo dei momenti per stimare il parametr $p$ di $X \sim Ber(p)$.
Sappiamo che:
$$
\mathbb{E}(X) = p
$$
Possiamo dunque creare uno stimatore per $p$ nel modo seguente:
$$
\hat{p} = \frac{1}{14} \sum_{i=1}^{14} X_{i}
$$
Dato il campione del problema la nostra stima è:
$$
\hat{p} = \frac{1}{14} \cdot 10 =\frac{10}{14} = 0.7143
$$
La stima dei lotti non conformi è la stima di $(1-p)$, quindi:
$$
1 - \hat{p} = \frac{4}{14}
$$
### 4
La moda è $P(B|E_{1}) = 0.672$.

Notiamo che $E_{1}$ e $E_{2}$ formano una partizione su $\Omega$.
Per Bayes:
$$
\begin{align}
P(A)  & = \sum_{i=1}^{2} P(A \cap E_{i}) \\
 & = \sum_{i=1}^{2} P(A|E_{i})P(E_{i}) \\
 & = P(A|E_{1})P(E_{1}) + P(A|E_{2})P(E_{2}) \\
 & =P(A|E_{1})(1 - P(E_{2})) +P(A|E_{2})P(E_{2})
\end{align}
$$
da cui:
$$
\begin{align}
P(A|E_{1}) - P(A|E_{1})P(E_{2}) + P(A|E_{2})P(E_{2}) &= P(A) \\
P(E_{2})\left( P(A|E_{2}) -P(A|E_{1}) \right)  & = P(A)-P(A|E_{1}) \\
P(E_{2}) & =\frac{P(A) -P(A|E_{1})}{P(A|E_{2})-P(A|E_{1})} \\
P(E_{2}) & = 0.511
\end{align}
$$
$$
\begin{array}{|c|c|c|c|c|}
\hline
 & A & B & C & D \\
\hline
E_{1}  & 0.102 & 0.328 & 0.034 & 0.024 \\
\hline
E_{2}  & 0.015 & 0.062 & 0.380 & 0.054\\
\hline
\end{array}
$$
Prendiamo ad esempio $P(A\cap E_{1}) \approx 0.102$.
$$
P(A)P(E_{1}) \approx 0.057 \not\approx 0.102 \approx P(A \cap E_{1})
$$
Dunque le due variabili non sono stocasticamente indipendenti. Bastava osservare che $P(A|E_{1})\neq P(A|E_{2})$

Per Bayes:
$$
P(E_{1}|A) = \frac{P(A|E_{1})P(E_{1})}{P(A)} \approx 0.872
$$
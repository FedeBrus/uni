### Definizione Variabile aleatoria condizionata
Sia $Z = (X, Y) \sim p_{X,Y}(x, y)$. A questo punto possiamo definire:
$$
X | Y = y \sim p_{X|Y}(x|y), \forall y \in R_{Y}
$$
Dove:
$$
p_{X|Y}(x|y) = \frac{p_{X, Y}(x, y)}{p_{Y}(y)}
$$
Possiamo anche calcolare il valore atteso condizionato della variabile aleatoria $X$ data la variabile aleatoria $Y$:
$$
\mathbb{E}(X | Y = y) = \sum_{x \in R_{X}} x p_{X | Y} (x | y), \forall y \in R_{Y}
$$
Possiamo anche calcolare i momenti non centrati condizionati di ordine $r$:
$$
\mathbb{E}(X^{r}|Y = y) = \sum_{x \in R_{X}} x^{r} p_{X |Y}(x, y), \forall r \in \mathbb{N}
$$
Possiamo calcolare la varianza condizionata:
$$
Var(X | Y = y)= \mathbb{E}((X-\mathbb{E}(X|Y=y))^{2} |Y = y) = \sum_{x \in R_{X}}  (x - \mathbb{E}(X|Y = y))^{2} p_{X|Y}(x|y)
$$
#### Esempio
$$
\begin{align}
\mathbb{E}(X|Y=0) &= 1 \cdot \frac{1}{3} + 3 \cdot \frac{1}{3} \cdot 5 \cdot \frac{1}{3} = 3 \\
\mathbb{E}(X|Y=1) &= 2 \cdot 1 = 2 \\
\mathbb{E}(X|Y=2) &= 4 \cdot \frac{1}{2} + 6 \cdot \frac{1}{2} = 5
\end{align}
$$
$$
\begin{align}
Var(X|Y = 0) & = (1-3)^{2} \cdot \frac{1}{3} + (3 - 3)^{2} \cdot \frac{1}{3} + (5-3)^{2} \cdot \frac{1}{3} = \frac{8}{3} \\
Var(X|Y=1)  &= (2-2)^{2} \cdot 1 = 0 \\
Var(X | Y = 2) & = (4- 5)^{2} \cdot \frac{1}{2} + (6-5)^{2} \cdot \frac{1}{2} = 1
\end{align}
$$
Sia $Z(y) = \mathbb{E}(X | Y = y), \forall y \in R_{Y}$. Per ogni $y$ fissato questa è una funzione. Dunque $Z(Y)=\mathbb{E}(X|Y)$
Proviamo a calcolare:
$$
\begin{align}
P(Z(Y) = \pi) &= P(\emptyset) = 0 \\
P(Z(Y) = 2)  &= P(Y = 1) = p_{Y}(1) = \frac{1}{6} \\
P(Z(Y) = 3)  &= P(Y = 0) = p_{Y}(0) = \frac{3}{6} \\
P(Z(Y) = 5)  &= P(Y = 2) = p_{Y}(2) = \frac{2}{6}
\end{align}
$$
Dunque ora abbiamo creato una nuova variabile $Z$ che può assumere i valori $\{ 2,3,5 \}$ e la sua funzione di probabilità $p_{Z}(z)$.
Ora calcoliamo il valore atteso di $Z$:
$$
\mathbb{E}(Z) = 2 \cdot \frac{1}{6} + 3 \cdot \frac{3}{6} + 5 \cdot \frac{2}{6} = \frac{21}{6}
$$
Ma:
$$
\mathbb{E}(Z) = \mathbb{E}(\mathbb{E}(X|Y))
$$
Ora ne calcoliamo la varianza:
$$
Var(\mathbb{E}(X|Y)) = Var(Z) = \left( 2 - \frac{21}{6} \right)^{2} \cdot \frac{1}{6} + \left( 3- \frac{21}{6} \right)^{2} \cdot \frac{3}{6} + \left( 5- \frac{21}{6} \right)^{2} \cdot \frac{2}{6}
$$
Possiamo costruire un'altra variabile aleatoria $W(y)= Var(X|Y=y), \forall y \in R_{Y}$ e $W(Y)=Var(X|Y)$.
$$
\begin{align}
P(W = 0) &= P(Y = 1) = \frac{1}{6} \\
P(W = 1) &= P(Y = 2) = \frac{2}{6} \\
P\left( W = \frac{8}{3} \right) &= P(Y = 0) = \frac{3}{6}
\end{align}
$$
Ora possiamo calcolare valore atteso e volendo anche varianza:
$$
\mathbb{E}(W(Y)) =  0 \cdot \frac{1}{6} + 1 \cdot \frac{2}{6} + \frac{8}{3} \cdot \frac{3}{6} = \frac{10}{6}
$$
### Proprietà del valore atteso iterato
$$
\mathbb{E}(\mathbb{E}(X|Y)) = \mathbb{E}(X)
$$
### Dimostrazione
$$
\begin{align}
\mathbb{E}(\mathbb{E}(X|Y))&=  \sum_{y \in R_{Y}} \mathbb{E}(X | Y= y) p_{Y}(y) \\
 & = \sum_{y \in R_{Y}} \left(  \sum_{x \in R_{X}} x p_{X|Y}(x | y)  \right) p_{Y}(y) \\
 & = \sum_{y \in R_{Y}} \sum_{x \in R_{X}} x p_{X, Y}(x, y) \\
 & = \sum_{x \in R_{X}} x\sum_{y \in R_{Y}} p_{X, Y}(x, y) \\
 & = \sum_{x \in R_{X}} x p_{X}(x) \\
 & = \mathbb{E}(X)
\end{align}
$$
### Formula della scomposizione della varianza
$$
Var(X) = \mathbb{E}(Var(X|Y)) + Var(\mathbb{E}(X|Y))
$$
### Dimostrazione
$$
\begin{align}
Var(X) &=  \sum_{x \in R_{X}} (x - \mathbb{E}(X))^{2} p_{X}(x) \\
 & = \sum_{x \in R_{X}} (x - \mathbb{E}(X))^{2} \sum_{y \in R_{Y}} p_{X, Y}(x, y) \\
 & = \sum_{x \in R_{X}} \sum_{y \in R_{Y}} (x- \mathbb{E}(X|Y=y)) + (\mathbb{E}(X |Y = y) - \mathbb{E}(X))^{2} p_{X,Y}(x,y) \\
 & = \sum_{x \in R_{X}} \sum_{y \in R_{Y}} (x - \mathbb{E}(X | Y = y))^{2} p_{X, Y}(x,y)  \\
&+ \sum_{x \in R_{X}}  \sum_{y \in R_{Y}} (\mathbb{E}(X|Y = y)-\mathbb{E}(X))^{2} p_{X, Y}(x,y)  \\
&+ 2 \sum_{x \in R_{X}} \sum_{y \in R_{Y}} (x- \mathbb{E}(X|Y= y))(\mathbb{E}(X|Y=y)- \mathbb{E}(X))p_{X,Y}(x, y) \\
 & = \sum_{x \in R_{X}} \sum_{y \in R_{Y}} (x - \mathbb{E}(X | Y = y))^{2} p_{X, Y}(x,y)  \\
&+ \sum_{x \in R_{X}}  \sum_{y \in R_{Y}} (\mathbb{E}(X|Y = y)-\mathbb{E}(X))^{2} p_{X, Y}(x,y)  \\
&+ 2 \sum_{y \in R_{Y}}(\mathbb{E}(X|Y=y)- \mathbb{E}(X)) \sum_{x \in R_{X}} (x- \mathbb{E}(X|Y= y))p_{X,Y}(x, y) \\
 & = \sum_{x \in R_{X}} \sum_{y \in R_{Y}} (x - \mathbb{E}(X | Y = y))^{2} p_{X, Y}(x,y)  \\
&+ \sum_{x \in R_{X}}  \sum_{y \in R_{Y}} (\mathbb{E}(X|Y = y)-\mathbb{E}(X))^{2} p_{X, Y}(x,y)  \\
&+ 2 \sum_{y \in R_{Y}}(\mathbb{E}(X|Y=y)- \mathbb{E}(X))p_{Y}(y) \sum_{x \in R_{X}} (x- \mathbb{E}(X|Y= y))p_{X|Y}(x|y) \\
 & = \sum_{x \in R_{X}} \sum_{y \in R_{Y}} (x - \mathbb{E}(X | Y = y))^{2} p_{X, Y}(x,y)  \\
&+ \sum_{x \in R_{X}}  \sum_{y \in R_{Y}} (\mathbb{E}(X|Y = y)-\mathbb{E}(X))^{2} p_{X, Y}(x,y)  \\
&+ 2 \sum_{y \in R_{Y}}(\mathbb{E}(X|Y=y)- \mathbb{E}(X))p_{Y}(y) \sum_{x \in R_{X}} 0 \\
 & = \sum_{x \in R_{X}} \sum_{y \in R_{Y}} (x - \mathbb{E}(X | Y = y))^{2} p_{X, Y}(x,y) + \sum_{x \in R_{X}}  \sum_{y \in R_{Y}} (\mathbb{E}(X|Y = y)-\mathbb{E}(X))^{2} p_{X, Y}(x,y)
\end{align}
$$
Guardiamo il primo termine:
$$
\begin{align}
\sum_{x \in R_{X}} \sum_{y \in R_{Y}} (x - \mathbb{E}(X | Y= y))^{2} p_{X, Y} (x, y) &= \sum_{y \in R_{Y}} p_{Y}(y)  \sum_{x \in R_{X}} (x - \mathbb{E}(X | Y = y))^{2} p_{X | Y}(x | y) \\
 & = \sum_{y \in R_{Y}} p_{Y}(y) Var(X | Y = y) \\
 & = \mathbb{E}(Var(X| Y))
\end{align}
$$
Guardiamo il secondo termine:
$$
\begin{align}
\sum_{x \in R_{X}} \sum_{y \in R_{Y}} (\mathbb{E}(X | Y = y)- \mathbb{E}(X))^{2} p_{X, Y}(x , y) &= \sum_{y \in R_{Y}} p_{Y}(y) (\mathbb{E}(X | Y = y) - \mathbb{E}(X))^{2} \sum_{x \in R_{X}} p_{X|Y}(x | y) \\
 & = \sum_{y \in R_{Y}} (\mathbb{E}(X| Y = y) - \mathbb{E}(X))^{2}p_{Y}(y) \\
 & = \sum_{y \in R_{Y}} (\mathbb{E}(X| Y = y) - \mathbb{E}(\mathbb{E}(X|Y = y)))^{2}p_{Y}(y) \\
 & = Var(\mathbb{E}(X|Y))
\end{align}
$$
Dunque:
$$
Var(X) = \mathbb{E}(Var(X|Y)) + Var(\mathbb{E}(X|Y))
$$
### Definizione indipendenza stocastica tra due variabili aleatorie
Due variabili aleatorie discrete sono tra loro stocasticamente indipendenti se:
$$
p_{X,Y}(x, y) = p_{X}(x)p_{Y}(y), \forall (x, y) \in R_{X} \times R_{Y}
$$
Se due variabili aleatorie $X, Y$ sono stocasticamente indipendenti, allora:
$$
p_{X | Y}(x | y)= p_{X}(x), \forall (x, y) \in R_{X} \times R_{Y}
p_{Y | X}(y | x)= p_{Y}(y), \forall (x, y) \in R_{X} \times R_{Y}
$$
Infatti:
$$
p_{X | Y}(x, y)p_{Y}(y) = p_{X, Y}(x, y) = p_{X}(x) p_{Y}(y) \Longleftrightarrow p_{X|Y}(x | y) = p_{X}(x)
$$
### Definizione indipendenza in media
Date due variabili aleatorie $X, Y$, diremo che $X$ è indipendente in media dalla $Y$ se:
$$
\mathbb{E}(X | Y = y) = \mathbb{E}(X), \forall y \in R_{Y}
$$
Questa indipendenza non è simmetrica, se $X$ è indipendente in media dalla $Y$, non è detto il viceversa.
#### Esempio

|     | $Y$  |               |               |
| --- | ---- | ------------- | ------------- |
| $X$ |      | $-1$          | $1$           |
|     | $-1$ | $\frac{1}{2}$ | $\frac{1}{3}$ |
|     | $0$  | $0$           | $\frac{1}{3}$ |
|     | $1$  | $\frac{1}{2}$ | $\frac{1}{3}$ |
Questa sono le funzioni di probabilità condizionate della $X|Y=y$.
$$
\begin{align}
\mathbb{E}(X | Y = -1) = -1 \cdot \frac{1}{2} + 1 \cdot \frac{1}{2} = 0 \\
\mathbb{E}(X | Y = 1) = -1 \cdot \frac{1}{3} + 0 \cdot \frac{1}{3} + 1 \cdot \frac{1}{3} = 0
\end{align}
$$
$$
\mathbb{E}(\mathbb{E}(X|Y)) = \mathbb{E}(X) = 0 \cdot p_{Y}(-1) + 0 \cdot p_{Y}(1) = 0
$$
Quindi la $X$ è indipendente in media dalla $Y$. Ma $X$ e $Y$ non sono stocasticamente indipendenti.
### Teorema
Se $X, Y$ sono stocasticamente indipendenti allora $X, Y$ sono tra loro indipendenti in media.
$$
p_{X,Y}=p_{X}(x)p_{Y}(y) \implies \begin{cases} \mathbb{E}(X|Y = y) = \mathbb{E}(X) & \forall y \in R_{Y} \\ \mathbb{E}(Y | X = x)= \mathbb{E}(Y) & \forall x \in R_{X} \end{cases}
$$
### Dimostrazione
$$
\mathbb{E}(X |Y = y) = \sum_{x \in R_{X}} x p_{X|Y} (x |y) = \sum_{x \in R_{X}} x p_{X}(x) = \mathbb{E}(X), \forall y \in R_{Y}
$$
La stessa dimostrazione vale per l'altro caso.

### Definizione indice di dipendeza in media (Rapporto di correlazione)
$$
0 \leq \eta^{2}_{X | Y} = \frac{Var(\mathbb{E}(X |Y))}{Var(X)} = 1- \frac{\mathbb{E}(Var(X | Y))}{Var(X)} \leq 1 \qquad Var(X) > 0
$$

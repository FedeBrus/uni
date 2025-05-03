### Definizione Indicie di dipendenza in media (Rapporto di correlazione)
$$
0 \leq \eta^{2}_{X|Y} = \frac{Var(\mathbb{E}(X|Y))}{Var(X)} = 1 - \frac{\mathbb{E}(Var(X|Y))}{Var(X)} \leq 1
$$
$\eta^{2}_{X|Y} = 0 \Longleftrightarrow Var(\mathbb{E}(X|Y)) = 0 \Longleftrightarrow \mathbb{E}(X|Y)$ è degenere. Cioè $X$ è indipendente in media da $Y$.
$\eta^{2}_{X|Y}>0$ allora $X$ è dipendente in media da $Y$.
$\eta^{2}_{X|Y} = 1 \Longleftrightarrow P(X = \mathbb{E}(X|Y)) = 1$. Vuol dire che data una $Y$ riusciamo a determinare la $X$.

### Definizione Inidipendenza in varianza
Diremo che $X$ variabile aleatoria è indipendente in varianza da $Y$ variabile aleatoria se:
$$
Var(X|Y = y) = \sigma^{2}, \qquad \forall y \in R_{Y}
$$
#### Esempio
Si prelevano altezza e peso di diverse persone. Le altezze sono $x_{1},x_{2},x_{3},\dots,x_{6}$. Indichiamo $y_{ij}$ con $i = 1,\dots,6$ associate alle $x_{1},\dots,x_{6}$ e $j = 1, \dots, n_{i}$.
$$
\bar{y} = \frac{\sum_{i=1}^{6} \sum_{j=1}^{n_{i}}  y_{ij}}{\sum_{i=1}^{6} n_{i}}
$$
$\bar{\mu}$ è la media campionaria e gioca il ruolo di $\mathbb{E}(Y)$.

Ora consideriamo $\bar{y}_{1}, \dots, \bar{y}_{2}$ dove $\bar{y}_{i}$ la media aritmetica dei $y_{ij}$ con $i$ fissato. Ovvero:
$$
\bar{y}_{i} = \frac{\sum_{j=1}^{n_{i}} y_{ij}}{n_{i}}
$$
Queste sono chiamate medie campionarie condizionate e giocano il ruolo di $\mathbb{E}(Y|X=x_{i})$.

Ora possiamo calcolarci $\sigma_{i}^{2}$:
$$
\sigma_{i}^{2}= \sum_{j=1}^{n_{i}} \frac{(y_{ij}-\bar{y}_{i})^{2}}{n_{i}}
$$
Queste sono chiamate varianze condizionate e giocaon il ruolo di $Var(Y|X=x_{i})$.
Ma in questo caso i diversi $\bar{y}_{i}$ sono diversi tra di loro quindi $Y$ è dipendente in media rispetto a $X$, in quanto conoscere $X$ cambia la media.
Siccome le $\sigma_{i}^{2}$ non sono uguali tra di loro, allora la $Y$ è dipendente in varianza rispetto a $X$.

Possiamo definire la varianza marginale di $Y$:
$$
\sigma_{Y}^{2} = \frac{\sum_{i = 1}^{6} \sum_{j=1}^{n_{i}}  (y_{ij} - \bar{y})^{2}}{\sum_{i=1}^{6} n_{i}}
$$
La chiamiamo varianza campionaria della $Y$ e gioca il ruolo di $Var(Y)$.
Consideriamo che:
$$
Var(Y) = Var(\mathbb{E}(Y|X)) + \mathbb{E}(Var(Y|X))
$$
e quindi:
$$
\sigma_{Y}^{2} = \frac{\sum_{i=1}^{6} (\bar{y}_{i} - \bar{y})^{2} n_{i}}{\sum_{i=1}^{6} n_{i}} + \frac{\sum_{i=1}^{6} n_{i}\sigma_{i}^{2}}{\sum_{i=1}^{6} n_{i}}
$$
che è la varianza delle medie condizionate sommata alla media delle varianze condizionate.

$\eta^{2}_{Y|X}$ sarà più grande per i dati del grafico di destra, in quanto con $\sigma^{2}_{Y}$ fissato, essendo in esso la varianza delle medie condizionate più grande il rapporto aumenta.

### Definzione Funzione di regressione
Chimiamiamo funzione di regressione una funzione che passa per tutte le medie condizionate.

Una funzione più semplice che approssima una funzione di regressione viene chiamata modello.
#### Modello anni 70'
$$
y = \sum_{j=0}^{p}  \beta_{j}x^{j}
$$
#### Modello anni 2020'
$$
y = \sum_{j_{1}=0}^{p_{1}}  \beta_{j_{1}} \sigma \left( \sum_{j_{2} = 0}^{p_{2}} \beta j_{2} x^{j_{2}} \right)^{j_{1}}
$$
### Definizione Momenti visti di ordine $r$ e $s$
$$
\mathbb{E}(X^{r}Y^{s}) = \sum_{x \in R_{X}} \sum_{y \in R_{Y}}  x^{r}y^{s} p_{X, Y} (x, y)
$$
Possono essere anche centrati:
$$
\mathbb{E}((X - \mathbb{E}(X))^{r}(Y - \mathbb{E}(Y))^{s}) = \sum_{x \in R_{X}} \sum_{y \in R_{Y}}(X - \mathbb{E}(X))^{r}(Y - \mathbb{E}(Y))^{s} p_{X, Y}(x,y)
$$
Definiamo la covarianza:
$$
Cov(X, Y) = \mathbb{E}((X - \mathbb{E}(X))(Y - \mathbb{E}(Y))) = \mathbb{E}(XY) - \mathbb{E}(X)\mathbb{E}(Y)
$$
Osserviamo la $Cov(X, X) = \mathbb{E}((X - \mathbb{E}(X))(X - \mathbb{E}(X))) = \mathbb{E}((X - \mathbb{E}(X))^{2}) = Var(X)$.

Una proprietà della covarianza è:
$$
Cov(aX+b, cY+d) = ac \cdot Cov(X,Y)
$$
### Definizione Indipendenza lineare
Due variabili aleatorie $X$ e $Y$ sono indipendenti linearmente se:
$$
Cov(X, Y) = 0 \Longleftrightarrow \mathbb{E}(XY) = \mathbb{E}(X) \mathbb{E}(Y)
$$
### Definizione Indice di correlazione (di Pearson)
$$
-1 \leq \rho(X, Y) = \frac{Cov(X,Y)}{\sqrt{ Var(X)Var(Y) }} \leq 1
$$
Dunque:
$$
\rho(aX + B, cY + d) = \frac{ac \cdot Cov(X, Y)}{\sqrt{ a^{2} Var(X) c^{2} Var(Y) }} = \frac{ac}{\sqrt{ a^{2}c^{2} }} \rho(X, Y) = sign(ac)\rho(X, Y)
$$
Riassumendo abbiamo che:
$\rho(X, Y)=  0$ allora $X$ e $Y$ sono linearmente indipendenti.
$\left| \rho(X, Y) \right| = 1$ allora $\exists a,b : P(Y=aX + b) = 1$.
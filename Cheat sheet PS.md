### Algebra
1. $\Omega \in \mathcal{A}, \emptyset \in \mathcal{A}$
2. $A \in \mathcal{A}\Longleftrightarrow A^{c} \in \mathcal{A}$
3. Se $\{ A_{i} \}_{i=1}^{+\infty}$ tale che $A_{i}\in \mathcal{A}, \forall i\in \mathbb{N}$, allora $\bigcup_{i = 1}^{+\infty} A_{i}\in \mathcal{A}$.
### Teorema
Date due algebre $\mathcal{A}_{1}, \mathcal{A}_{2}$ di $\Omega$, allora $\mathcal{A} = \mathcal{A}_{1} \cap \mathcal{A}_{2}$ è un'algebra di $\Omega$.
### Regolette
$P(A^{c}) = 1 - P(A)$
$\Omega = A \cup A^{c}$
$\emptyset = A \cap A^{c}$
$P(A \cup B) = P(A) + P(B) - P(A \cap B)$
$A \subseteq B \implies P(A) \leq P(B)$
$A=(A \cap B)\cup(A \cap B^{c})$
$(A^{c} \cap B) = (B\setminus(A \cap B))$
### Calcolo combinatorio
$D_{n,r}^{\star}=n^{r}$ (disp rep)
$D_{n, r} = n(n-1)\dots(n-r+1)=\frac{n!}{(n-r)!}$ (disp no rep)
$P_{n}=n!$
$C_{n,r}=\frac{n!}{(n-r)!r!}=\binom{n}{r}$
### Probabilità condizionata
$P(A|B)=\frac{P(A \cap B)}{P(B)}$
Classe di eventi se:
- $A_{n} \in \mathcal{A}$
- $\bigcup_{n = 1}^{+\infty} A_{n} = \Omega$
- $A_{i} \cap A_{j} = \emptyset, \forall i \neq j, \qquad i, j = 1,2,\dots$

$\{ A_{n} \}^{+\infty}_{n=1}$ partizione e $B \in \mathcal{A}$. Allora:
$$
P(B) = \sum_{n=1}^{+\infty} P(A_{n}\cap B) = \sum_{n=1}^{+\infty}  P(A_{n})P(B | A_{n})
$$
### Teorema di Bayes
$\{ A_{i} \}_{i = 1}^{+\infty}$ partizione. Allora:
$P(A_{i} | B) = \frac{P(B | A_{i}) P(A_{i})}{\sum_{j=1}^{+\infty}  P(B|A_{j})P(A_{j})}$
### Funzione di distribuzione
- non decrescente
- $\forall x_{0} \in \mathbb{R}, \lim_{ x \to x_{0}^{+} } F(x) = F(x_{0})$
- ammette limite a sinsitra
- $\lim_{ x \to +\infty } F(x) = 1$
- $\lim_{ x \to -\infty } F(x) = 0$
- $P((a, b]) = F(b) - F(a)$

Funzioni di distribuzione continua:
$P([a, b]) = P((a, b]) = P([a, b)) = P((a, b))$

### Funzione di densità
- $f$ è non negativa su $\mathbb{R}$
- $\int_{-\infty}^{x}f(t)dt=F(x), \forall x \in \mathbb{R}$
- $\int_{-\infty}^{+\infty}f(t)dt = 1$

Funzione di desnità:
$P((a, b])=\int_{a}^{b}f(t)dt$
### Funzione di probabilità
- $p$ è non negativa su $\mathbb{R}$
- $F(x) = \sum_{z : z \leq x} p(z) = \sum_{z\in R: z \leq x} p(z)$
- $\sum_{x \in R_{X}} p(x)=1$

### Serie
$\sum_{i=0}^{\infty}q^{i}=\frac{1}{1-q}$

### Variabili aleatorie

Se $Y(x)$ stret monot e der in $(a, b)$, allora:
$$
\alpha = min (Y(a), Y(b)) \qquad \beta = max(Y(a), Y(b))
$$
$$
f_{Y}(y) = \begin{cases}
f_{X}(Y^{-1}(y)) \cdot | \frac{\partial}{\partial y} Y^{-1}(y) |  & \alpha < y < \beta \\
0 & \text{altrimenti} 
\end{cases}
$$
$a$ e $b$ sono gli estremi del supporto di $X$.
### Valore atteso
$$
\mathbb{E}(X) = \begin{cases}
\sum_{x \in R_{X}}  xp_{X}(x)  & \text{se } X \text{ discreta} \\
\int_{-\infty}^{+\infty} xf_{X}(x)dx  &  \text{ se } X \text{ assolutamente continua}
\end{cases}
$$
$\mathbb{E}(aX + b) = a \mathbb{E}(X) + b$
### Teorema
Data una variabile aleatoria $X$ e una trasformazione di variabile aleatoria $Y = g(x)$ dove $g : \mathbb{R} \rightarrow \mathbb{R}$ allora, se esiste $\mathbb{E}(Y)$ esso può essere calcolato come:
$$
\mathbb{E}(Y)=  \mathbb{E}(g(X)) = \begin{cases}
\sum_{x \in R_{X}} g(x) p_{X}(x) & \text{se } X \text{ discreta} \\
\int_{-\infty}^{+\infty} g(x) f_{X}(x) dx  &  \text{se } X \text{ continua}
\end{cases}
$$
$\mu_{n} = \mathbb{E}(X^{n})$
$\bar{\mu}_{n}=\mathbb{E}((X- \mathbb{E}(X))^{n})$

$Var(X) = \mathbb{E}((X-\mathbb{E}(X))^{2}) = \mathbb{E}(X^{2})-\mathbb{E}(X)^{2} \geq 0$
$Var(aX+b) = a^{2}Var(X)$

Standardizzazione
Sia $X \sim N(\mu, \sigma^{2})$
$Z = \frac{X-\mu}{\sigma} \sim N(0,1)$
destandardizzazione: $X = \sigma Z+\mu$

probabilità di un rettangolo:
$P_{Z} (\{x_{1}<X\leq x_{2} \} \cap \{ y_{1} < Y \leq y_{2} \}) = F_{X, Y}(x_{2},y_{2}) - F_{X, Y}(x_{2},y_{1}) -F_{X,Y}(x_{1},y_{2}) + F_{X, Y}(x_{1},y_{1})$
$f_{X, Y}(x, y) \geq 0, \forall(x, y) \in \mathbb{R}^{2}, \int_{-\infty}^{+\infty} \int_{-\infty}^{+\infty} f_{X, Y} (x, y) dydx = 1, F_{X, Y}(x, y) = \int_{-\infty}^{x} \int_{-\infty}^{y} f_{X, Y} (u, v) dvdu$
idem discreta
$p_{X}(x) = \sum_{y \in R_{Y}} p_{X, Y}(x, y)$
$p_{Y}(y) = \sum_{x \in R_{X}} p_{X, Y}(x, y)$
$F_{X,Y} (x, y) = \sum_{u \leq x} \sum_{v \leq y} p_{X, Y} (u, v)$
$p_{X|Y}(x | y) = \frac{p_{X, Y}(x, y)}{p_{Y}(y)}$
$\mathbb{E}(X | Y = y) = \sum_{x \in R_{X}} x p_{X | Y} (x | y), \forall y \in R_{Y}$
$\mathbb{E}(X^{r}|Y = y) = \sum_{x \in R_{X}} x^{r} p_{X |Y}(x, y), \forall r \in \mathbb{N}$
$Var(X | Y = y)= \mathbb{E}((X-\mathbb{E}(X|Y=y))^{2} |Y = y) = \sum_{x \in R_{X}}  (x - \mathbb{E}(X|Y = y))^{2} p_{X|Y}(x|y)$
$\mathbb{E}(\mathbb{E}(X|Y))=\mathbb{E}(X)$
$Var(X) = \mathbb{E}(Var(X|Y)) + Var(\mathbb{E}(X|Y))$
### Definizione indipendenza in media
$X$ è ind in media da $Y$ se:
$\mathbb{E}(X | Y = y) = \mathbb{E}(X), \forall y \in R_{Y}$
Questa indipendenza non è simmetrica.
### Definizione Indicie di dipendenza in media (Rapporto di correlazione)
$0 \leq \eta^{2}_{X|Y} = \frac{Var(\mathbb{E}(X|Y))}{Var(X)} = 1 - \frac{\mathbb{E}(Var(X|Y))}{Var(X)} \leq 1$
$\eta^{2}_{X|Y} = 0 \Longleftrightarrow Var(\mathbb{E}(X|Y)) = 0 \Longleftrightarrow \mathbb{E}(X|Y)$ è degenere. Cioè $X$ è indipendente in media da $Y$.
$\eta^{2}_{X|Y}>0$ allora $X$ è dipendente in media da $Y$.
$\eta^{2}_{X|Y} = 1 \Longleftrightarrow P(X = \mathbb{E}(X|Y)) = 1$. Vuol dire che data una $Y$ riusciamo a determinare la $X$.
### Definizione Inidipendenza in varianza
Diremo che $X$ variabile aleatoria è indipendente in varianza da $Y$ variabile aleatoria se:
$Var(X|Y = y) = Var(X) = \sigma^{2}, \qquad \forall y \in R_{Y}$
### Definizione Momenti misti di ordine $r$ e $s$
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
$\mathbb{E}\left( \sum_{i=1}^{n} a_{i}X_{i}+b_{i} \right)  = \sum_{i=1}^{n} a_{i}\mathbb{E}(X_{i}) + \sum_{i=1}^{n} b_{i}$
$Var\left( \sum_{i=1}^{n} a_{i}X_{i} + b_{i} \right) = \sum_{i=1}^{n} a_{i}^{2} Var(X_{i}) + 2\sum_{i=1}^{n} \sum_{j<i} a_{i}a_{j} \cdot Cov(X_{i}, X_{j})$
$Var(aX + bY + c) = a^{2} Var(X) + b^{2} Var(Y)+2ab \cdot Cov(X,Y)$
se incorrelate:
$Var(aX+bY+c)=a^{2}Var(X)+b^{2}Var(X)$
### Disuguaglianza di Markov
Sia $Y$ una variabile aleatoria non negativa ($P(Y < 0) = 0$), allora $\forall a > 0$ abbiamo che:
$$
P(Y \geq a) \leq \frac{\mathbb{E}(Y)}{a}
$$
### Disugaglianza di Chebychev
Sia $Y$ una variabile aleatoria tale che $\mu= \mathbb{E}(Y), \sigma^{2} = Var(Y)$, allora $\forall \varepsilon > 0$:
$$
P(|Y - \mu| \geq \varepsilon) \leq \frac{\sigma^{2}}{\varepsilon^{2}}
$$
### Definizione Convergenza in media quadratica
La successione di variabili aleatorie converge in media quadratica alla variabile aleatoria limite $X$ se considerando la successione numerica $\{ a_{i} \}_{i = 1}^{+\infty}$ definita come $a_{i} = \mathbb{E}((X_{i} - X)^{2})$, $\lim_{ i \to +\infty } a_{i} = 0$. 
### Definizione Convergenza di Probabilità
La successione di variabili aleatorie $\{ X_{i} \}_{i = 1}^{+\infty}$ converge in probabilità alla variabile aleatoria limite $X$ se $\forall\varepsilon>0$ la successione numerica definita tramite gli eventi $A_{i}$ tali che:
$$
\begin{align}
A_{i} &= \{ \omega \in \Omega : |X_{i}(\omega)-X(\omega)| \geq \varepsilon \} \\
a_{i} &= P(A_{i})
\end{align}
$$
se $\lim_{ i \to +\infty } a_{i} = 0$.
Scriveremo:
$$
X_{i} \xrightarrow{\text{P}} X
$$
### Implicazoini tra indipendenze
### Implicazioni tra convergenze
(quasi certa (da vedere se includere))

### Teorema Legge debole dei grandi numeri
Supponiamo di avere $\{ X_{i} \}_{i=1}^{+\infty}$ di variabili aleatorie indipendenti e tali che $\mathbb{E}(X_{i})=\mu$ e $Var(X_{i})=\sigma^{2}$ per ogni $i \in \mathbb{N}$.
Allora la successione $\{ S_{n} \}_{n = 1}^{+\infty}$ dove $S_{n}=\frac{1}{n} \sum_{i=1}^{n} X_{i}$ è tale che:
$$
S_{n} \xrightarrow{\text{P}}\mu
$$
Siccome tende a $\mu$ costante, la variabile limite è degenere, ovvero assume il valore $\mu$ con probabilità $1$.
### Definizione convergenza in distribuzione
La successione $\{ X_{i} \}_{i = 1}^{+\infty}$ tali che $X_{i}\sim F_{i}$ converge alla variabile aleatoria limite $X \sim F$ se per ogni punto di continuità della $F$ abbiamo che:
$$
\lim_{ i \to +\infty } F_{i}(x) =F(x)
$$
Quindi bisogna ignorare qualsiasi punto di discontinuità di $F$.
### Teorema Centrale del limite
$\{ Y_{i} \}_{i = 1}^{+\infty}, \mu = \mathbb{E}(Y_{i}), \sigma^{2} = Var(Y_{i}), \forall i \in \mathbb{N}$. $Y_{i}$ sono indipendenti tra di loro.
$$
\bar{Y}_{n} = \frac{1}{n} \sum_{i=1}^{n} Y_{i}
$$
$$
\mathbb{E}(\bar{Y}_{n}) = \frac{1}{n} \sum_{i=1}^{n} \mathbb{E}(Y_{i}) = \mu
$$
$$
Var(\bar{Y}_{n}) = \frac{Var(Y_{i})}{n} = \frac{\sigma^{2}}{n}
$$
e per la legge dei grandi numeri:
$$
\bar{Y}_{n} \xrightarrow{\text{p}} \mu
$$
Consideriamo ora:
$$
Z_{n} = \frac{\bar{Y}_{n} - \mu}{\sqrt{  \frac{\sigma^{2}}{n} }} = \sqrt{ n } \frac{\bar{Y}_{n} - \mu}{\sigma}
$$
allora $Z_{n} \xrightarrow{\text{D}}Z$ dove $Z \sim N(0 , 1)$.
Più avanati scriveremo così:
$$
\bar{Y}_{n} \overset{a}{\sim} N\left( \mu, \frac{\sigma^{2}}{n} \right)
$$

Definiamo $B(T, \mu) = \mathbb{E}(T)-\mu= \mathbb{E}(T - \mu)$. 
Non (asinoticamente) distorto se (il limite) $B(T, \mu) = 0$.
$MQE(T, \mu) = Var(T) + B(T, \mu)^{2}$
$T$ consistente in media quadratica a $\mu$ se $\lim_{ n \to +\infty } MSE(T, \mu) = 0, \forall \mu$. T convege in media quadratica a $\mu$.
$$
T_{n} \xrightarrow{\text{MQ}} \mu
$$
metodo dei minimi quadrati
- porre derivata di sommatoria di scarti quadratici a 0
- trovare mu stimatore.
metodo dei momenti
- trovare i parametri in funzione dei momenti teorici
- sostituire ai momenti teorici gli equivalenti momenti emprici
metodo della verosomiglianze
- se sono indipendenti fai la produttoria di ogni densità
- dopodiché bisogna massimizzare questa cosa
- fanne il logaritmo se semplifica
- deriva rispetto al parametro
- poni la derivata a 0 e trova il parametro
### Teorema
Se $X_{i}\xrightarrow{\text{QC}}X \implies X_{i} \xrightarrow{\text{P}}X$

### Teorema Legge debole dei grandi numeri
Supponiamo di avere $\{ X_{i} \}_{i=1}^{+\infty}$ di variabili aleatorie indipendenti e tali che $\mathbb{E}(X_{i})=\mu$ e $Var(X_{i})=\sigma^{2}$ per ogni $i \in \mathbb{N}$.
Allora la successione $\{ S_{n} \}_{n = 1}^{+\infty}$ dove $S_{n}=\frac{1}{n} \sum_{i=1}^{n} X_{i}$ è tale che:
$$
S_{n} \xrightarrow{\text{P}}\mu
$$
Siccome tende a $\mu$ costante, la variabile limite è degenere, ovvero assume il valore $\mu$ con probabilità $1$.
### Dimostrazione
Dalla scorsa volta sappiamo che $\mathbb{E}(S_{n})=\mu, \forall n \in \mathbb{N}$.
Inoltre $Var(S_{n}) = \frac{\sigma^{2}}{n}, \forall n \in \mathbb{N}$.
Infine sappiamo che $P(|S_{n}-\mu| \geq \varepsilon)\leq \frac{Var(S_{n})}{\varepsilon^{2}}, \forall \varepsilon$.
$$
0 \leq \lim_{ n \to +\infty }  P(|S_{n} - \mu| \geq \varepsilon) \leq \lim_{ n \to +\infty } \frac{\sigma^{2}}{n\varepsilon^{2}}  = 0, \forall \varepsilon >0
$$
Il concetto è che la media aritmetica dei valori di tot variabili aleatorie identiche si avvicina sempre di più al valore atteso teorico della singola variabile all'aumentare di $n$.
#### Esempio
Siano $X_{i} \sim Ber(p)$ indipendenti. Consideriamo $Y_{n}=\sum_{i=1}^{n} X_{i} \sim Bin(n, p)$. Dunque $\mathbb{E}(Y_{n}) = np$ e $Var(Y_{n})=np(1-p)$.
$$
S_{n} = \frac{Y_{n}}{n} = \frac{1}{n} \sum_{i=1}^{n} X_{i}
$$
ma allora:
$$
\mathbb{E}(S_{n}) = \frac{np}{n} = p
$$
$$
Var(S_{n}) = \frac{1}{n^{2}} Var(Y_{n})= \frac{np(1-p)}{n^{2}} = \frac{p(1-p)}{n}
$$
Dunque $S_{n} \xrightarrow{\text{P}} p$.

### Definizione convergenza in distribuzione
La successione $\{ X_{i} \}_{i = 1}^{+\infty}$ tali che $X_{i}\sim F_{i}$ converge alla variabile aleatoria limite $X \sim F$ se per ogni punto di continuità della $F$ abbiamo che:
$$
\lim_{ i \to +\infty } F_{i}(x) =F(x)
$$
Quindi bisogna ignorare qualsiasi punto di discontinuità di $F$.
#### Esempio
Consideriamo $X_{i}\sim F_{i}$.
![[disegnoF_i]]
$\forall x \in (0, +\infty), F_{i}(x) = 1, F(x) = 1$ dunque $\lim_{ i \to +\infty } F_{i}(x) = F(x)$.
$\forall x \in (-\infty, -1], F_{i}(x) = 0, F(x) = 0$ dunque $\lim_{ i \to +\infty } F_{i}(x) = F(x)$.
$\forall x \in (-1, 0), F_{i}(x)=\begin{cases} ix + 1 & x \in \left( -\frac{1}{i}, 0 \right) \\ 0 & \text{altrimenti }\end{cases}, F(x)= 0$ dunque $\lim_{ i \to +\infty } F_{i}(x) = F(x)$
Perché all'aumentare di $i$ l'intervallo diventa sempre più piccolo e quindi con $x$ fissato questa finirà per uscire dall'intervallo, perciò con $i$ sufficientemente grande varrà che $F_{i}(x)= 0$.

Dunque $F_{i}\xrightarrow{\text{D}}F$.

### Teorema
$X_{i}\xrightarrow{\text{QC}} X \implies X_{i}\xrightarrow{\text{P}}X$.
$X_{i}\xrightarrow{\text{MQ}} X \implies X_{i}\xrightarrow{\text{P}}X$.
$X_{i}\xrightarrow{\text{P}} X \implies X_{i}\xrightarrow{\text{D}}X$.

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
#### Esempio
Consideriamo $\{ X_{i} \}_{i = 1}^{+\infty}, X_{i} \sim Ber(p)$ indipendenti.
Sappiamo che:
$$
n \bar{X}_{n} = \sum_{i=1}^{n} X_{i} \sim Bin(n, p)
$$
e dunque:
$$
\mathbb{E}(n \bar{X}_{n}) = np
$$
$$
Var(n \bar{X}_{n}) = np (1- p)
$$
Dunque:
$$
\bar{X}_{n} \overset{a}{\sim} N\left( p, \frac{p(1-p)}{n} \right)
$$
per via del teorema centrale del limite.
Allora:
$$
n \bar{X}_{n} = \sum_{i=1}^{n} X_{i} \overset{a}{\sim} N(np, np(1-p))
$$
L'approssimazione è buona quando:
- $n$ è abbastanza grande.
- $p$ e $1-p$ sono lontani da $0$.
la regola pratica è la seguente:
- si calcola l'intervallo $np\pm 3\sqrt{ np(1-p) }$
- l'approssimazione è buona se l'intervallo è contenuto nell'intervallo $[0, n]$.

#### Esempio
Supponiamo di considerare $B \sim Bin(30, 0.7)$ volendo calcolare $P(B \leq 25)$.
Calcoliamo l'intervallo:
$$
30 \cdot 0.7 \pm 3 \sqrt{ 30 \cdot 0.7 \cdot 0.3 } \approx [13.47, 28.53] \leq [0, 30]
$$
Quindi ci possiamo calcolare $Z$:
$$
Z = \frac{25 + 0.5 - 30 \cdot 0.7}{\sqrt{ 30 \cdot 0.7 \cdot 0.3 }} \approx 1.79
$$
dove $0.5$ aggiunto è correzione per continuità.
Quindi possiamo dire che $P(B \leq 25)  \approx \Phi(1.79) = 0.9633$

## Inferenza statistica
Quando estraggo il mio campione è come avere $n$ variabili dove ogni $X_{i}(\omega)$ mi dice il valore d'interesse dell'$i$-esima persona estratta. Se avviene estrazione con reinserimento queste variabili sono indipendenti tra di loro. Dunque se $(x_{1}, \dots, x_{n})$ descrive una certa estrazione, la ennupla $(X_{1}(\omega), \dots, X_{n}(\omega))$ descrive tutte le possibili estrazioni.
Data un'estrazione è possibile calcolarsi la media empirica:
$$
\bar{x}_{n} = \frac{1}{n} \sum_{i=1}^{n} x_{i}
$$
chiamiamo stima puntuale del parametro $\mu = \text{altezza media degli studenti}$. Quindi $\mu$ è "teorico", mentre $\bar{x}_{n}$ è "empirico".
Consideriamo $X_{1}(\omega), X_{2}(\omega), \dots, X_{n}(\omega) \rightarrow \bar{X}_{n} = \frac{1}{n} \sum_{i=1}^{n} X_{i}$.
Una caratteristica di $\bar{X}_{n}$ è che $\bar{X}_{n} \xrightarrow{\text{P}} \mu$.
Inoltre:
$$
\sqrt{ n } \frac{\bar{X}_{n} -\mu}{\sigma} \xrightarrow{\text{D}} N(0, 1)
$$
La variabile $\bar{X}_{n}$ si chiama stimatore puntuale.
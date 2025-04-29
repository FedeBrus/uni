### Ripasso Covarianza
$$
\begin{align}
Cov(X,Y) &= \mathbb{E}((X - \mathbb{E}(X)) (Y - \mathbb{E}(Y))) \\
 & = \mathbb{E}(XY) - \mathbb{E}(X)(Y)
\end{align}
$$
Dunque:
$$
Cov(X, X) = \mathbb{E}(X^{2}) - (\mathbb{E}(X))^{2} = Var(X)
$$
Se due variabili aleatorie sono tra loro stocasticamente indipendenti, allora:
$$
\mathbb{E}(XY) = \mathbb{E}(X)\mathbb{E}(Y) \Longleftrightarrow Cov(X, Y) = 0
$$
Ma allora se due variabili aleatorie sono stocasticamente indipendenti allora sono anche linearmente indipendenti.

In generale: Ind. Stocastica $\implies$ Ind. in Media $\implies$ Ind. Lineare.
Di conseguenza: Dip. Lineare $\implies$ Dip. in Media $\implies$ Dip. Stocastica.

Inoltre:
$$
Cov(aX+b, cY + d) = ac \cdot Cov(X, Y)
$$
$$
\rho(aX + b, cY + d) = sign(ac) \rho(X, Y) \qquad a, c \neq 0
$$
Consideriamo $X_{1}, \dots, X_{n}, \mu_{i}=\mathbb{E}(X_{i}), \sigma_{ii} = Var(X_{i}) = Cov(X_{i}, X_{i}), \sigma_{ij}=Cov(X_{i}, X_{j})$.
Consideriamo $a_{1}, \dots, a_{n}$ e $b_{1},\dots,b_{n}$. Sia:
$$
X = \sum_{i=1}^{n} a_{i}X_{i} + b_{i}
$$
Allora:
$$
\mathbb{E}(X) = \mathbb{E}\left( \sum_{i=1}^{n} a_{i}X_{i}+b_{i} \right) = \sum_{i=1}^{n} \mathbb{E}(a_{i}X_{i}+b_{i}) = \sum_{i=1}^{n} (a_{i}\mathbb{E}(X_{i})+ b_{i}) = \sum_{i=1}^{n} a_{i}\mathbb{E}(X_{i}) + \sum_{i=1}^{n} b_{i}
$$
inoltre:
$$
\begin{align}
Var(X) &= Var\left( \sum_{i=1}^{n} a_{i}X_{i} + b_{i} \right) \\
 & = \mathbb{E}((X - \mathbb{E}(X))^{2}) \\
 & = \mathbb{E}\left( \left( \left( \sum_{i=1}^{n} a_{i}X_{i} + b_{i} \right) - \mathbb{E}\left(  \sum_{i=1}^{n} a_{i}X_{i}+ b_{i} \right) \right)^{2} \right) \\
 & = \mathbb{E}\left( \left( \left( \sum_{i=1}^{n} a_{i}X_{i}+b_{i} \right) - \left( \sum_{i=1}^{n} a_{i}\mathbb{E}(X_{i}) + b_{i} \right) \right)^{2} \right) \\
 & = \mathbb{E}\left( \left( \sum_{i=1}^{n} a_{i}X_{i} + b_{i} - a_{i}\mathbb{E}(X_{i}) - b_{i} \right)^{2} \right) \\
 & =\mathbb{E}\left( \left( \sum_{i=1}^{n} a_{i}(X_{i} - \mathbb{E}(X_{i})) \right)^{2} \right) \\
 & = \mathbb{E}\left(  \sum_{i=1}^{n} \sum_{j=1}^{n} a_{i}a_{j}(X_{i} - \mathbb{E}(X_{i}))(X_{j}-\mathbb{E}(X_{j})) \right) \\
 & = \sum_{i=1}^{n} \sum_{j=1}^{n} a_{i}a_{j} \mathbb{E}((X_{i} - \mathbb{E}(X_{i}))(X_{j}-\mathbb{E}(X_{j}))) \\
 & = \sum_{i=1}^{n} \sum_{j=1}^{n} a_{i}a_{j} \cdot Cov(X_{i}, X_{j}) \\
 & = \sum_{i=1}^{n} \sum_{j=1}^{n} a_{i}a_{j} \sigma_{ij}
\end{align}
$$
Ma notiamo che nella sommatoria quando $i = j$ possiamo utilizzare la varianza:
$$
\begin{align}
\sum_{i=1}^{n} \sum_{j=1}^{n} a_{i}a_{j} \sigma_{ij} & = \sum_{i=1}^{n} a_{i}^{2} \sigma_{ii} + \sum_{i=1}^{n} \sum_{j=1, j \neq i}^{n} a_{i}a_{j}\sigma_{ij} \\
 & = \sum_{i=1}^{n} a_{i}^{2} \sigma_{ii} + 2 \sum_{i=1}^{n} \sum_{j<i}  a_{i}a_{j}\sigma_{ij} \\
 & = \sum_{i=1}^{n} a_{i}^{2} Var(X_{i}) + \sum_{i=1}^{n} \sum_{j<i} a_{i}a_{j} \cdot Cov(X_{i}, X_{j})
\end{align}
$$
In particolare, nel caso in cui $n=2$, allora:
$$
Var(aX + bY + c) = a^{2} Var(X) + b^{2} Var(Y)+2ab \cdot Cov(X,Y)
$$
se $X$ e $Y$ sono incorrelate, ossia $\rho(X, Y) = 0$.
$$
Var(aX + bY + c) = a^{2}Var(X) + b^{2}Var(Y)
$$
#### Esempio
Consideriamo $X_{1},\dots,X_{n}$. Consideriamo $a_{i} = \frac{1}{n}, b_{i}=0$ e $\mu = \mathbb{E}(X_{i}), \sigma^{2}=Var(X_{i})$ e $Cov(X_{i}, X_{j})=0, \forall i,j,i\neq j$.
Sia:
$$
X = \frac{1}{n} \sum_{i=1}^{n} X_{i}
$$
Allora:
$$
\mathbb{E}(X)= \mathbb{E}\left( \frac{1}{n} \sum_{i=1}^{n} X_{i} \right) = \frac{1}{n} \sum_{i=1}^{n} \mathbb{E}(X_{i}) = \frac{1}{n} \sum_{i=1}^{n} \mu = \frac{n\mu}{n} = \mu
$$
$$
Var(X) = Var\left( \frac{1}{n} \sum_{i=1}^{n} X_{i} \right) = \frac{1}{n^{2}} \sum_{i=1}^{n} Var(X_{i}) +\frac{2}{n^{2}} \sum_{i=1}^{n} \sum_{j<i} Cov(X_{i}, X_{j}) = \frac{n\sigma^{2}}{n^{2}} = \frac{\sigma^{2}}{n} = \frac{Var(X_{1})}{n}
$$
Sotto queste condizioni, più variabili vengono sommate più la varianza della loro media diminuisce.
### Disuguaglianza di Markov
Sia $Y$ una variabile aleatoria non negativa ($P(Y < 0) = 0$), allora $\forall a > 0$ abbiamo che:
$$
P(Y \geq a) \leq \frac{\mathbb{E}(Y)}{a}
$$
### Dimostrazione
Assumiamo $Y \sim f(y)$, ovvero che $f(y)$ è la densità di $Y$. Allora:
$$
\mathbb{E}(Y) = \int_{0}^{+\infty} y f(y) dy \geq \int_{a}^{+\infty} y f(y)dy \geq \int_{a}^{+\infty}  af(y)dy = a \int_{a}^{+\infty}f(y)dy = aP(Y\geq a)
$$
### Disugaglianza di Chebychev
Sia $Y$ una variabile aleatoria tale che $\mu= \mathbb{E}(Y), \sigma^{2} = Var(Y)$, allora $\forall \varepsilon > 0$:
$$
P(|Y - \mu| \geq \varepsilon) \leq \frac{\sigma^{2}}{\varepsilon^{2}}
$$
### Dimsotrazione
Sia $X = (Y - \mu)^{2} \geq 0$ e $a = \varepsilon^{2}$.
$$
\mathbb{E}(X) = \mathbb{E}((Y - \mu)^{2}) = Var(Y)
$$
Applichiamo la disuguaglianza di Markov su $X$:
$$
P(X \geq a) \leq \frac{\mathbb{E}(X)}{a}
$$
$$
\begin{align}
P((Y - \mu)^{2} \geq \varepsilon^{2}) &\leq \frac{Var(Y)}{\varepsilon^{2}} \\
P(|Y-\mu| \geq \varepsilon)  & \leq \frac{Var(Y)}{\varepsilon^{2}}
\end{align}
$$
### Definizione Successione di variabili aleatorie
Si chiama successione di variabili aleatorie l'oggetto $\{ X_{i} \}_{i = 1}^{+\infty}$ in cui si intende che ad ogni valore dell'indice $i\in \mathbb{N}$ si associa la corrispondente variabile aleatoria $X_{i}$. 

### Definizione Convergenza in media quadratica
La successione di variabili aleatorie converge in media quadratica alla variabile aleatoria limite $X$ se considerando la successione numerica $\{ a_{i} \}_{i = 1}^{+\infty}$ definita come $a_{i} = \mathbb{E}((X_{i} - X)^{2})$, $\lim_{ i \to +\infty } a_{i} = 0$.

#### Esempio
Consideriamo la successione di variabili aleatorie $\{ X_{i} \}_{i = 1}^{+\infty }$ tali che $\mu = \mathbb{E}(X_{i}), \sigma^{2} = Var(X_{i}), Cov(X_{i}, X_{j}) = 0, \forall i\neq j$.
$$
S_{n} = \frac{1}{n} \sum_{i=1}^{n} X_{i}
$$
Consideriamo la successione $\{ S_{n} \}_{n = 1}^{+\infty}$.
Dai risultati precedenti sappiamo che $\mathbb{E}(S_{n}) = \mu$ e $Var(S_{n})= \frac{\sigma^{2}}{n}$.
Prendiamo come variabile aleatoria limite $S$ tale che $P(S = \mu)=1$.
$$
a_{n}= \mathbb{E}((S_{n} - S)^{2}) = \mathbb{E}((S_{n}- \mu)^{2}) = Var(S_{n})
$$
$$
\lim_{ n \to +\infty } a_{n} = \lim_{ n \to +\infty } Var(S_{n}) = \lim_{ n \to +\infty } \frac{\sigma^{2}}{n} = 0
$$
Quindi la successione di variabili aleatorie $\{ S_{n} \}_{n = 1}^{+\infty}$ converge in media quadratica a $\mu$:
$$
S_{n} \xrightarrow{\text{MQ}} \mu
$$
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
### Teorema
Se la successione $\{ X_{i} \}_{i=1}^{+\infty}$ convere in MQ a $X$ allora la successione convere in probabilità alla stessa variabile aleatoria limite $X$.

### Dimostrazione
Fissiamo $\varepsilon > 0$ e consideriamo le variabili aleatorie per ogni $i$ $(X_{i}-X)^{2} \geq 0$.
$$
P(|X_{i}-X|\geq\varepsilon) = P((X_{i}-X)^{2} \geq \varepsilon^{2}) \leq \frac{\mathbb{E}((X_{i}-X)^{2})}{\varepsilon^{2}}
$$
Consideriamo ora:
$$
0 \leq \lim_{ i \to +\infty }  P(|X_{i}-X| \geq \varepsilon) \leq \lim_{ i \to +\infty } \frac{\mathbb{E}((X_{i}-X)^{2})}{\varepsilon^{2}} = 0
$$
Dunque:
$$
\lim_{ i \to +\infty } P(|X_{i}-X| \geq \varepsilon) = 0
$$
Dunque converge anche in probabilità.

### Convergenza quasi certa (cenni)
Consideriamo direttamente gli $A_{i} = \{ \omega \in \Omega : |X_{i}(\omega) - X(\omega)| \geq \varepsilon \}$ per un $\varepsilon > 0$.
Introduciamo il concetto di limite (inferiore e superiore) per una successione di eventi.
$$
\{ A_{i} \}_{i = 1}^{+\infty} \qquad \lim_{ i \to +\infty } A_{i} = A
$$
dove $A$ è l'evento limite se esso esiste:
Diremo che $X_{i} \xrightarrow{\text{QC}} X \Longleftrightarrow P(A) = 0, \forall\varepsilon >0$.
Riassumendo:
- se $X_{i} \xrightarrow{\text{P}} X \Longleftrightarrow \lim_{ i \to +\infty } P(|X_{i} - X| \geq \varepsilon) = 0, \forall \varepsilon > 0$
- se $X_{i} \xrightarrow{\text{QC}} X \Longleftrightarrow P(\lim_{ i \to +\infty } |X_{i} - X| \geq \varepsilon) = 0, \forall \varepsilon > 0$

### Teorema
Se $X_{i} \xrightarrow{\text{QC}}X \implies X_{i} \xrightarrow{\text{P}}X$.
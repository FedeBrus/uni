Rimaniamo nel caso in cui gli stimatori danno lo stesso risultato. Introduciamo però un modello più complicato.
Supponiamo di avere una collezione di dati fatta da coppie.
$$
(x_{1}, y_{1}), (x_{2}, y_{2}), \dots, (x_{n}, y_{n})
$$
Si pensi ad una causalità tra i valori della coppia. Consideriamo $Z = (X, Y)$ che può essere qualsiasi coppia.
Assumiamo che la $X$ si distribuisca in un modo:
$$
X \sim f(x, \mathbb{E}(X), Var(X))
$$
non ci interessa quale sia.
Andiamo a specificare la distribuzione condizionata della $Y$ data la $X$.
$$
Y | X = x \sim N(\alpha+\beta x, \sigma^{2})
$$
Da qui possiamo capire che la $Y$ è independete in varianza dalla $X$. Questa assunzione viene chiamata "ipotesi omoschedasticità".
Riassumendo:
$$
\begin{align}
Var(Y | X=x) &= \sigma^{2} \\
\mathbb{E}(Y|X=x) &= \alpha + \beta x
\end{align}
$$
Quindi stiamo assumendo che la funzione di regressione sia una retta. Inoltre stiamo assumendo che la funzione di distribuzione condizionata è una normale, in particolare questa è simmetrica rispetto al valore medio condizionato.
Un modello sifatto è un modello lineare semplice. 
### Minimi quadrati
Utilizziamo il metodo dei minimi quadrati:
Dobbiamo fare in modo di scegliere $\alpha, \beta$ in maniera tale che minimizzano la seguente quantità:
$$
(\hat{\alpha}, \hat{\beta}) = \underset{\alpha, \beta}{\text{argmin}} \sum_{i=1}^{n} ( y_{i} - (\alpha + \beta x_{i}) )^{2} = \underset{\alpha, \beta}{\text{argmin}} S(\alpha, \beta)
$$
In altre parole si cerca di minimizzare la distanza assoluta tra la retta che cerca di stimare il fenomeno e i valori effettivi di $y$.
$$
\frac{d}{d\alpha}  S(\alpha, \beta) = \sum_{i=1}^{n} \frac{d}{d\alpha} (y_{i}- (\alpha + \beta x_{i}))^{2} = \sum_{i=1}^{n} (-2)(y_{i}-(\alpha + \beta x_{i}))= 0
$$
$$
\frac{d}{d\beta} S(\alpha, \beta) = \sum_{i=1}^{n} \frac{d}{d\beta} (y_{i}- (\alpha + \beta x_{i}))^{2} =\sum_{i=1}^{n} (-2)(y_{i}-(\alpha + \beta x_{i}))x_{i} = 0
$$
Qundi si crea il sistema ponendo a $0$ le derivate.
Guardiamo la prima:
$$
\frac{1}{n} \sum_{i=1}^{n} y_{i} - \alpha - \beta  \frac{1}{n} \sum_{i=1}^{n} x_{i}
$$
ora la seconda:
$$
\frac{1}{n} \sum_{i=1}^{n} y_{i}x_{i} - \alpha  \frac{1}{n} \sum_{i=1}^{n} x_{i} - \beta  \frac{1}{n} \sum_{i=1}^{n} x_{i}^{2} = 0
$$
(queste due equazioni sono in un solo sistema).

Dunque:
$$
\alpha = \bar{y} - \beta  \bar{x} \\
$$
$$
\frac{1}{n} \sum_{i=1}^{n} y_{i}x_{i} - (\bar{y}- \beta  \bar{x}) \cdot \bar{x} - \beta  \frac{1}{n} \sum_{i=1}^{n}  x_{i}^{2} = 0
$$
Ora guardiamo la seconda:
$$
\left( \frac{1}{ n} \sum_{i=1}^{n}  y_{i} x_{i} - \bar{y} \bar{x} \right) - \beta\left( \frac{1}{n} \sum_{i=1}^{n} x_{i}^{2} - \bar{x}^{2}\right) 
$$
Ricordando la formula della varianza (guardate per le variabili aleatorie): $Cov(X, Y) = \mathbb{E}(XY)-\mathbb{E}(X)\mathbb{E}(Y)$.
Otteniamo dunque che:
$$
\hat{\beta} = \frac{\frac{1}{n} \sum_{i=1}^{n} (y_{i}- \bar{y}) (x_{i} - \bar{x})}{\frac{1}{n} \sum_{i=1}^{n} (x_{i}-\bar{x})^{2}}
$$
$$
\hat{\alpha} = \bar{y} - \hat{\beta} \bar{x}
$$
Ci manca una stima della varianza che si ottiene:
$$
\hat{\sigma}^{2} = \frac{1}{n} \sum_{i=1}^{n} (y_{i}- (\hat{\alpha} + \hat{\beta}x_{i}))^{2}
$$
Ora rifacciamo la stessa cosa con il metodo dei momenti:
$$
\mathbb{E}(Y) = \mathbb{E}_{X}(\mathbb{E}(Y|X)) = \mathbb{E}_{X}(\alpha + \beta x) = \alpha + \beta \mathbb{E}(X)
$$
$$
Cov(X, Y) = Cov(X, \alpha + \beta X) = \beta Cov(X, X) = \beta Var(X)
$$
Quindi abbiamo due equazioni come momenti:
$$
\begin{align}
\mathbb{E}(Y)&= \alpha + \beta \mathbb{E}(X) \\
Cov(X, Y) &= \beta Var(X)
\end{align}
$$
$$
\begin{align}
\bar{y} &= \alpha + \beta  \bar{x} \\
\frac{1}{n} \sum_{i=1}^{n} (y_{i}- \bar{ y}) (x_{i} - \bar{x}) &= \beta  \frac{1}{n} \sum_{i=1}^{n} (x_{i} - \bar{x})  ^{2}
\end{align}
$$
Le equazioni ottenute sono le stesse del metodo sopra.

### Massime verosimiglianze
$$
\begin{align}
f_{X, Y} (x, y) &= f_{Y|X} (y|x) f_{x}(x) \\
 & = \frac{1}{\sqrt{ 2\pi \sigma^{2} }}  \exp \left( -\frac{1}{2}  \frac{(y - (\alpha + \beta x))^{2}}{\sigma^{2}} \right) f_{X}(x)
\end{align}
$$
$$
L(\alpha, \beta, \sigma^{2}; (x_{i}, y_{i})_{i = 1}^{n}) = \prod_{i = 1}^{n} f_{X, Y} (x_{i}, y_{i})
$$
$$
\begin{align}
l(\alpha, \beta, \sigma^{2}; (x_{i}, y_{i})_{i = 1}^{n}) &= \log L(\alpha, \beta, \sigma^{2}; (x_{i},y_{i})_{i = 1}^{n}) \\
 & = \sum_{i=1}^{n} \left[\left( -\frac{1}{2} \log 2 \pi \right) + \left( -\frac{1}{2} \log \sigma^{2} \right) - \frac{1}{2} \frac{(y_{i}- (\alpha + \beta x_{i}))^{2}}{\sigma^{2}} + \log f_{x}(x) \right]
\end{align}
$$
Calcoliamo le derivate rispetto ad $\alpha$ e a $\beta$:
$$
\frac{d}{d\alpha} l(\alpha, \beta, \sigma^{2}) = -\frac{1}{2} \sum_{i=1}^{n} (-2) \frac{y_{i} - (\alpha+\beta x_{i})}{\sigma^{2}} = \frac{1}{\sigma^{2}} \sum_{i=1}^{n} (y_{i} - (\alpha + \beta x_{i})) = 0
$$
$$
\frac{d}{d \beta} l (\alpha, \beta, \sigma^{2}) = -\frac{1}{2} \sum_{i=1}^{n} (-2) \frac{(y_{i}- (\alpha+\beta x_{i}))}{\sigma^{2}} x_{i} = \frac{1}{\sigma^{2}} \sum_{i=1}^{n} (y_{i}-(\alpha + \beta x_{i})) x_{i} = 0
$$
Ora guardiamo la derivata secondo $\sigma^{2}$:
$$
\frac{d}{d\sigma^{2}} l(\alpha, \beta, \sigma^{2}) = \sum_{i=1}^{n} -\frac{1}{2} \frac{1}{\sigma^{2}} + \frac{1}{2} \sum_{i=1}^{n} \frac{(y_{i} - (\alpha + \beta x_{i}))^{2}}{\sigma^{4}} = 0
$$
Da cui:
$$
n \sigma^{2} = \sum_{i=1}^{n} (y_{i}- (\alpha + \beta x_{i}))^{2}
$$
$$
\hat{\sigma}^{2} = \frac{1}{n} \sum_{i=1}^{n} (y_{i} - (\hat{\alpha} + \hat{\beta} x_{i}))^{2}
$$
### Stima intervallare o intervallo di confidenza
$$
X \sim N(\mu, \sigma^{2})
$$
dove $\sigma^{2}$ è un valore noto.

Consideriamo che:
$$
\hat{\mu} = \bar{X}_{n} \sim N\left( \mu, \frac{\sigma^{2}_{0}}{n} \right)
$$
possiamo standardizzare:
$$
Z_{n} = \sqrt{ n } \frac{\bar{X}_{n} -\mu}{\sigma_{0}} \sim N(0, 1) 
$$
Quindi per definizione:
$$
P\left( z_{\frac{\alpha}{2}} \leq Z_{n} \leq z_{1-\frac{\alpha}{2}} \right) = 1 - \alpha
$$
$$
P\left( Z \leq z_{\frac{\alpha}{2}} \right) = \frac{\alpha}{2} = P\left( Z \geq z_{1 - \frac{\alpha}{2}} \right)
$$
$$
P\left( z_{\frac{\alpha}{2}} \leq z_{n} \leq z_{1-\frac{\alpha}{2}} \right) = \begin{cases}
0 \\
1
\end{cases}
$$
dove $Z_{n} = \sqrt{ n } \left( \frac{\bar{x}_{n}-\mu}{\sigma_{0}} \right)$.
$$
\begin{align}
P\left( z_{\frac{\alpha}{2}} \leq Z_{n} \leq z_{1-\frac{\alpha}{2}} \right) = 1 - \alpha \\
P\left( z_{\frac{\alpha}{2}} \leq \frac{\bar{X}_{n} - \mu}{\sigma_{0}} \leq z_{1-\frac{\alpha}{2}} \right) = 1 - \alpha \\
P\left( \bar{X}_{n} - \sigma_{0}z_{1-\frac{\alpha}{2}}\leq \mu \leq\bar{X}_{n} -  \sigma_{0} z_{\frac{\alpha}{2}} \right) = 1 - \alpha \\
\end{align}
$$
$$
P\left( \bar{x}_{n} - z_{1 - \frac{\alpha}{2}} \sigma_{0} \leq \mu \leq \bar{x}_{n} - z_{\frac{\alpha}{2}} \sigma_{0} \right) = \begin{cases}
0 \\
1
\end{cases}
$$
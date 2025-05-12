## Stima intervallare
$$
X \sim N(\mu, \sigma^{2}_{0})
$$
con $\sigma^{2}_{0}$ nota e fissata.
La volta scorsa abbiamo individuato uno stimatore puntuale della media:
$$
\hat{\mu} = \bar{X}_{n} \sim N\left( \mu, \frac{\sigma^{2}_{0}}{n} \right)
$$
Poi abbiamo utilizzato il fatto che si può standardizzare questa variabile aleatoria:
$$
Z_{n} = \sqrt{ n } \frac{\bar{X}_{n} - \mu}{\sigma_{0}} \sim N(0, 1)
$$
Poi abbiamo pensato al gioco:
$$
P\left( z_{\frac{\alpha}{2}} \leq Z_{n} \leq z_{1 - \frac{\alpha}{2}} \right) = 1-\alpha
$$
e lo abbiamo portato ad un gioco diverso:
$$
P\left( \bar{X}_{n} - z_{1 - \frac{\alpha}{2}} \frac{\sigma_{0}}{\sqrt{ n }} \leq \mu \leq \bar{X}_{n} - z_{\frac{\alpha}{2}} \frac{\sigma_{0}}{\sqrt{ n }} \right) = 1-\alpha
$$
Dunque osserviamo un solo cambione $x_{1}, \dots, x_{n}$ su cui calcoliamo la stima puntuale $\bar{x}_{n}$ e da questo campionamento otteniamo un intervallo:
$$
\left(   \bar{x}_{n} - z_{1- \frac{\alpha}{2}} \frac{\sigma_{0}}{\sqrt{ n }},  \bar{x}_{n}-z_{\frac{\alpha}{2}} \frac{\sigma_{0}}{\sqrt{ n }}  \right) 
$$
In questo caso il valore effettivo o è contenuto o non è contenuto, non ha più senso parlare di probabilità. Possiamo dire che con un livello di confidenza $1-\alpha$, questo intervallo conterrà l'ignoto valore. Rimane la diferenza tra stimatore intervallare e stima intervallare.

#### Esempio
Siano $X_{i} \overset{iid}{\sim} Ber(\theta)$. Troviamo uno stimatore con il metodo che si preferisce:
$$
\hat{\theta} = \bar{X}_{n}
$$
Di questo stimatore ne calcolo il valore atteso e la varianza:
$$
\begin{align}
\mathbb{E}(\hat{\theta})&= \theta \\
Var(\hat{\theta}) &= \frac{Var(X_{1})}{n} = \frac{\theta(1-\theta)}{n}
\end{align}
$$
Dunque ora si può standardizzare:
$$
Z_{n} = \sqrt{ n } \frac{\bar{X}_{n} - \theta}{\sqrt{ \theta(1-\theta) }} \overset{a}{\sim} N(0,1)
$$
per via del teorema centrale del limite.
$$
P\left( z_{\frac{\alpha}{2}} \leq Z_{n} \leq z_{1 - \frac{\alpha}{2}} \right) \approx 1 - \alpha
$$
Adesso bisogna fare il gioco e fare in modo che in mezzo rimanga $\theta$.
$$
P\left( z_{\frac{\alpha}{2}} \leq \sqrt{ n } \frac{\bar{X}_{n} - \theta}{\sqrt{ \theta(1-\theta) }} \leq z_{1- \frac{\alpha}{2}} \right) \approx 1-\alpha
$$
Qui abbiamo un problema perché al denominatore abbiamo parametri ignoti.
Possiamo utilizzare due tecniche diverse, la prima è la tecnica di Wald.
Possiamo approssimare il problema ad un altro problema, che è il seguente:
$$
P\left( z_{\frac{\alpha}{2}} \leq \sqrt{ n } \frac{\bar{X}_{n} - \theta}{\sqrt{ \bar{X_{n}}(1- \bar{X}_{n}) }} \leq z_{1 - \frac{\alpha}{2}} \right) \approx 1- \alpha
$$
$$
P\left( \bar{X}_{n} - z_{1-\frac{\alpha}{2}} \frac{\sqrt{ \bar{X}_{n} (1 - \bar{X}_{n}) }}{\sqrt{ n }} \leq \theta \leq \bar{X}_{n} - z_{\frac{\alpha}{2}} \frac{\sqrt{ \bar{X}_{n}(1 - \bar{X}_{n}) }}{\sqrt{ n }} \right) \approx 1- \alpha
$$
$$
\left( \bar{x}_{n} - z_{1-\frac{\alpha}{2}} \frac{\sqrt{ \bar{x}_{n} (1 - \bar{x}_{n}) }}{\sqrt{ n }} , \bar{x}_{n} - z_{\frac{\alpha}{2}} \frac{\sqrt{ \bar{x}_{n}(1 - \bar{x}_{n}) }}{\sqrt{ n }} \right)
$$
Questo è l'intervallo di confidenza "Wald" di livello approssimato $1-\alpha$.

In questo caso si può utilizzare la tecnica di Rao.
$$
P\left( z_{\frac{\alpha}{2}} \leq \sqrt{ n } \frac{\bar{X}_{n} - \theta}{\sqrt{ \theta(1- \theta) }} \leq z_{1 - \frac{\alpha}{2}} \right) \approx 1- \alpha
$$
Notiamo che per simmetria della normale vale che $z_{\frac{\alpha}{2}} = -z_{1-\frac{\alpha}{2}}$.
Possiamo scrivere:
$$
P\left( n\frac{(\bar{X}_{n}-\theta)^{2}}{\theta(1-\theta)} \leq z_{1-\frac{\alpha}{2}}^{2}\right) \approx 1- \alpha
$$
$$
P\left( n(\bar{X}_{n}-\theta)^{2} \leq z_{1-\frac{\alpha}{2}}^{2} \theta(1-\theta )\right) \approx 1-\alpha
$$
$$
P\left( n(\bar{X}_{n}-\theta)^{2} - z_{1 - \frac{\alpha}{2}}^{2} \theta(1-\theta) \leq 0 \right) \approx 1- \alpha
$$
Dopodiché si svolgono tutte le moltiplicazioni e si raccogli per $\theta^{2}$ e $\theta$.
$$
P(A\theta^{2} + B\theta + C \leq 0) \approx 1 - \alpha
$$
Dobbiamo risolvere per $\theta$. Gli estremi della soluzione saranno gli estremi dell'intervallo. Poi bisogna sostituire la stima agli stimatori.
#### Esempio
Consideriamo delle variabili aleatorie $X_{i} \overset{iid}{\sim} Pois(\lambda)$. Possiamo trovare $\hat{\lambda}= \bar{X}_{n}$, per cui $\mathbb{E}(\bar{X}_{n})=\lambda$ e $Var(\bar{X}_{n})=\frac{\lambda}{n}$.
$$
Z_{n} = \frac{\bar{X}_{n }-\lambda}{\sqrt{ \lambda }} \sqrt{ n }\sim N(0, 1)
$$
$$
P\left( z_{\frac{\alpha}{2}} \leq Z_{n} \leq z_{1-\frac{\alpha}{2}} \right) \approx 1- \alpha
$$
Utilizziamo la tecnica di Wald:
$$
P\left( z_{\frac{\alpha}{2}} \leq \frac{\bar{X}_{n} - \lambda}{\sqrt{ \lambda }}\sqrt{ n } \leq z_{1-\frac{\alpha}{2}} \right) \approx 1- \alpha
$$
$$
P\left( \bar{X}_{n} - z_{1-\frac{\alpha}{2}}\frac{\sqrt{ \bar{X}_{n} }}{\sqrt{ n }} \leq \lambda \leq \bar{X}_{n}-z_{\frac{\alpha}{2}} \frac{\sqrt{ \bar{X}_{n} }}{\sqrt{ n }} \right) \approx 1- \alpha
$$
Ora introduciamo delle distribuzioni.
### Distribuzioni campionarie
Consideriamo $Z \sim N(0, 1)$. Definiamo una variabile aleatoria $\chi^{2}_{1}$ con $1$ grado di libertà.
$$
W = Z^{2}
$$
### Teorema/Definizione
Supponiamo di avere $Y_{1}, \dots, Y_{n}$ indipendenti tali che $Y_{i} \sim N(\mu_{i}, \sigma_{i}^{2})$. Otteniamo delle $Z_{i}$ che si ottengono standardizzando le $Y_{i}$.
$$
Z_{i} = \frac{Y_{i}- \mu_{i}}{\sigma_{i}} \sim N(0, 1)
$$
Ora possiamo costruirci le seguenti:
$$
W_{i} = Z_{i}^{2} \sim \chi_{1}^{2}
$$
Definiamo ora:
$$
W = \sum_{i=1}^{n} W_{i} = \sum_{i=1}^{n} Z_{i}^{2} = \sum_{i=1}^{n} \left( \frac{Y_{i}-\mu_{i}}{\sigma_{i}} \right)^{2} \sim \chi^{2}_{n}
$$
Guarda sulle note come sono i grafici di queste variabili.
Allora:
$$
\mathbb{E}(W)= n\qquad Var(W) = 2n
$$
#### Esempio
Supponiamo di avere delle variabili aleatorie $Y_{i}\sim N(\mu_{0}, \sigma^{2}_{0})$. In questo caso supponiamo che la media sia nota e che la varianza sia ignota.
Utilizziamo il metodo dei momenti per trovarci uno stimatore della varianza.
$$
Var(Y_{i}) = \sigma^{2}_{0}
$$
$$
\hat{\sigma}_{0}^{2} = \frac{1}{n} \sum_{i=1}^{n} \left(  Y_{i} - \mu_{0} \right)^{2}
$$
Ora vogliamo uno stimatore intervallare. Consideriamo il seguente:
$$
\left( \frac{1}{n} \sum_{i=1}^{n} \frac{(Y_{i}-\mu_{0})^{2}}{\sigma^{2}} \right) \sim \frac{\chi_{n}^{2}}{n}
$$
Ora possiamo scrivere il seguente:
$$
\begin{align}
P\left( w_{\frac{\alpha}{2}} \leq W \leq w_{1-\frac{\alpha}{2}} \right) &= 1-\alpha \\ \\
P\left( w_{\frac{\alpha}{2}} \leq \frac{\sum_{i=1}^{n} (Y_{i}-\mu_{0})^{2}}{\sigma^{2}} \leq w_{1-\frac{\alpha}{2}} \right) &= 1-\alpha
\end{align}
$$
Ricordando che:
$$
n \hat{\sigma}_{0}^{2} = \sum_{i=1}^{n} (Y_{i}- \mu_{0})^{2}
$$
Abbiamo che:
$$
P\left( n \frac{\hat{\sigma}_{0}^{2}}{w_{1-\frac{\alpha}{2}}} \leq \sigma^{2} \leq  n \frac{\hat{\sigma}^{2}_{0}}{w_{\frac{\alpha}{2}}} \right) = 1-\alpha
$$
Dopodiché basta sostituire le stime agli stimatori.
#### Esempio
Siano $Y_{i} \sim N(\mu, \sigma^{2})$. Con il metodo dei momenti:
$$
\hat{\sigma}^{2} = \frac{1}{n} \sum_{i=1}^{n} (Y_{i}-\bar{Y}_{n})^{2}
$$
$$
\mathbb{E}(\hat{\sigma}^{2}) = \sigma^{2} \cdot \frac{n - 1}{n}
$$
Quindi in questo caso lo stimatore è distorto. Per suggerirne uno non distorto basta moltiplicare da ambo i lati il reciproco di $\frac{n-1}{n}$.
$$
\mathbb{E}(\hat{S}^{2}) = \frac{n}{n - 1} \mathbb{E}(\hat{\sigma}^{2})  = \frac{n}{n - 1} \frac{n-1}{n} \sigma^{2} = \sigma^{2}
$$
Dunque questo non è più distorto e vale che:
$$
S^{2} = \frac{n}{n - 1} \hat{\sigma}^{2} =  \frac{1}{n- 1} \sum_{i=1}^{n} (Y_{i}- \bar{Y}_{n}) ^{2}
$$
Questo viene chiamata la varianza campionaria.
Vogliamo anche una stima intervallare:
$$
\sum_{i=1}^{n} (Y_{i}-\bar{Y}_{n})^{2} = \sum_{i=1}^{n} \left((Y_{i}-\mu) - (\bar{Y}_{n}-\mu) \right)^{2} = \sum_{i=1}^{n} (Y_{i}-\mu)^{2} - n(\bar{Y}_{n}-\mu)^{2}
$$
Ora consideriamo la seguente quantità:
$$
(n-1)\frac{S^{2}}{\sigma^{2}} =  \sum_{i=1}^{n} \frac{(Y_{i}-\bar{Y}_{n})^{2}}{\sigma^{2}} = \sum_{i=1}^{n} \frac{(Y_{i}-\mu)^{2}}{\sigma^{2}} - \frac{n(\bar{Y}_{n}- \mu)^{2}}{\sigma^{2}}
=\sum_{i=1}^{n} \left( \frac{Y_{i}-\mu}{\sigma} \right)^{2} = (n-1)\frac{S^{2}}{\sigma^{2}} + \left( \frac{\bar{Y}_{n}-\mu}{\frac{\sigma}{\sqrt{ n }}} \right) ^{2}
$$
$$
P\left( w_{n - 1, \frac{\alpha}{2}} \leq (n-1)\frac{S^{2}}{\sigma^{2}} \leq w_{n-1, 1- \frac{\alpha}{2}} \right) = 1-\alpha
$$
$$
P\left( \frac{(n-1)S^{2}}{w_{n-1, 1-\frac{\alpha}{2}}}\leq \sigma^{2} \leq \frac{(n-1)S^{2}}{w_{n-1, \frac{\alpha}{2}}} \right) = 1-\alpha
$$
### Definizione Variabile aleatoria $t$ di Student
$$
Z \sim N(0, 1), W \sim \chi_{n}^{2}, (Z, W) \text{ stocasticamente indipendenti}
$$
$$
t = \frac{Z}{\sqrt{ \frac{W}{n} }} = \sqrt{ n } \frac{Z}{\sqrt{ W }} \sim t_{n}
$$
### Teorema
Sia $\{ t_{n} \}_{n = 1}^{+\infty}$ di variabili aleatorie $t$ di Student.
$$
t_{n} \xrightarrow{\text{D}} Z \sim N(0, 1)
$$
#### Esempio
Siano $Y_{i} \sim N(\mu, \sigma^{2})$. Questa volta vogliamo costruire un'intervallo di confidenza per $\mu$. Entrambi i parametri sono ignoti.
$$
\hat{\mu} = \bar{Y}_{n}
$$
$$
S^{2} = \frac{1}{n - 1} \sum_{i=1}^{n} (Y_{i}-\bar{Y}_{n})^{2}
$$
$$
\mathbb{E}(\bar{Y}_{n}) = \mu, \qquad Var(\bar{Y}_{n}) \frac{\sigma^{2}}{n}, \qquad \mathbb{E}(S^{2}) = \sigma^{2}
$$
$$
Z_{n}= \frac{\bar{Y}_{n} - \mu}{\sqrt{ S^{2} }} \sqrt{ n } = \frac{\frac{\bar{Y}_{n}- \mu}{\sigma} \sqrt{ n }}{\sqrt{ \frac{S^{2}}{\sigma^{2}} }} = \frac{\frac{\bar{Y}_{n}- \mu}{\sigma} \sqrt{ n }}{\sqrt{ \frac{\sum_{i=1}^{n} \left( \frac{Y_{i}- \bar{Y}_{n}}{\sigma} \right)^{2}}{n-1} }}
$$
Il numeratore si distribuisce come $N(0,1)$ mentre il denominatore si distribuisce come $\frac{\chi^{2}_{n-1}}{n-1}$ e quindi possiamo dire che:
$$
Z_{n} = t_{n-1}
$$
$$
P\left( t_{n-1, \frac{\alpha}{2}} \leq Z_{n} \leq t_{n-1, 1 - \frac{\alpha}{2}} \right) = 1 - \alpha
$$
$$
P\left( \bar{Y}_{n}- t_{n-1, 1-\frac{\alpha}{2}}\cdot \frac{S}{\sqrt{ n }} \leq \mu \leq \bar{Y}_{n} -t_{n - 1, \frac{\alpha}{2}} \cdot \frac{S}{\sqrt{ n }} \right) = 1 - \alpha
$$


summary
hist
quantile
boxplot
barplot
sapply(x, mean)
sapply(x, var)
sapply(x, length)
rep(0, 1000)
sample(x, 10)

Bisogna valutare la bontà dello stimatore.
La distribuzione che descrive le media dei campioni si distribuisce come una gaussiana.
Più aumenta il numero di misurazione per campione più la distribuzione si accentra.

Supponiamo di avere $X_{1}, \dots, X_{n}$ che ci da $x_{1}, \dots, x_{n}$. Sia $\mu = \mathbb{E}(X_{i})$.
$$
T(x_{1}, \dots, x_{n}) = t
$$
$$
\bar{x} = \frac{1}{n} \sum_{i=1}^{n} x_{i} \qquad \text{stima puntuale}
$$
Lo stimatore si ottiene applicando $T$ alle variabili aleatorie $X_{1}, \dots, X_{n}$: $T(X_{1}, \dots,X_{n})$:
$$
T(X_{1}, \dots, X_{n}) = \bar{X} = \frac{1}{n} \sum_{i=1}^{n} X_{i} \qquad \text{stimatore puntuale}
$$
Un criterio per capire la bontà dello stimatore è quello di valutare lo stimatore attraverso l'errore quadratico medio.
Supponiamo di voler valutare quanto buono è lo stimatore $T(X_{1}, \dots, X_{n})$ per la quantità ignota $\mu$.
$$
\begin{align}
MSE(T, \mu) &= \mathbb{E}((T - \mu)^{2}) \\
 & = \mathbb{E}((T \pm \mathbb{E}(T) - \mu)^{2}) \\
 & = \mathbb{E}((T- \mathbb{E}(T))^{2}+(\mathbb{E}(T)-\mu)^{2}+2(T-\mathbb{E}(T))(\mathbb{E}(T)-\mu)) \\
 & = \mathbb{E}((T -\mathbb{E}(T))^{2})  + \mathbb{E}((\mathbb{E}(T)- \mu)^{2}) + 2\mathbb{E}((T - \mathbb{E}(T))(\mathbb{E}(T)-\mu)) \\
 & = \mathbb{E}((T -\mathbb{E}(T))^{2})  + \mathbb{E}((\mathbb{E}(T)- \mu)^{2}) + 2(\mathbb{E}(T)-\mu)\mathbb{E}(T - \mathbb{E}(T)) \\
\end{align}
$$
Ma $\mathbb{E}(T - \mathbb{E}(T))$ vale $0$ per ogni variabile aleatoria.
$$
\begin{align}
 MSE(T, \mu) & = \mathbb{E}((T -\mathbb{E}(T))^{2})  + \mathbb{E}((\mathbb{E}(T)- \mu)^{2}) + 2(\mathbb{E}(T)-\mu)\mathbb{E}(T - \mathbb{E}(T)) \\
 & = Var(T) + (\mathbb{E}(T) - \mu )^{2}
\end{align}
$$
$Var(T)$ gioca il ruolo dell'errore accidentale, mentre il secondo addendo gioca il ruolo di errore sistematico.

Definiamo $B(T, \mu) = \mathbb{E}(T)-\mu= \mathbb{E}(T - \mu)$. Questa quantità si chiama distorsione e diremo che uno stimatore è non distorto se $B(T, \mu)= 0, \forall \mu$.

Dunque:
$$
MSE(T, \mu) = Var(T) + B(T, \mu)^{2}
$$
Uno stimatore è asintoticamente non-distorto se:
$$
\lim_{ n \to +\infty } B(T, \mu) = 0, \forall \mu
$$
Infine diremo che uno stimatore $T$ è consistente in media quadratica per la quantità ignota $\mu$ se:
$$
\lim_{ n \to +\infty } MSE(T, \mu) = 0, \forall \mu
$$
ed è la stessa cosa di dire che la successione $T_{1}, T_{2}, \dots$ converge in media quadratica a $\mu$.
$$
T_{n} \xrightarrow{\text{MQ}} \mu
$$
Notare che:
$$
\lim_{ n \to +\infty } MSE(T, \mu) = 0 \Longleftrightarrow \begin{cases}
\lim_{ n \to +\infty } B(T, \mu) = 0 \\
\lim_{ n \to +\infty } Var(T) = 0
\end{cases}
$$
#### Esempio
Sia $T(X_{1}, \dots, X_{n}) = \bar{X}_{n}$ e sia $\mu = \mathbb{E}(X_{1})$ e $\sigma^{2}=Var(X_{1})$
Allora $\mathbb{E}(T(X_{1}, \dots, X_{n}))= \mathbb{E}(\bar{X}_{n}) = \mu$ e dunque $B(\bar{X}_{n}, \mu) = \mu - \mu = 0$ quindi è non distorto.
Inoltre $Var(T(X_{1}, \dots, X_{n})) = Var(\bar{X}_{n}) = \frac{\sigma^{2}}{n}$ dunque $\lim_{ n \to +\infty } Var(\bar{X}_{n})= \lim_{ n \to +\infty } \frac{\sigma^{2}}{n}= 0$.
Quindi $\bar{X}_{n} \xrightarrow{\text{MQ}} \mu$ ed è uno stimatore consistente (in media quadratica) di $\mu$.

I metodi per trovare buoni stimatore sono:
- Metodo dei minimi quadrati
- Metodo dei momenti
- Metodo della massima verosimiglianza

### Metodo dei minimi quadrati
$$
\hat{\mu}=  \underset{\mu \in \mathbb{R}}{\text{argmin}} \sum_{i=1}^{n} (x_{i}-\mu)^{2}
$$
$$
\frac{d}{d\mu} \sum_{i = 1}^{n} (x_{i}-\mu)^{2} = \sum_{i = 1}^{n} \frac{d}{d\mu} (x_{i}-\mu)^{2} = \sum_{i=1}^{n} 2(x_{i}-\mu)(-1) = 0
$$
L'equazione di stima:
$$
\begin{align}
\sum_{i=1}^{n}  (x_{i}-\mu) = 0 \\
\sum_{i=1}^{n} x_{i} - n\mu = 0 \\
\hat{\mu} = \frac{1}{n} \sum_{i=1}^{n} x_{i} = \bar{x}_{n}
\end{align}
$$
Facendo la derivata seconda si controlla che si un punto di minimo.

Lo stimatore lo si ottiene sostituendo ai $x_{i}$ le relative $X_{i}$:
$$
\hat{\mu} = \frac{1}{n} \sum_{i=1}^{n} X_{i} = \bar{X}_{n}
$$
### Metodo dei momenti
Consideriamo i momenti teorici $\mu =\mathbb{E}(X_{1})$. Si iniziano a calcolare i momenti di una variabile e mi fermo quando il momento caloclato è funzione del parametro ignoto. In questo caso lo si trova subito. Una volta trovato si va a trovare il corrispondente momento empirico, che è dello stesso grado di quello teorico trovato. In questo caso il momento empirico: $\frac{1}{n} \sum_{i=1}^{n} x_{i} = \bar{x}_{n}$. ... Manca roba

### Metodo della massima verosimiglianza
Assumiamo che $X_{i} \sim N(\mu, \sigma^{2})$ in modo che $\mu = \mathbb{E}(X_{i})$. Dopodiché bisogna esplicitare:
$$
\begin{align}
f_{X_{1}, \dots, X_{n}} (x_{1}, \dots, x_{n}) &= \prod_{i=1}^{n} f_{X_{i}} (x_{i})  \\
 & = \prod_{i=1}^{n}  \frac{1}{\sqrt{ 2\pi \sigma^{2} }} \exp \left(-\frac{1}{2} \frac{(x_{i}-\mu)^{2}}{\sigma^{2}} \right)  \\
 & = (2\pi \sigma^{2})^{- \frac{n}{2}} \exp \left(-\frac{1}{2} \sum_{i=1}^{n} \frac{(x_{i}-\mu)^{2}}{\sigma^{2}} \right)
\end{align}
$$
per $x_{1}, \dots, x_{n}$ fissati, come funzione di $\mu$ è chimata verosimiglianza.
$$
\hat{\mu} = \underset{\mu}{\text{argmax}}  (2\pi \sigma^{2})^{-\frac{n}{2}} \exp \left( -\frac{1}{2} \sum_{i=1}^{n} \frac{(x_{i}-\mu)^{2}}{\sigma^{2}} \right) 
$$
Chiamiamo log-verosimiglianza:
$$
l(\mu; x_{1}, \dots, x_{n}) = -\frac{n}{2} \log(2\pi \sigma^{2}) -\frac{1}{2} \sum_{i=1}^{n} \frac{(x_{i}-\mu)^{2}}{\sigma^{2}}
$$
la prima parte non dipende da $\mu$ e massimizzare la seconda parte equivale a minimizzare la negazione di essa:
$$
\hat{\mu} = \underset{\mu}{\text{argmin}} \sum_{i=1}^{n} (x_{i}-\mu)^{2}
$$
cioè il metodo di massima verosimiglianza e quello dei minimi quadrati coincidono.
$$
\hat{\mu} = \bar{x}_{n}
$$
#### Esempio
$$
X_{i} \sim Ber(\theta)
$$
e sono indipendenti e identicamente distinte con $1$ femmina e $0$ maschio. Utilizziamo il metodo dei momenti.
Si pone la seguente uguaglianza:
$$
\theta = \mathbb{E}(X_{i}) = \bar{x}_{n} = \frac{1}{n} \sum_{i=1}^{n} x_{i}
$$
manca tutto diocan

Utilizziamo invece il metodo della massima verosimiglianza.
$$
p_{X_{1}, \dots, X_{n}} = (x_{1}, \dots, x_{n}) = \prod_{i=1}^{n} p_{X_{i}} (x_{i}) = \prod_{i=1}^{n} \theta^{x_{i}} (1- \theta)^{1-x_{i}} = \theta^{\sum x_{i}} (1- \theta)^{n - \sum x_{i}}
$$
$$
l(\theta; x_{1}, \dots, x_{n}) = \sum_{i=1}^{n} x_{i} \log \theta + \left( n - \sum_{i=1}^{n} x_{i} \right) \log(1-\theta)
$$
$$
\frac{d}{d\theta} l(\theta, x_{1}, \dots, x_{n}) = \sum_{i=1}^{n} x_{i} \frac{1}{\theta} - \left(n - \sum_{i=1}^{n} x_{i} \right) \frac{1}{1 - \theta} = 0
$$
equazione di stima. Assumiamo $\theta \neq 0$ e $\theta \neq 1$.
$$
\frac{\sum_{i=1}^{n} x_{i} (1- \theta) - \left( n - \sum_{i=1}^{n} x_{i} \right) \theta}{\theta(1- \theta)} = 0
$$
perciò
$$
\hat{\theta} = \frac{1}{n} \sum_{i=1}^{n} x_{i} = \bar{x}_{n}
$$
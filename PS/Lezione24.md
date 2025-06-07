## Verifica delle ipotesi 
Abbiamo un modello $X \sim N(\mu, \sigma_{0}^{2})$ con varianza nota e siamo interessati a $\mu$.
Allora:
$$
\hat{\mu} = \bar{X}_{n}
$$
Sappiamo dalle lezione precedenti trovarci un intervallo di confidenza:
$$
\hat{\mu} \pm z_{1-\frac{\alpha}{2}} \frac{\sigma_{0}}{\sqrt{ n }}
$$
Abbiamo un sistema di ipotesi:
$$
\begin{cases}
H_{0}: \mu \in \Theta_{0} \subset \Theta \subseteq \mathbb{R} \\
H_{1}: \mu \in \Theta \setminus \Theta_{0}
\end{cases}
$$
Si chiama ipotesi semplice se $\Theta_{0}$ è un singoletto. Altrimenti viene chiamata composta.

Dato un campione $(x_{1}, \dots,x_{n})$ sobbiamo decidere se considerare vera $H_{0}$ o $H_{1}$.
Prendiamo il campione e lo sintetizziamo tramite una statistica test:
$$
(x_{1},\dots,x_{n}) \rightarrow T(x_{1},\dots,x_{n}) \rightarrow D(T(x_{1},\dots,x_{n})) = \begin{cases}
0 & \text{Accetto}\ H_{0} \\
1 & \text{Accetto}\ H_{1} \\
\end{cases}
$$

|           | Realtà          |                              |                             |
| --------- | --------------- | ---------------------------- | --------------------------- |
| Decisione |                 | $H_{0}$ è vera               | $H_{1}$ è vera              |
|           | Accetto $H_{0}$ | No errore ($1-\alpha$)       | Errore di 2° tipo ($\beta$) |
|           | Accetto $H_{1}$ | Errore di 1° tipo ($\alpha$) | No errore ($1-\beta$)       |
$$
(X_{1}, \dots, X_{n}) \rightarrow T(X_{1}, \dots, X_{n}) \rightarrow D(T(X_{1}, \dots, X_{n})) = \begin{cases}
0 \\
1
\end{cases}
$$
Essendo una trasformazione di trasformazione di variabili aleatorie è anch'essa un variabile aleatoria.

Tornando all'esempio di prima:
$$
\begin{cases}
H_{0}: \mu = \mu_{0} \\
H_{1}: \mu \neq \mu_{0}
\end{cases}
$$
In questo caso $\Theta \equiv \mathbb{R}$, $\Theta_{0} = \mu_{0}$ e $\Theta_{1} =  \Theta \setminus \Theta_{0} = \mathbb{R} \setminus \mu_{0}$. Quindi l'ipotesi $H_{0}$ è semplice e $H_{1}$ è composta.
Inoltre:
$$
T(X_{1}, \dots, X_{n}) = \sqrt{ n } \frac{\bar{X}_{n} - \mu_{0}}{\sigma_{0}}
$$
Notare che questa variabile aleatoria è standardizzata solo se è vera $H_{0}$.
Ricapitolando: se $H_{0}$ è vera allora $T(X_{1}, \dots, X_{n}) \sim N(0, 1)$, altrimenti se $H_{1}$ è vera, essendo una combinazione lineare di normali è normale, ma dobbiamo calcolare i suoi parametri.
Assumiamo che se $H_{1}$ è vera allora $\mu = \mu_{1} \neq \mu_{0}$.
$$
\mathbb{E}(T(X_{1}, ..., X_{n}) | H_{1} \text{ vera}) = \sqrt{ n } \frac{\mathbb{E}((\bar{X}_{n} - \mu_{0}))}{\sigma_{0}} = \frac{\sqrt{ n }(\mu_{1}- \mu_{0})}{\sigma_{0}}
$$
$$
Var(T(X_{1}, \dots, X_{n})| H_{1} \text{ vera}) = \frac{n}{\sigma_{0}^{2}} Var(\bar{X}_{n}) = \frac{n}{\sigma_{0}^{2}} \frac{\sigma_{0}^{2}}{n} = 1
$$
Dunque se è vera $H_{1}$ allora la nostra $T(X_{1}, \dots, X_{n}) \sim N\left( \frac{\sqrt{ n }(\mu_{1}-\mu_{0})}{\sigma_{0}}, 1 \right)$.
Creiamo dunque un intervallo di accettazione e di conseguenza una regoine di rifiuto, in modo che con probabilità $1-\alpha$ e $H_{0}$ è vera allora decideremo che $H_{0}$ è vera.

Supponiamo che $\mu_{1} > \mu_{0}$.
Ma allora $\beta$ è il seguente, ovvero la probabilità di avere scelto $H_{0}$ quando nella realtà siamo in $H_{1}$.
$\beta$ rimpicciolisce se $\mu_{1} \gg \mu_{0}$ ma anche se la numerosità del campione cresce, perché il punto medio è moltiplicato per un fattore $\sqrt{ n }$.
Vale anche per $\mu_{1} < \mu_{0}$, la supposizione era fatta per fare il grafico semplice.
Quindi a partire da una $\alpha$ fissata bisogna trovare il $\beta$ più piccolo possibile.

### Terminologia
$1-\beta$ è chiamata la potenza del test.
Se $\mu_{1} \neq \mu_{0}$ e $\lim_{ n \to +\infty } 1-\beta_{n} = 1$, allora il test è consistente.

#### Esempio
Riutilizzando lo stesso modello.
$$
\begin{cases}
H_{0}: \mu \geq \mu_{0} \\
H_{1}: \mu < \mu_{0}
\end{cases}
$$
Nessuna delle ipotesi in questo caso è semplice. Non lo mostriamo ma questo sistema di ipotesi è equivalente a questo più semplice:
$$
\begin{cases}
H_{0}: \mu = \mu_{0} \\
H_{1}: \mu < \mu_{0}
\end{cases}
$$
Questa si chiama ipotesi di tipo unilaterale.
Il grafico ora è il seguente:
In questo caso se $H_{1}$ il grafico può essere solo a sinistra di quello verde.
In questo caso possiamo accettare tutto ciò che ha destra senza "filtrare" entrambi i lati. Ma allora cambia anche $\beta$.
In questo caso $z_{\alpha}$ è il valore critico del test.

Adesso passiamo dalla variabile aleatoria al valore osservato.
$$
(x_{1}, \dots, x_{n}) = T(x_{1}, \dots, x_{n}) = t_{oss} \rightarrow \begin{cases}
0 & t_{oss} \in A \\
1 & t_{oss} \not\in A
\end{cases}
$$
Dove $A$ è la regione di accettazione. $0$ vuol dire accettare $H_{0}$ e $1$ vuol dire accettare $H_{1}$.
$$
\begin{align}
P(T(X_{1}, \dots ,X_{n}) \in A | H_{0} \text{ vera}) &= 1-\alpha \\
P(T(X_{1}, \dots ,X_{n}) \in A | H_{0} \text{ falsa}) &= \beta \\
P(T(X_{1}, \dots ,X_{n}) \not\in A | H_{0} \text{ vera}) &= \alpha \\
P(T(X_{1}, \dots ,X_{n}) \not\in A | H_{0} \text{ falsa}) &= 1-\beta\  (\text{potenza del test})
\end{align}
$$
Cambiamo modello per capire come fare questa procedura in modo generale:
#### Esempio
Siano $X \sim Pois(\lambda)$.
Allora:
$$
\hat{\lambda} = \bar{X}_{n}
$$
$$
\begin{align}
\mathbb{E}(\bar{X}_{n}) &= \lambda \\
Var(\bar{X}_{n}) &= \frac{\lambda}{n}
\end{align}
$$
$$
T(X_{1}, \dots, X_{n}) = \sqrt{ n } \frac{\bar{X}_{n} - \lambda}{\sqrt{ \lambda }} \overset{a}{\sim} N(0, 1)
$$
per il teorema centrale del limite.
Creiamo un sistema di ipotesi:
$$
\begin{cases}
H_{0}: \lambda = \lambda_{0} \\
H_{1}: \lambda \neq \lambda_{0}  &  (\lambda = \lambda_{1})
\end{cases}
$$
Questa è la nostra statistica:
$$
T(X_{1}, \dots, X_{n}) = \sqrt{ n } \frac{\bar{X}_{n} - \lambda_{0}}{\sqrt{ \lambda_{0} }}
$$
Se $H_{0}$ è vera allora $T(X_{1}, \dots ,X_{n}) \sim N(0, 1)$.
Se $H_{1}$ è vera dobbiamo calcolare i parametri:
$$
\begin{align}
\mathbb{E}(T(X_{1}, \dots, X_{n}) | H_{1} \text{ vera})  & = \sqrt{ n } \left( \frac{\lambda_{1} - \lambda_{0}}{\sqrt{ \lambda_{0} }} \right) \\
Var(T(X_{1}, \dots, X_{n}) | H_{1} \text{ vera}) & = \frac{n}{\lambda_{0}} \frac{\lambda_{1}}{n} = \frac{\lambda_{1}}{\lambda_{0}}
\end{align}
$$
La statistica test è calcolata sempre sotto l'ipotesi nulla.
Cambiamo prospettiva continuando con lo stesso modello.
$$
(x_{1}, \dots, x_{n}) \rightarrow T(x_{1}, \dots, x_{n}) = t_{oss}
$$
$$
P(T(X_{1}, \dots, X_{n}) \in R | H_{0} \text{ vera}) \approx \alpha
$$
Ipotizziamo di voler variare la regione di accettazione in modo che riesca a contenere $t_{oss}$, ovvero la più piccola regione di accettazione che mi porta ad accettare l'ipotesi nulla. Quindi gli estremi dell'area sono $t_{oss}$ e $-t_{oss}$ e la chiamiamo $A_{oss}$.
$$
\begin{align}
P(T(X_{1}, \dots, X_{n}) \not\in A_{oss} | H_{0} \text{ vera}) &= \alpha_{oss} \\
P(|T(X_{1}, \dots, X_{n})| > |t_{oss}| \big| H_{0} \text{ vera})  &= a_{oss}
\end{align}
$$
Se $\alpha_{oss} < \alpha$ allora per forza di cose il $t_{oss}$ deve essere stato rifiutato inizialmente e rifiuto $H_{0}$, se invece $\alpha_{oss} > \alpha$ allora accetto $H_{0}$. Quindi a partire solamente da $\alpha_{oss}$. Senza sapere la statistica usata, senza sapere $t_{oss}$, come sono fatte le ipotesi, eccetera.
$\alpha_{oss}$ è chiamato $p_{value}$ ed è un modo per comunicare l'esito di una verifica delle ipotesi.
#### Esempio
Abbiamo una popolazione $Y_{i} \sim N(\mu_{1}, \sigma^{2})$. Abbiamo poi un'altra popolazione $Y_{2}\sim N(\mu_{2}, \sigma^{2})$ con stessa varianza ignota.
Il nostro parametro di interessa non è tanto $\mu_{1}$ o $\mu_{2}$ ma $\theta=\mu_{1}-\mu_{2}$. Tutti i parametri sono ignoti.
$$
\hat{\theta} = \hat{\mu}_{1} - \hat{\mu}_{2}
$$
Un buon stimatore per $\hat{\mu}_{1} = \bar{Y}_{1} = \frac{1}{n_{1}} \sum_{i=1}^{n_{1}} Y_{1, i}$. Allo stesso modo $\hat{\mu}_{2}= \bar{Y}_{2}= \frac{1}{n_{2}} \sum_{j=1}^{n_{2}} Y_{2, j}$.
Da qui sappiamo che $\bar{Y_{1}} = N\left( \mu_{1}, \frac{\sigma^{2}}{n_{1}} \right), \bar{Y}_{2} \sim N\left( \mu_{2}, \frac{\sigma^{2}}{n_{2}} \right)$.
Essendo $\hat{\theta}$ combinazione lineare di due normali, è anch'essa una normale.
Dunque:
$$
\hat{\theta} \sim N\left( \mu_{1}- \mu_{2}, \frac{\sigma^{2}}{n_{1}}+\frac{\sigma^{2}}{n_{2}} \right)
$$
Possiamo standardizzare $\hat{\theta}$:
$$
Z = \frac{(\hat{\mu}_{1} - \hat{\mu}_{2}) - (\mu_{1}-\mu_{2})}{\sqrt{ \sigma^{2} \left( \frac{1}{n_{1}}+ \frac{1}{n_{2}} \right) }} \sim N(0, 1)
$$
Ma al denominatore abbiamo una quantità ignota, cioè $\sigma^{2}$. Dunque dobbiamo stimare anche quello:
$$
S_{1}^{2} = \frac{1}{n_{1} - 1}\sum_{i=1}^{n_{1}}  \left(Y_{1, i} - \bar{Y}_{1} \right) ^{2}
$$
$$
S_{2}^{2} = \frac{1}{n_{2} - 1}\sum_{j=1}^{n_{2}}  \left(Y_{2, j} - \bar{Y}_{2} \right) ^{2}
$$
Siccome entrambi devono stimare la stessa quantità condivisa. Noi sappiamo che più grande è la dimensione del campione, migliore è la qualità dello stimatore. Possiamo metterli assieme:
$$
S^{2} = \frac{\sum_{i=1}^{n_{1}}  (Y_{1, i} - \bar{Y}_{1})^{2} + \sum_{j=1}^{n_{2}} (Y_{2, j} - \bar{Y}_{2})^{2}}{n_{1} + n_{2}-2}
$$
$$
\mathbb{E}(S^{2}) = \sigma^{2}
$$
Ora consideriamo:
$$
t = \frac{\bar{Y}_{1} - \bar{Y}_{2} - (\mu_{1}- \mu_{2})}{\sqrt{ S^{2} \left( \frac{1}{n_{1}}+\frac{1}{n_{2}} \right) }} = \frac{\frac{\bar{Y}_{1} - \bar{Y}_{2} - (\mu_{1}- \mu_{2})}{\sqrt{ \sigma^{2} \left( \frac{1}{n_{1}}+\frac{1}{n_{2}} \right) }}}{\sqrt{ \frac{S^{2}}{\sigma^{2}} }} \sim t_{n_{1}+n_{2}-2}
$$
$\frac{(n_{1}+n_{2}-2)S^{2}}{\sigma^{2}} \sim \chi_{n_{1}-1}^{2} + \chi^{2}_{n_{2}-1} = \chi^{2}_{n_{1}+n_{2}-2}$.

Dunque:
$$
P\left( t_{n_{1} + n_{2} - 2, \frac{\alpha}{2}} \leq t \leq t_{n_{1}+n_{2}-2, 1-\frac{\alpha}{2}}\right) = 1-\alpha
$$
Perciò:
$$
P\left( \bar{Y}_{1}-\bar{Y}_{2} - t_{n_{1}+n_{2}-2, 1 - \frac{\alpha}{2}} S \sqrt{ \frac{1}{n_{1}} + \frac{1}{n_{2}} } \leq \mu_{1} - \mu_{2} \leq \bar{Y}_{1}-\bar{Y}_{2} - t_{n_{1}+n_{2}-2,  \frac{\alpha}{2}} S\sqrt{ \frac{1}{n_{1}} + \frac{1}{n_{2}} }\right) = 1-\alpha
$$
#### Esempio
$Y_{i} \sim N(\mu_{i}, \sigma_{i}^{2})$ con $i=1,2$.
Supponiamo di avere due campioni $Y_{1,1}, Y_{1,2} \dots Y_{1, n}$ e $Y_{2,1}, Y_{2,2}, \dots, Y_{2,n}$ tra loro indipendenti.
Sappiamo dunque come stimare medie e varianze:
$$
\hat{\mu}_{i} = \bar{Y_{i}}\qquad S^{2}_{i} = \frac{1}{n_{i}-1} \sum_{j=1}^{n_{i}}  (Y_{i,j} - \bar{Y}_{i})^{2}\qquad i = 1, 2
$$
Sia $\theta =\frac{\sigma_{1}^{2}}{\sigma^{2}_{2}}$.
$$
\hat{\theta} = \frac{\hat{\sigma}_{1}^{2}}{\hat{\sigma}_{2}^{2}} = \frac{S_{1}^{2}}{S_{2}^{2}}
$$
Inoltre sappiamo che:
$$
\begin{align}
(n_{1}-1) \frac{S^{2}_{1}}{\sigma^{2}_{1}} &\sim \chi_{n_{1}-1}^{2} \\
(n_{2}-1) \frac{S^{2}_{2}}{\sigma^{2}_{2}} &\sim \chi_{n_{2}-1}^{2}
\end{align}
$$
### Definizione di $F$ di Snedecor
Siano $W_{1} \sim \chi^{2}_{n_{1}}$ e $W_{2} \sim \chi^{2}_{n_{2}}$ tra loro indipendenti, allora:
$$
F = \frac{\frac{W_{1}}{n_{1}}}{\frac{W_{2}}{n_{2}}} \sim F_{n_{1}, n_{2}}
$$

Tornando all'esempio di prima, se consideriamo:
$$
\frac{\frac{S_{1}^{2}}{\sigma^{2}_{1}}}{\frac{S_{2}^{2}}{\sigma^{2}_{2}}} \sim F_{n_{1} -1, n_{2}-2}
$$
$$
P\left( F_{n_{1}-1, n_{2}-1, \frac{\alpha}{2}} \leq \frac{\frac{S_{1}^{2}}{\sigma^{2}_{1}}}{\frac{S_{2}^{2}}{\sigma^{2}_{2}}} \leq F_{n_{1}-1, n_{1}-1, 1-\frac{\alpha}{2}} \right) = 1 - \alpha
$$
$$
P\left( \frac{\frac{S_{1}^{2}}{S_{2}^{2}}}{F_{n_{1}-1, n_{2}-1, 1-\frac{\alpha}{2}}} \leq \frac{\sigma^{2}_{1}}{\sigma^{2}_{2}} \leq \frac{\frac{S_{1}^{2}}{S_{2}^{2}}}{F_{n_{1}-1, n_{2}-1, \frac{\alpha}{2}}} \right) = 1 - \alpha
$$
#### Esempio
Supponiamo di misurare sulla stessa popolazione due caratteristiche discrete:
Abbiamo $(X, Y)$ discrete.
Creaiamo la nostra tabella al cui interno vivono i $\pi_{i,j}=P(X = x_{i}, Y=y_{j})$. Indichiamo le marginali con $\pi_{+j}$ e $\pi_{i+}$ per valori di $X=x_{j}$ e $Y = y_{i}$ rispettivamente.
Possiamo creare una tabella fondamentalmente identica che contiene però le $f_{i,j}$ che sono le frequenze assolute del campione preso. Allo stesso modo esistono $f_{i+}$ e $f_{+j}$.
Ciò che vogliamo fare è trovare degli stimatori per $\pi_{i,j}$. Per farlo si può fare così:
Possiamo creare variabile aleatorie $Z_{i,j} \sim Ber(\pi_{i,j})$.
$$
N = \sum_{i=1}^{m} \sum_{j=1}^{n} f_{i, j}
$$
Dunque abbiamo $N - f_{i,j}$ sono gli insuccessi.
Dunque:
$$
\hat{\pi}_{i,j} = \frac{f_{i,j}}{N}
$$
Per il metodo dei momenti, dato che $\mathbb{E}(Z_{i,j}) = \pi_{i,j}$. Allo stesso modo:
$$
\hat{\pi}_{i+} = \frac{f_{i+}}{N} \qquad \hat{\pi}_{+j}=\frac{f_{+j}}{N}
$$
Se $X$ e $Y$ fossero indipendenti, allora $\pi_{i,j} = \pi_{i+} \cdot \pi_{+j}$.
Ma allora è anche vero che $\hat{\pi}_{i,j}= \hat{\pi}_{i+} \cdot \hat{\pi}_{+j}$? In generale no, perché abbiamo un campione.

Consideriamo:
$$
X^{2} = \sum_{i=1}^{m} \sum_{i=1}^{n}  \frac{(\hat{\pi}_{i,j} - \hat{\pi}_{i+} \hat{\pi}_{j+})^{2}}{\hat{\pi}_{i+} \hat{\pi}_{+j}} \overset{a}{\sim} \chi^{2}_{(n-1)(m-1)} \text{ se } \pi_{i,j} = \pi_{i+} \pi_{+j}, \forall i, j
$$
Questa quantità è piccola se è vera la condizione scritta sopra.
Se interpretiamo i $\hat{\pi}$ come variabili aleatorie allora $X^{2}$ è uno stimatore, se invece li consideriamo come valori allora $X^{2}$ è una stima.
$$
P(X^{2} > \chi^{2}_{(n-1)(m-1), 1 - \alpha}) = \begin{cases}
\alpha &  \text{se }  \pi_{i,j} = \pi_{i+} \pi_{+j}, \forall i,j \\
1 - \beta & \text{se } \pi_{i,j} \neq \pi_{i+} \pi_{+j}, \text{ per almeno una coppia } i, j
\end{cases}
$$
Andiamo a calcolare:
$$
P(X^{2} > x^{2}_{\text{oss}}) = p\text{-valore} = \alpha_{\text{oss}}
$$
dove $x_{\text{oss}}^{2}$ è la stima puntuale di $X^{2}$ derivante dal campione.

Allora se $\alpha_{\text{oss}} > \alpha$. Questo è compatibile con l'ipotesi di indipendenza.
Nel caso $\alpha_{oss} < \alpha$. Questa è una situazione incompatibile con l'ipotesi di indipendenza.

Questa che abbiamo fatto si chiama verifica delle ipotesi.

#### Esempio
Sia $Y \sim (\mu, \sigma^{2}_{0})$, varianza nota. Una volta che si specifica un modello si specifica un'ipotesi. Ad esempio l'ipotesi $H_{0}: \mu = 0$ come ipotesi nulla e un'ipotesi complementare $H_{1}:\mu \neq 0$. Dopodiché si deve costruire una statistica test ci aiuta a capire quale ipotesi è vera.
L'idea è di fissare $\alpha$ piccolo e cerco la procedura statistica che mi renda $\beta$ il più piccolo possibile.
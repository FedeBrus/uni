##### Esempio
$$
u' + 2u = \arctan(t)
$$
Come si comporta la soluzione per $t \rightarrow +\infty$.

Fatto 1°: Controllare domini massimale di esistenza.
Nel nostro caso non abbiamo problemi.

Fatto 2°: Controllare la tipologia dell'equazione differenziale ordinaria.
Nel nostro caso possiamo guardarla come un'equazione lineare di 1° ordine o come un'equazione lineare a coefficienti costanti.
Considerandola come "a coefficienti costanti" dobbiamo considerare l'equazione omogenea associata $u' + 2u = 0$.
$$
u' = -2u
$$
Polinomio caratteristico: $x + 2 = 0 \Longleftrightarrow x = -2$. Quindi la base è $(e^{-2t})$, quindi le soluzioni sono della forma $u_{om}(t) = ce^{-2t}$.

Per trovare la soluzione particolare dell'equazione non omogenea non si può usare il metodo semplificato, quindi bisogna usare Lagrange.
$$
\begin{align}
\bar{u}(t) &= c(t) e^{-2t} \\
\bar{u}'(t)  &= c'(t) e^{-2t} - 2c(t)e^{-2t}
\end{align}
$$
L'equazione originale diventa:
$$
\begin{align}
c'(t)e^{-2t} -2c(t)e^{-2t} + 2c(t)e^{ -2t } &= \arctan(t) \\
c'(t)e^{ -2t } & = \arctan(t) \\
\int c'(t) dt & = \int e^{ 2t } \arctan(t) dt \\
c(t)  &= \int e^{2t} \arctan(t) dt
\end{align}
$$
Soluzione generale:
$$
u(t) = ce^{-2t} + e^{ -2t } \int e^{ 2t } \arctan(t) dt
$$
Come risolvo il problema dell'andamento di $u(t)$ per $t \rightarrow +\infty$.
$$
F(t) = \int_{0}^{t} e^{ 2s } \arctan(s) ds
$$
Questa è la funzione integrale, ovvero una delle primitive.
Il discorso di concentra sul comportamento di:
$$
\lim_{ t \to  +\infty } e^{-2t} F(t)
$$
Sappiamo che ad esempio, per $s$ sufficientemente grande:
$$
\begin{align}
e^{ 2s } \arctan(s) &\geq 2024 \\
\int_{0}^{+\infty}  e^{ 2s } \arctan(s) &\geq \int_{0}^{+\infty} 2024dt
\end{align}
$$
Per il teorema del confronto $F(t) \rightarrow +\infty$ se $t \rightarrow +\infty$.
Ora possiamo utilizzare de l'Hopital per risolvere il limite:
$$
\lim_{ t \to +\infty } e^{-2t} F(t) = \lim_{ t \to +\infty } \frac{F(t)}{e^{2t}} = \left[ \frac{+\infty}{+\infty} \right] = \lim_{ t \to +\infty } \frac{e^{2t}\arctan(t)}{2e^{2t}} = \frac{\pi}{4}
$$
Conclusione:
$$
\lim_{ t \to +\infty } u(t) = \frac{\pi}{4}
$$
In generale se $\lim_{ t \to +\infty } u(t) = l \in \mathbb{R}$ si ha un'asintoto orizzontale.
##### Esempio
$$
u' -2u = \arctan(t)
$$
L'equazione omogenea associata è $u' = 2u$, quindi $u_{om}(t) = ce^{2t}$.
Utilizzando Lagrange la soluzione particolare $\bar{u}(t) = e^{ 2t } \int_{0}^{t} e^{-2s}\arctan(s) ds$.
La soluzione generale $u(t) = ce^{ 2t } + e^{ 2t }F(t)$.
Cerchiamo il comportamento della soluzione generale con $t \rightarrow +\infty$.
$$
\lim_{ t \to +\infty } F(t) = \int_{0}^{+\infty} e^{-2s}\arctan(s)ds = I\in \mathbb{R}_{+}
$$
La funzione integranda può essere facilmente maggiorata:
$$
e^{-2s}\arctan(s) \leq \frac{\pi}{2}e^{-2s}
$$
Utilizzando il teorema del confronto. Quindi $\int_{0}^{+\infty} e^{ -2s }\arctan(s)ds < +\infty$.
Dunque:
$$
\lim_{ t \to +\infty } u(t) = \lim_{ t \to +\infty } e^{ 2t }(c + I)
$$
Notiamo che $u(0) = c$.
Abbiamo 3 possibilità:
	1. Quando $u(0) + I > 0 \Longleftrightarrow u(0) > - I \implies u(t) \rightarrow +\infty, t \rightarrow +\infty$
	2. Quando $u(0) + I < 0 \Longleftrightarrow u(0) < -I \implies u(t) \rightarrow -\infty, t \rightarrow +\infty$
	3. Quando $u(0) + I = 0 \Longleftrightarrow u(0) = I \implies \lim_{ t \to +\infty } e^{2t}(c + I) = [+\infty \cdot 0]$

Risolviamo il terzo caso: 
$$
\lim_{ t \to +\infty } e^{ 2t } (c + I) = \lim_{ t \to +\infty } \frac{c+I}{e^{-2t}} = \lim_{ t \to +\infty } \frac{c + F(t)}{e^{-2t}} = \lim_{ t \to +\infty } \frac{e^{-2t}\arctan(t)}{-2e^{-2t}} = -\frac{\pi}{4}
$$
Le 3 possibilità ora diventano:
	1. Quando $u(0) + I > 0 \Longleftrightarrow u(0) > - I \implies u(t) \rightarrow +\infty, t \rightarrow +\infty$
	2. Quando $u(0) + I < 0 \Longleftrightarrow u(0) < -I \implies u(t) \rightarrow -\infty, t \rightarrow +\infty$
	3. Quando $u(0) + I = 0 \Longleftrightarrow u(0) = I \implies  u(t) = -\frac{\pi}{4}, t \rightarrow +\infty$

### Oscillatore armonico
Sia $u(t)$ la funzione che descrive lo spostamento del centro di una sfera collegata ad una molla su un piano privo di attrito.
$$
\begin{align}
F &= ma \\
-ku(t) & = m u''(t)
\end{align}
$$
Quindi si presenta tale equazione differenziale:
$$
\begin{align}
u''(t) + \frac{k}{m} u(t) &= 0 \\
u''(t) + \omega^{2} u(t) & = 0
\end{align}
$$
La soluzione è data dal polinomio caratteristico $x^{2} + \omega^{2} = 0 \Longleftrightarrow x = \pm i\omega$.
Quindi $u(t) = a\cos(\omega t)+ b\sin (\omega t)$.

Modifichiamo l'equazione originale con una forza esterna periodica e poniamo $k = m = 1$:
$$
u'' + u = \sin(\alpha t)
$$
Allora $u(t) = u_{om}(t) + \bar{u}(t) = a\cos(t) + b\sin(t) + \lambda \cos(\alpha t) +\mu \sin(\alpha t)$. Ma questo vale a patto che $\alpha \neq 1$.
Se $\alpha = 1$, $u(t) = \alpha \cos(t) + b\sin(t) + \lambda t\cos(t) + \mu t\sin(t)$. Il che vuol dire che se la forza esterna ha lo stesso "battito" dell'oscillatore, la forza di quest'ultimo continua a cresce.

Ora aggiungiamo anche l'attrito:
$$
u'' + \alpha u' + u = 0
$$
Polinomio caratteristico: $x^{2}+\alpha x + 1 = 0$.
$\Delta = \alpha^{2} - 4$.
$\lambda \mu = 1, \lambda + \mu = -\alpha < 0$. Per via delle regole del trinomio speciale. Quindi $\lambda$ e $\mu$ devono essere negativi concordi, altrimenti una delle due proprietà viene violata.

Se $\Delta > 0 \Longleftrightarrow \alpha > 2$ allora $u(t) = ae^{\lambda t}+be^{ \mu t }$
Se $\Delta < 0 \Longleftrightarrow \alpha \in (0, 2)$ allora $u(t) = ae^{ At }\cos(Bt)+be^{At}\sin(Bt)$

## Sistemi di equazioni differenziali ordinarie
$$
\begin{cases}
u' = 4u + 2v \\
v' = u + 3v \\
u(t_{0}) = a \\
v(t_{0}) = b
\end{cases}
$$
Metodo 1°:
Derivo $u' = 4u +2v$
$$
u'' = 4u' + 2v' = 4u' +2(\underbrace{ u + 3v }_{ v' }) = 4u' + 2u +6v
$$
Troviamo un modo per scrivere il termine di $v$.
$$
u' = 4u +2v \implies 2v = u'-4u \implies 6v = 3u' - 12u
$$
Ora sostituiamo nella prima equazione derivata il termine di $v$.
$$
u'' = 4u' + 2u + 3u' - 12u = 7u' - 10u \implies u'' - 7u' + 10 = 0
$$
Ora risolviamo la prima equazione.
Polinomio caratteristico: $x^{2}-7x + 10 = 0$. $\lambda = 5, \mu = 2$
$$
u(t) = ae^{5t} +be^{ 2t }
$$
In questo caso sostituiamo la soluzione trovata a $u(t)$ e ricaviamo la soluzione di $v(t)$.
$$
v(t) = \frac{1}{2} (u'(t)-4u(t)) = \frac{1}{2} (5ae^{5t}+2be^{ 2t }-4ae^{ 5t }-4be^{ 2t }) = \frac{a}{2} e^{ 5t } - b e^{ 2t }
$$
Metodo 2°:
$$
\begin{cases}
u' = 4u + 2v \\
v' = u + 3v \\
\end{cases}
$$
$$
\vec{U}(t) = \begin{bmatrix}
u(t) \\
v(t)
\end{bmatrix}
$$
$$
\vec{U}'(t) = \begin{bmatrix}
u'(v) \\
v'(t)
\end{bmatrix}
$$
$$
A \vec{U}(t)
= \begin{bmatrix}
4 & 2 \\
1 & 3
\end{bmatrix} \vec{U}(t)
$$
Consideriamo ora $A - \lambda I_{3} = \begin{bmatrix}  4-\lambda & 2 \\ 1 & 3 - \lambda \end{bmatrix}$.
Quindi $\det(A - \lambda I_{3}) = (4-\lambda)(3-\lambda)-2 = \lambda^{2}-7\lambda+10$, che è il polinomio caratteristico della matrice.
Così troviamo due autovalori $\lambda_{1} = 5, \lambda_{2} = 7$.
$$
A - 5I_{3} = \begin{bmatrix}
-1 & 2 \\
1 & -2
\end{bmatrix}
$$
$$
A - 2I_{3} = \begin{bmatrix}
2 & 2 \\
1 & 1
\end{bmatrix}
$$
Quindi $\vec{U}(t) = a \begin{bmatrix} 1 \\ -\frac{1}{2} \end{bmatrix} e^{5t}+b\begin{bmatrix}1\\-1\end{bmatrix}e^{ 2t }$.

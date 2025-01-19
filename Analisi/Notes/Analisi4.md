### Uguaglianza tra numeri complessi
Siano $z, w \in \mathbb{C}$, e $z = a + bi = \rho e^{i\theta}, w = c+di=re^{i\phi}$ , allora:
$$
z = w \Longleftrightarrow a = c \text{ e }b = d \Longleftrightarrow \rho = r \text{ e } \theta = \phi +2k\pi
$$
### Radice di un numero complesso
Dato un numero complesso $w_{0} \in \mathbb{C}$ e un intero $n \geq 2$, si dicono radici n-esime di $w_{0}$ i numeri complessi $z$ tali che:
$$
z^{n} = w_{0}
$$
1. se $w_{0} = 0$ c'è un'unica soluzione ($z = 0$)
2. se $w_{0} \neq 0$ ci sono $n$ soluzioni nei $\mathbb{C}$, che rappresentano gli $n$ vertici di un poligono regolare ($n \geq 3$), o gli estremi di un segmento ($n = 2$). 

$$w_{0} = \rho e^{i\theta} \qquad z = re^{i\phi}$$


$$
\begin{align}
z^{n}=w_{0} &\Longleftrightarrow r^{n} = \rho \text{ e } n\phi = \theta + 2k\pi  \\
&\Longleftrightarrow r = \sqrt{ \rho } \text{ e } \phi = \frac{\theta}{n} + \frac{2k\pi}{n} \qquad \text{con } k \in \mathbb{Z}
\end{align}
$$
Per trovare tutte le soluzioni uniche, basta considerare le $k$ da $0$ a $n$.

##### Esempio: 
$$
w_{0} = 8i \qquad \sqrt[3]{ w_{0} }
$$
$$
\rho = 8 \qquad \theta = \frac{\pi}{2}
$$
$$
\begin{align}
z &= re^{i\phi}  \\
z^{3} &= 8e^{i \pi/2}  \\
r &= \sqrt[3]{ 8 } = 2 \\ \\
 \\

\phi_{n} &= \frac{\frac{\pi}{2}}{3}+\frac{2k\pi}{3} = \left\{ \begin{array}{l}
\phi_{0} = \frac{\pi}{6} \\
\phi_{1} = \frac{5\pi}{6} \\
\phi_{2} = \frac{3\pi}{2}
\end{array} \right.
\end{align}
$$
$$
z = \left\{ \begin{array}{l}
z_{0} = 2e^{i \frac{\pi}{6}} = 2\left( \cos \frac{\pi}{6} + i \sin \frac{\pi}{6} \right) = \sqrt{ 3 }+i\\
z_{1} = 2e^{i \frac{5\pi}{6}} = 2\left( \cos \frac{5\pi}{6} + i\sin\frac{5\pi}{6} \right) = -\sqrt{ 3 }+i\\
z_{2} = -2e^{i \frac{\pi}{2}} = -2\left( \cos \frac{\pi}{2}+ i\sin \frac{\pi}{2}\right) = -2i
\end{array} \right.
$$

### Polinomi di numeri complessi
$$
\begin{align}
P(x) = a_{n}x^{n}+a_{n-1}x^{n-1}+a_{n-1}x^{n-2}+\dots+a_{1}x+a_{0} \\
 \\
a_{k} \in \mathbb{C} / \mathbb{R} \qquad k = 0, \dots, n \qquad x \in \mathbb{C} / \mathbb{R}
\end{align}
$$
Dove $n$ è il grado del polinomio.

Un numero $\alpha \in \mathbb{C}$ si dice radice del polinomio $P(x)$ se, andando a sostituire $x$ con $\alpha$, il polinomi si annulla, ovvero $P(\alpha) = 0$.

### Teoremi

1. Teorema di Ruffini
se $\alpha \in \mathbb{C}$  è radice del polinomio $P(x)$, allora $P(x)$ è divisibile per $(x - \alpha)$, ossia $\exists Q(x) : P(x) = (x-\alpha)Q(x)$ 

2. Teorema della divisione di due polinomi
Dati 2 polinomi $A(x)$ e $B(x)$, esistono sempre 2 polinomi $Q(x)$ e $R(x)$ tali che: $A(x)=B(x)Q(x)+R(x)$

3. 3° Teorema
Ogni polinomio di grado $n$ può avere al *massimo* $n$ radici.

4. Teorema fondamentale dell'algebra
Un polinomio $P(x)$ di grado $n$ ha *esattamente* $n$ radici complesse, eventualmente contate con le rispettive molteplicità.

Conseguenza di ciò è che si può fattorizzare ogni polinomio con monomi di eventuale molteplicità.
$$
\begin{align}
P(x) &= (x - \alpha_{1})(x-\alpha_{2})\dots(x-\alpha_{n}) \qquad \text{con } a_{k} \in \text{radici di } P(x) \\ \\

P(x) &= (x - \beta_{1})^{m_{1}}(x-\beta_{2}) ^{m_{2}} \dots (x - \beta_{n})^{m_{n}}  \qquad m_{1}+m_{2}+m_{3}+\dots+m_{n} = n \\
\end{align}
$$

### Molteplicità di radici

Sia $\alpha \in \mathbb{C}$ radice di un polinomio $P(x)$, diremo che $m \in \mathbb{N} \setminus \{ 0 \}$ è la molteplicità di $\alpha$ se $(x - \alpha)^{m}$ divide $P(x)$, ovvero:
$$
P(x) = (x - \alpha)^{m} Q(x)
$$
dove $deg(Q(x)) = deg(P(x)) - m$  

##### Esempio:
1. $P(x) = x^{2}+1$
Questo polinomio non ha radici reali.
$$
\alpha^{2}=-1 \implies \alpha = \pm i
$$
$$
P(x) = (x-i)(x+i)
$$
Per il teorema di Ruffini.

2. $P(x) = x^{4} - 1$
$$
\begin{align}
x^{4} - 1 &= (x^{2}-1)(x^{2}+1) \\
 & = (x-1)(x+1)(x^{2}+1) \\
 & = (x-1)(x+1)(x-i)(x+i)
\end{align}
$$
3. $P(x) = x^{3} + 8$
$$
\begin{align}
x^{3} + 8  & = (x + 2)(x^{2}-2x+4) \\
 \\ \\

\Delta & =-12 \\ \\

x_{1}, x_{2}  & = \frac{2\pm \sqrt{ -12 }}{2} \\
 & = 1\pm \frac{\sqrt{ -1 }\sqrt{ 12 }}{2} \\
 & = 1 \pm i\sqrt{ 3 } \\
 \\
 \\
 \\
P(x) = x^{3}+8 &= (x+2)(x - (i + i\sqrt{ 3 }))(x - (i - i\sqrt{ 3 }))
\end{align}
$$
### Fattorizzazione polinomi reali
Sia $P(x)$ un polinomio *a coefficienti reali*, ossia $a_{k} \in \mathbb{R}, \quad k = 0, 1, \dots, n$.
Vale sempre che:
$$
P(\bar{z}) = \overline{P(z)} \quad \text{ con } z \in \mathbb{C}
$$
$$
\begin{align}
P(z)  &= a_{n}z^{n} + a_{n-1}z^{n-1} + \dots + a_{2}z^{2}+a_{1}z+a_{0}  \\ \\  \\

\overline{P(z)}  & = \overline{a_{n}z^{n} + a_{n-1}z^{n-1} + \dots + a_{2}z^{2}+a_{1}z+a_{0}} \\ \\

 & = \overline{a_{n}z^{n}} + \overline{a_{n - 1}z^{n - 1}} + \dots + \overline{a_{2}z^{2}} + \overline{a_{1}z} + \overline{a_{0}} \\
 \\
 & = \overline{a_{n}}\overline{z^{n}}+\overline{a_{n-1}}\overline{z^{n-1}}+\dots+\overline{a_{2}}\overline{z^{2}} + \overline{a_{1}}\overline{z} + \overline{a_{0}} \\
 \\
 & = a_{n}\overline{z^{n}}+a_{n-1}\overline{z^{n-1}}+\dots+a_{2}\overline{z^{2}} + a_{1}\overline{z} + a_{0} \\
 \\
 & = a_{n}\bar{z}^{n}+a_{n-1}\bar{z}^{n-1}+\dots+a_{2}\bar{z}^{2} + a_{1}\bar{z} + a_{0} \\
 \\
 & = P(\bar{z})
\end{align}
$$
##### Conseguenza:
Se il polinomio $P(x)$ ha coefficienti reali e $\alpha \in \mathbb{C}$ è radice di $P(x)$, allora $\bar{\alpha} \in \mathbb{C}$ è anch'essa radice.
$$
P(\alpha) = 0 = \bar{0} = \overline{P(\alpha)} = P(\bar{\alpha})
$$
se $\alpha$ ha molteplicità $m$ allora anche $\bar{\alpha} \in \mathbb{C}$ avrà molteplicità $m$.

Supponiamo che $\alpha \in \mathbb{C}$ sia radice complessa di $P(x)$, allora $\bar{\alpha}$ è radice:
$$
\begin{align}
(x - \alpha)(x - \bar{\alpha}) &= (x - (a + bi))(x - (a - bi)) \\ 
	 & = (x^{2} - x(a - bi) - x(a + bi) + (a - bi)(a + bi)) \\
	 & = x^{2} - 2ax + a^{2} + b^{2}  \\
	 & = x^{2} - 2\mathrm{Re}(\alpha)x + |\alpha|^{2}
\end{align}
$$

Se $P(x)$ ha grado $n$ e coefficienti reali:
$$
P(x) = (x - \alpha_{1})(x - \alpha_{2})(x - \alpha_{3})\dots(x-\alpha_{n}) \qquad a_{k} \text{ sono reali o complessi}
$$
Se $a_{i} \in \mathbb{C}$ allora $\bar{a_{i}} \in \mathbb{C}$ è anch'essa radice, considerando eventuali molteplicità.

##### Esempio:
$$
\begin{align}
P(x)  & = x^{4} + 1 \\ \\ \\ 
 z^{4} + 1  & = 0 \\
 z^{4}  & = -1
\end{align}
$$
Quindi bisogna trovare le radici quarte di $-1$.
$$
\begin{align}
w_{0} = -1 &= e^{i\pi} \\ \\ \\ \\
r = \sqrt[4]{ \rho } = \sqrt[4]{ 1 } &= 1 \\ \\
\phi = \frac{\theta}{n} +\frac{2k\pi}{n} = \frac{\pi}{4} + \frac{k\pi}{2} &= \left\{ \begin{array}{l}
\phi_{0} = \frac{\pi}{4}  \\
\phi_{1} = \frac{3\pi}{4} \\
\phi_{2} = \frac{5\pi}{4} \\
\phi_{3} = \frac{7\pi}{4}
\end{array} \right.
\end{align}
$$
$$
z = \left\{ \begin{array}{l}
z_{0} = \cos \frac{\pi}{4} + i \sin \frac{\pi}{4} = \frac{\sqrt{ 2 }}{2}+ i\frac{\sqrt{ 2 }}{2} \\
z_{1} = \cos \frac{3\pi}{4} + i \sin \frac{3\pi}{4} = -\frac{\sqrt{ 2 }}{2}+ i\frac{\sqrt{ 2 }}{2} \\
z_{2} = \cos \frac{5\pi}{4} + i \sin \frac{5\pi}{4} = -\frac{\sqrt{ 2 }}{2}- i\frac{\sqrt{ 2 }}{2} \\
z_{3} = \cos \frac{7\pi}{4} + i \sin \frac{7\pi}{4} = \frac{\sqrt{ 2 }}{2}- i\frac{\sqrt{ 2 }}{2} 
\end{array} \right.
$$
Da notare come $z_{0}$ e $z_{3}$ sono coniugati fra loro, come lo sono $z_{1}$ e $z_{2}$.

Quindi:
$$
\begin{align}
P(x) = x^{4} + 1 &= (x - z_{0})(x - z_{1})(x - z_{2})(x - z_{3}) \\
 &= (x - z_{0})(x - \bar{z_{0}})(x - z_{1})(x - \bar{z_{1}}) \\
 &= (x^{2}-\sqrt{ 2 }x + 1)(x^{2}+\sqrt{ 2 }x + 1)
\end{align}
$$
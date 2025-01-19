## Numeri complessi
I numeri complessi possono essere rappresentati in 3 modalità:
- forma cartesiana
- forma trigonometrica
- forma esponenziale

### Forma cartesiana
$$
z \in \mathbb{C} \quad \quad \quad z = x+iy \quad \quad \quad x,y \in \mathbb{R}
$$
- $x = \mathrm{Re}(z) =\text{parte reale}$
- $y = \mathrm{Im}(z) =\text{parte immaginaria}$
- $i =\text{unità immaginaria}$

Si ha che: $i^{2}=-1$
#### Rappresentazione sul piano di Argand-Gauss

![[gauss.png|400]]

### Regole algebriche in rappresentazione cartesiana
- somma e differenza
$$
\forall z, w \in \mathbb{C}  \qquad z=a+bi, w = c+di
$$
$$
\begin{align}
z \pm w &= (a + bi) \pm (c + di) \\
&= (a \pm c) + (b \pm d)i  \\
 \\
\mathrm{Re}(z \pm w) &= \mathrm{Re}(z) \pm \mathrm{Re}(w) \\
\mathrm{Im}(z \pm w) &= \mathrm{Im}(z) \pm \mathrm{Im}(w)
\end{align}
$$
- prodotto
$$
\begin{align*}
z \cdot w &= (a + bi) \cdot (c + di) \\
&= ac + bci + adi + bdi^{2} \\
&= ac - bd + bci + adi \\
&= (ac-bd) + (bc + ad)i \\
 \\
\mathrm{Re}(z \cdot w) &= \mathrm{Re}(z)\mathrm{Re}(w) - \mathrm{Im}(z)\mathrm{Im}(w) \\
\mathrm{Im}(z \cdot w) &= \mathrm{Re}(z)\mathrm{Im}(w) + \mathrm{Im}(z)\mathrm{Re}(w)
\end{align*}
$$
##### Oss:
- l'elemento neutro rispetto alla somma/differenza in $\mathbb{C}$ è $z = 0$
$$
z \pm 0 = z \quad \forall z \in \mathbb{C}
$$
- l'elemento opposto rispetto alla somma/differenza in $\mathbb{C}$ è $w = -z$
$$
z + w = 0 \quad \text{con } w = -z \quad \forall z \in \mathbb{C}
$$
![[simmetria_origine.png|600]]

### Divisione in forma cartesiana
$$
\frac{z}{w} = z \cdot \frac{1}{w}
$$
Per trovare il reciproco di qualsiasi numero $z \in \mathbb{C}$:
$$
\frac{1}{z} = \frac{1}{a+bi} \cdot \frac{a-bi}{a-bi} = \frac{a - bi}{a^{2}-b^{2}i^{2}} = \frac{a - bi}{a^{2}+b^{2}} = \frac{a}{a^{2}+b^{2}} - \left( \frac{b}{a^{2}+b^{2}}\right)i
$$
Per controllare:
$$
\begin{align}
z \cdot \frac{1}{z} &= 1 \\ \\
(a+bi) \frac{a - bi}{a^{2}+b^{2}}  &= 1 \\ \\
\frac{(a^{2}+b^{2})}{(a^{2}+b^{2})} &= 1 \\ \\
1 &= 1
\end{align}
$$
##### Esercizio:
Mettere in forma cartesiana $\frac{3+2i}{5-i}$
$$
(3+2i) \cdot \frac{5+i}{25 + 1} = \frac{1}{26}(15+10i+3i-2) = \frac{13+13i}{26} = \frac{1}{2} + \frac{1}{2}i
$$
### Coniugato
![[simmetria_asse.png|600]]
$$
\begin{align}
z &= a + bi \\
\bar{z} &= a - bi \\
z \cdot \bar{z} &= \underbrace{ a^{2} + b^{2} }_{\text{numero reale}}
\end{align}
$$
### Modulo
Sia $z \in \mathbb{C}$
$$
\begin{align}
z &= a+bi  \\
|z| &= \sqrt{ a^{2} +b^{2} } = \sqrt{ z \cdot \bar{z} }
\end{align}
$$
##### Oss:
- $\forall z \in \mathbb{C} \quad |z| \in \mathbb{R}, |z| \geq 0$
- $|z|=0 \Longleftrightarrow z = 0$
- $|z|^{2} = (a + bi)(a - bi) = z \cdot \bar{z}$
- $\frac{1}{z} = \frac{a-bi}{a^{2}+b^{2}} = \frac{\bar{z}}{|z|^{2}}$

##### Esempio: 
Sia $\underbrace{ z = i }_{ \text{immaginario puro} }$
$$
\begin{align}
\bar{z} &= -i \\
|z| &= \sqrt{ 0 + 1 } = 1 \\
\frac{1}{z} &=-i
\end{align}
$$
##### Esempio: 
Trovare il luogo geometrico in cui $\bar{z} = \frac{1}{z}$

Sappiamo che:
$$
\frac{1}{z} = \frac{\bar{z}}{|z|^{2}}
$$
Dunque:
$$
\begin{align}
\bar{z}  &= \frac{\bar{z}}{|z|^{2}} \\
1  &= |z|^{2} \\ \\
\end{align}
$$
$$
\underbrace{ a^{2}+b^{2} = 1 }_{ \text{formula della circonferenza con centro origine e raggio 1} }
$$
![[raggio1.png|500]]

### Rappresentazione trigonometrica
Utilizzando coordinate planari su $\mathbb{R}^{2}$
$$
P(a, b) \leftrightarrow P(\rho, \theta)
$$
dove $\rho$ è la distanza di $P$ dall'origine, ovvero $\sqrt{ a^{2}+ b^{2} }$, e $\theta$ è l'angolo tra l'ascissa e la semiretta $\overrightarrow{OP}$.

![[trigonometrica.png|500]]

$$
\begin{align}
a &= \rho \cos \theta \\
b &= \rho \sin \theta \\
\frac{b}{a} &= \frac{\rho \sin \theta}{\rho \cos \theta} = \tan \theta \implies \theta = \arctan\left( \frac{b}{a} \right) 
\end{align}
$$
##### Oss:
Se ci si trova nel I o IV quadrante $\theta = \arctan\left( \frac{b}{a} \right)$, altrimenti se ci si trova nel II o III quadrante $\theta = \arctan\left( \frac{b}{a} \right) + \pi$ 

$$
\begin{align}
z &= a + bi \\
 & = \rho \cos \theta + \rho \sin \theta i \\
 & = \rho(\cos \theta + \sin \theta i)
\end{align}
$$
$$
\begin{align}
\bar{z} &= a - bi \\ 
 & = \rho \cos \theta - \rho \sin \theta i \\
 & = \rho(\cos (-\theta) + \sin (-\theta) i)
\end{align}
$$
![[coniugato_trigonometrico.png|500]]
$$
\begin{align}
z &= \rho(\cos \theta + i \sin \theta) \\
w &= r(\cos \phi + i \sin \phi) \\
z \cdot w & = \rho r [(\cos \theta \cos \phi-\sin \theta \sin \phi) + i(\cos \theta \sin \phi + \cos \phi \sin \theta)] \\
 & = \rho r [\cos(\theta +\phi) + i \sin(\theta + \phi)]
\end{align}
$$
Quindi: 
$$
\begin{align}
z = (\rho,\theta) &\qquad w = (r, \phi) \\ 
 \\
z \cdot w &= (\rho r, \theta + \phi)
\end{align}
$$
### Reciproco
$$
\frac{1}{z} = \frac{\bar{z}}{|z|^{2}} = \frac{\rho(\cos(-\theta)+i\sin(-\theta)}{\rho^{2}} = \frac{\cos \theta -i\sin \theta}{\rho} = \left( \frac{1}{\rho} \right) (\cos \theta -i\sin \theta)
$$
## Formule
$$
\begin{align}
z &= (\rho, \theta) \\ \\
w &= (r, \phi) \\ \\

\frac{1}{z}  & = \left( \frac{1}{\rho}, -\theta \right) \\ \\

\bar{z} & =(\rho, -\theta) \\ \\

|z| & =\rho  \\ \\

z \cdot w &= (\rho r, \theta + \phi) \\ \\

\frac{z}{w}  & = \left( \frac{\rho}{r}, \theta - \phi \right)

\end{align}
$$
### Divisione in forma trigonometrica
$$
\begin{align}
z = (\rho, \theta) & \qquad w = (r, \phi) \\ \\

z = z \cdot \frac{1}{w} = (\rho, \theta) \cdot \left( \frac{1}{r}, -\phi\right) & = \left( \frac{\rho}{r}, \theta-\phi \right)  \\
 & = \frac{\rho}{r}\left( \cos(\theta-\phi) + i\sin(\theta -\phi) \right)
\end{align}
$$
### Proprietà del coniugo

$$
\begin{align}
 & \overline{z + w} = \bar{z} + \bar{w} \\ \\

 & \overline{z \cdot w} = \bar{z} \cdot \bar{w} \\ \\

 & \overline{z^{w}} = \bar{z}^{\bar{w}} \\ \\

 & \bar{\bar{z}} = z \\ \\

 & |\bar{z}| = |z| \\ \\

 & \overline{\left( \frac{1}{z} \right)} = \overline{\left( \frac{\bar{z}}{|z|^{2}} \right)} = \frac{\bar{\bar{z}}}{|\bar{z}|^{2}} = \frac{z}{|z|^{2}} \\ \\

\end{align}
$$
### Rappresentazione esponenziale
$$
\begin{align}
z = \rho(\cos \theta + i \sin \theta) = \rho e^{i\theta} \\
w = r e^{i\phi}
\end{align}
$$
$$
\begin{align}
z \cdot w  & = \rho re^{i(\theta+\phi)} \\ \\

\frac{z}{w} & = \frac{\rho}{r}e^{i(\theta-\phi)} \\ \\

\frac{1}{z} & = \frac{e^{-i\theta}}{\rho} \\ \\

\bar{z} &= \overline{\rho e^{i\theta}}  \\
&= \bar{\rho}\overline{(e^{i\theta})}  \\
&= \rho e^{\overline{i\theta}}  \\
&= \rho e^{-i\theta}
\end{align}
$$
### Potenze di un numero complesso
$$
z^{n} = \rho^{n}(\cos(n\theta)+i\sin(n\theta)) = \rho^{n} e^{ni\theta} \quad \forall n \in \mathbb{Z}
$$
Sia $z = \cos \theta + i \sin \theta$.
$$
\begin{align}
z^{2} = (\cos \theta + i \sin \theta)^{2} &= (\cos ^{2}\theta-\sin^{2}\theta)+2i\sin \theta \cos \theta \\
 & = \cos(2\theta) + i\sin(2\theta)
\end{align}
$$
$$
\begin{align}
z^{3} = (\cos \theta + i \sin \theta)^{3} &= \cos^{3}\theta +3i\cos ^{2}\sin \theta+3\cos \theta(i\sin\theta)^{2}+(i\sin \theta)^{3}\\
 & = (\cos \theta + i \sin \theta)^{3}  \\
 & = \cos^{3}\theta +3i\cos ^{2}\sin \theta-3\cos \theta\sin ^{2}\theta-i\sin^{3}\theta \\
 & = (\cos ^{3}\theta-3\cos \theta \sin ^{2}\theta) + i(3\cos ^{2}\sin \theta-\sin ^{3}\theta) \\
 & = \cos(3\theta)+i\sin(3\theta)
\end{align}
$$
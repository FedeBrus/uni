## Es 10.1
Determinare il valore del parametro $k \in \mathbb{R}$ tale che i vettori
$$
v = (1, 3, 7, -1) \qquad w = (3, 5, 1, k)
$$
siano ortogonali.

$$
3 + 15 + 7 - k = 0
$$
Perciò $k = 25$.
## Es 10.2
Siano $u=(4,2,-2)$ e $v=(3, -3, 2)$ vettori di $\mathbb{R}^{3}$.

### a)
Calcolare le lunghezze di $u$ e di $v$ (rispetto al prodotto scalare canonico di $\mathbb{R}^{3}$).
$$
\lVert u \rVert = \sqrt{ 16 + 4 + 4 } = \sqrt{ 24 } = 2\sqrt{ 6 }
$$
$$
\lVert v \rVert  = \sqrt{ 9 + 9 +4 } = \sqrt{ 22 }
$$
### b)
Trovare tutti i vettori $w$ di lunghezza $1$ ortogonali a $u$ e a $v$.

Per trovare ciò basta normalizzare il prodotto vettoriale $u \times v$:
$$
u \times v = (4 - 6, -6 - 8, -12 - 6) = (-2, -14, -18)
$$
Prendiamo un vettore multiplo per agevolare i conti:
$$
w' = (1, 7, 9)
$$
Normalizziamo il vettore
$$
w_{1} = \frac{w'}{\lVert w \rVert } = \frac{(1,7, 9)}{\sqrt{ 1 +49+81 }} = \left( \frac{1}{\sqrt{ 131 }}, \frac{7}{\sqrt{ 131 }}, \frac{9}{\sqrt{ 131 }} \right)
$$
Bisogna ricordarsi che i vettori in questo caso sono due, $w_{2} = -w_{1}$.
$$
w_{2} = -w_{1}
$$
## Es 10.3
Siano assegnati i seguenti vettori di $\mathbb{R}^{4}$:
$$
v = (2, -1, 0, 1) \qquad w = (-1, 2, 0, 2)
$$
### a)
Si calcoli l'angolo tra i due vettori
$$
\theta = \arccos\left( \frac{-2 -2 + 2}{\sqrt{ 6 }\sqrt{ 9 }} \right) = \arccos\left( -\frac{2}{3\sqrt{ 2 }\sqrt{ 3 }} \right) = \arccos\left( -\frac{\sqrt{ 2 }}{3\sqrt{ 3 }} \right)
$$
### b)
Si determini la proiezione ortogonale di $v$ su $w$
$$
pr_{w}(v) = \frac{(v \cdot w)w}{\lVert w \rVert ^{2}} = \frac{-2w}{9} = \left( \frac{2}{9}, -\frac{4}{9}, 0,-\frac{4}{9} \right)
$$
### c)
Si scriva $v$ come somma di un vettore $v_{1}$ multiplo di $w$ e di un vettore $v_{2}$ ortogonale a $w$

Consideriamo come multiplo di $w$ $pr_{w}(v)$ già calcolato, mentre come vettore ortogonale a $w$ basta prendere $v - pr_{w}(v)$.
$$
v - pr_{w}(v) = \left( \frac{16}{9}, -\frac{5}{9}, 0, \frac{13}{9} \right)
$$
## Es 10.5
Data la base $\mathcal{B} = (v_{1} = (-1, 0 ,1), v_{2} = (0,1,0), v_{3}=(1,0,1))$ di $\mathbb{R}^{3}$, si determini una base ortonormale di $\mathbb{R}^{3}$ utilizzando il procedimento di Gram-Schmidt a partire da $\mathcal{B}$.

Normalizziamo $v_{1}$:
$$
u_{1} = \left( -\frac{1}{\sqrt{ 2 }}, 0, \frac{1}{\sqrt{ 2 }} \right)
$$
Calcoliamo $u_{2}'$:
$$
u_{2}' = v_{2} - (u_{1} \cdot v_{2}) u_{1} = (0,1,0) - (0, 0, 0) = (0, 1, 0) = u_{2}
$$
Calcoliamo $u_{3}'$:
$$
u_{3}' = v_{3} - (u_{1} \cdot v_{3}) u_{1} - (u_{2} \cdot v_{3})u_{2} = (1, 0 ,1) - (0, 0, 0) - (0, 0, 0) = (1, 0, 1)
$$
Normalizziamo $u_{3}'$:
$$
u_{3} = \left( \frac{1}{\sqrt{ 2 }}, 0, \frac{1}{\sqrt{ 2 }} \right)
$$
La base ortonormale $\mathcal{B} =  \left(\left( -\frac{1}{\sqrt{ 2 }}, 0, \frac{1}{\sqrt{ 2 }}\right), (0, 1, 0), \left( \frac{1}{\sqrt{ 2 }}, 0, \frac{1}{\sqrt{ 2 }}\right) \right)$



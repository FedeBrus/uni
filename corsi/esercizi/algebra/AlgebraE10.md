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
## Es 10.7
Si considerino i vettori di $\mathbb{R}^{3}$:
$$
v_{1} = (1,2,1) \qquad v_{2} = (1,1,1)
$$
### a)
Calcolare le lunghezze di $v_{1}$ e di $v_{2}$.
$$
\lVert v_{1} \rVert  = \sqrt{1 + 4 + 1 } = \sqrt{ 6 }
$$
$$
\lVert v_{2} \rVert  = \sqrt{ 3 }
$$
### b)
Determinare la proiezione ortogonale di $v_{1}$ su $v_{2}$:
$$
pr_{v_{2}}(v_{1}) = \frac{(v_{1} \cdot v_{2}) v_{2}}{\lVert v_{2} \rVert^{2} } = \frac{4(1,1,1)}{3} = \left( \frac{4}{3}, \frac{4}{3}, \frac{4}{3} \right)
$$
### c)
Trovare una base ortonormale del sottospazio di $\mathbb{R}^{3}$ generato dai vettori $v_{1}$ e $v_{2}$:

Troviamo $u_{1}$ normalizzando $v_{1}$:
$$
u_{1} = \frac{(1, 2, 1)}{\sqrt{ 6 }} = \left( \frac{1}{\sqrt{ 6 }},\frac{2}{\sqrt{ 6 }},\frac{1}{\sqrt{ 6 }}  \right)
$$
Troviamo $u_{2}'$ proiettando $v_{2}$ su $u_{1}$:
$$
u_{2}' = v_{2} - (v_{2} \cdot u_{1})u_{1} = (1,1,1) - \left( \frac{2}{3}, \frac{4}{3}, \frac{2}{3} \right) = \left( \frac{1}{3}, -\frac{1}{3}, \frac{1}{3} \right)
$$
Normalizziamo $u_{2}'$:
$$
u_{2} = \sqrt{ 3 } \left( \frac{1}{3}, -\frac{1}{3}, \frac{1}{3} \right) = \left( \frac{\sqrt{ 3 }}{3}, -\frac{\sqrt{ 3 }}{3}, \frac{\sqrt{ 3 }}{3} \right)
$$
Dunque la base ortonormale è: $\left( \frac{1}{\sqrt{ 6 }}(1,2,1), \frac{\sqrt{ 3 }}{3}(1,-1,1) \right)$
## Es 10.8
Sia $U$ il sottospazio di $\mathbb{R}^{3}$ costituito dai vettori $(x_{1}, x_{2}, x_{3})$ tali che $2x_{1} + x_{2} = 0$.
Si determini una base ortonormale di $U$ rispetto al prodotto scalare ordinario di $\mathbb{R}^{3}$.

Il sottospazio è costituito dai vettori che risolvono il seguente sistema:
$$
\begin{cases}
2x + y = 0 \\
y = t \\
z = s
\end{cases}
\rightarrow
\begin{cases}
x = -\frac{t}{2} \\
y = t \\
z = s
\end{cases}
$$
Quindi il sottospazio è $\left\langle  (-\frac{1}{2}, 1, 0), (0,0,1)  \right\rangle$. In questo caso i due vettori sono già ortogonali tra di loro, dunque basta normalizzarli:
$$
u_{1} = \frac{\left( -\frac{1}{2}, 1, 0 \right)}{\sqrt{ \frac{5}{4} }} =\left( -\frac{1}{\sqrt{ 5 }}, \frac{2}{\sqrt{ 5 }}, 0 \right)
$$
$$
u_{2} = (0, 0, 1)
$$
## Es 10.9
Sia $T: \mathbb{R}^{3} \rightarrow \mathbb{R}^{2}$ la funzione lineare tale che
$$
T(1, -2, 1) = (2,1), \qquad T(1,0,0)  = (-1, 2), \qquad T(0, 1, 0) = (-1, 0)
$$
### a)
Che dimensione ha l'immagine di $T$?

Troviamo prima la matrice associata. Notiamo che i vettori di cui conosciamo l'immagine formano una base.
Troviamo allora la matrice di conversione di base dalla base canonica alla base $\mathcal{B} =((1, -2, 1), (1, 0, 0), (0, 1, 0))$.
$$
\begin{bmatrix}
1 & 1 & 0 & 1 & 0 & 0 \\
-2 & 0 & 1 & 0 & 1 & 0 \\
1 & 0 & 0 & 0 & 0 & 1
\end{bmatrix}
\rightarrow_{E_{3,1}(-1)}
\rightarrow_{E_{2,1}(2)}
\begin{bmatrix}
1 & 1 & 0 & 1 & 0 & 0 \\
0 & 2 & 1 & 2 & 1 & 0 \\
0 & -1 & 0 & -1 & 0 & 1
\end{bmatrix}
\rightarrow S_{2,3}
\begin{bmatrix}
1 & 1 & 0 & 1 & 0 & 0 \\
0 & -1 & 0 & -1 & 0 & 1 \\
0 & 2 & 1 & 2 & 1 & 0
\end{bmatrix}
\rightarrow_{D_{2}(-1)}
\begin{bmatrix}
1 & 1 & 0 & 1 & 0 & 0 \\
0 & 1 & 0 & 1 & 0 & -1 \\
0 & 2 & 1 & 2 & 1 & 0
\end{bmatrix}
$$
$$
\rightarrow_{E_{3,1}(-2)}
\begin{bmatrix}
1 & 1 & 0 & 1 & 0 & 0 \\
0 & 1 & 0 & 1 & 0 & -1 \\
0 & 0 & 1 & 0 & 1 & 2
\end{bmatrix}
\rightarrow_{E_{1,2}(-1)}
\begin{bmatrix}
1 & 0 & 0 & 0 & 0 & 1 \\
0 & 1 & 0 & 1 & 0 & -1 \\
0 & 0 & 1 & 0 & 1 & 2
\end{bmatrix}
$$
Dunque:
$$
M_{\mathcal{E}}^{\mathcal{B}}(id) = 
\begin{bmatrix}
0 & 0 & 1 \\
1 & 0 & -1 \\
0 & 1 & 2
\end{bmatrix}
$$
Consideriamo ora la matrice $M_{\mathcal{B}}^{\mathcal{E}}(T)$:
$$
M_{\mathcal{B}}^{\mathcal{E}}(T) = 
\begin{bmatrix}
2 & -1 & -1 \\
1 & 2 & 0
\end{bmatrix}
$$
Ora moltiplicando le due matrici si ottiene $M(T)$:
$$
M(T) =
\begin{bmatrix}
2 & -1 & -1 \\
1 & 2 & 0
\end{bmatrix}
\begin{bmatrix}
0 & 0 & 1 \\
1 & 0 & -1 \\
0 & 1 & 2
\end{bmatrix}
=
\begin{bmatrix}
-1 & -1 & 1 \\
2 & 0 & -1
\end{bmatrix}
$$
Ora analizzando il rango della matrice possiamo trovare la dimensione di $\mathrm{Im}(T)$:
$$
\begin{bmatrix}
-1 & -1 & 1 \\
2 & 0 & -1
\end{bmatrix}
\rightarrow_{D_{1}(-1)}
\begin{bmatrix}
1 & 1 & -1 \\
2 & 0 & -1
\end{bmatrix}
\rightarrow_{E_{2,1}(-2)}
\begin{bmatrix}
1 & 1 & -1 \\
0 & -2 & 1
\end{bmatrix}
$$
Dunque $dim(\mathrm{Im}(T)) = 2$.

Ora analizziamo il nucleo di $T$ proseguendo con la riduzione:
$$
\begin{bmatrix}
1 & 1 & -1 \\
0 & -2 & 1
\end{bmatrix}
\rightarrow_{D_{2}\left( -\frac{1}{2} \right)}
\begin{bmatrix}
1 & 1 & -1 \\
0 & 1 & -\frac{1}{2}
\end{bmatrix}
\rightarrow_{E_{1,2}(-1)}
\begin{bmatrix}
1 & 0 & -\frac{1}{2} \\
0 & 1 & -\frac{1}{2}
\end{bmatrix}
\rightarrow
\begin{cases}
x = \frac{1}{2}t \\
y = \frac{1}{2}t \\
z = t
\end{cases}
$$
Dunque $N(T)= \left\langle  \left( 1,1,2 \right)  \right\rangle$. Per trovare una base ortonormale basta normalizzare il vettore $(1,1,2)$:
$$
u_{1} = \frac{(1,1,2)}{\sqrt{ 6 }} = \left( \frac{1}{\sqrt{ 6 }}, \frac{1}{\sqrt{ 6 }}, \frac{2}{\sqrt{ 6 }} \right)
$$
## Es 10.10 (DA FINIRE)
Calcolare la base ortonormale di $\mathbb{R}^{3}$ formata da autovettori per le matrici:
$$
A = \begin{bmatrix}
1 & 2 & 0 \\
2 & 1 & 0 \\
0 & 0 & -1
\end{bmatrix}
$$
Innanzitutto bisogna trovare gli autovalori:
$$
\begin{vmatrix}
1 - \lambda & 2 & 0 \\
2 & 1 - \lambda & 0 \\
0 & 0 & -1 - \lambda
\end{vmatrix} =
-(1 + \lambda)((1-\lambda)^{2} - 4) =
-(1 + \lambda)(\lambda^{2}-2\lambda-3) =
-(1 + \lambda)(\lambda + 1)(\lambda - 3)
$$
Quindi gli autovalori sono $\lambda_{1} = -1$ con molteplicità doppia e $\lambda_{2} = 3$.
Troviamo dunque gli autovalori:

Consideriamo $\lambda_{1}$:
$$
\begin{bmatrix}
2 & 2 & 0 \\
2 & 2 & 0 \\
0 & 0 & 0
\end{bmatrix}
\rightarrow
\begin{cases}
x = -t \\
y = t \\
z = s
\end{cases}
\rightarrow
\langle (-1,1,0), (0, 0, 1) \rangle 
$$
Consideriamo $\lambda_{2}$:
$$
\begin{bmatrix}
-2 & 2 & 0 \\
2 & -2 & 0 \\
0 & 0 & -4
\end{bmatrix}
\rightarrow
\begin{bmatrix}
1 & -1 & 0 \\
0 & 0 & 0 \\
0 & 0 & -1
\end{bmatrix}
\rightarrow
\begin{cases}
x = t \\
y = t \\
z = 0
\end{cases}
\rightarrow
\langle (1,1,0) \rangle 
$$
Quindi esiste la base $\mathcal{B}= ((-1,1,0), (0,0,1), (1,1,0))$.
Sia $u_{1} = (0, 0, 1)$ già normale.
Non serve calcolare $u_{2}'$, perché già ortogonale a $u_{1}$:
$$
u_{2}' = (1,1,0)
$$
Normalizziamo $u_{2}':$
$$
u_{2} = \left( \frac{1}{\sqrt{ 2 }}, \frac{1}{\sqrt{ 2 }}, 0 \right)
$$
Non serve calcolare in quanto è ortogonale sia a $u_{1}$, che a $u_{2}$, $u_{3}':$
$$
u_{3}' = (-1,1,0) 
$$
Normalizziamo $u_{3}'$:
$$
u_{3} = \left( -\frac{1}{\sqrt{ 2 }}, \frac{1}{\sqrt{ 2 }}, 0 \right)
$$
Dunque la base ortonormale cercata è: $\left( (0,0,1), \left( \frac{1}{\sqrt{ 2 }}, \frac{1}{\sqrt{ 2 }}, 0 \right), \left( -\frac{1}{\sqrt{ 2 }}, \frac{1}{\sqrt{ 2 }}, 0 \right) \right)$.
## Es 10.11 (DA FINIRE)
Per ognuna delle seguenti matrici simmetriche $A$ si determini una matrice ortogonale $P$ per la quale $P^{T}AP$ sia diagonale.
$$
A = \begin{bmatrix}
1 & 2 \\
2 & -2
\end{bmatrix}
$$
Innanzitutto troviamo gli autovalori di $A$:
$$
\begin{vmatrix}
1 - \lambda & 2 \\
2 & -2 - \lambda
\end{vmatrix} =
(\lambda - 1)(\lambda + 2)-4 = 
\lambda^{2} - \lambda + 2\lambda -2 - 4 =
\lambda^{2} + \lambda -6 =
(\lambda +3) (\lambda -2)
$$
I due autovettori sono $\lambda_{1} = -3$ e $\lambda_{2} = 2$.
Consideriamo $\lambda_{1}$:
$$
\begin{bmatrix}
4 & 2 \\
2 & 1
\end{bmatrix}
\rightarrow
\begin{cases}
x = -\frac{1}{2}t  \\
y = t
\end{cases}
\rightarrow
\langle (-1, 2) \rangle 
$$
Consideriamo $\lambda_{2}$:
$$
\begin{bmatrix}
-1 & 2 \\
2 & -4
\end{bmatrix}
\rightarrow
\begin{cases}
x = 2t \\
y = t
\end{cases}
\rightarrow
\langle (2, 1) \rangle 
$$
Dunque la matrice $D$ così definita
$$
D = \begin{bmatrix}
-3 & 0 \\
0 & 2
\end{bmatrix}
$$
è simile ad $A$ con base $\mathcal{B} = ((-1,2), (-2, 1))$.
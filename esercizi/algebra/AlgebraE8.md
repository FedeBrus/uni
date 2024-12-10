## Es 8.1
Sia $T:\mathbb{R}^{3}\rightarrow \mathbb{R}^{3}$ l'applicazione definita da $T(x_{1},x_{2},x_{3}) = (x_{1}^{2}, x_{2}, 2x_{3})$. Stabilire se $T$ è lineare.
L'applicazione $T$ è lineare se $T(av + bu) = aT(v) + bT(u)$, con $a, b \in \mathbb{R}$ e $v,u \in V$ e $v = (v_{1},v_{2},v_{3}), u = (u_{1},u_{2},u_{3})$.
$$
T(av+bu) = T(av_{1}+bu_{1}, av_{2}+bu_{2}, av_{3}+bu_{3}) = (a^{2}v_{1}^{2}+2abv_{1}u_{1}+b^{2}u^{2}_{1}, av_{2}+bu_{2}, 2av_{3}+2bv_{3})
$$
$$
aT(v) + bT(v) = a(v_{1}^{2}, v_{2}, 2v_{3}) + b(u_{1}^{2}, u_{2}, 2u_{3}) = (av_{1}^{2}+bu_{1}^{2}, av_{2}+bu_{2}, 2av_{3}+2bu_{3})
$$
## Es 8.2 (DA FARE)
Verificare che la funzione determinante definita sull'insieme delle matrici $M_{2 \times 2}$ a valori in $\mathbb{R}$ non è lineare.

## Es 8.3
Stabilire se esiste una applicazione lineare $T: \mathbb{R}^{2} \rightarrow \mathbb{R}^{2}$ tale che:
$$
T(1, 2) = (3, 0), \qquad T(2, 7) = (4, 5), \qquad T(1, 5) = (1, 4)
$$
Notiamo che $(1, 2) + (1,5) = (2,7)$.
Allora, se $T$ fosse lineare, allora $T(av + bu) = aT(v) + bT(u), \forall a, b \in \mathbb{R}, \forall v, u \in \mathbb{R}^{2}$.
Ma notiamo che:
$$
\begin{align}
T(2,7) &\neq T(1,2) + T(1,5) \\
(4,5) &\neq (3,0) + (1,4)  \\
(4,5) &\neq (4,4)
\end{align}
$$
## Es 8.4
Stabilire se esiste una applicazione lineare $T:\mathbb{R}^{2} \rightarrow \mathbb{R}^{2}$ tale che:
$$
T(1, 2) = (3, 0), \qquad T(2, 4) = (5, 0), \qquad T(0, 1) = (1, 1)
$$
Notiamo che $(2,4) = 2(1,2)$
Allora, se $T$ fosse lineare, allora $T(av + bu) = aT(v) + bT(u), \forall a, b \in \mathbb{R}, \forall v, u \in \mathbb{R}^{2}$.
Ma notiamo che:
$$
\begin{align}
T(2,4) &\neq 2T(1,2) \\
(5,0) &\neq 2(3,0) \\
(5,0) &\neq (6,0)
\end{align}
$$
## Es 8.5
Determinare una applicazione lineare $T:\mathbb{R}^{2} \rightarrow \mathbb{R}^{2}$ tale che:
$$
T(1, 1) = (1, 2) \qquad T(0,2) = (4, 4)
$$
Siccome $\mathcal{B} = \{ (1,1), (0,2) \}$ formano una base di $\mathbb{R}^{2}$. Ogni generico elemento di $\mathbb{R}^{2}$ $(x, y)$ può essere scritto come combinazione lineare $a(1,1) + b(0,2)$. Per capire come ricavare $a, b$ possiamo risolvere il seguente sistema:
$$
\begin{bmatrix}
1 & 0 & x \\
1 & 2 & y
\end{bmatrix}
\rightarrow_{E_{2,1}(-1)}
\begin{bmatrix}
1 & 0 & x \\
0 & 2 & y - x
\end{bmatrix}
\rightarrow_{D_{2}\left( \frac{1}{2} \right)}
\begin{bmatrix}
1 & 0 & x \\
0 & 1 & \frac{y - x}{2}
\end{bmatrix}
$$
Dunque $(x, y) = x(1, 1) + (\frac{y-x}{2})(0,2)$.
Da qui si può ricavare $T:\mathbb{R}^{2}\rightarrow \mathbb{R}^{2}$.
Difatti:
$$
\begin{align}
T(x,y) &= T\left( x(1,1)+\left( \frac{y-x}{2} \right) (0,2) \right)  \\
&= xT(1,1) + \left( \frac{y-x}{2} \right)T(0,2)  \\
&= x(1,2) + \left( \frac{y-x}{2} \right)(4,4) \\
&= x(1,2) + (2(y-x), 2(y-x)) \\
&= (x, 2x) + (2y - 2x, 2y- 2x) \\
&= (2y - x, 2y)
\end{align}
$$
La funzione $T$ trovata è effettivamente lineare e $T(1,1) = (1,2)$ e $T(0,2) = (4, 4)$.

## Es 8.6
Sia $T : \mathbb{R}^{2} \rightarrow \mathbb{R}^{3}$ l’applicazione definita da $T(x, y) = (x + y, 2x, x − y)$. 

### a) 
Verificare che $T$ è lineare. 

Sia $a, b \in \mathbb{R}$ e siano $v, u \in \mathbb{R}^{2}$, se $T$ è lineare allora:
$$
T(av + bu) = aT(v) + bT(u)
$$
$$
\begin{align}
T(av+bu) &= T(av_{1} +bu_{1}, av_{2}+bu_{2})  \\
 &= (av_{1}+bu_{1} + av_{2}+bu_{2}, 2av_{1}+2bu_{1}, av_{1}+bu_{1}-av_{2}-bu_{2}) \\
 &= (a(v_{1} + v_{2})+b(u_{1}+ u_{2}), 2(av_{1}+bu_{1}), a(v_{1} -v_{2}) +b(u_{1}-u_{2}))
\end{align}
$$
$$
\begin{align}
aT(v) + bT(u) &= a(v_{1}+v_{2},2v_{1},v_{1}-v_{2})  + b(u_{1}+u_{2},2u_{1},u_{1}-u_{2}) \\
 & = (av_{1}+av_{2}, 2av_{1}, av_{1}-av_{2}) +(bu_{1}+bu_{2}, 2bu_{1},bu_{1}-bu_{2}) \\
 & = (av_{1}+av_{2}+bu_{1}+bu_{2}, 2av_{1}+2bu_{1}, av_{1}+bu_{1}-av_{1}-bu_{2}) \\
 & = (a(v_{1}+v_{2}) + b(u_{1}+u_{2}), 2(av_{1}+bu_{1}), a(v_{1}-v_{2})+b(u_{1}-u_{2}))
\end{align}
$$
### b) 
Determinare Nucleo e Immagine di $T$. 

Per determinare il nucleo basta osservare le soluzioni del sistema lineare omogeneo avente come matrice dei coefficienti la matrice associata $A$ di $T$:
$$
\begin{bmatrix}
1 & 1 \\
2 & 0 \\
1 & -1
\end{bmatrix}
\rightarrow_{E_{2,1}(-2)}
\begin{bmatrix}
1 & 1 \\
0 & -2 \\
1 & -1
\end{bmatrix}
\rightarrow_{E_{3,1}(-1)}
\begin{bmatrix}
1 & 1 \\
0 & -2 \\
0 & -2
\end{bmatrix}
\rightarrow_{E_{3,2}(-1)}
\begin{bmatrix}
1 & 1 \\
0 & -2 \\
0 & 0
\end{bmatrix}
\rightarrow_{D_{2}\left( -\frac{1}{2} \right)}
\begin{bmatrix}
1 & 1 \\
0 & 1 \\
0 & 0
\end{bmatrix}
\rightarrow_{E_{1,2}(-1)}
\begin{bmatrix}
1 & 0 \\
0 & 1 \\
0 & 0
\end{bmatrix}
\rightarrow
\begin{cases}
x = 0 \\
y = 0
\end{cases}
$$
Quindi $N(A) = \{ (0,0) \}$.

Consideriamo ora l'immagine:
$$
\begin{align}
\mathrm{Im}(T) &= \{ T(v) | v \in \mathbb{R}^{2} \} \\
 &= \{ (x+y, 2x, x-y) | x, y \in \mathbb{R} \} \\
 &= \{ x(1, 2, 1) + y(1,0,-1) | x, y \in \mathbb{R} \} \\
 &= \langle (1,2,1), (1, 0, -1) \rangle
\end{align}
$$
$$
\begin{bmatrix}
1 & 1 \\
0 & 2  \\
1 & -1
\end{bmatrix}
\rightarrow
\begin{bmatrix}
1 & 0 \\
0 & 1 \\
0 & 0
\end{bmatrix}
$$
I due vettori sono dunque linearmente indipendenti, quindi l'immagine di $T$ è $\langle (1,2,1), (1,0,-1) \rangle$.
### d) 
Determinare $T(1, 2)$.
$$
T(1,2) = (1+2, 2 \cdot 1, 1 - 2) = (3, 2, -1)
$$

## Es 8.7
Sia $T : \mathbb{R}^{2} \rightarrow \mathbb{R}^{3}$ l’applicazione lineare definita sulla base canonica di $\mathbb{R}^{2}$ nel seguente modo: $T(e_{1})=(1, 2, 1), T(e_{2}) = (1, 0, −1)$.
### a) 
Esplicitare $T(x, y)$. 

$e_{1}, e_{2}$ sono base di $R^{2}$. Dunque ogni vettore $v \in \mathbb{R}^{2}$ può essere scritto come combinazione lineare $v = (x, y) = xe_{1}+ye_{2}$.
Allora
$$
\begin{align}
T(v) &= T(x,y)  \\
&= xT(e_{1}) + yT(e_{2})  \\
&= x(1,2,1) + y(1,0,-1)  \\
&= (x, 2x, x) + (y, 0, -y) \\
&= (x+y, 2x, x-y)
\end{align}
$$
Dunque $T(x,y) = (x+y, 2x, x-y)$.
### c) 
Stabilire se $(3, 4, 1)$ appartiene a $\mathrm{Im}(T)$.
La definizione di $\mathrm{Im}(T)$ è:
$$
\begin{align}
\mathrm{Im}(T) &= \{ T(v) | v \in \mathbb{R}^{2} \} \\
 & = \{ (x+y, 2x, x-y) | x, y \in \mathbb{R} \} \\
 & = \{ x(1,2,1) + y(1,0,-1) | x, y \in \mathbb{R} \} \\
 & = \langle (1,2,1), (1, 0, -1) \rangle
\end{align}
$$
Dunque il problema consiste nel risolvere il seguente sistema:
$$
\begin{bmatrix}
1 & 1 & 3 \\
2 & 0 & 4 \\
1 & -1 & 1
\end{bmatrix}
\rightarrow_{E_{2,1}(-2)}
\begin{bmatrix}
1 & 1 & 3 \\
0 & -2 & -2 \\
1 & -1 & 1
\end{bmatrix}
\rightarrow_{E_{3,1}(-1)}
\begin{bmatrix}
1 & 1 & 3 \\
0 & -2 & -2 \\
0 & -2 & -2
\end{bmatrix}
\rightarrow_{E_{3,2}(-1)}
\begin{bmatrix}
1 & 1 & 3 \\
0 & -2 & -2 \\
0 & 0 & 0
\end{bmatrix}
\rightarrow_{D_{2}\left( -\frac{1}{2} \right)}
\begin{bmatrix}
1 & 1 & 3 \\
0 & 1 & 1 \\
0 & 0 & 0
\end{bmatrix}
\rightarrow_{E_{1,2}(-1)}
\begin{bmatrix}
1 & 0 & 2 \\
0 & 1 & 1 \\
0 & 0 & 0
\end{bmatrix}
$$
Dunque $(3,4,1) = 2(1,2,1) + (1,0,-1) = T(2,1)$.

## Es 8.8
Sia $T : \mathbb{R}^{4}\rightarrow \mathbb{R}^{5}$ la funzione lineare definita da $T(x_{1}, x_{2}, x_{3}, x_{4}) = (x_{1} − x_{2}, x_{1} + x_{2}, x_{2}, x_{2} + 3x_{3}, −x_{1} − x_{2})$. 

### a) 
Trovare una base del nucleo $N(T)$ e una base dell’immagine $\mathrm{Im}(T)$.
$$
(x_{1} − x_{2}, x_{1} + x_{2}, x_{2}, x_{2} + 3x_{3}, −x_{1} − x_{2}) = x_{1}(1, 1, 0, 0, -1) + x_{2}(-1,1,1,1,-1) + x_{3}(0,0,0,3,0) + x_{4}(0,0,0,0,0)
$$
Quindi si tratta di trovare le soluzioni del seguente sistema omogeneo (colonna dei termini noti non presente):
$$
\begin{bmatrix}
1 & -1 & 0 & 0 \\
1 & 1 & 0 & 0 \\
0 & 1 & 0 & 0 \\
0 & 1 & 3 & 0 \\
-1 & -1 & 0 & 0
\end{bmatrix}
\rightarrow_{E_{2,1}(-1)}
\begin{bmatrix}
1 & -1 & 0 & 0 \\
0 & 2 & 0 & 0 \\
0 & 1 & 0 & 0 \\
0 & 1 & 3 & 0 \\
-1 & -1 & 0 & 0
\end{bmatrix}
\rightarrow_{E_{5,1}(1)}
\begin{bmatrix}
1 & -1 & 0 & 0 \\
0 & 2 & 0 & 0 \\
0 & 1 & 0 & 0 \\
0 & 1 & 3 & 0 \\
0 & -2 & 0 & 0
\end{bmatrix}
\rightarrow_{D_{2}\left( \frac{1}{2} \right)}
\begin{bmatrix}
1 & -1 & 0 & 0 \\
0 & 1 & 0 & 0 \\
0 & 1 & 0 & 0 \\
0 & 1 & 3 & 0 \\
0 & -2 & 0 & 0
\end{bmatrix}
\rightarrow_{E_{5,2}(2)}
\begin{bmatrix}
1 & -1 & 0 & 0 \\
0 & 1 & 0 & 0 \\
0 & 1 & 0 & 0 \\
0 & 1 & 3 & 0 \\
0 & 0 & 0 & 0
\end{bmatrix}
$$
$$
\rightarrow_{E_{4,2}(-1)}
\begin{bmatrix}
1 & -1 & 0 & 0 \\
0 & 1 & 0 & 0 \\
0 & 1 & 0 & 0 \\
0 & 0 & 3 & 0 \\
0 & 0 & 0 & 0
\end{bmatrix}
\rightarrow_{E_{3,2}(-1)}
\begin{bmatrix}
1 & -1 & 0 & 0 \\
0 & 1 & 0 & 0 \\
0 & 0 & 0 & 0 \\
0 & 0 & 3 & 0 \\
0 & 0 & 0 & 0
\end{bmatrix}
\rightarrow_{D_{4}\left( \frac{1}{3} \right)}
\begin{bmatrix}
1 & -1 & 0 & 0 \\
0 & 1 & 0 & 0 \\
0 & 0 & 0 & 0 \\
0 & 0 & 1 & 0 \\
0 & 0 & 0 & 0
\end{bmatrix}
\rightarrow_{E_{1,2}(1)}
\begin{bmatrix}
1 & 0 & 0 & 0 \\
0 & 1 & 0 & 0 \\
0 & 0 & 0 & 0 \\
0 & 0 & 1 & 0 \\
0 & 0 & 0 & 0
\end{bmatrix}
\rightarrow
\begin{cases}
x_{1} = 0 \\
x_{2} = 0 \\
x_{3} = 0 \\
x_{4} = t
\end{cases}
$$
Dunque solo i primi 3 vettori sono linearmente indipendenti. L'insieme delle soluzioni è $\{ t(0,0,0,1)  | t \in \mathbb{R}\}$, perciò $N(A) = \{ (0,0,0,t) \}$ e $\mathcal{B}(N(A)) = \{ (0,0,0,1) \}$.

Mentre
$$
\begin{align}
\mathrm{Im}(T) & = \{ T(v) | v \in \mathbb{R}^{4} \} \\
 & = \{ (x_{1} − x_{2}, x_{1} + x_{2}, x_{2}, x_{2} + 3x_{3}, −x_{1} − x_{2}) | x_{1},x_{2},x_{3},x_{4} \in \mathbb{R} \} \\
 & = \{ x_{1}(1, 1, 0, 0, -1) + x_{2}(-1,1,1,1,-1) + x_{3}(0,0,0,3,0) + x_{4}(0,0,0,0,0) | x_{1},x_{2},x_{3},x_{4} \in \mathbb{R} \} \\
 & = \langle (1,1,0,0,-1), (-1,1,1,1,-1), (0,0,0,3,0), (0,0,0,0,0) \rangle \\
 & = \langle (1,1,0,0,-1), (-1,1,1,1,-1), (0,0,0,3,0) \rangle
\end{align}
$$
Bisogna verificare quali vettori sono indipendenti in modo da trovare una base, ma per il teorema di nullità più rango possiamo affermare che i 3 vettori sono effettivamente linearmente indipendenti. Difatti $dim N(A) = 1$ e $dim \mathbb{R}^{4} = 4$, dunque $dim \mathrm{Im}(T) = 3$.
Quindi $\mathcal{B} = \{ (1,1,0,0,-1), (-1,1,1,1,-1), (0,0,0,3,0) \}$
### b) 
Dire se $T$ è iniettiva e/o suriettiva. 

Siccome $dim N(A) = 1$, $T$ non è iniettiva.
Inoltre $\mathrm{Im}(T) \neq \mathbb{R}^{5}$.
### c) 
Per quali valori di $k \in \mathbb{R}$ il vettore $v_{k} = (k, 2, 1 − k, 4, −2)$ appartiene all'immagine di $T$?
$$
\begin{bmatrix}
1 & -1 & 0 & k \\
1 & 1 & 0  & 2 \\
0 & 1 & 0 & 1-k \\
0 & 1 & 3 & 4 \\
-1 & -1 & 0 & -2
\end{bmatrix}
\rightarrow_{E_{2,1}(-1)}
\begin{bmatrix}
1 & -1 & 0 & k \\
0 & 2 & 0  & 2-k \\
0 & 1 & 0 & 1-k \\
0 & 1 & 3 & 4 \\
-1 & -1 & 0 & -2
\end{bmatrix}
\rightarrow_{E_{5,1}(1)}
\begin{bmatrix}
1 & -1 & 0 & k \\
0 & 2 & 0  & 2-k \\
0 & 1 & 0 & 1-k \\
0 & 1 & 3 & 4 \\
0 & -2 & 0 & k-2
\end{bmatrix}
\rightarrow_{E_{5,2}(1)}
\begin{bmatrix}
1 & -1 & 0 & k \\
0 & 2 & 0  & 2-k \\
0 & 1 & 0 & 1-k \\
0 & 1 & 3 & 4 \\
0 & 0 & 0 & 0
\end{bmatrix}
\rightarrow_{E_{4,3}(-1)}
\begin{bmatrix}
1 & -1 & 0 & k \\
0 & 2 & 0  & 2-k \\
0 & 1 & 0 & 1-k \\
0 & 0 & 3 & 3+k \\
0 & 0 & 0 & 0
\end{bmatrix}
$$
$$
\rightarrow_{S_{2,3}}
\begin{bmatrix}
1 & -1 & 0 & k \\
0 & 1 & 0 & 1-k \\
0 & 2 & 0  & 2-k \\
0 & 0 & 3 & 3+k \\
0 & 0 & 0 & 0
\end{bmatrix}
\rightarrow_{E_{2,3}(-2)}
\begin{bmatrix}
1 & -1 & 0 & k \\
0 & 1 & 0 & 1-k \\
0 & 0 & 0  & k \\
0 & 0 & 3 & 3+k \\
0 & 0 & 0 & 0
\end{bmatrix}
\rightarrow_{S_{3,4}}
\begin{bmatrix}
1 & -1 & 0 & k \\
0 & 1 & 0 & 1-k \\
0 & 0 & 3 & 3+k \\
0 & 0 & 0  & k \\
0 & 0 & 0 & 0
\end{bmatrix}
$$
Perché il sistema risulti risolvibile si ha che $k = 0$. Dato che il sistema è compatibile solo quando il rango di $A$ è uguale al rango di $A|b$.

## Es 8.9
Sia $T : \mathbb{R}^{3} \rightarrow \mathbb{R}^{4}$ la funzione lineare definita da: $T (x_{1}, x_{2}, x_{3}) = (2kx_{1} − x_{2}, x_{2} + kx_{3}, x_{1} + x_{2} − x_{3}, x_{1} − x_{2})$
### a) 
Trovare le dimensioni del nucleo e dell'immagine di $T$ al variare del parametro reale $k$. 

Per trovare le dimensioni del nucleo di $T$ bisogna risolvere un sistema omogeneo:
$$
\begin{bmatrix}
2k & -1 & 0 \\ 0 & 1 & k \\
1 & 1 & -1 \\
1 & -1 & 0
\end{bmatrix}
\rightarrow_{S_{1,3}}
\begin{bmatrix}
1 & 1 & -1 \\
0 & 1 & k \\
2k & -1 & 0 \\
1 & -1 & 0
\end{bmatrix}
\rightarrow_{E_{3,1}(-2k)}
\begin{bmatrix}
1 & 1 & -1 \\
0 & 1 & k \\
0 & -1-2k & 2k \\
1 & -1 & 0
\end{bmatrix}
\rightarrow_{E_{4,1}(-1)}
\begin{bmatrix}
1 & 1 & -1 \\
0 & 1 & k \\
0 & -1-2k & 2k \\
0 & -2 & 1
\end{bmatrix}
\rightarrow_{E_{3,2}(1)}
\begin{bmatrix}
1 & 1 & -1 \\
0 & 1 & k \\
0 & -2k & 3k \\
0 & -2 & 1
\end{bmatrix}
\rightarrow_{E_{3,2}(2k)}
\begin{bmatrix}
1 & 1 & -1 \\
0 & 1 & k \\
0 & 0 & 3k+2k^{2} \\
0 & -2 & 1
\end{bmatrix}
$$
$$
\rightarrow_{E_{4,2}(2)}
\begin{bmatrix}
1 & 1 & -1 \\
0 & 1 & k \\
0 & 0 & 3k+2k^{2} \\
0 & 0 & 1+2k
\end{bmatrix}
\rightarrow_{E_{3,4}\left(-k\right)}
\begin{bmatrix}
1 & 1 & -1 \\
0 & 1 & k \\
0 & 0 & 2k \\
0 & 0 & 1+2k
\end{bmatrix}
\rightarrow_{E_{4,3}(-1)}
\begin{bmatrix}
1 & 1 & -1 \\
0 & 1 & k \\
0 & 0 & 2k \\
0 & 0 & 1
\end{bmatrix}
\rightarrow_{E_{3,4}(-2k)}
\begin{bmatrix}
1 & 1 & -1 \\
0 & 1 & k \\
0 & 0 & 0 \\
0 & 0 & 1
\end{bmatrix}
$$
Dunque $rgA=3$ a prescindere da $k$. Dunque $dimN(A) = n - rgA = 0$ e $N(A) = \{ (0,0,0) \}$.

L'immagine di $T$ è definita come:
$$
\begin{align}
\mathrm{Im}(T) &= \{ T(v) | v \in \mathbb{R}^{3} \} \\
&= \{ 2kx_{1}-x_{2},x_{2}+kx_{3},x_{1}+x_{2}-x_{3},x_{1}-x_{2} | x_{1}, x_{2}, x_{3} \in \mathbb{R} \} \\
&= \{ x_{1}(2k,0,1,1) + x_{2}(-1,1,1,-1) + x_{3}(0,k,-1,0) | x_{1},x_{2},x_{3} \in \mathbb{R} \} \\
&= \langle (2k, 0, 1, 1), (-1, 1, 1, -1), (0, k, -1, 0) \rangle
\end{align}
$$
Dunque basterebbe osservare quali vettori sono linearmente indipendenti, ma come abbiamo visto prima tutti e 3 lo sono indipendentemente dal valore di $k$.
Dunque $dim \mathrm{Im}(T) = 3$.
### b) 
Stabilire per quali valori di $k$ il vettore $v = (3, 3, 1, 0)$ appartiene all'immagine di $T$.
$$
\begin{bmatrix}
2k & -1 & 0 & 3 \\
0 & 1 & k & 3 \\
1 & 1 & -1 & 1 \\
1 & -1 & 0 & 0
\end{bmatrix}
\rightarrow_{S_{1,3}}
\begin{bmatrix}
1 & 1 & -1 & 1 \\
0 & 1 & k & 3 \\
2k & -1 & 0 & 3 \\
1 & -1 & 0 & 0
\end{bmatrix}
\rightarrow_{E_{3,1}(-2k)}
\begin{bmatrix}
1 & 1 & -1 & 1 \\
0 & 1 & k & 3 \\
0 & -1-2k & 2k & 3 - 2k \\
1 & -1 & 0 & 0
\end{bmatrix}
\rightarrow_{E_{4,1}(-1)}
\begin{bmatrix}
1 & 1 & -1 & 1 \\
0 & 1 & k & 3 \\
0 & -1-2k & 2k & 3-2k \\
0 & -2 & 1 & -1
\end{bmatrix}
$$
$$
\rightarrow_{E_{3,2}(1)}
\begin{bmatrix}
1 & 1 & -1 & 1 \\
0 & 1 & k & 3 \\
0 & -2k & 3k & 6-2k \\
0 & -2 & 1 & -1
\end{bmatrix}
\rightarrow_{E_{3,2}(2k)}
\begin{bmatrix}
1 & 1 & -1 & 1 \\
0 & 1 & k & 3 \\
0 & 0 & 3k+2k^{2} & 6+4k \\
0 & -2 & 1 & -1
\end{bmatrix}
\rightarrow_{E_{4,2}(2)}
\begin{bmatrix}
1 & 1 & -1 & 1 \\
0 & 1 & k & 3 \\
0 & 0 & 3k+2k^{2} & 6+4k \\
0 & 0 & 1+2k & 5
\end{bmatrix}
\rightarrow_{E_{3,4}\left(-k\right)}
\begin{bmatrix}
1 & 1 & -1 & 1 \\
0 & 1 & k & 3 \\
0 & 0 & 2k & 6-k \\
0 & 0 & 1+2k & 5
\end{bmatrix}
$$
$$
\rightarrow_{E_{4,3}(-1)}
\begin{bmatrix}
1 & 1 & -1 & 1 \\
0 & 1 & k & 3 \\
0 & 0 & 2k & 6-k \\
0 & 0 & 1 & -1+k
\end{bmatrix}
\rightarrow_{E_{3,4}(-2k)}
\begin{bmatrix}
1 & 1 & -1 & 1 \\
0 & 1 & k & 3 \\
0 & 0 & 0 & 6+k-2k^{2} \\
0 & 0 & 1 & -1+k
\end{bmatrix}
$$
Il sistema risulta compatibile se $6+k-2k^{2} \neq 0$, ovvero se $k \neq 2, -\frac{3}{2}$.

## Es 8.10
### a) 
Verificare che le relazioni $T(1, 1, 1) = (−1, 2), T(0, 1, 1) = (0, 4), T (1, 1, 0) = (2, 1)$ definiscono un'unica applicazione lineare $T$ da $\mathbb{R}^{3}$ a $\mathbb{R}^{2}$. 

I vettori $(1,1,1), (0,1,1), (1,1,0)$ sono linearmente indipendenti, e dunque formano una base di $\mathbb{R}^{3}$. Ciò significa che ogni vettore $(x, y, z)$ può essere scritto come combinazione lineare $a(1,1,1) + b(0,1,1) + c(1,1,0)$. Per ricavare $a,b,c$ si risolve il seguente sistema:
$$
\begin{bmatrix}
1 & 0 & 1 & x \\
1 & 1 & 1 & y \\
1 & 1 & 0 & z
\end{bmatrix}
\rightarrow_{E_{2,1}(-1), E_{3,1}(-1)}
\begin{bmatrix}
1 & 0 & 1 & x \\
0 & 1 & 0 & y-x \\
0 & 1 & -1 & z-x
\end{bmatrix}
\rightarrow_{E_{3,2}(-1)}
\begin{bmatrix}
1 & 0 & 1 & x \\
0 & 1 & 0 & y-x \\
0 & 0 & -1 & z-y
\end{bmatrix}
\rightarrow_{D_{3}(-1)}
\begin{bmatrix}
1 & 0 & 1 & x \\
0 & 1 & 0 & y-x \\
0 & 0 & 1 & y-z
\end{bmatrix}
\rightarrow_{E_{1,3}(-1)}
\begin{bmatrix}
1 & 0 & 0 & x-y+z \\
0 & 1 & 0 & y-x \\
0 & 0 & 1 & y-z
\end{bmatrix}
$$
Perciò:
$$
\begin{align}
T(x,y,z) &= T((x-y+z)(1,1,1) + (y-x)(0,1,1) + (y-z)(1,1,0)) \\
 & = (x-y+z)T(1,1,1) + (y-x)T(0,1,1) + (y-z)T(1,1,0) \\
 & = (x-y+z)(-1,2) + (y-x)(0, 4) + (y-z)(2,1) \\
 & = (-x+y-z, 2x-2y+2z) + (0, 4y-4x) + (2y-2z, y-z) \\
 & = (-x+3y-3z, -2x+3y+z)
\end{align}
$$

Ecco il ragionamento:
Un'applicazione lineare è determinata univocamente dal suo comportamento sui vettori di una base. Poiché i vettori $v_{1}, v_{2}, v_{3}$​ costituiscono una base di $\mathbb{R}^3$, basta specificare $T(v_1), T(v_2), T(v_3)$ per definire univocamente $T$ su tutto lo spazio $\mathbb{R}^3$.  
Ogni vettore $v \in \mathbb{R}^3$ può essere scritto come combinazione lineare di $v_{1},v_{2},v_{3}$​:
$$
v = a_1 v_1 + a_2 v_2 + a_3 v_3​
$$ 
Per linearità di $T$, si avrà:
$$
T(v) = a_1 T(v_1) + a_2 T(v_2) + a_3 T(v_3)
$$Questo garantisce che $T$ è definita univocamente su ogni vettore di $\mathbb{R}^{3}$, dato che $T(v_{1}), T(v_{2}), T(v_{3})$ sono già specificati.
L'unicità di $T$ deriva dal fatto che $v_{1},v_{2},v_{3}$​ sono linearmente indipendenti. Se esistessero due applicazioni lineari $T_{1}, T_{2}$​ che soddisfano le stesse condizioni su ​$v_{1},v_{2},v_{3}$, allora per ogni $v \in \mathbb{R}^{3}$: 
$$
T_1(v) = T_2(v)
$$
perché entrambe sarebbero determinate dagli stessi valori su $v_{1},v_{2},v_{3}$.
### b) 
Scrivere la matrice rappresentativa di $T$ rispetto alla basi canoniche.
$$
\begin{align}
T(e_{1}) &= T(1,0,0) = (-1, -2) \\
T(e_{2}) &= T(0,1,0) = (3, 3) \\
T(e_{3}) &= T(0,0,1) = (-3, 1) \\
\end{align}
$$
$$
M(T) = \begin{bmatrix}
-1 & 3 & -3 \\
-2 & 3 & 1
\end{bmatrix}
$$

### c) 
Trovare basi di $\mathrm{Im}(T)$ e di $N(T)$.
$$
\begin{align}
\mathrm{Im}(T) &= \{ T(v) | v \in \mathbb{R}^{3} \} \\
 & = \{ (-x+3y-3z, -2x+3y+z) | x,y,z \in \mathbb{R} \} \\
 & = \{ x(-1,-2), y(3,3), z(-3, 1) | x,y,z \in \mathbb{R}\} \\
 & = \langle (-1, -2), (3,3), (-3,1) \rangle
\end{align}
$$
$$
\begin{bmatrix}
-1 & 3 & -3 \\
-2 & 3 & 1 
\end{bmatrix}
\rightarrow_{D_{1}(-1), D_{2}(-1)}
\begin{bmatrix}
1 & -3 & 3 \\
2 & -3 & -1 
\end{bmatrix}
\rightarrow_{E_{2,1}(-2)}
\begin{bmatrix}
1 & -3 & 3 \\
0 & 3 & -7 
\end{bmatrix}
$$
$(-1, -2), (3,3)$ sono linearmente indipendenti e generatori, quindi formano una base di $\mathrm{Im}(T)$. $\mathcal{B}(\mathrm{Im}(T)) = \{ (-1,-2), (3,3) \}$.

Invece:
$$
N(T) = \{ v \in \mathbb{R}^{3} | T(v) = 0 \}
$$
Quindi troviamo le soluzioni del sistema $M(T)(x,y,z) = 0$:
$$
\begin{bmatrix}
-1 & 3 & -3 \\
-2 & 3 & 1 
\end{bmatrix}
\rightarrow_{D_{1}(-1), D_{2}(-1)}
\begin{bmatrix}
1 & -3 & 3 \\
2 & -3 & -1 
\end{bmatrix}
\rightarrow_{E_{2,1}(-2)}
\begin{bmatrix}
1 & -3 & 3 \\
0 & 3 & -7 
\end{bmatrix}
\rightarrow_{D_{2}\left( \frac{1}{3} \right)}
\begin{bmatrix}
1 & -3 & 3 \\
0 & 1 & -\frac{7}{3} 
\end{bmatrix}
\rightarrow_{E_{1,2}(3)}
\begin{bmatrix}
1 & 0 & -4 \\
0 & 1 & -\frac{7}{3} 
\end{bmatrix}
\rightarrow
\begin{cases}
x = 4t \\
y = \frac{7t}{3} \\
z = t
\end{cases}
$$
L'insieme delle soluzioni del sistema è $\left\{  t\left( 4, \frac{7}{3}, 1 \right) | t\in \mathbb{R}  \right\}$, dunque $\mathcal{B}(N(T)) = \left\{  \left( 4, \frac{7}{3}, 1 \right)  \right\}$.

## Es 8.11
Sia $T: \mathbb{R}^{4} \rightarrow \mathbb{R}^{4}$ la funzione lineare definita da $T(x) = Ax$, con:
$$
A = \begin{bmatrix}
1 & 0 & -1 & 1 \\
-2 & 0 & 0 & 0 \\
1 & 1 & 0 & 0 \\
0 & 1 & -1 & 1
\end{bmatrix}
$$

### a) 
Stabilire se $T$ invertibile. 

Una funzione lineare $T$ è invertibile se è biettiva, ovvero suriettiva e iniettiva. Ciò accade se la matrice associata ha rango massimo.
$T$ è invertibile se la sua matrice associata è anch'essa invertibile. Una matrice è invertibile quando ha rango massimo e dunque il suo determinante è diverso da $0$. Calcoliamo allora il determinante di $A$.
$$
\det A = 2 \det \begin{bmatrix}
0 & -1 & 1 \\
1 & 0 & 0 \\
1 & -1 & 1
\end{bmatrix} = 2 \det \begin{bmatrix}
0 & -1 & 1 \\
1 & 0 & 0 \\
0 & -1 & 1
\end{bmatrix} = 2 (-1) \det \begin{bmatrix}
-1 & 1 \\
-1 & 1
\end{bmatrix} = -2 \det \begin{bmatrix}
-1 & 1 \\
0 & 0
\end{bmatrix} = -2 \cdot 0 = 0
$$
### b) 
Trovare basi del nucleo e dell’immagine di $T$.

In questo caso trovare la base del nucleo è molto diretto perché è sufficiente ridurre a scalini la matrice associata $A$.
$$
\begin{bmatrix}
1 & 0 & -1 & 1 \\
-2 & 0 & 0 & 0 \\
1 & 1 & 0 & 0 \\
0 & 1 & -1 & 1
\end{bmatrix}
\rightarrow_{E_{2,1}(2), E_{3,1}(-1)}
\begin{bmatrix}
1 & 0 & -1 & 1 \\
0 & 0 & -2 & 2 \\
0 & 1 & 1 & -1 \\
0 & 1 & -1 & 1
\end{bmatrix}
\rightarrow_{S_{2,3}}
\begin{bmatrix}
1 & 0 & -1 & 1 \\
0 & 1 & 1 & -1 \\
0 & 0 & -2 & 2 \\
0 & 1 & -1 & 1
\end{bmatrix}
\rightarrow_{E_{4,2}(-1)}
\begin{bmatrix}
1 & 0 & -1 & 1 \\
0 & 1 & 1 & -1 \\
0 & 0 & -2 & 2 \\
0 & 0 & -2 & 2
\end{bmatrix}
\rightarrow_{E_{4,3}(1)}
\begin{bmatrix}
1 & 0 & -1 & 1 \\
0 & 1 & 1 & -1 \\
0 & 0 & -2 & 2 \\
0 & 0 & 0 & 0
\end{bmatrix}
$$
$$
\rightarrow_{D_{3}\left( -\frac{1}{2} \right)}
\begin{bmatrix}
1 & 0 & -1 & 1 \\
0 & 1 & 1 & -1 \\
0 & 0 & 1 & -1 \\
0 & 0 & 0 & 0
\end{bmatrix}
\rightarrow_{E_{2,3}(-1)}
\begin{bmatrix}
1 & 0 & -1 & 1 \\
0 & 1 & 0 & 0 \\
0 & 0 & 1 & -1 \\
0 & 0 & 0 & 0
\end{bmatrix}
\rightarrow_{E_{1,3}(1)}
\begin{bmatrix}
1 & 0 & 0 & 0 \\
0 & 1 & 0 & 0 \\
0 & 0 & 1 & -1 \\
0 & 0 & 0 & 0
\end{bmatrix}
\rightarrow
\begin{cases}
x = 0\\
y = 0 \\
z = t \\
w = t
\end{cases}
$$
Dunque la base del nucleo di $T$ è $\mathcal{B}(N(T)) = \{ t(0,0,1,1) | t \in \mathbb{R} \}$.
$$
\begin{align}
\mathrm{Im}(T) &= \{ T(v) | v \in \mathbb{R}^{4} \} \\
 & = \{ x(1, -2, 1, 0) +  y(0, 0, 1, 1) + z(-1, 0,0,1) + w(1,0,0,1) | x,y,z,w \in \mathbb{R} \}  \\
 & = \langle (1, -2, 1, 0), (0,0,1,1), (-1,0,0,1),(1,0,0,1) \rangle
\end{align}
$$
Solo i primi 3 vettori sono linearmente indipendenti, quindi $\mathcal{B}(\mathrm{Im}(T)) = \{ (1, -2, 1, 0), (0,0,1,1), (-1, 0,0,1) \}$.

## Es 8.12
Si consideri il seguente endomorfismo di $R4 T (x, y, z, w) = (−x + z, 2y, x − 2z, w)$ 
### a) 
Si determino le dimensioni di immagine e nucleo di $T$ e si stabilisca se $T$ è invertibile.
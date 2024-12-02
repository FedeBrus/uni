## Es 7.1
Si considerino i seguenti sottospazi di $\mathbb{R}^{4}$:
$$
\begin{align}
U = \{ (0,1,1,0)a + (0,0,0,1)b | a, b \in \mathbb{R} \} \\
V = \{ (x, y, z, w) \in \mathbb{R}^{4} | x + y = 0, z = 2x \}
\end{align}
$$
### a)
Determinare una base e la dimensione di $U$ e di $V$.

Riduciamo a scalini la matrice associata a $U$.
$$
\begin{bmatrix}
0 & 0 \\
a & 0 \\
a & 0 \\
0 & b
\end{bmatrix}\rightarrow
\begin{bmatrix}
a & 0 \\
0 & b
\end{bmatrix}
$$
Il rango della matrice è $2$. dunque la $dim(U) = 2$. Una sua base è già data dall'esercizio: $\{ (0,a,a,0), (0,0,0,b) \}$.

Analizziamo il sistema associato a $V$:
$$
\begin{cases}
x + y = 0 \\
-2x + z = 0
\end{cases}\rightarrow
\begin{cases}
x = -y \\
y = t \\
z = 2x \\
w = s
\end{cases}\rightarrow
\begin{cases}
x = -t \\
y = t \\
z = -2t \\
w = s
\end{cases}
$$
La soluzione del sistema omogeneo dipende da due parametri $t, s \in \mathbb{R}$ dunque la nullità è $2$. Perciò $dim(V) = 2$ e una sua base è $\{ (-1, 1, -2, 0)t + (0,0,0,1)s | t, s \in \mathbb{R}\}$.

### c)
Determinare una base e la dimensione di $U + V$.

Il sottospazio $U + V$ è generato da $\langle u_{1}, u_{2}, v_{1}, v_{2}\rangle$, dove $u_{1}, u_{2} \in U, v_{1},v_{2} \in V$.
Come vettori scegliamo quelli che compongono le basi dei due sottospazi.
$$
\begin{bmatrix}
0 & 0 & -1 & 0 \\
1 & 0 & 1 & 0 \\
1 & 0 & -2 & 0 \\
0 & 1 & 0 & 1
\end{bmatrix}
\rightarrow_{S_{1, 2}}
\begin{bmatrix}
1 & 0 & 1 & 0 \\
0 & 0 & -1 & 0 \\
1 & 0 & -2 & 0 \\
0 & 1 & 0 & 1
\end{bmatrix}
\rightarrow_{E_{3, 1}(-1)}
\begin{bmatrix}
1 & 0 & 1 & 0 \\
0 & 0 & -1 & 0 \\
0 & 0 & -3 & 0 \\
0 & 1 & 0 & 1
\end{bmatrix}
\rightarrow_{S_{2,4}}
\begin{bmatrix}
1 & 0 & 1 & 0 \\
0 & 1 & 0 & 1 \\
0 & 0 & -3 & 0 \\
0 & 0 & -1 & 0
\end{bmatrix}
\rightarrow_{D_{3}\left( -\frac{1}{3} \right)}
\begin{bmatrix}
1 & 0 & 1 & 0 \\
0 & 1 & 0 & 1 \\
0 & 0 & 1 & 0 \\
0 & 0 & -1 & 0
\end{bmatrix}
\rightarrow_{E_{4,3}(1)}
\begin{bmatrix}
1 & 0 & 1 & 0 \\
0 & 1 & 0 & 1 \\
0 & 0 & 1 & 0 \\
0 & 0 & 0 & 0
\end{bmatrix}
\rightarrow_{E_{1,3}(-1)}
\begin{bmatrix}
1 & 0 & 0 & 0 \\
0 & 1 & 0 & 1 \\
0 & 0 & 1 & 0 \\
0 & 0 & 0 & 0
\end{bmatrix}
$$
Dunque $dim(U + V) = 3$ e una sua base è $\mathcal{B} = \{ u_{1}, u_{2}, v_{1} \} = \{ (0, 1, 1, 0), (0, 0, 0, 1), (-1,1,-2,0) \}$.

### b) (DA RIGUARDARE)
Determinare una base e la dimensione di $U \cap V$.

Utilizzando la formula di Grassman sappiamo che $dim(U \cap V) = dim(U) + dim(V) - dim(U + V) = 1$

## Es 7.2
Calcolare il determinante delle seguenti matrici:
$$
A_{1} = \begin{bmatrix}
1 & 2 \\
2 & -1
\end{bmatrix}
$$
$$
\det A_{1} = -1 - 4 = -5
$$
$$
A_{2} = \begin{bmatrix}
3 & 0 \\
0 & 1
\end{bmatrix}
$$
$$
\det A_{2} = 3
$$
$$
A_{3} = \begin{bmatrix}
1 & 1 \\
2 & 3
\end{bmatrix}
$$
$$
\det A_{3} = 3 - 2 = 1
$$
$$
A_{4} = \begin{bmatrix}
1 & -4 & 2 \\
0 & 2 & -1 \\
0 & 0 & 5
\end{bmatrix}
$$
$$
\det A_{4} = \det \begin{bmatrix}
2 & -1 \\
0 & 5
\end{bmatrix} = 10
$$
$$
A_{5} = \begin{bmatrix}
-2 & 0 & 0 \\
0 & 1 & 0 \\
0 & 0 & 3
\end{bmatrix}
$$
$$
\det A_{5} = -2 \cdot 1 \cdot 3 = -6
$$
$$
A_{6} = \begin{bmatrix}
1 & -1 & 3 \\
1 &  1 & 2 \\
2 & 0 & 7
\end{bmatrix}\rightarrow_{E_{2,1}(-1)}
\begin{bmatrix}
1 & -1 & 3 \\
0 & 2 & -1 \\
2 & 0 & 7
\end{bmatrix}\rightarrow_{E_{3,1}(-2)}
\begin{bmatrix}
1 & -1 & 3 \\
0 & 2 & -1 \\
0 & 2 & 1
\end{bmatrix}
$$
$$
\det A_{6} = \det \begin{bmatrix}
2 & -1 \\
2 & 1
\end{bmatrix} = 2 + 2 = 4
$$
## Es 7.3
Calcolare il determinante delle seguenti matrici
$$
A = 
\begin{bmatrix}
2 & 3 \\
1 & -2
\end{bmatrix}
$$
$$
\det A = -4 - 3 = -7
$$
$$
B = \begin{bmatrix}
-11 & 3 \\
2 & 0
\end{bmatrix}
$$
$$
\det B = -6
$$
$$
C = \begin{bmatrix}
2 & 3 & -2 \\
1 & -2 & 0 \\
0 & -1 & 2
\end{bmatrix}
$$
$$
\det C = 
-\det\begin{bmatrix}
1 & -2 & 0 \\ 2 & 3 & -2 \\ 0 & -1 & 2
\end{bmatrix} =
-\det \begin{bmatrix}
1 & -2 & 0 \\
0 & 7 & -2 \\
0 & -1 & 2
\end{bmatrix} =
-\det \begin{bmatrix}
7 & -2 \\
-1 & 2
\end{bmatrix} = -(14 - 2) = -12
$$
$$
D = \begin{bmatrix}
2 & -2 & -2 \\
1 & 1 & 0 \\
-3 & 4 & 0
\end{bmatrix}
$$
$$
\det D = -2 \det \begin{bmatrix}
1 & 1 \\
-3 & 4
\end{bmatrix} = -2 \cdot 7 = -14
$$
$$
E = \begin{bmatrix}
7 & 0 & 0 \\
1 & 1 & 0 \\
-3 & 4 & -3
\end{bmatrix}
$$
$$
\det E = -3 \cdot 7 = -21
$$
## Es 7.4
Calcolare il rango della matrice utilizzando il determinante
$$
A = \begin{bmatrix}
1 & k+2 & 0 \\
k^{2}-1 & 0 & 4 - k \\
1 & 2k -3 & 0
\end{bmatrix}
$$
$$
\det A = (k - 4)\det \begin{bmatrix}
1 & k + 2 \\
1 & 2k - 3
\end{bmatrix} = (k - 4) (2k - 3 - k - 2) = (k-4)(k - 5)
$$
Il determinante è nullo, dunque la matrice non ha rango massimo se $k = 4, 5$, in tutti gli altri casi $rgA = 3$.
Se $k = 4$.
$$
A = \begin{bmatrix}
1 & 6 & 0 \\
15 & 0 & 0 \\
1 & 5 & 0
\end{bmatrix}
$$
$$
\begin{bmatrix}
1 & 6 & 0 \\
1 & 0 & 0 \\
1 & 5 & 0
\end{bmatrix} \rightarrow
\begin{bmatrix}
1 & 6 & 0 \\
0 & -6 & 0 \\
0 & -1 & 0
\end{bmatrix} \rightarrow
\begin{bmatrix}
1 & 6 & 0 \\
0 & 1 & 0 \\
0 & 0 & 0
\end{bmatrix}
$$
Se $k = 4$, allora $rgA = 2$.

Se $k = 5$.
$$
A = \begin{bmatrix}
1 & 7 & 0 \\
24 & 0 & -1 \\
1 & 7 & 0
\end{bmatrix}\rightarrow 
\begin{bmatrix}
1 & 7 & 0 \\
0 & -168 & -1 \\
0 & 0 & 0 \end{bmatrix} 
$$
Se $k = 5$, allora $rgA = 2$.

## Es 7.5
Sia $A$ la matrice reale 
$$
A = \begin{bmatrix}
2 & 2 & k \\
1 & 2 & 0 \\
0 & 0 & 3k
\end{bmatrix}
$$
### a)
Calcolare il rango di $A$ al variare di $k$.
$$
\det A = 3k \det \begin{bmatrix}
2 & 2 \\
1 & 2
\end{bmatrix} = 3k \cdot (4 - 2) = 6k
$$
Quindi la matrice ha rango massimo quando $k \neq 0$.
Nel caso $k = 0$:
$$
A = \begin{bmatrix}
2 & 2 & 0 \\
1 & 2 & 0 \\
0 & 0 & 0
\end{bmatrix}\rightarrow
\begin{bmatrix}
1 & 1 & 0 \\
0 & 1 & 0 \\
0 & 0 & 0
\end{bmatrix}
$$
Dunque $rgA = 2$.

### b)
Si determini il valore di $k$ per il quale la matrice $A$ abbia determinante uguale a $1$. Per tale valore di $k$, calcolare la matrice inversa di $A$.
$$
\det A = 6k = 1 \implies k = \frac{1}{6}
$$
Se $k = \frac{1}{6}$
$$
A = \begin{bmatrix}
2 & 2 & \frac{1}{6} & 1 & 0 & 0 \\
1 & 2 & 0 & 0 & 1 & 0 \\
0 & 0 & \frac{1}{2} & 0 & 0 & 1
\end{bmatrix}
\rightarrow_{D_{1}\left( \frac{1}{2} \right)}
\begin{bmatrix}
1 & 1 & \frac{1}{12} & \frac{1}{2} & 0 & 0 \\
1 & 2 & 0 & 0 & 1 & 0 \\
0 & 0 & \frac{1}{2} & 0 & 0 & 1
\end{bmatrix}
\rightarrow_{E_{2,1}(-1)}
\begin{bmatrix}
1 & 1 & \frac{1}{12} & \frac{1}{2} & 0 & 0 \\
0 & 1 & -\frac{1}{12} & -\frac{1}{2} & 1 & 0 \\
0 & 0 & \frac{1}{2} & 0 & 0 & 1
\end{bmatrix}
\rightarrow_{D_{3}(2)}
\begin{bmatrix}
1 & 1 & \frac{1}{12} & \frac{1}{2} & 0 & 0 \\
0 & 1 & -\frac{1}{12} & -\frac{1}{2} & 1 & 0 \\
0 & 0 & 1 & 0 & 0 & 1
\end{bmatrix}
\rightarrow_{E_{2,3}\left( \frac{1}{12} \right)}
\begin{bmatrix}
1 & 1 & \frac{1}{12} & \frac{1}{2} & 0 & 0 \\
0 & 1 & 0 & -\frac{1}{2} & 1 & \frac{1}{6} \\
0 & 0 & 1 & 0 & 0 & 2
\end{bmatrix}
$$
$$
\rightarrow_{E_{1,3}\left( -\frac{1}{12} \right)}
\begin{bmatrix}
1 & 1 & 0 & \frac{1}{2} & 0 & -\frac{1}{6} \\
0 & 1 & 0 & -\frac{1}{2} & 1 & \frac{1}{6} \\
0 & 0 & 1 & 0 & 0 & 2
\end{bmatrix}
\rightarrow_{E_{1,2}(-1)}
\begin{bmatrix}
1 & 0 & 0 & 1 & -1 & -\frac{1}{3} \\
0 & 1 & 0 & -\frac{1}{2} & 1 & \frac{1}{6} \\
0 & 0 & 1 & 0 & 0 & 2
\end{bmatrix}
$$
## Es 7.6
Si consideri lo spazio vettoriale $N(A)$ dato dalle soluzioni del sistema omogeneo $Ax = 0$ con
$$
A = \begin{bmatrix}
8k + 1 & k + 4 & 0 & k + 8 \\
2k & 0 & 1 & 2k+2 \\
0 & 0 & k+4 & 0 \\
k & 0 & k+2 & k+3
\end{bmatrix}
$$
### a)
Si stabilisca per quale valore di $k$ lo spazio $N(A)$ è nullo: $N(A) = \{ (0,0,0,0) \}$

Lo spazio $N(A)$ è nullo se e solo se la matrice $A$ ha rango massimo, ciò è vero se e solo se il suo determinante non è nullo.
$$
\det A = - (k + 4) \det  \begin{bmatrix}
2k & 1 & 2k + 2 \\
0 & k + 4 & 0 \\
k & k + 2 & k + 3
\end{bmatrix} = 
-(k + 4)(k+4) \det \begin{bmatrix}
2k & 2k+2 \\
k & k + 3
\end{bmatrix} =
-(k+4)(k+4)(2k^2+6k-2k^2-2k) = -(k+4)^{2}(4k)
$$
Dunque lo spazio $N(A)$ è nullo se $k = -4, 0$.

### b)
Per i valori di $k$ esclusi nel punto precedente si determini una base di $N(A)$.
Se $k = 0$:
$$
A = \begin{bmatrix}
1 & 4 & 0 & 8 \\
0 & 0 & 1 & 2 \\
0 & 0 & 4 & 0 \\
0 & 0 & 2 & 3
\end{bmatrix}\rightarrow_{E_{3,2}(-4)}
\begin{bmatrix}
1 & 4 & 0 & 8 \\
0 & 0 & 1 & 2 \\
0 & 0 & 0 & -8 \\
0 & 0 & 2 & 3
\end{bmatrix}\rightarrow_{E_{4,2}(-2)}
\begin{bmatrix}
1 & 4 & 0 & 8 \\
0 & 0 & 1 & 2 \\
0 & 0 & 0 & -8 \\
0 & 0 & 0 & -1
\end{bmatrix}
$$
$$
\rightarrow_{D_{3}\left( -\frac{1}{8} \right)}
\begin{bmatrix}
1 & 4 & 0 & 8 \\
0 & 0 & 1 & 2 \\
0 & 0 & 0 & 1 \\
0 & 0 & 0 & -1
\end{bmatrix}\rightarrow_{E_{4,3}(1)}
\begin{bmatrix}
1 & 4 & 0 & 8 \\
0 & 0 & 1 & 2 \\
0 & 0 & 0 & 1 \\
0 & 0 & 0 & 0
\end{bmatrix}
\rightarrow_{E_{2, 3}(-2)}
\begin{bmatrix}
1 & 4 & 0 & 8 \\
0 & 0 & 1 & 0 \\
0 & 0 & 0 & 1 \\
0 & 0 & 0 & 0
\end{bmatrix}
\rightarrow_{E_{1,3}(-8)}
\begin{bmatrix}
1 & 4 & 0 & 0 \\
0 & 0 & 1 & 0 \\
0 & 0 & 0 & 1 \\
0 & 0 & 0 & 0
\end{bmatrix}
\rightarrow
\begin{cases}
x = -4t \\
y = t \\
z = 0 \\
w = 0
\end{cases}
$$
$N(A) = \{ t(-4, 1, 0, 0) | t \in \mathbb{R} \}$.

Se $k = -4$:
$$
A = 
\begin{bmatrix}
-31 & 0 & 0 & 4 \\
-8 & 0 & 1 & -6 \\
0 & 0 & 0 & 0 \\
-4 & 0 & -2 & -1
\end{bmatrix}
\rightarrow_{D_{1}\left( -\frac{1}{31} \right)}
\begin{bmatrix}
1 & 0 & 0 & -\frac{4}{31} \\
-8 & 0 & 1 & -6 \\
0 & 0 & 0 & 0 \\
-4 & 0 & -2 & -1
\end{bmatrix}
\rightarrow_{E_{2, 1}(8)}
\begin{bmatrix}
1 & 0 & 0 & -\frac{4}{31} \\
0 & 0 & 1 & -\frac{218}{31} \\
0 & 0 & 0 & 0 \\
-4 & 0 & -2 & -1
\end{bmatrix}
\rightarrow_{E_{4,1}(4)}
\begin{bmatrix}
1 & 0 & 0 & -\frac{4}{31} \\
0 & 0 & 1 & -\frac{218}{31} \\
0 & 0 & 0 & 0 \\
0 & 0 & -2 & -\frac{47}{31}
\end{bmatrix}
\rightarrow_{E_{4,2}(2)}
\begin{bmatrix}
1 & 0 & 0 & -\frac{4}{31} \\
0 & 0 & 1 & -\frac{218}{31} \\
0 & 0 & 0 & 0 \\
0 & 0 & 0 & -\frac{265}{31}
\end{bmatrix}
$$
$$
\begin{cases}
x = 0 \\
y = t \\
z = 0 \\
w = 0
\end{cases}
$$
$N(A) = \{ t(0,1,0,0) | t \in \mathbb{R} \}$.

## Es 7.7
Determinare per quali valori del parametro $k$ i seguenti vettori formano una base di $\mathbb{R}^{3}$.
$$
v_{1} = (1, 2, -2), \qquad v_{2} = (1, 1, -3), \qquad v_{3} = (3, 7, k - 6)
$$

Sappiamo che qualsiasi 3 vettori indipendenti di $\mathbb{R}^{3}$ formano una base di quest'ultimo. I 3 vettori sono linearmente indipendenti se la matrice
costruita mettendo i vettori in colonna ha rango massimo, e ciò si avvera se e solo se il determinante di tale matrice è non nullo.
$$
A = 
\begin{bmatrix}
1 & 1 & 3 \\
2 & 1 & 7 \\
-2 & -3 & k-6
\end{bmatrix}
\rightarrow_{E_{2,1}(-2)}
\begin{bmatrix}
1 & 1 & 3 \\
0 & -1 & 1 \\
-2 & -3 & k-6
\end{bmatrix}
\rightarrow_{E_{3,1}(2)}
\begin{bmatrix}
1 & 1 & 3 \\
0 & -1 & 1 \\
0 & -1 & k
\end{bmatrix} = S
$$
$$
\det A = \det S = \det \begin{bmatrix}
-1 & 1 \\
-1 & k
\end{bmatrix} = -k + 1
$$
Dunque i 3 vettori non formano una base di $\mathbb{R}^{3}$ se $k = 1$.


## Es 7.8
Sia $V$ il sottospazio di $\mathbb{R}^{4}$ generato dai vettori:
$$
\begin{align}
v_{1} &= (0, k - 1, k^{2} - 1, 3k - 2) \\
v_{2} &= (1, 3, 0, 3) \\
v_{3} &= (-1, -2, 1, -1)
\end{align}
$$
Determinare la dimensione e una base di $V$ al variare del parametro reale $k$.
Consideriamo la matrice associata mettendo i vettori in colonna.
$$
\begin{bmatrix}
0 & 1 & -1 \\
k-1 & 3 & -2 \\
k^{2}-1 & 0 & 1 \\
3k-2 & 3 & -1
\end{bmatrix}
$$
Scegliamo arbitrariamente una sotto-matrice $3\times3$ per andare a esaminare solo i valori di $k$ che ne annullerebbero il determinante.
$$
B = \begin{bmatrix}
0 & 1 & -1 \\
k-1 & 3 & -2 \\
k^{2}-1 & 0 & 1
\end{bmatrix}
$$
$$
\det B = -((k-1)+2(k^{2}-1)) + 3(k^{2} - 1) = -(k - 1 +2k^{2}- 2) + 3k^{2} - 3 = -k - 2k^{2} + 3k^{2} = k(k - 1)
$$
Dunque $\det B = 0$ se $k = 0$ oppure $k = 1$. 
Nel caso $k \neq 0, 1$ allora i 3 vettori iniziali sono linearmente indipendenti e essendo generatori di $V$ allora ciò vuol dire che formano una base.
$$
\mathcal{B} = \{ v_{1},v_{2},v_{3} \} = \{ (0, k - 1, k^{2} - 1, 3k - 2), (1,3,0,3), (-1, -2, 1, -1) \}, \qquad dimV = 3
$$
Andiamo a ridurre la matrice originale con questi 2 valori appena trovati.
Se $k = 0$ la matrice di partenza è:
$$
\begin{bmatrix}
0 & 1 & -1 \\
-1 & 3 & -2 \\
-1 & 0 & 1 \\
-2 & 3 & -1
\end{bmatrix}
\rightarrow_{S_{1,3}}
\begin{bmatrix}
-1 & 0 & 1 \\
-1 & 3 & -2 \\
0 & 1 & -1 \\
-2 & 3 & -1
\end{bmatrix}
\rightarrow-_{D_{1}(-1)}
\begin{bmatrix}
1 & 0 & -1 \\
-1 & 3 & -2 \\
0 & 1 & -1 \\
-2 & 3 & -1
\end{bmatrix}
\rightarrow_{E_{2,1}(1)}
\begin{bmatrix}
1 & 0 & -1 \\
0 & 3 & -3 \\
0 & 1 & -1 \\
-2 & 3 & -1
\end{bmatrix}
\rightarrow_{E_{4,1}(2)}
\begin{bmatrix}
1 & 0 & -1 \\
0 & 3 & -3 \\
0 & 1 & -1 \\
0 & 3 & -3
\end{bmatrix}
$$
Ora è evidente che una matrice a scalini è:
$$
\begin{bmatrix}
1 & 0 & -1 \\
0 & 1 & -1 \\
0 & 0 & 0 \\
0 & 0 & 0
\end{bmatrix}
$$
Il che significa che $v_{3} = -v_{1} -v_{2}$ dunque $dimV = 2$ e $\mathcal{B} = \{ v_{1},v_{2} \} = \{ (0, -1, -1, -2), (1, 3, 0, 3) \}$.

Se $k = 1$ la matrice di partenza è:
$$
\begin{bmatrix}
0 & 1 & -1 \\
0 & 3 & -2 \\
0 & 0 & 1 \\
1 & 3 & -1
\end{bmatrix}
$$
Invece che ridurre a scalini la matrice, che è un processo lungo, possiamo osservare le sotto matrici $3 \times 3$ della matrice. Sicuramente l'ultima riga deve far parte della sotto matrice, sennò si avrebbe una colonna nulla e noi vogliamo dimostrare che $rgA = 3$. Anche per questo vale la pena controllare così dato che abbiamo già trovato un componente fisso e se prendiamo la prima colonna per calcolare il determinante i conti risultano agevoli. Difatti basta trovare una matrice $2 \times 2$ nella sotto matrice:
$$
\begin{bmatrix}
1 & -1 \\
3 & -2 \\
0 & 1
\end{bmatrix}
$$
Ad esempio la sotto matrice composta dalle prime 2 righe ha determinante non nullo. Quindi se $k = 1$ Il rango della matrice rimane pur sempre $3$. Da cui possiamo concludere che $dimV = 3$ e $\mathcal{B} = \{ (0, 0, 0, 1), (1, 3, 0, 3), (-1, -2, 1, -1) \}$.

## Es 7.9
Sia $W$ il sottospazio di $\mathbb{R}^{4}$ generato dai vettori $v_{1}, v_{2}, v_{3}, v_{4}$.
$$
v_{1} = (-1, 1, -1, 1), \qquad v_{2} = (1,k , 3, 4),\qquad v_{3} = (1, -1, k, 1), \qquad v_{4} = (0, 0, 1, k)
$$
Si calcoli la dimensione di $W$ al variare di $k \in \mathbb{R}$.
$$
A = 
\begin{bmatrix}
-1 & 1 & 1 & 0 \\
1 & k & -1 & 0 \\
-1 & 3 & k & 1 \\
1 & 4 & 1 & k
\end{bmatrix}
$$
$$
\det A = (-1)(-1) \det \begin{bmatrix}
1 & -1 & -1 & 0 \\
1 & k & -1 & 0 \\
1 & -3 & -k & -1 \\
1 & 4 & 1 & k
\end{bmatrix} = \det \begin{bmatrix}
1 & -1 & -1 & 0 \\
0 & k + 1 &  0 & 0 \\
0 & -2 & 1- k & -1 \\
0 & 5 & 2 & k
\end{bmatrix} = \det \begin{bmatrix}
k + 1 & 0 & 0 \\
-2 & 1-k & -1 \\
5 & 2 & k
\end{bmatrix} = (k + 1)\det \begin{bmatrix}
1- k &  -1 \\
2 & k
\end{bmatrix}= (k + 1)(k - k^{2} + 2) 
$$
$$
= -(k + 1)(k^{2} - k - 2) = -(k+1)^{2}(k-2)
$$
Dunque il determinante si annulla se $k = -1$, $k = 2$.

Se $k \neq -1, 2$ allora $dimW = 4$.

Se $k = -1$:
$$
A = 
\begin{bmatrix}
1 & -1 & -1 & 0 \\
0 & 0 &  0 & 0 \\
0 & -2 & 2 & -1 \\
0 & 5 & 2 & -1
\end{bmatrix}
$$
In questo caso si nota che una riga e vuota e le ultime due righe non possono dipendenti tra di loro in quanto differiscono per un termine. Perciò $dimW = 3$.
Se $k = 2$:
$$
\begin{bmatrix}
1 & -1 & -1 & 0 \\
0 & 3 &  0 & 0 \\
0 & -2 & -2 & -1 \\
0 & 5 & 2 & 2
\end{bmatrix}
\rightarrow_{D_{2}\left( \frac{1}{3} \right)}
\begin{bmatrix}
1 & -1 & -1 & 0 \\
0 & 1 &  0 & 0 \\
0 & -2 & -1 & -1 \\
0 & 5 & 2 & 2
\end{bmatrix}
\rightarrow_{E_{3,2}(2)}
\begin{bmatrix}
1 & -1 & -1 & 0 \\
0 & 1 &  0 & 0 \\
0 & 0 & -1 & -1 \\
0 & 5 & 2 & 2
\end{bmatrix}
\rightarrow_{E_{4,2}(-5)}
\begin{bmatrix}
1 & -1 & -1 & 0 \\
0 & 1 &  0 & 0 \\
0 & 0 & -1 & -1 \\
0 & 0 & 2 & 2
\end{bmatrix}
\rightarrow_{D_{3}(-1)}
\begin{bmatrix}
1 & -1 & -1 & 0 \\
0 & 1 &  0 & 0 \\
0 & 0 & 1 & 1 \\
0 & 0 & 2 & 2
\end{bmatrix}
\rightarrow_{E_{4,3}(-2)}
\begin{bmatrix}
1 & -1 & -1 & 0 \\
0 & 1 &  0 & 0 \\
0 & 0 & 1 & 1 \\
0 & 0 & 0 & 0
\end{bmatrix}
$$
Dunque se $k = 2$, $dimW = 3$.

## Es 7.10
Sia $V = \langle v_{1}, v_{2}, v_{3} \rangle$ con
$$
v_{1} = ( k+ 3, k + 3, 0), \qquad v_{2} = (0, 3,  k + 2), \qquad v_{3} = (0, 3k, k)
$$
### a)
Si stabilisca per quali valori di $k$ lo spazio $V$ coincide con $\mathbb{R}^{3}$.

Qualsiasi 3 ennuple linearmente indipendenti formano una base di $\mathbb{R}^{3}$.
$$
A = \begin{bmatrix}
k + 3 & 0 & 0 \\
k + 3 & 3 & 3k \\
0 & k+2 & k
\end{bmatrix}
$$
Sono linearmente indipendenti se il determinante di questa matrice è non nullo.
$$
\det A = (k+3)(3k - 3k(k+2)) = (k+3)(3k- 3k^{2}-6k) = -(k+3)(3k^{2}+3k) = -3(k+3)k(k + 1)
$$
Dunque i 3 vettori formano una base di $\mathbb{R}^{3}$ se $k \neq -3, -1, 0$.

### b)
Si determini la dimensione e una base di $V$ al variare di $k$.
Se $k \neq 0, -1, -3$, $dimV = 3$ e $\mathcal{B} = \{ v_{1},v_{2},v_{3} \}$.

Se $k = 0$:
$$
A = \begin{bmatrix}
3 & 0 & 0 \\
3 & 3 & 0 \\
0 & 2 & 0
\end{bmatrix}
\rightarrow _{D_{1}\left( \frac{1}{3} \right)}
\begin{bmatrix}
1 & 0 & 0 \\
3 & 3 & 0 \\
0 & 2 & 0
\end{bmatrix}
\rightarrow_{D_{\left( \frac{1}{3} \right)}}
\begin{bmatrix}
1 & 0 & 0 \\
1 & 1 & 0 \\
0 & 2 & 0
\end{bmatrix}
\rightarrow_{E_{2,1}(-1)}
\begin{bmatrix}
1 & 0 & 0 \\
0 & 1 & 0 \\
0 & 2 & 0
\end{bmatrix}
\rightarrow_{D_{3}\left( \frac{1}{2} \right)}
\begin{bmatrix}
1 & 0 & 0 \\
0 & 1 & 0 \\
0 & 1 & 0
\end{bmatrix}
\rightarrow_{E_{3,2}(-1)}
\begin{bmatrix}
1 & 0 & 0 \\
0 & 1 & 0 \\
0 & 0 & 0
\end{bmatrix}
$$
Dunque $dimV = 2$ e $\mathcal{B} = \{ (3,3,0), (0,3,2) \}$

Se $k = -1$:
$$
A = 
\begin{bmatrix}
2 & 0 & 0 \\
2 & 3 & -3 \\
0 & 1 & -1
\end{bmatrix}
\rightarrow_{D_{\frac{1}{2}}}
\begin{bmatrix}
1 & 0 & 0 \\
2 & 3 & -3 \\
0 & 1 & -1
\end{bmatrix}
\rightarrow_{E_{2,1}(-2)}
\begin{bmatrix}
1 & 0 & 0 \\
0 & 3 & -3 \\
0 & 1 & -1
\end{bmatrix}
\rightarrow_{D_{2}\left( \frac{1}{3} \right)}
\begin{bmatrix}
1 & 0 & 0 \\
0 & 1 & -1 \\
0 & 1 & -1
\end{bmatrix}
\rightarrow_{E_{3,2}(-1)}
\begin{bmatrix}
1 & 0 & 0 \\
0 & 1 & -1 \\
0 & 0 & 0
\end{bmatrix}
$$

Dunque $dimV = 2$ e $\mathcal{B} = \{ (2,2,0), (0,3,1) \}$

Se $k = -3$:
$$
A = \begin{bmatrix}
0 & 0 & 0 \\
0 & 3 & -9 \\
0 & -1 & -3
\end{bmatrix}
\rightarrow-_{S_{1,3}}
\begin{bmatrix}
0 & -1 & -3 \\
0 & 3 & -9 \\
0 & 0 & 0
\end{bmatrix}
\rightarrow_{D_{1}(-1)}
\begin{bmatrix}
0 & 1 & 3 \\
0 & 3 & -9 \\
0 & 0 & 0
\end{bmatrix}
\rightarrow-_{E_{2,1}(-3)}
\begin{bmatrix}
0 & 1 & 3 \\
0 & 0 & -18 \\
0 & 0 & 0
\end{bmatrix}
\rightarrow_{D_{2}\left( -\frac{1}{18} \right)}
\begin{bmatrix}
0 & 1 & 3 \\
0 & 0 & 1 \\
0 & 0 & 0
\end{bmatrix}
$$
Dunque $dimV = 2$ e $\mathcal{B} = \{ (0, 3, -1), (0, - 9, -3) \}$

## Es 7.11
Si consideri l'insieme
$$
S = \{ (k+1, k+1, 0, 2k), (0, 2k, 0, 0), (1, 3k, 0, 1), (1, 5k, 1, k) \}
$$
### a)
Si stabilisca per quale valore di $k$ l'insieme $S$ è una base di $\mathbb{R}^{4}$.

$$
A = \begin{bmatrix}
k + 1 & 0 & 1 & 1 \\
k+1 & 2k & 3k & 5k \\
0 & 0 & 0 & 1 \\
2k & 0 & 1 & k
\end{bmatrix}
$$
$$
\det A = \det \begin{bmatrix}
k + 1  &  0 & 1 \\
k+1 & 2k & 3k \\
2k & 0 & 1
\end{bmatrix} = 2k \det \begin{bmatrix}
k +1 & 1 \\
2k & 1
\end{bmatrix} = 2k (1 - k)
$$
Quindi $S$ è una base di $\mathbb{R}^{4}$ se $k \neq 0, 1$.

### b)
Posto $k = -1$ si trovino le coordinate del vettore $v = (1,1,0,1)$ rispetto alla base trovata.
Se $k = -1$:
$$
S = \{ (0, 0, 0, -2), (0, -2, 0, 0), (1, -3, 0, 1), (1, -5, 1, -1) \}
$$
Siccome $k \neq 0, 1$ allora $S$ è base.
$$
\begin{bmatrix}
0 & 0 & 1 & 1 & 1\\
0 & -2 & -3 & -5 & 1 \\
0 & 0 & 0 & 1 & 0 \\
-2 & 0 & 1 & -1 & 1
\end{bmatrix}
\rightarrow_{S_{1,4}}
\begin{bmatrix}
-2 & 0 & 1 & -1 & 1 \\
0 & -2 & -3 & -5 & 1 \\
0 & 0 & 0 & 1 & 0 \\
0 & 0 & 1 & 1 & 1
\end{bmatrix}
\rightarrow_{S_{3,4}}
\begin{bmatrix}
-2 & 0 & 1 & -1 & 1 \\
0 & -2 & -3 & -5 & 1 \\
0 & 0 & 1 & 1 & 1 \\
0 & 0 & 0 & 1 & 0
\end{bmatrix}
\rightarrow_{D_{1}\left( -\frac{1}{2} \right)}
\begin{bmatrix}
1 & 0 & -\frac{1}{2} & \frac{1}{2} & -\frac{1}{2} \\
0 & -2 & -3 & -5 & 1 \\
0 & 0 & 1 & 1 & 1 \\
0 & 0 & 0 & 1 & 0
\end{bmatrix}
\rightarrow_{D_{2}\left( -\frac{1}{2} \right)}
\begin{bmatrix}
1 & 0 & -\frac{1}{2} & \frac{1}{2} & -\frac{1}{2} \\
0 & 1 & \frac{3}{2} & \frac{5}{2} & -\frac{1}{2} \\
0 & 0 & 1 & 1 & 1 \\
0 & 0 & 0 & 1 & 0
\end{bmatrix}
$$
$$
\rightarrow_{E_{3,4}(-1)}
\begin{bmatrix}
1 & 0 & -\frac{1}{2} & \frac{1}{2} & -\frac{1}{2} \\
0 & 1 & \frac{3}{2} & \frac{5}{2} & -\frac{1}{2} \\
0 & 0 & 1 & 0 & 1 \\
0 & 0 & 0 & 1 & 0
\end{bmatrix}
\rightarrow_{E_{2,4}\left( -\frac{5}{2} \right)}
\begin{bmatrix}
1 & 0 & -\frac{1}{2} & \frac{1}{2} & -\frac{1}{2} \\
0 & 1 & \frac{3}{2} & 0 & -\frac{1}{2} \\
0 & 0 & 1 & 0 & 1 \\
0 & 0 & 0 & 1 & 0
\end{bmatrix}
\rightarrow_{E_{1,4}\left( -\frac{1}{2} \right)}
\begin{bmatrix}
1 & 0 & -\frac{1}{2} & 0 & -\frac{1}{2} \\
0 & 1 & \frac{3}{2} & 0 & -\frac{1}{2} \\
0 & 0 & 1 & 0 & 1 \\
0 & 0 & 0 & 1 & 0
\end{bmatrix}
\rightarrow_{E_{2,3}\left( -\frac{3}{2} \right)}
\begin{bmatrix}
1 & 0 & -\frac{1}{2} & 0 & -\frac{1}{2} \\
0 & 1 & 0 & 0 & -2 \\
0 & 0 & 1 & 0 & 1 \\
0 & 0 & 0 & 1 & 0
\end{bmatrix}
\rightarrow_{E_{1,3}\left( \frac{1}{2} \right)}
\begin{bmatrix}
1 & 0 & 0 & 0 & 0 \\
0 & 1 & 0 & 0 & -2 \\
0 & 0 & 1 & 0 & 1 \\
0 & 0 & 0 & 1 & 0
\end{bmatrix}
$$
Dunque $T_{S}(v) = (0, -2, 1, 0)$.

## Es 7.12
Sia
$$
\mathcal{B} = \{ (-2, 0, 0), (1, k, -1), (1, -1, k) \}
$$
### a)
Trovare i valori di $k$ per i quali $\mathcal{B}$ è una base di $\mathbb{R}^{3}$.
$$
A = 
\begin{bmatrix}
-2 & 1 & 1 \\
0 & k & -1 \\
0 & -1 & k
\end{bmatrix}
$$
$$
\det A = -2 \det \begin{bmatrix}
k & -1 \\
-1 & k
\end{bmatrix} =-2(k^{2}-1)
$$
Dunque è una base se $k \neq \pm 1$.

### b)
Per il valore di $k = 3$, determinare le coordinate dei vettori $v = (-3, 2, 1)$ e $w = (0, 1, 2)$ rispetto alla base trovata.
$$
\begin{bmatrix}
-2 & 1 & 1  & -3 & 0 \\
0 & 3 & -1 & 2 & 1 \\
0 & -1 & 3  & 1 & 2
\end{bmatrix}
\rightarrow_{D_{1}\left( -\frac{1}{2}\right)}
\begin{bmatrix}
1 & -\frac{1}{2} & -\frac{1}{2}  & \frac{3}{2} & 0 \\
0 & 3 & -1 & 2 & 1 \\
0 & -1 & 3  & 1 & 2
\end{bmatrix}
\rightarrow_{S_{2,3}}
\begin{bmatrix}
1 & -\frac{1}{2} & -\frac{1}{2}  & \frac{3}{2} & 0 \\
0 & -1 & 3  & 1 & 2 \\
0 & 3 & -1 & 2 & 1
\end{bmatrix}
\rightarrow_{D_{2}(-1)}
\begin{bmatrix}
1 & -\frac{1}{2} & -\frac{1}{2}  & \frac{3}{2} & 0 \\
0 & 1 & -3 & -1 & -2 \\
0 & 3 & -1 & 2 & 1
\end{bmatrix}
\rightarrow_{E_{3,2}(-3)}
\begin{bmatrix}
1 & -\frac{1}{2} & -\frac{1}{2}  & \frac{3}{2} & 0 \\
0 & 1 & -3 & -1 & -2 \\
0 & 0 & 8 & 5 & 7
\end{bmatrix}
$$
$$
\rightarrow_{D_{3}\left( \frac{1}{8} \right)}
\begin{bmatrix}
1 & -\frac{1}{2} & -\frac{1}{2}  & \frac{3}{2} & 0 \\
0 & 1 & -3 & -1 & -2 \\
0 & 0 & 1 & \frac{5}{8} & \frac{7}{8}
\end{bmatrix}
\rightarrow_{E_{2,3}(3)}
\begin{bmatrix}
1 & -\frac{1}{2} & -\frac{1}{2}  & \frac{3}{2} & 0 \\
0 & 1 & 0 & \frac{7}{8} & \frac{5}{8} \\
0 & 0 & 1 & \frac{5}{8} & \frac{7}{8}
\end{bmatrix}
\rightarrow_{E_{1,3}\left( \frac{1}{2} \right)}
\begin{bmatrix}
1 & -\frac{1}{2} & 0 & \frac{29}{16} & \frac{7}{16} \\
0 & 1 & 0 & \frac{7}{8} & \frac{5}{8} \\
0 & 0 & 1 & \frac{5}{8} & \frac{7}{8}
\end{bmatrix}
\rightarrow_{E_{1,2}\left( \frac{1}{2} \right)}
\begin{bmatrix}
1 & 0 & 0 & \frac{9}{4} & \frac{3}{4} \\
0 & 1 & 0 & \frac{7}{8} & \frac{5}{8} \\
0 & 0 & 1 & \frac{5}{8} & \frac{7}{8}
\end{bmatrix}
$$
## Es 7.13
Si consideri il sottoinsieme $S$ di $\mathbb{R}^{4}$ costituito dai vettori $v$ della forma:
$$
v = (a_{1}-a_{2}+2a_{3}+a_{4}, a_{1}, 2a_{1}-a_{2}, a_{1}+3a_{2})
$$
Dove $a_{1},a_{2},a_{3},a_{4}$ sono parametri reali.

### a)
$S$ è un sottospazio vettoriale di $\mathbb{R}^{4}$?

Notiamo che $v = a_{1}(1, 1, 2, 1) + a_{2}(-1, 0, -1, 3) + a_{3}(2, 0, 0, 0) + a_{4}(1, 0, 0, 0)$

ma allora $v$ è la combinazione lineare dei vettori $v_{1}, v_{2}, v_{3}, v_{4}$.
Dunque $S = \langle v_{1}, v_{2},v_{3},v_{4}\rangle$ e quindi è un sottospazio vettoriale, nel caso i vettori siano linearmente indipendenti allora $S$ coincide con $\mathbb{R}^{4}$.

### b)
In caso di risposta affermativa ad a), trovare una base di $S$.
Per trovare una base mettiamo i vettori in colonna.
$$
A = 
\begin{bmatrix}
1 & -1 & 2 & 1 \\
1 & 0 & 0 & 0  \\
2 & -1 & 0 & 0 \\
1 & 3 & 0 & 0
\end{bmatrix}
\rightarrow_{E_{2,1}(-1)}
\begin{bmatrix}
1 & -1 & 2 & 1 \\
0 & 1 & -2 & -1  \\
2 & -1 & 0 & 0 \\
1 & 3 & 0 & 0
\end{bmatrix}
\rightarrow_{E_{3,1}(-2)}
\begin{bmatrix}
1 & -1 & 2 & 1 \\
0 & 1 & -2 & -1  \\
0 & 1 & -4 & -2 \\
1 & 3 & 0 & 0
\end{bmatrix}
\rightarrow_{E_{4,1}(-1)}
\begin{bmatrix}
1 & -1 & 2 & 1 \\
0 & 1 & -2 & -1 \\
0 & 1 & -4 & -2 \\
0 & 4 & -2 & -1
\end{bmatrix}
\rightarrow_{E_{3,2}(-1)}
\begin{bmatrix}
1 & -1 & 2 & 1 \\
0 & 1 & -2 & -1 \\
0 & 0 & -2 & -1 \\
0 & 4 & -2 & -1
\end{bmatrix}
\rightarrow_{E_{4,2}(-4)}
\begin{bmatrix}
1 & -1 & 2 & 1 \\
0 & 1 & -2 & -1 \\
0 & 0 & -2 & -1 \\
0 & 0 & 6 & 3
\end{bmatrix}
$$
$$
\rightarrow_{E_{4,3}(3)}
\begin{bmatrix}
1 & -1 & 2 & 1 \\
0 & 1 & -2 & -1 \\
0 & 0 & -2 & -1 \\
0 & 0 & 0 & 0
\end{bmatrix}
$$
Il rango della matrice ottenuta è 3 e si nota che $v_{4}\in \langle v_{1},v_{2},v_{3}\rangle$. Dunque una base è $\mathcal{B}=(v_{1},v_{2},v_{3})$.

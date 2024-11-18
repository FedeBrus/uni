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

### b)
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
0 & k + 2 & k + 3
\end{bmatrix} = 
-(k + 4)(k+4) \det \begin{bmatrix}
2k & 2k+2 \\
0 & k + 3
\end{bmatrix} =
-(k+4)(k+4)(2k)(2k + 3)
$$
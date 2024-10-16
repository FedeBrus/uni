## Es 4.2
Determinare per quali valori del parametro reale $t$ il sistema $Ax = b$ è compatibile. In tali casi determinare esplicitamente le soluzioni:
$$
A = 
\begin{bmatrix}
-1 & 3 & 0 \\
1 & 2 & -1 \\
0 & 0 & 2t + 1
\end{bmatrix}
\qquad
b = \begin{bmatrix}
2 \\
1 \\
5
\end{bmatrix}
$$
$$
(A | b) = 
\begin{bmatrix}
-1 & 3 & 0 & 2 \\
1 & 2 & -1 & 1 \\
0 & 0 & 2t + 1 & 5
\end{bmatrix}
\rightarrow_{E_{2,1}(1)}
\begin{bmatrix}
-1 & 3 & 0 & 2 \\
0 & 5 & -1 & 3 \\
0 & 0 & 2t + 1 & 5
\end{bmatrix}
$$
La matrice è in forma a scalini e la sua compatibilità dipende dall'annullarsi dell'espressione $2t + 1$.

- Se $2t + 1 = 0$, ovvero $t = -\frac{1}{2}$

$$
(A|b) = 
\begin{bmatrix}
-1 & 3 & 0 & 2 \\
0 & 5 & -1 & 3 \\
0 & 0 & 0 & 5
\end{bmatrix}
$$
$rg(A) \neq rg(A|b)$, ergo il sistema è incompatibile.

- Se $2t + 1 \neq 0$, ovvero $t \neq -\frac{1}{2}$
$$
\begin{cases}
-x + 3y = 2 \\
5y - z = 3 \\
(2t + 1)z = 5
\end{cases}
\qquad
\begin{cases}
-x + 3y = 2 \\
5y = \frac{8 + 6t}{2t + 1} \\
z = \frac{5}{2t + 1}
\end{cases}
\begin{cases}
x = -\frac{2t - 14}{10t + 5} \\
y = \frac{8 + 6t}{10t + 5} \\
z = \frac{5}{2t + 1}
\end{cases}
$$
In tale caso $Sol(Ax = b) = \left\{  -\frac{2t-14}{10t + 5}, \frac{8 + 6t}{10t + 5}, \frac{5}{2t + 1}  \right\}$.

## Es 4.4
Si considerino le matrici
$$
A =
\begin{bmatrix}
2 & 1-k & -1 \\
3 & 1 & 1 \\
-3 & -1-k & -1
\end{bmatrix}
\qquad
\text{e}
\qquad
B = 
\begin{bmatrix}
3 & 2 & -1 \\
-1 & 1 & 0 \\
2 & k & 1
\end{bmatrix}
$$
### a)
Trovare, se esistono, i valori del parametro reale $k$ per i qual $null(A) = null(B) = 0$.

$$
\begin{bmatrix}
2 & 1-k & -1 \\
3 & 1 & 1 \\
-3 & -1-k & -1
\end{bmatrix}
\rightarrow_{S_{1, 2}}
\begin{bmatrix}
3 & 1 & 1 \\
2 & 1-k & -1 \\
-3 & -1-k & -1
\end{bmatrix}
\rightarrow_{E_{3, 1}(1)}
\begin{bmatrix}
3 & 1 & 1 \\
2 & 1-k & -1 \\
0 & -k & 0
\end{bmatrix}
\rightarrow_{E_{2, 3}(-1)}
\begin{bmatrix}
3 & 1 & 1 \\
2 & 1 & -1 \\
0 & -k & 0
\end{bmatrix}
\rightarrow_{S_{2, 3}}
\begin{bmatrix}
3 & 1 & 1 \\
0 & -k & 0 \\
2 & 1 & -1 
\end{bmatrix}
\rightarrow_{E_{3, 2}\left( -\frac{2}{3} \right)}
\begin{bmatrix}
3 & 1 & 1 \\
0 & -k & 0 \\
0 & -\frac{2}{3} & -\frac{5}{3} 
\end{bmatrix}
\rightarrow_{E_{3, 1}\left( \frac{2}{3} \right)}
\begin{bmatrix}
3 & 1 & 1 \\
0 & -k & 0 \\
0 & 0 & 1 
\end{bmatrix}
$$
$$
\begin{bmatrix}
3 & 2 & -1 \\
-1 & 1 & 0 \\
2 & k & 1
\end{bmatrix}
\rightarrow_{E_{2, 1}\left( \frac{1}{3} \right)}
\begin{bmatrix}
3 & 2 & -1 \\
0 & \frac{5}{3} & -\frac{1}{3} \\
2 & k & 1
\end{bmatrix}
\rightarrow_{E_{3, 1}\left( -\frac{2}{3} \right)}
\begin{bmatrix}
3 & 2 & -1 \\
0 & \frac{5}{3} & -\frac{1}{3} \\
0 & k-\frac{4}{3} & \frac{5}{3}
\end{bmatrix}
\rightarrow_{S_{2, 3}}
\begin{bmatrix}
3 & 2 & -1 \\
0 & k-\frac{4}{3} & \frac{5}{3} \\
0 & \frac{5}{3} & -\frac{1}{3} 
\end{bmatrix}
\rightarrow_{E_{2, 3}\left( \frac{4}{5} \right)}
\begin{bmatrix}
3 & 2 & -1 \\
0 & k & \frac{7}{5} \\
0 & \frac{5}{3} & -\frac{1}{3} 
\end{bmatrix}
\rightarrow_{E_{3,1}\left( -\frac{5}{6} \right)}
\begin{bmatrix}
3 & 2 & -1 \\
0 & k & \frac{7}{5} \\
0 & 0 & \frac{1}{2}
\end{bmatrix}
$$
Dunque la nullità delle matrici è $0$ se $k = 0$.
### b)
Sia $C = AB$. Stabilire se il sistema lineare $Cx = 0$ ha soluzione unica quando $k = 0$.
$$
AB = 
\begin{bmatrix}
9 & 6 + k &  -\frac{11}{10} \\
0 & -k^{2} & -\frac{7k}{5} \\
0 & 0 & \frac{1}{2}
\end{bmatrix}
$$
Se $k = 0$ il sistema $Cx = 0$ è:
$$
\begin{bmatrix}
9 & 6 &  -\frac{11}{10} & 0 \\
0 & 0 & 0  &  0\\
0 & 0 & \frac{1}{2}  & 0
\end{bmatrix}
$$
In questo caso $n - rg(A) = 1$, dunque esistono infinite soluzioni.

## Es 4.6
Sia $A$ la matrice reale seguente:
$$
A = \begin{bmatrix}
k & -k & 0 & -1 \\
1 & -2 & 1 & 0 \\
0 & 1 & k & 1 \\
\end{bmatrix}
$$
### a)
Determinare il rango di $A$ al variare del parametro reale $k$.
$$
\begin{bmatrix}
1 & -2 & 1 & 0 \\
0 & 1 & k & 1 \\
k & -k & 0 & -1
\end{bmatrix}
\rightarrow_{E_{3,1}(-k)}
\begin{bmatrix}
1 & -2 & 1 & 0 \\
0 & 1 & k & 1 \\
0 & k & -k & -1
\end{bmatrix}
\rightarrow_{E_{3,2}(-k)}
\begin{bmatrix}
1 & -2 & 1 & 0 \\
0 & 1 & k & 1 \\
0 & 0 & -k(1+k) & -(1 + k)
\end{bmatrix}
$$
In questo caso se $k = 0$:
$$
\begin{bmatrix}
1 & -2 & 1 & 0 \\
0 & 1 & 0 & 1 \\
0 & 0 & 0 & -1
\end{bmatrix}
$$
Dunque sarebbe che $rg(A) = 3$.

Invece, se $k = -1$:
$$
\begin{bmatrix}
1 & -2 & 1 & 0 \\
0 & 1 & -1 & 1 \\
0 & 0 & 0 & 0
\end{bmatrix}
$$
Dunque sarebbe che $rg(A) = 2$.

Se invece $k \neq 0, -1$, allora i termini dell'ultima riga non si annullano e $rg(A) = 3$

### b)
Calcolare $null(A)$ e le soluzioni del sistema lineare omogeneo $Ax = 0$, nel caso $k = 1$.

Se $k = 1$ il sistema $Ax = 0$ diventa:
$$
\begin{bmatrix}
1 & -2 & 1 & 0 & 0 \\
0 & 1 & 1 & 1 & 0 \\
0 & 0 & -2 & -2 & 0
\end{bmatrix}
$$
Dunque la nullità della matrice è $n - rg(A) = 1$.
Per trovare le soluzioni:
$$
\begin{bmatrix}
1 & -2 & 1 & 0 & 0 \\
0 & 1 & 1 & 1 & 0 \\
0 & 0 & -2 & -2 & 0
\end{bmatrix}
\rightarrow_{D_{3}(-2)}
\begin{bmatrix}
1 & -2 & 1 & 0 & 0 \\
0 & 1 & 1 & 1 & 0 \\
0 & 0 & 1 & 1 & 0
\end{bmatrix}
\rightarrow_{E_{2, 3}(-1)}
\begin{bmatrix}
1 & -2 & 1 & 0 & 0 \\
0 & 1 & 0 & 0 & 0 \\
0 & 0 & 1 & 1 & 0
\end{bmatrix}
\rightarrow_{E_{1,2}(2)}
\begin{bmatrix}
1 & 0 & 1 & 0 & 0 \\
0 & 1 & 0 & 0 & 0 \\
0 & 0 & 1 & 1 & 0
\end{bmatrix}
\rightarrow_{E_{1,3}(-1)}
\begin{bmatrix}
1 & 0 & 0 & -1 & 0 \\
0 & 1 & 0 & 0 & 0 \\
0 & 0 & 1 & 1 & 0
\end{bmatrix}
$$
Da cui il sistema:
$$
\begin{cases}
x - w = 0 \\
y = 0 \\
z + w = 0
\end{cases}
$$
Pongo $w = t$:
$$
\begin{cases}
w = t \\
x = t \\
y = 0 \\
z = -t
\end{cases}
$$
## Es 4.7
Calcolare l'inversa delle matrici (invertibili)
$$
A = \begin{bmatrix}
1 & 2 \\
2 & -1
\end{bmatrix}
\qquad
B = \begin{bmatrix}
1 & -1 & 3 \\
1 & 1 & 2 \\
2 & 0 & 7
\end{bmatrix}
$$
$$
(A|I_{2}) = 
\begin{bmatrix}
1 & 2 & 1 & 0 \\
2 & -1 & 0 & 1
\end{bmatrix}
\rightarrow_{E_{2,1}\left( -2 \right)}
\begin{bmatrix}
1 & 2 & 1 & 0 \\
0 & -5 & -2 & 1
\end{bmatrix}
$$
La matrice è invertibile perché $rg(A) = n$.
$$
\begin{bmatrix}
1 & 2 & 1 & 0 \\
0 & -5 & -2 & 1
\end{bmatrix}
\rightarrow_{D_{2}\left( -\frac{1}{5} \right)}
\begin{bmatrix}
1 & 2 & 1 & 0 \\
0 & 1 & \frac{2}{5} & -\frac{1}{5}
\end{bmatrix}
\rightarrow_{E_{1,2}(-2)}
\begin{bmatrix}
1 & 0 & \frac{1}{5} & \frac{2}{5} \\
0 & 1 & \frac{2}{5} & -\frac{1}{5}
\end{bmatrix}
$$
$$
(B|I_{3}) = 
\begin{bmatrix}
1 & -1 & 3 & 1 & 0 & 0 \\
1 & 1 & 2 & 0 & 1 & 0 \\
2 & 0 & 7 & 0 & 0 & 1
\end{bmatrix}
\rightarrow_{E_{2,1}(-1)}
\begin{bmatrix}
1 & -1 & 3 & 1 & 0 & 0 \\
0 & 2 & -1 & -1 & 1 & 0 \\
2 & 0 & 7 & 0 & 0 & 1
\end{bmatrix}
\rightarrow_{E_{3,1}(-2)}
\begin{bmatrix}
1 & -1 & 3 & 1 & 0 & 0 \\
0 & 2 & -1 & -1 & 1 & 0 \\
0 & 2 & 1 & -2 & 0 & 1
\end{bmatrix}
\rightarrow_{E_{3,2}(-1)}
\begin{bmatrix}
1 & -1 & 3 & 1 & 0 & 0 \\
0 & 2 & -1 & -1 & 1 & 0 \\
0 & 0 & 2 & -1 & -1 & 1
\end{bmatrix}
$$
$$
\rightarrow_{D_{2}\left( \frac{1}{2} \right)}
\begin{bmatrix}
1 & -1 & 3 & 1 & 0 & 0 \\
0 & 1 & -\frac{1}{2} & -\frac{1}{2} & \frac{1}{2} & 0 \\
0 & 0 & 2 & -1 & -1 & 1
\end{bmatrix}
\rightarrow_{D_{3}\left( \frac{1}{2} \right)}
\begin{bmatrix}
1 & -1 & 3 & 1 & 0 & 0 \\
0 & 1 & -\frac{1}{2} & -\frac{1}{2} & \frac{1}{2} & 0 \\
0 & 0 & 1 & -\frac{1}{2} & -\frac{1}{2} & \frac{1}{2}
\end{bmatrix}
$$
$$
\rightarrow_{E_{2,3}\left( \frac{1}{2} \right)}
\begin{bmatrix}
1 & -1 & 3 & 1 & 0 & 0 \\
0 & 1 & 0 & -\frac{3}{4} & \frac{1}{4} & \frac{1}{4} \\
0 & 0 & 1 & -\frac{1}{2} & -\frac{1}{2} & \frac{1}{2}
\end{bmatrix}
\rightarrow_{E_{1, 3}(-3)}
\begin{bmatrix}
1 & -1 & 0 & \frac{5}{2} & \frac{3}{2} & -\frac{3}{2} \\
0 & 1 & 0 & -\frac{3}{4} & \frac{1}{4} & \frac{1}{4} \\
0 & 0 & 1 & -\frac{1}{2} & -\frac{1}{2} & \frac{1}{2}
\end{bmatrix}
\rightarrow_{E_{1,2}(1)}
\begin{bmatrix}
1 & 0 & 0 & \frac{7}{4} & \frac{7}{4} & -\frac{5}{4} \\
0 & 1 & 0 & -\frac{3}{4} & \frac{1}{4} & \frac{1}{4} \\
0 & 0 & 1 & -\frac{1}{2} & -\frac{1}{2} & \frac{1}{2}
\end{bmatrix}
$$
## Es 4.11
Sia $A$ la matrice reale
$$
A = \begin{bmatrix}
1 & k & 0 \\
0 & 1 & k-4 \\
2 & k & 0
\end{bmatrix}
$$
### a)
Stabilire per quali valori di $k$ la matrice $A$ è  invertibile.
$$
(A | I_{3}) =
\begin{bmatrix}
1 & k & 0  & 1 & 0 & 0\\
0 & 1 & k-4  & 0  & 1 & 0\\
2 & k & 0 & 0 & 0 & 1
\end{bmatrix}
\rightarrow_{E_{3, 1}(-2)}
\begin{bmatrix}
1 & k & 0  & 1 & 0 & 0\\
0 & 1 & k-4  & 0  & 1 & 0\\
0 & -k & 0 & -2 & 0 & 1
\end{bmatrix}
\rightarrow_{E_{3, 2}(k)}
\begin{bmatrix}
1 & k & 0  & 1 & 0 & 0\\
0 & 1 & k-4  & 0  & 1 & 0\\
0 & 0 & k(k-4) & -2 & k & 1
\end{bmatrix}
$$
La matrice è invertibile quando $rg(A) = n$  e ciò è possibile solo se $k(k - 4)$ non si annulla, ovvero quando $k \neq 0, 4$.

### b)
$$
\begin{bmatrix}
1 & k & 0  & 1 & 0 & 0\\
0 & 1 & k-4  & 0  & 1 & 0\\
0 & 0 & k^{2}-4k & -2 & k & 1
\end{bmatrix}
\rightarrow_{D_{3}\left( \frac{1}{k(k-4)} \right)}
\begin{bmatrix}
1 & k & 0  & 1 & 0 & 0\\
0 & 1 & k-4  & 0  & 1 & 0\\
0 & 0 & 1 & -\frac{2}{k(k-4)} & \frac{1}{k - 4} & \frac{1}{k(k - 4)}
\end{bmatrix}
\rightarrow_{E_{2, 3}(-(k - 4))}
\begin{bmatrix}
1 & k & 0  & 1 & 0 & 0\\
0 & 1 & 0  & \frac{2}{k}  & 0 & -\frac{1}{k}\\
0 & 0 & 1 & -\frac{2}{k(k-4)} & \frac{1}{k - 4} & \frac{1}{k(k - 4)}
\end{bmatrix}
\rightarrow_{E_{1,2}(-k)}
\begin{bmatrix}
1 & 0 & 0 & -1 & 0 & 1\\
0 & 1 & 0 & \frac{2}{k}  & 0 & -\frac{1}{k}\\
0 & 0 & 1 & -\frac{2}{k(k-4)} & \frac{1}{k - 4} & \frac{1}{k(k - 4)}
\end{bmatrix}
$$

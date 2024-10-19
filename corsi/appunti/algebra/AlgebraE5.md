## Es 5.1
Si considerino le matrici
$$
A =
\begin{bmatrix}
1 & 1 \\
2 & -1
\end{bmatrix},
\qquad
B =
\begin{bmatrix}
2 & k+1 \\
4 & k-3
\end{bmatrix},
\qquad
C =
\begin{bmatrix}
0 & 1 \\
2k-2 & 2k-1
\end{bmatrix}
$$
### a)
Si stabilisca per quale valori di $k \in \mathbb{R}$ le matrici $A, B, C$ sono linearmente dipendenti.
$$
\begin{cases}
x + 2y = 0 \\
x + (k+1)y + z = 0 \\
2x + 4y + (2k-1)z = 0 \\
-x + (k-3)y + (2k-1)z = 0
\end{cases}
$$
$$
\begin{bmatrix}
1 & 2 & 0 & 0 \\
1 & k+1 & 1 & 0 \\
2 & 4 & 2k-1 & 0 \\
-1 & k-3 & 2k-1 & 0
\end{bmatrix}
\rightarrow_{E_{2,1}(-1)}
\begin{bmatrix}
1 & 2 & 0 & 0 \\
0 & k-1 & 1 & 0 \\
2 & 4 & 2k-1 & 0 \\
-1 & k-3 & 2k-1 & 0
\end{bmatrix}
\rightarrow_{E_{3,1}(-2)}
\begin{bmatrix}
1 & 2 & 0 & 0 \\
0 & k-1 & 1 & 0 \\
0 & 0 & 2k-1 & 0 \\
-1 & k-3 & 2k-1 & 0
\end{bmatrix}
\rightarrow_{E_{4,1}(1)}
\begin{bmatrix}
1 & 2 & 0 & 0 \\
0 & k-1 & 1 & 0 \\
0 & 0 & 2k-1 & 0 \\
0 & k-1 & 2k-1 & 0
\end{bmatrix}
\rightarrow_{E_{4,2}(-1)}
\begin{bmatrix}
1 & 2 & 0 & 0 \\
0 & k-1 & 1 & 0 \\
0 & 0 & 2k-1 & 0 \\
0 & 0 & 2k-2 & 0
\end{bmatrix}
$$
Se $k = \frac{1}{2}$ si annulla la terza equazione ma la nullità del sistema rimane $0$.
Se $k = 1$ la nullità del sistema diventa $2$. Rendendo così le matrici linearmente dipendenti.
Se invece $k \neq 1$:
$$
\begin{bmatrix}
1 & 2 & 0 & 0 \\
0 & k-1 & 1 & 0 \\
0 & 0 & 2k-1 & 0 \\
0 & 0 & 2k-2 & 0
\end{bmatrix}
\rightarrow
\begin{cases}
x = -2y \\
(k-1)y = -z \\
(2k-1)z = 0 \\
(2k-2)z = 0
\end{cases}
$$
Se $k = \frac{1}{2}$ basta escludere la terza equazione.
$$
\begin{cases}
x = -2y \\
(k-1)y = -z \\
(2k-1)z = 0 \\
(2k-2)z = 0
\end{cases}
\qquad
\begin{cases}
x = 0 \\
y = 0 \\
z = 0
\end{cases}
$$

### b)
Per il valore trovato in a) esprimere $B$ come combinazione lineare di $A,C$.
Se $k = 1$.
$$
A =
\begin{bmatrix}
1 & 1 \\
2 & -1
\end{bmatrix},
\qquad
B =
\begin{bmatrix}
2 & 2 \\
4 & -2
\end{bmatrix},
\qquad
C =
\begin{bmatrix}
0 & 1 \\
0 & 1
\end{bmatrix}
$$
Dunque:
$$
B = 
\begin{bmatrix}
2 & 2 \\
4 & -2
\end{bmatrix}
=
\lambda
\begin{bmatrix}
1 & 1 \\
2 & -1
\end{bmatrix}
+
\mu
\begin{bmatrix}
0 & 1 \\
0 & 1
\end{bmatrix}
= \lambda A + \mu C
$$
Da cui il sistema:
$$
\begin{cases}
\lambda = 2 \\
\lambda + \mu = 2 \\
2\lambda = 4 \\
-\lambda + \mu = 1
\end{cases}
\qquad
\begin{cases}
\lambda = 2 \\
\mu = 0 \\
\end{cases}
$$
Quindi $B = 2A+0C$.
## Es 5.2
Si considerino le matrici
$$
A =
\begin{bmatrix}
1 & 2 \\
-1 & 3
\end{bmatrix},
\qquad
B =
\begin{bmatrix}
2 & 1 \\
1 & 1
\end{bmatrix},
\qquad
C =
\begin{bmatrix}
-1 & 1 \\
2 & 3
\end{bmatrix},
\qquad
D =
\begin{bmatrix}
0 & 1 \\
-1 & 2
\end{bmatrix}
$$
Stabilire se $D$ è combinazione lineare $A, B, C$.
$$
D = 
\begin{bmatrix}
0 & 1 \\
-1 & 2
\end{bmatrix}
= \lambda
\begin{bmatrix}
1 & 2 \\
-1 & 3
\end{bmatrix}
+ \mu
\begin{bmatrix}
2 & 1 \\
1 & 1
\end{bmatrix}
+ \nu
\begin{bmatrix}
-1 & 1 \\
2 & 3
\end{bmatrix}
= \lambda A +\mu B+\nu C
$$
$$
\begin{cases}
\lambda + 2\mu -\nu = 0 \\
2\lambda + \mu + \nu = 1 \\
-\lambda + \mu + 2\nu = -1 \\
3\lambda+\mu +3\nu = 2
\end{cases}
\rightarrow
\begin{bmatrix}
1 & 2 & -1 & 0 \\
2 & 1 & 1 & 1 \\
-1 & 1 & 2 & -1 \\
3 & 1 & 3 & 2
\end{bmatrix}
\rightarrow_{E_{2,1}(-2)}
\begin{bmatrix}
1 & 2 & -1 & 0 \\
0 & -3 & 3 & 1 \\
-1 & 1 & 2 & -1 \\
3 & 1 & 3 & 2
\end{bmatrix}
\rightarrow_{E_{3,1}(1)}
\begin{bmatrix}
1 & 2 & -1 & 0 \\
0 & -3 & 3 & 1 \\
0 & 3 & 1 & -1 \\
3 & 1 & 3 & 2
\end{bmatrix}
\rightarrow_{E_{4,1}(-3)}
\begin{bmatrix}
1 & 2 & -1 & 0 \\
0 & -3 & 3 & 1 \\
0 & 3 & 1 & -1 \\
0 & -5 & 6 & 2
\end{bmatrix}
$$
$$
\rightarrow_{E_{3,2}(1)}
\begin{bmatrix}
1 & 2 & -1 & 0 \\
0 & -3 & 3 & 1 \\
0 & 0 & 4 & 0 \\
0 & -5 & 6 & 2
\end{bmatrix}
\rightarrow_{E_{4,2}\left( -\frac{5}{3} \right)}
\begin{bmatrix}
1 & 2 & -1 & 0 \\
0 & -3 & 3 & 1 \\
0 & 0 & 4 & 0 \\
0 & 0 & 1 & \frac{1}{3}
\end{bmatrix}
\rightarrow_{E_{4,3}\left( -\frac{1}{4} \right)}
\begin{bmatrix}
1 & 2 & -1 & 0 \\
0 & -3 & 3 & 1 \\
0 & 0 & 4 & 0 \\
0 & 0 & 0 & \frac{1}{3}
\end{bmatrix}
$$
Il sistema contiene un'equazione impossibile perciò $D$ non è combinazione lineare di $A, B, C$.

## Es 5.3
Siano dati i seguenti vettori di $\mathbb{R}^{3}$:
$$
v_{1} = (1,1,1), \qquad
v_{2} = (2,7,7), \qquad
v_{3} = (0, k^{2} + 2, 3), \qquad
v_{4} = (1, k+3,k^{2}+2)
$$
Stabilire se $v_{4}$ è combinazione lineare di $v_{1}, v_{2}, v_{3}$ al variare del parametro $k$.
$$
v_{4} = (1, k + 3, k^{2} + 2) = \lambda(1,1,1) + \mu(2,7,7) + \nu(0, k^{2}+2, 3)
$$
$$
\begin{cases}
\lambda + 2\mu + 0\nu = 1 \\
\lambda + 7\mu + (k^{2}+2)\nu = k +3\\
\lambda + 7\mu + 3\nu = k^{2}+2
\end{cases}
\rightarrow
\begin{bmatrix}
1 & 2 & 0 & 1 \\
1 & 7 & k^{2}+2 & k+3 \\
1 & 7 & 3 & k^{2}+2
\end{bmatrix}
\rightarrow_{E_{2,1}(-1)}
\begin{bmatrix}
1 & 2 & 0 & 1 \\
0 & 5 & k^{2}+2 & k+2 \\
1 & 7 & 3 & k^{2}+2
\end{bmatrix}
\rightarrow_{E_{3,1}(-1)}
\begin{bmatrix}
1 & 2 & 0 & 1 \\
0 & 5 & k^{2}+2 & k+2 \\
0 & 5 & 3 & k^{2}+1
\end{bmatrix}
\rightarrow_{E_{3,2}(-1)}
\begin{bmatrix}
1 & 2 & 0 & 1 \\
0 & 5 & k^{2}+2 & k+2 \\
0 & 0 & 1-k^{2} & k^{2}-k-1
\end{bmatrix}
$$

Se $k = \pm 1$ l'ultima equazione diventa impossibile e ciò significa che $v_{4}$ non è combinazione lineare di $v_{1},v_{2},v_{3}$.
Se $k \neq \pm 1$ il sistema ammette un'unica soluzione poiché $rg(A) = n$.

## Es 5.4
### a)
Mostrare che i vettori
$$
v_{1} = (0,1,1), \qquad v_{2}=(-1,k,0), \qquad v_{3} = (1,1,k)
$$
sono linearmente indipendenti per ogni valore di $k \in \mathbb{R}$.
$$
\begin{bmatrix}
0 & -1 & 1 & 0 \\
1 & k & 1 & 0 \\
1 & 0 & k & 0
\end{bmatrix}
\rightarrow_{S_{1,2}}
\begin{bmatrix}
1 & k & 1 & 0 \\
0 & -1 & 1 & 0 \\
1 & 0 & k & 0
\end{bmatrix}
\rightarrow_{E_{3,1}(-1)}
\begin{bmatrix}
1 & k & 1 & 0 \\
0 & -1 & 1 & 0 \\
0 & -k & k-1 & 0
\end{bmatrix}
\rightarrow_{D_{2}(-1)}
\begin{bmatrix}
1 & k & 1 & 0 \\
0 & 1 & -1 & 0 \\
0 & -k & k-1 & 0
\end{bmatrix}
\rightarrow_{E_{3,1}(1)}
\begin{bmatrix}
1 & k & 1 & 0 \\
0 & 1 & -1 & 0 \\
0 & 0 & k & 0
\end{bmatrix}
$$
Il sistema ha soluzione unica se e solo se $k \neq 0$.
Se $k \neq 0$:
$$
\begin{bmatrix}
1 & k & 1 & 0 \\
0 & 1 & -1 & 0 \\
0 & 0 & k & 0
\end{bmatrix}
\rightarrow_{D_{3}\left( \frac{1}{k} \right)}
\begin{bmatrix}
1 & k & 1 & 0 \\
0 & 1 & -1 & 0 \\
0 & 0 & 1 & 0
\end{bmatrix}
\rightarrow_{E_{2,3}(1)}
\begin{bmatrix}
1 & k & 1 & 0 \\
0 & 1 & 0 & 0 \\
0 & 0 & 1 & 0
\end{bmatrix}
\rightarrow_{E_{1,3}(-1)}
\begin{bmatrix}
1 & k & 0 & 0 \\
0 & 1 & 0 & 0 \\
0 & 0 & 1 & 0
\end{bmatrix}
\rightarrow_{E_{1,2}(-k)}
\begin{bmatrix}
1 & 0 & 0 & 0 \\
0 & 1 & 0 & 0 \\
0 & 0 & 1 & 0
\end{bmatrix}
$$
Dunque $x = 0, y = 0, z = 0$. I vettori sono linearmente indipendenti se $k \neq 0$.

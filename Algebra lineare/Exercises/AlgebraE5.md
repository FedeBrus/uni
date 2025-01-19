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
2 & 4 & 2k-2 & 0 \\
-1 & k-3 & 2k-1 & 0
\end{bmatrix}
\rightarrow_{E_{2,1}(-1)}
\begin{bmatrix}
1 & 2 & 0 & 0 \\
0 & k-1 & 1 & 0 \\
2 & 4 & 2k-2 & 0 \\
-1 & k-3 & 2k-1 & 0
\end{bmatrix}
\rightarrow_{E_{3,1}(-2)}
\begin{bmatrix}
1 & 2 & 0 & 0 \\
0 & k-1 & 1 & 0 \\
0 & 0 & 2k-2 & 0 \\
-1 & k-3 & 2k-1 & 0
\end{bmatrix}
\rightarrow_{E_{4,1}(1)}
\begin{bmatrix}
1 & 2 & 0 & 0 \\
0 & k-1 & 1 & 0 \\
0 & 0 & 2k-2 & 0 \\
0 & k-1 & 2k-1 & 0
\end{bmatrix}
\rightarrow_{E_{4,2}(-1)}
\begin{bmatrix}
1 & 2 & 0 & 0 \\
0 & k-1 & 1 & 0 \\
0 & 0 & 2k-2 & 0 \\
0 & 0 & 2k-2 & 0
\end{bmatrix}
\rightarrow_{E_{4,3}(-1)}
\begin{bmatrix}
1 & 2 & 0 & 0 \\
0 & k-1 & 1 & 0 \\
0 & 0 & 2k-2 & 0 \\
0 & 0 & 0 & 0
\end{bmatrix}
$$
Se $k = 1$ la nullità del sistema diventa $1$. Rendendo così le matrici linearmente dipendenti.
Se invece $k \neq 1$:
$$
\begin{bmatrix}
1 & 2 & 0 & 0 \\
0 & k-1 & 1 & 0 \\
0 & 0 & 2k-2 & 0 \\
0 & 0 & 0 & 0
\end{bmatrix}
\rightarrow
\begin{cases}
x = -2y \\
(k-1)y = -z \\
(2k-2)z = 0 \\
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
-\lambda + \mu = -2
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
\rightarrow_{E_{3,2}(k)}
\begin{bmatrix}
1 & k & 1 & 0 \\
0 & 1 & -1 & 0 \\
0 & 0 & -1 & 0
\end{bmatrix}
$$
$rg(A) = n, \forall k \in \mathbb{R}$:
$$
\begin{bmatrix}
1 & k & 1 & 0 \\
0 & 1 & -1 & 0 \\
0 & 0 & -1 & 0
\end{bmatrix}
\rightarrow_{D_{3}(-1)}
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
\rightarrow
\begin{cases}
x = 0 \\
y = 0 \\
z = 0
\end{cases}
$$
I vettori sono sempre linearmente indipendenti.

### b)
Esprimere il vettore $v = (2,1,2)$ come combinazione lineare di $v_{1},v_{2},v_{3}$.
$$
\begin{bmatrix}
0 & -1 & 1 & 2 \\
1 & k & 1 & 1 \\
1 & 0 & k & 2
\end{bmatrix}
\rightarrow_{S_{1,2}}
\begin{bmatrix}
1 & k & 1 & 1 \\
0 & -1 & 1 & 2 \\
1 & 0 & k & 2
\end{bmatrix}
\rightarrow_{E_{3,1}(-1)}
\begin{bmatrix}
1 & k & 1 & 1 \\
0 & -1 & 1 & 2 \\
0 & -k & k-1 & 1
\end{bmatrix}
\rightarrow_{E_{3,2}(-k)}
\begin{bmatrix}
1 & k & 1 & 1 \\
0 & -1 & 1 & 2 \\
0 & 0 & -1 & 1-2k
\end{bmatrix}
\rightarrow_{D_{3}(-1)}
\begin{bmatrix}
1 & k & 1 & 1 \\
0 & -1 & 1 & 2 \\
0 & 0 & 1 & 2k-1
\end{bmatrix}
$$
$$
\rightarrow_{D_{2}(-1)}
\begin{bmatrix}
1 & k & 1 & 1 \\
0 & 1 & -1 & -2 \\
0 & 0 & 1 & 2k-1
\end{bmatrix}
\rightarrow_{E_{2,3}(1)}
\begin{bmatrix}
1 & k & 1 & 1 \\
0 & 1 & 0 & 2k-3 \\
0 & 0 & 1 & 2k-1
\end{bmatrix}
\rightarrow_{E_{1,3}(-1)}
\begin{bmatrix}
1 & k & 0 & 2-2k \\
0 & 1 & 0 & 2k-3 \\
0 & 0 & 1 & 2k-1
\end{bmatrix}
\rightarrow_{E_{1,2}(-k)}
\begin{bmatrix}
1 & 0 & 0 & -2k^{2}+k+2 \\
0 & 1 & 0 & 2k-3 \\
0 & 0 & 1 & 2k-1
\end{bmatrix}
$$

## Es 5.5
Siano dati i polinomi:
$$
p_{1}(x) = 1+x, \qquad p_{2}(x) = 1 + 2x + x^{2}, \qquad p_{3}(x) = x - x^{2}
$$
Esprimere, se è possibile, $f(x) = x^{2} -x + 2$ come combinazione lineare di questi polinomi.
$$
\begin{bmatrix}
1 & 1 & 0 & 2 \\
1 & 2 & 1 & -1 \\
0 & 1 & -1 & 1
\end{bmatrix}
\rightarrow_{E_{2,1}(-1)}
\begin{bmatrix}
1 & 1 & 0 & 2 \\
0 & 1 & 1 & -3 \\
0 & 1 & -1 & 1
\end{bmatrix}
\rightarrow_{E_{3,2}(-1)}
\begin{bmatrix}
1 & 1 & 0 & 2 \\
0 & 1 & 1 & -3 \\
0 & 0 & -2 & 4
\end{bmatrix}
$$
Il sistema ha un'unica soluzione.
$$
\begin{bmatrix}
1 & 1 & 0 & 2 \\
0 & 1 & 1 & -3 \\
0 & 0 & -2 & 4
\end{bmatrix}
\rightarrow_{D_{3}\left( -\frac{1}{2} \right)}
\begin{bmatrix}
1 & 1 & 0 & 2 \\
0 & 1 & 1 & -3 \\
0 & 0 & 1 & -2
\end{bmatrix}
\rightarrow_{E_{2,3}(-1)}
\begin{bmatrix}
1 & 1 & 0 & 2 \\
0 & 1 & 0 & -1 \\
0 & 0 & 1 & -2
\end{bmatrix}
\rightarrow_{\frac{E_{1,2}}{-1}}
\begin{bmatrix}
1 & 0 & 0 & 3 \\
0 & 1 & 0 & -1 \\
0 & 0 & 1 & -2
\end{bmatrix}
\rightarrow
\begin{cases}
\lambda = 3 \\
\mu = -1 \\
\nu = -2
\end{cases}
$$
$$
f(x) = 3(1 + x) - (1 + 2x + x^{2}) - 2(x - x^{2})
$$
## Es 5.6
Si consideri il sottospazio $V = \langle v_{1}, v_{2}, v_{3} \rangle$ di $\mathbb{R}^{5}$ generato dai vettori 
$$
v_{1} = (-1,1,2,1,0), \qquad v_{2} = (0,2,1,1,0), \qquad v_{3} = (1,1,-1,0,0)
$$
### a)
Trovare una base di $V$.
$$
\begin{bmatrix}
-1 & 0 & 1 & 0 \\
1 & 2 & 1 & 0 \\
2 & 1 & -1 & 0 \\
1 & 1 & 0 & 0 \\
0 & 0 & 0 & 0 
\end{bmatrix}
\rightarrow_{D_{1}(-1)}
\begin{bmatrix}
1 & 0 & -1 & 0 \\
1 & 2 & 1 & 0 \\
2 & 1 & -1 & 0 \\
1 & 1 & 0 & 0 \\
0 & 0 & 0 & 0 
\end{bmatrix}
\rightarrow_{E_{2,1}(-1)}
\begin{bmatrix}
1 & 0 & -1 & 0 \\
0 & 2 & 2 & 0 \\
2 & 1 & -1 & 0 \\
1 & 1 & 0 & 0 \\
0 & 0 & 0 & 0 
\end{bmatrix}
\rightarrow_{E_{3,1}(-2)}
\begin{bmatrix}
1 & 0 & -1 & 0 \\
0 & 2 & 2 & 0 \\
0 & 1 & 1 & 0 \\
1 & 1 & 0 & 0 \\
0 & 0 & 0 & 0 
\end{bmatrix}
\rightarrow_{E_{4,1}(-1)}
\begin{bmatrix}
1 & 0 & -1 & 0 \\
0 & 2 & 2 & 0 \\
0 & 1 & 1 & 0 \\
0 & 1 & 1 & 0 \\
0 & 0 & 0 & 0 
\end{bmatrix}
$$
$$
\rightarrow_{E_{3,2}\left( -\frac{1}{2} \right)}
\begin{bmatrix}
1 & 0 & -1 & 0 \\
0 & 2 & 2 & 0 \\
0 & 0 & 0 & 0 \\
0 & 0 & 0 & 0 \\
0 & 0 & 0 & 0 
\end{bmatrix}
\rightarrow_{{D_{2}}\left( \frac{1}{2} \right)}
\begin{bmatrix}
1 & 0 & -1 & 0 \\
0 & 1 & 1 & 0 \\
0 & 0 & 0 & 0 \\
0 & 0 & 0 & 0 \\
0 & 0 & 0 & 0 
\end{bmatrix}
$$
Una base di $V$ è $\mathcal{B} = \{ v_{1},v_{2} \}$.

### b)
Determinare le coordinate del vettore $v = (-2, 6, 6, 4, 0)$.
$$
\begin{bmatrix}
-1 & 0 & -2 \\
1 & 2 & 6 \\
2 & 1 & 6 \\
1 & 1 & 4 \\
0 & 0 & 0
\end{bmatrix}
\rightarrow_{D_{1}(-1)}
\begin{bmatrix}
1 & 0 & 2 \\
1 & 2 & 6 \\
2 & 1 & 6 \\
1 & 1 & 4 \\
0 & 0 & 0
\end{bmatrix}
\rightarrow_{E_{2,1}(-1)}
\begin{bmatrix}
1 & 0 & 2 \\
0 & 2 & 4 \\
2 & 1 & 6 \\
1 & 1 & 4 \\
0 & 0 & 0
\end{bmatrix}
\rightarrow_{E_{3,1}(-2)}
\begin{bmatrix}
1 & 0 & 2 \\
0 & 2 & 4 \\
0 & 1 & 2 \\
1 & 1 & 4 \\
0 & 0 & 0
\end{bmatrix}
\rightarrow_{E_{4,1}(-1)}
\begin{bmatrix}
1 & 0 & 2 \\
0 & 2 & 4 \\
0 & 1 & 2 \\
0 & 1 & 2 \\
0 & 0 & 0
\end{bmatrix}
\rightarrow_{E_{4,3}(-1)}
\begin{bmatrix}
1 & 0 & 2 \\
0 & 2 & 4 \\
0 & 1 & 2 \\
0 & 0 & 0 \\
0 & 0 & 0
\end{bmatrix}
\rightarrow_{E_{3,2}\left( -\frac{1}{2} \right)}
\begin{bmatrix}
1 & 0 & 2 \\
0 & 2 & 4 \\
0 & 0 & 0 \\
0 & 0 & 0 \\
0 & 0 & 0
\end{bmatrix}
\rightarrow_{D_{2}\left( \frac{1}{2} \right)}
\begin{bmatrix}
1 & 0 & 2 \\
0 & 1 & 2 \\
0 & 0 & 0 \\
0 & 0 & 0 \\
0 & 0 & 0
\end{bmatrix}
$$
Quindi $v = 2v_{1} + 2v_{2}$. Le coordinate sono $(2,2)_{B}$.

## Es 5.7
Si considerino i vettori di $\mathbb{R}^{4}$
$$
v_{1} = (1, 2, -1, 3), \qquad v_{2} = (-2, -4, 2, -6), \qquad v_{3} = (3, 6, k - 6, 3k)
$$
### a)
Si stabilisca per quali valori di $k$ il vettore $v_{3}$ appartiene al sottospazio $W = \langle v_{1} ,v_{2} \rangle$.
Se $v_{3}$ appartiene a $W$, vuol dire che può essere espresso tramite una combinazione lineare di $v_{1}$ e $v_{2}$.
$$
\begin{bmatrix}
1 & -2 & 3 \\
2 & -4 & 6 \\
-1 & 2 & k-6 \\
3 & -6 & 3k
\end{bmatrix}
\rightarrow_{E_{2,1}(-2)}
\begin{bmatrix}
1 & -2 & 3 \\
0 & 0 & 0 \\
-1 & 2 & k-6 \\
3 & -6 & 3k
\end{bmatrix}
\rightarrow_{E_{3,1}(1)}
\begin{bmatrix}
1 & -2 & 3 \\
0 & 0 & 0 \\
0 & 0 & k-3 \\
3 & -6 & 3k
\end{bmatrix}
\rightarrow_{S_{2,4}}
\begin{bmatrix}
1 & -2 & 3 \\
3 & -6 & 3k \\
0 & 0 & k-3 \\
0 & 0 & 0
\end{bmatrix}
\rightarrow_{E_{2,1}(-3)}
\begin{bmatrix}
1 & -2 & 3 \\
0 & 0 & 3k-9 \\
0 & 0 & k-3 \\
0 & 0 & 0
\end{bmatrix}
\rightarrow_{E_{3,2}\left( -\frac{1}{3} \right)}
\begin{bmatrix}
1 & -2 & 3 \\
0 & 0 & 3k-9 \\
0 & 0 & 0 \\
0 & 0 & 0
\end{bmatrix}
$$
Se $k \neq 3$ il sistema ha un'equazione impossibile dunque $v_{3}$ non è combinazione lineare.
Se $k = 3$:
$$
\begin{bmatrix}
1 & -2 & 3 \\
0 & 0 & 0 \\
0 & 0 & 0 \\
0 & 0 & 0
\end{bmatrix}
\rightarrow
\begin{cases}
\lambda - 2\mu = 3
\end{cases}
\qquad
\begin{cases}
\lambda = 3 + 2t \\
\mu = t
\end{cases}
$$
Dunque $v_{3} = (3+2t)v_{1} + t(v_{2}), \forall t \in \mathbb{R}$.

### b)
Si trovi, al variare di $k$, una base di $W$ e una base del sottospazio $\langle v_{1},v_{2},v_{3} \rangle$
$$
\begin{bmatrix}
1 & -2 & 0 \\
2 & -4 & 0 \\
-1 & 2 & 0 \\
3 & -6 & 0
\end{bmatrix}
\rightarrow_{E_{3,2}\left( \frac{1}{2} \right)}
\begin{bmatrix}
1 & -2 & 0 \\
2 & -4 & 0 \\
0 & 0 & 0 \\
3 & -6 & 0
\end{bmatrix}
\rightarrow_{E_{4,2}\left(-\frac{3}{2}\right)}
\begin{bmatrix}
1 & -2 & 0 \\
2 & -4 & 0 \\
0 & 0 & 0 \\
0 & 0 & 0
\end{bmatrix}
\rightarrow_{E_{2,1}(-2)}
\begin{bmatrix}
1 & -2 & 0 \\
0 & 0 & 0 \\
0 & 0 & 0 \\
0 & 0 & 0
\end{bmatrix}
$$
Una base di $W$ è $\mathcal{B} = \{ v_{1} \}$.
$$
\begin{bmatrix}
1 & -2 & 3 & 0 \\
2 & -4 & 6 & 0 \\
-1 & 2 & k-6 & 0 \\
3 & -6 & 3k & 0
\end{bmatrix}
\rightarrow_{E_{2,1}(-2)}
\begin{bmatrix}
1 & -2 & 3 & 0 \\
0 & 0 & 0 & 0 \\
-1 & 2 & k-6 & 0 \\
3 & -6 & 3k & 0
\end{bmatrix}
\rightarrow_{S_{2,4}}
\begin{bmatrix}
1 & -2 & 3 & 0 \\
3 & -6 & 3k & 0 \\
-1 & 2 & k-6 & 0 \\
0 & 0 & 0 & 0
\end{bmatrix}
\rightarrow_{E_{2,1}(-3)}
\begin{bmatrix}
1 & -2 & 3 & 0 \\
0 & 0 & 3k-9 & 0 \\
-1 & 2 & k-6 & 0 \\
0 & 0 & 0 & 0
\end{bmatrix}
\rightarrow_{E_{3,1}(1)}
\begin{bmatrix}
1 & -2 & 3 & 0 \\
0 & 0 & 3k-9 & 0 \\
0 & 0 & k-3 & 0 \\
0 & 0 & 0 & 0
\end{bmatrix}
$$
$$
\rightarrow_{S_{2,3}}
\begin{bmatrix}
1 & -2 & 3 & 0 \\
0 & 0 & k-3 & 0 \\
0 & 0 & 3k-9 & 0 \\
0 & 0 & 0 & 0
\end{bmatrix}
\rightarrow_{E_{3,2}(-3)}
\begin{bmatrix}
1 & -2 & 3 & 0 \\
0 & 0 & k-3 & 0 \\
0 & 0 & 0 & 0 \\
0 & 0 & 0 & 0
\end{bmatrix}
$$
Se $k = 3$ la seconda equazione si annulla e una possibile base è $\mathcal{B} = \{ v_{1} \}$
Se $k \neq 3$ la seconda equazione non si annulla e:
$$
\begin{bmatrix}
1 & -2 & 3 & 0 \\
0 & 0 & k-3 & 0 \\
0 & 0 & 0 & 0 \\
0 & 0 & 0 & 0
\end{bmatrix}
\rightarrow_{{D_{2}}\left( \frac{1}{k-3}\right)}
\begin{bmatrix}
1 & -2 & 3 & 0 \\
0 & 0 & 1 & 0 \\
0 & 0 & 0 & 0 \\
0 & 0 & 0 & 0
\end{bmatrix}
\rightarrow_{E_{1,2}(-3)}
\begin{bmatrix}
1 & -2 & 0 & 0 \\
0 & 0 & 1 & 0 \\
0 & 0 & 0 & 0 \\
0 & 0 & 0 & 0
\end{bmatrix}
$$
Una possibile base è $\mathcal{B} = \{ v_{1}, v_{3} \}$

## Es 5.8
Sia $V$ lo spazio vettoriale generato dai vettori $v_{1} = (1, -2, 4, 0)$, $v_{2} = (2, 3, -1, 1)$ e $v_{3} = (0, -1, 3, 0)$.

### a)
Determinare la dimensione dello spazio vettoriale $V$.

$$
\begin{bmatrix}
1 & 2 & 0 & 0 \\
-2 & 3 & -1 & 0 \\
4 & -1 & 3 & 0 \\
0 & 1 & 0 & 0
\end{bmatrix}
\rightarrow_{E_{2,1}(2)}
\begin{bmatrix}
1 & 2 & 0 & 0 \\
0 & 7 & -1 & 0 \\
4 & -1 & 3 & 0 \\
0 & 1 & 0 & 0
\end{bmatrix}
\rightarrow_{E_{3,1}(-4)}
\begin{bmatrix}
1 & 2 & 0 & 0 \\
0 & 7 & -1 & 0 \\
0 & -9 & 3 & 0 \\
0 & 1 & 0 & 0
\end{bmatrix}
\rightarrow_{S_{2,4}}
\begin{bmatrix}
1 & 2 & 0 & 0 \\
0 & 1 & 0 & 0 \\
0 & 7 & -1 & 0 \\
0 & -9 & 3 & 0 
\end{bmatrix}
\rightarrow_{E_{3,2}(-7)}
\begin{bmatrix}
1 & 2 & 0 & 0 \\
0 & 1 & 0 & 0 \\
0 & 0 & -1 & 0 \\
0 & -9 & 3 & 0 
\end{bmatrix}
\rightarrow_{E_{4,2}(9)}
\begin{bmatrix}
1 & 2 & 0 & 0 \\
0 & 1 & 0 & 0 \\
0 & 0 & -1 & 0 \\
0 & 0 & 3 & 0 
\end{bmatrix}
$$
$$
\begin{cases}
\lambda + 2\mu = 0 \\
\mu = 0 \\
-\nu = 0 \\
3\nu = 0
\end{cases}
\qquad
\begin{cases}
\lambda = 0 \\
\mu = 0 \\
\nu = 0
\end{cases}
$$
Dunque una base di $V$ è $\mathcal{B} = \{ v_{1},v_{2},v_{3} \}$, perciò $dim(V) = 3$.

### b)
$v_{4} = (3, 1, 3, 1)$ appartiene a $V$. In caso positivo esprimere $v_{4}$ come combinazione lineare di $v_{1}, v_{2}, v_{3}$.
$$
\begin{cases}
\lambda + 2\mu = 3 \\
-2\lambda + 3\mu - \nu = 1 \\
4\lambda - \mu + 3\nu = 3 \\
\mu = 1
\end{cases}
\qquad
\begin{cases}
\lambda = 1 \\
-2\lambda - \nu = -2 \\
4\lambda + 3\nu = 4 \\
\mu = 1
\end{cases}
\qquad
\begin{cases}
\lambda = 1 \\
\nu = 0 \\
\mu = 1
\end{cases}
$$
$$
v_{4} = v_{1} + v_{2}
$$
### c)
Determinare la dimensione dello spazio vettoriale $W = \langle v_{1}, v_{2}, v_{3}, v_{4} \rangle$.
$$
\begin{bmatrix}
1 & 2 & 0 & 3 & 0 \\
-2 & 3 & -1 & 1 & 0 \\
4 & -1 & 3 & 3 & 0 \\
0 & 1 & 0 & 1 & 0
\end{bmatrix}
\rightarrow_{E_{2,1}(2)}
\begin{bmatrix}
1 & 2 & 0 & 3 & 0 \\
0 & 7 & -1 & 7 & 0 \\
4 & -1 & 3 & 3 & 0 \\
0 & 1 & 0 & 1 & 0
\end{bmatrix}
\rightarrow_{E_{3,1}(-4)}
\begin{bmatrix}
1 & 2 & 0 & 3 & 0 \\
0 & 7 & -1 & 7 & 0 \\
0 & -9 & 3 & -9 & 0 \\
0 & 1 & 0 & 1 & 0
\end{bmatrix}
\rightarrow_{D_{3}\left( \frac{1}{3} \right)}
\begin{bmatrix}
1 & 2 & 0 & 3 & 0 \\
0 & 7 & -1 & 7 & 0 \\
0 & -3 & 1 & -3 & 0 \\
0 & 1 & 0 & 1 & 0
\end{bmatrix}
\rightarrow_{E_{3,2}\left( \frac{3}{7} \right)}
\begin{bmatrix}
1 & 2 & 0 & 3 & 0 \\
0 & 7 & -1 & 7 & 0 \\
0 & 0 & \frac{4}{7} & 0 & 0 \\
0 & 1 & 0 & 1 & 0
\end{bmatrix}
\rightarrow_{E_{4,2}\left( -\frac{1}{7} \right)}
\begin{bmatrix}
1 & 2 & 0 & 3 & 0 \\
0 & 7 & -1 & 7 & 0 \\
0 & 0 & \frac{4}{7} & 0 & 0 \\
0 & 0 & \frac{1}{7} & 0 & 0
\end{bmatrix}
$$
$$
\rightarrow_{D_{\frac{1}{4}}}
\begin{bmatrix}
1 & 2 & 0 & 3 & 0 \\
0 & 7 & -1 & 7 & 0 \\
0 & 0 & \frac{1}{7} & 0 & 0 \\
0 & 0 & \frac{1}{7} & 0 & 0
\end{bmatrix}
\rightarrow_{E_{4,3}(-1)}
\begin{bmatrix}
1 & 2 & 0 & 3 & 0 \\
0 & 7 & -1 & 7 & 0 \\
0 & 0 & \frac{1}{7} & 0 & 0 \\
0 & 0 & 0 & 0 & 0
\end{bmatrix}
\rightarrow_{D_{2}\left( \frac{1}{7} \right)}
\begin{bmatrix}
1 & 2 & 0 & 3 & 0 \\
0 & 1 & -\frac{1}{7} & 1 & 0 \\
0 & 0 & \frac{1}{7} & 0 & 0 \\
0 & 0 & 0 & 0 & 0
\end{bmatrix}
\rightarrow_{E_{2,3}(1)}
\begin{bmatrix}
1 & 2 & 0 & 3 & 0 \\
0 & 1 & 0 & 1 & 0 \\
0 & 0 & \frac{1}{7} & 0 & 0 \\
0 & 0 & 0 & 0 & 0
\end{bmatrix}
\rightarrow_{E_{1,2}(-2)}
\begin{bmatrix}
1 & 0 & 0 & 1 & 0 \\
0 & 1 & 0 & 1 & 0 \\
0 & 0 & \frac{1}{7} & 0 & 0 \\
0 & 0 & 0 & 0 & 0
\end{bmatrix}
\rightarrow_{D_{3}(7)}
\begin{bmatrix}
1 & 0 & 0 & 1 & 0 \\
0 & 1 & 0 & 1 & 0 \\
0 & 0 & 1 & 0 & 0 \\
0 & 0 & 0 & 0 & 0
\end{bmatrix}
$$
$rg(A) < n$, dunque il generatore non è una base.
Una base di $W$ è $\mathcal{B} = \{ v_{1},v_{2},v_{3} \}$, $dim(W) = 3$.

## Es 5.9
Si consideri il sottoinsieme $S$ di $\mathbb{R}^{4}$ costituito dai vettori $v$ della forma:
$$
v = (a_{1}-a_{2}+2a_{3}, a_{1}, 2a_{1} - a_{2}, a_{1}+3a_{2}+a_{4})
$$
dove $a_{1},a_{2},a_{3},a_{4}$ sono parametri reali.

### a)
$S$ è un sottospazio vettoriale di $\mathbb{R}^{4}$?
$$
v = a_{1}(1,1,1,0) + a_{2}(-1,0,-1,3) + a_{3}(2, 0, 0, 0) + a_{4}(0,0,0,1)
$$
$$
v_{1} = (1,1,1,0), \qquad v_{2} = (-1,0,-1,3), \qquad v_{3} = (2,0,0,0), \qquad v_{4} = (0,0,0,1)
$$
$$
S = \langle v_{1}, v_{2}, v_{3}, v_{4} \rangle
$$
S è per definizione uno spazio vettoriale.

### b)
In caso di risposta affermativa ad a), trovare una base di $S$.
$$
\begin{bmatrix}
1 & -1 & 2 & 0 & 0 \\
1 & 0 & 0 & 0 & 0 \\
1 & -1 & 0 & 0 & 0 \\
0 & 3 & 0 & 1 & 0
\end{bmatrix}
\rightarrow_{S_{1,2}}
\begin{bmatrix}
1 & 0 & 0 & 0 & 0 \\
1 & -1 & 2 & 0 & 0 \\
1 & -1 & 0 & 0 & 0 \\
0 & 3 & 0 & 1 & 0
\end{bmatrix}
\rightarrow_{E_{2,1}(-1)}
\begin{bmatrix}
1 & 0 & 0 & 0 & 0 \\
0 & -1 & 2 & 0 & 0 \\
1 & -1 & 0 & 0 & 0 \\
0 & 3 & 0 & 1 & 0
\end{bmatrix}
\rightarrow_{E_{3,1}(-1)}
\begin{bmatrix}
1 & 0 & 0 & 0 & 0 \\
0 & -1 & 2 & 0 & 0 \\
0 & -1 & 0 & 0 & 0 \\
0 & 3 & 0 & 1 & 0
\end{bmatrix}
\rightarrow_{S_{2,3}}
\begin{bmatrix}
1 & 0 & 0 & 0 & 0 \\
0 & -1 & 0 & 0 & 0 \\
0 & -1 & 2 & 0 & 0 \\
0 & 3 & 0 & 1 & 0
\end{bmatrix}
$$
$$
\rightarrow_{E_{3,2}(-1)}
\begin{bmatrix}
1 & 0 & 0 & 0 & 0 \\
0 & -1 & 0 & 0 & 0 \\
0 & 0 & 2 & 0 & 0 \\
0 & 3 & 0 & 1 & 0
\end{bmatrix}
\rightarrow_{E_{4,2}(3)}
\begin{bmatrix}
1 & 0 & 0 & 0 & 0 \\
0 & -1 & 0 & 0 & 0 \\
0 & 0 & 2 & 0 & 0 \\
0 & 0 & 0 & 1 & 0
\end{bmatrix}
\rightarrow_{D_{2}(-1)}
\begin{bmatrix}
1 & 0 & 0 & 0 & 0 \\
0 & 1 & 0 & 0 & 0 \\
0 & 0 & 2 & 0 & 0 \\
0 & 0 & 0 & 1 & 0
\end{bmatrix}
\rightarrow_{D_{3}\left( \frac{1}{2} \right)}
\begin{bmatrix}
1 & 0 & 0 & 0 & 0 \\
0 & 1 & 0 & 0 & 0 \\
0 & 0 & 1 & 0 & 0 \\
0 & 0 & 0 & 1 & 0
\end{bmatrix}
$$
I vettori generatori di $S$ sono linearmente indipendenti. Quindi la base $\mathcal{B} = \{ v_{1},v_{2},v_{3},v_{4} \}$

## Es 5.10
Si consideri il sottoinsieme $S$ si $\mathbb{R}^{4}$ costituito dai vettori $v$ della forma
$$
v = (a_{1}-a_{2}+2a_{3}+a_{4},a_{1},2a_{1}-a_{2}, a_{1} + 3a_{2})
$$
### a)
$S$ è sottospazio vettoriale di $\mathbb{R}^{4}$.a
Notiamo che:
$$
v = a_{1}(1,1,2,1) + a_{2}(-1,0,-1,3) + a_{3}(2,0,0,0) + a_{4}(1,0,0,0)
$$
$$
v_{1} = (1,1,2,1), \qquad v_{2} = (-1,0,-1,3), \qquad v_{3} = (2,0,0,0), \qquad v_{4} = (1,0,0,0)
$$
Quindi $S$ è un sottospazio vettoriale generato da $\langle v_{1},v_{2},v_{3},v_{4} \rangle$.

### b)
In caso di risposta affermativo ad a), trovare una base di $S$.
$$
\begin{bmatrix}
1 & -1 & 2 & 1 & 0 \\
1 & 0 & 0 & 0 & 0 \\
2 & -1 & 0 & 0 & 0 \\
1 & 3 & 0 & 0 & 0
\end{bmatrix}
\rightarrow_{S_{1,2}}
\begin{bmatrix}
1 & 0 & 0 & 0 & 0 \\
1 & -1 & 2 & 1 & 0 \\
2 & -1 & 0 & 0 & 0 \\
1 & 3 & 0 & 0 & 0
\end{bmatrix}
\rightarrow_{E_{2,1}(-1)}
\begin{bmatrix}
1 & 0 & 0 & 0 & 0 \\
0 & -1 & 2 & 1 & 0 \\
2 & -1 & 0 & 0 & 0 \\
1 & 3 & 0 & 0 & 0
\end{bmatrix}
\rightarrow_{E_{3,1}(-2)}
\begin{bmatrix}
1 & 0 & 0 & 0 & 0 \\
0 & -1 & 2 & 1 & 0 \\
0 & -1 & 0 & 0 & 0 \\
1 & 3 & 0 & 0 & 0
\end{bmatrix}
\rightarrow_{E_{4,1}(-1)}
\begin{bmatrix}
1 & 0 & 0 & 0 & 0 \\
0 & -1 & 2 & 1 & 0 \\
0 & -1 & 0 & 0 & 0 \\
0 & 3 & 0 & 0 & 0
\end{bmatrix}
\rightarrow_{S_{2,3}}
\begin{bmatrix}
1 & 0 & 0 & 0 & 0 \\
0 & -1 & 0 & 0 & 0 \\
0 & -1 & 2 & 1 & 0 \\
0 & 3 & 0 & 0 & 0
\end{bmatrix}
$$
$$
\rightarrow_{E_{4,2}(3)}
\begin{bmatrix}
1 & 0 & 0 & 0 & 0 \\
0 & -1 & 0 & 0 & 0 \\
0 & -1 & 2 & 1 & 0 \\
0 & 0 & 0 & 0 & 0
\end{bmatrix}
\rightarrow_{E_{3,2}(-1)}
\begin{bmatrix}
1 & 0 & 0 & 0 & 0 \\
0 & -1 & 0 & 0 & 0 \\
0 & 0 & 2 & 1 & 0 \\
0 & 0 & 0 & 0 & 0
\end{bmatrix}
\rightarrow_{D_{3}\left( \frac{1}{2} \right)}
\begin{bmatrix}
1 & 0 & 0 & 0 & 0 \\
0 & -1 & 0 & 0 & 0 \\
0 & 0 & 1 & \frac{1}{2} & 0 \\
0 & 0 & 0 & 0 & 0
\end{bmatrix}
\rightarrow_{D_{2}(-1)}
\begin{bmatrix}
1 & 0 & 0 & 0 & 0 \\
0 & 1 & 0 & 0 & 0 \\
0 & 0 & 1 & \frac{1}{2} & 0 \\
0 & 0 & 0 & 0 & 0
\end{bmatrix}
$$
Una base di $S$ è $\mathcal{B} = \{ v_{1},v_{2},v_{3} \}$.

## 5.11
Sia
$$
S = \{ (x,y,z) \in \mathbb{R}^{3} | x + y + (k+1)z = k, 2x + y + z = 0 \}
$$
### a)
Stabilire per quali valori di $k$ l'insieme $S$ è un sottospazio di $\mathbb{R}^{3}$.
$$
S = Sol \bigg(
\begin{cases}
x + y + (k+1)z = k \\
2x + y + z = 0
\end{cases}
\bigg)
$$
L'insieme $S$ si presenta dunque come l'insieme di soluzioni di questo sistema lineare, che sappiamo essere uno spazio vettoriale se e solo se è omogeneo, perciò $k = 0$.

### b)
Per il valore di $k$ trovato al punto precedente determinare una base di $S$.
Siccome $S$ si presenta come le soluzioni di un sistema lineare, sappiamo che è generato da una soluzione di quest'ultimo.
$$
\begin{bmatrix}
1 & 1 & 1 & 0 \\
2 & 1 & 1 & 0x 
\end{bmatrix}
\rightarrow_{E_{2,1}(-2)}
\begin{bmatrix}
1 & 1 & 1 & 0 \\
0 & -1 & -1 & 0
\end{bmatrix}
\rightarrow_{D_{2}(-1)}
\begin{bmatrix}
1 & 1 & 1 & 0 \\
0 & 1 & 1 & 0
\end{bmatrix}
\rightarrow_{E_{1,2}(-1)}
\begin{bmatrix}
1 & 0 & 0 & 0 \\
0 & 1 & 1 & 0
\end{bmatrix}
\rightarrow
\begin{cases}
x = 0 \\
y = -t \\
z = t
\end{cases}
$$
Il sistema ha infinite soluzioni, prendiamone una con $t = 1$, ovvero $v = (0, -1, 1)$.
Dunque $S$ è generato da $\langle v \rangle$. Ora bisogna dimostrare l'unicità (in verità non serve perché è una base in automatico nel caso di un sistema lineare omogeneo):
$$
\begin{bmatrix}
0 & 0 \\
-1 & 0 \\
1 & 0
\end{bmatrix}
\rightarrow S_{1,3}
\begin{bmatrix}
1 & 0 \\
0 & 0 \\
-1 & 0
\end{bmatrix}
\rightarrow_{E_{3,1}(1)}
\begin{bmatrix}
1 & 0 \\
0 & 0 \\
0 & 0
\end{bmatrix}
$$
Il sistema ha un'unica soluzione. Quindi $0 = \lambda v$ con $\lambda = 0$. Quindi una base di $S$ è $\mathcal{B} = \{ v \}$

## Es 5.12
Sia
$$
S = \{ (x, y, z) \in \mathbb{R}^{3} | x - 2y + kz = k - 1, x - 2y + z = 0, -2x + 4ky -2z = 0 \}
$$
### a)
Stabilire per quali valori di $k$ l'insieme $S$ è sottospazio vettoriale di $\mathbb{R}^{3}$.
$$
\begin{cases}
x - 2y + kz = k - 1 \\
x - 2y + z = 0 \\
-2x + 4ky - 2z = 0
\end{cases}
$$
Siccome $S$ rappresenta un sistema lineare, sappiamo che quest'ultimo è un sottospazio se e solo se è omogeneo. Dunque $k = 1$.

### b)
Per il valore di $k$ trovato nel punto precedente determinare una base di $S$.

Il sistema diventa:
$$
\begin{bmatrix}
1 & -2 & 1 & 0 \\
1 & -2 & 1 & 0 \\
-2 & 4 & -2 & 0
\end{bmatrix}
\rightarrow_{E_{2,1}(-1)}
\begin{bmatrix}
1 & -2 & 1 & 0 \\
0 & 0 & 0 & 0 \\
-2 & 4 & -2 & 0
\end{bmatrix}
\rightarrow_{E_{3,1}(2)}
\begin{bmatrix}
1 & -2 & 1 & 0 \\
0 & 0 & 0 & 0 \\
0 & 0 & 0 & 0
\end{bmatrix}
\rightarrow
\begin{cases}
x = 2t + s \\
y = t \\
z = s
\end{cases}
$$
Il sistema ha infinite soluzioni dipendenti da due parametri. Prendiamo le soluzioni di base:
Se $t = 1$, $s = 0$, $v_{1} = (2, 1, 0)$.
Se $t = 0, s = 1$, $v_{2} = (1, 0, 1)$.

$S = \langle v_{1}, v_{2} \rangle$. Verifichiamo l'indipendenza lineare:
$$
\begin{bmatrix}
2 & 1 & 0 \\
1 & 0 & 0 \\
0 & 1 & 0
\end{bmatrix}
\rightarrow_{E_{2,1}(-2)}
\begin{bmatrix}
2 & 1 & 0 \\
0 & -2 & 0 \\
0 & 1 & 0
\end{bmatrix}
\rightarrow_{E_{3,2}\left( \frac{1}{2} \right)}
\begin{bmatrix}
2 & 1 & 0 \\
0 & -2 & 0 \\
0 & 0 & 0
\end{bmatrix}
\rightarrow_{D_{2}\left( -\frac{1}{2} \right)}
\begin{bmatrix}
2 & 1 & 0 \\
0 & 1 & 0 \\
0 & 0 & 0
\end{bmatrix}
\rightarrow_{E_{1,2}(-1)}
\begin{bmatrix}
2 & 0 & 0 \\
0 & 1 & 0 \\
0 & 0 & 0
\end{bmatrix}
\rightarrow_{D_{1}\left( \frac{1}{2} \right)}
\begin{bmatrix}
1 & 0 & 0 \\
0 & 1 & 0 \\
0 & 0 & 0
\end{bmatrix}
$$
Dunque $0 = \lambda v_{1} + \mu v_{2}$ con $\lambda, \mu = 0$.
Perciò una base di $S$ è $\mathcal{B} = \{ v_{1}, v_{2} \}$.

## Es 5.13
Sia $A$ la matrice reale:
$$
A =
\begin{bmatrix}
k & -k & 0 & -1 \\
1 & -2 & 1 & 0 \\
0 & 1 & k & 1
\end{bmatrix}
$$
### a)
Determinare il rango di $A$ al variare di $k$.
$$
\rightarrow_{S_{1,2}}
\begin{bmatrix}
1 & -2 & 1 & 0 \\
k & -k & 0 & -1 \\
0 & 1 & k & 1
\end{bmatrix}
\rightarrow_{E_{2,1}(-k)}
\begin{bmatrix}
1 & -2 & 1 & 0 \\
0 & k & -k & -1 \\
0 & 1 & k & 1
\end{bmatrix}
\rightarrow_{S_{2,3}}
\begin{bmatrix}
1 & -2 & 1 & 0 \\
0 & 1 & k & 1 \\
0 & k & -k & -1
\end{bmatrix}
\rightarrow_{E_{3,2}(-k)}
\begin{bmatrix}
1 & -2 & 1 & 0 \\
0 & 1 & k & 1 \\
0 & 0 & -k(1 + k) & -1-k
\end{bmatrix}
$$
Se $k = 0$
$$
\begin{bmatrix}
1 & -2 & 1 & 0 \\
0 & 1 & 0 & 1 \\
0 & 0 & 0 & -1
\end{bmatrix}
$$
$rg(A) = 3$.

Se $k = -1$
$$
\begin{bmatrix}
1 & -2 & 1 & 0 \\
0 & 1 & -1 & 1 \\
0 & 0 & 0 & 0
\end{bmatrix}
$$
$rg(A) = 2$.

Se $k \neq -1, 0$
$$
\begin{bmatrix}
1 & -2 & 1 & 0 \\
0 & 1 & k & 1 \\
0 & 0 & -k(1 + k) & -1-k
\end{bmatrix}
$$
$rg(A) = 3$.

### b)
Calcolare la base del nucleo di $A$, cioè dello spazio delle soluzioni del sistema lineare omogeneo $Ax = 0$, con $k = 1$.

Se $k = 1$
$$
\begin{bmatrix}
1 & -2 & 1 & 0 & 0 \\
0 & 1 & 1 & 1 & 0 \\
0 & 0 & -2 & -2 & 0
\end{bmatrix}
\rightarrow_{D_{3}\left( -\frac{1}{2} \right)}
\begin{bmatrix}
1 & -2 & 1 & 0 & 0 \\
0 & 1 & 1 & 1 & 0 \\
0 & 0 & 1 & 1 & 0
\end{bmatrix}
\rightarrow_{E_{2,3}(-1)}
\begin{bmatrix}
1 & -2 & 1 & 0 & 0 \\
0 & 1 & 0 & 0 & 0 \\
0 & 0 & 1 & 1 & 0
\end{bmatrix}
\rightarrow_{E_{3,1}(-1)}
\begin{bmatrix}
1 & -2 & 0 & -1 & 0 \\
0 & 1 & 0 & 0 & 0 \\
0 & 0 & 1 & 1 & 0
\end{bmatrix}
\rightarrow_{E_{1,2}(2)}
\begin{bmatrix}
1 & 0 & 0 & -1 & 0 \\
0 & 1 & 0 & 0 & 0 \\
0 & 0 & 1 & 1 & 0
\end{bmatrix}
\rightarrow
\begin{cases}
x = t \\
y = 0 \\
z = -t \\
w = t
\end{cases}
$$
La soluzione di base si ottiene ponendo $t = 1$: $v = (1, 0, -1, 1)$
Dunque una base del nucleo di $A$ è $\mathcal{B} = \{ v \}$.

## Es 5.14
### a)
Sia
$$
V = \langle (1,2,1), (-1, 3, 0), (3, 1, 2) \rangle
$$
Si determini la dimensione e base di $V$.

Bisogna vedere se i vettori generatori sono linearmente indipendenti:
$$
\begin{bmatrix}
1 & -1 & 3 & 0 \\
2 & 3 & 1 & 0 \\
1 & 0 & 2 & 0
\end{bmatrix}
\rightarrow_{E_{2,1}(-2)}
\begin{bmatrix}
1 & -1 & 3 & 0 \\
0 & 5 & -5 & 0 \\
1 & 0 & 2 & 0
\end{bmatrix}
\rightarrow_{E_{3,1}(-1)}
\begin{bmatrix}
1 & -1 & 3 & 0 \\
0 & 5 & -5 & 0 \\
0 & 1 & -1 & 0
\end{bmatrix}
\rightarrow_{S_{2,3}}
\begin{bmatrix}
1 & -1 & 3 & 0 \\
0 & 1 & -1 & 0 \\
0 & 5 & -5 & 0
\end{bmatrix}
\rightarrow_{E_{3,2}(-5)}
\begin{bmatrix}
1 & -1 & 3 & 0 \\
0 & 1 & -1 & 0 \\
0 & 0 & 0 & 0
\end{bmatrix}
\rightarrow_{E_{1,2}(1)}
\begin{bmatrix}
1 & 0 & 2 & 0 \\
0 & 1 & -1 & 0 \\
0 & 0 & 0 & 0
\end{bmatrix}
$$
Quindi una base di $V$ è $\mathcal{B} = \{ v_{1}, v_{2} \}$ e la dimensione di $V$ è $2$.

### b)
Sia
$$
S = \{ (x, y, z) \in \mathbb{R}^{3} | x - y + 3z = 0, 2x + 3y + z = 0, x + 2z = 0 \}
$$
Si determini la dimensione e la base di $S$.
$$
\begin{bmatrix}
1 & -1 & 3 & 0 \\
2 & 3 & 1 & 0 \\
1 & 0 & 2 & 0
\end{bmatrix}
\rightarrow_{E_{2,1}(-2)}
\begin{bmatrix}
1 & -1 & 3 & 0 \\
0 & 5 & -5 & 0 \\
1 & 0 & 2 & 0
\end{bmatrix}
\rightarrow_{E_{3,1}(-1)}
\begin{bmatrix}
1 & -1 & 3 & 0 \\
0 & 5 & -5 & 0 \\
0 & 1 & -1 & 0
\end{bmatrix}
\rightarrow_{E_{3,2}\left( -\frac{1}{5} \right)}
\begin{bmatrix}
1 & -1 & 3 & 0 \\
0 & 5 & -5 & 0 \\
0 & 0 & 0 & 0
\end{bmatrix}
\rightarrow_{D_{2}\left( \frac{1}{5} \right)}
\begin{bmatrix}
1 & -1 & 3 & 0 \\
0 & 1 & -1 & 0 \\
0 & 0 & 0 & 0
\end{bmatrix}
\rightarrow_{E_{1,2}(1)}
\begin{bmatrix}
1 & 0 & 2 & 0 \\
0 & 1 & -1 & 0 \\
0 & 0 & 0 & 0
\end{bmatrix}
\rightarrow
\begin{cases}
x = -2t \\
y = t \\
z = t
\end{cases}
$$
Troviamo la soluzione di base del sistema ponendo $t = 1$: $v = (-2, 1, 1)$
$\mathcal{B} = \{ (-2,1,1 ) \}$ e la dimensione di $S$ è $1$.

## Es 5.15
Sia dato l'insieme 
$$
V = \{ p(x) \in \mathbb{R}_{3}[x] | p(1) = 0 \}
$$
### a)
Verificare che $V$ è sottospazio vettoriale di $\mathbb{R}_{3}[x]$.
$$
p(x) = a_{0} + a_{1}x + a_{2}x^{2} + a_{3}x^{3}
$$
Se consideriamo la base di $V$ essere $\{ 1, x, x^{2}, x^{3} \}$, allora le coordinate di $V$ sono $(a_{0}, a_{1}, a_{2}, a_{3})$
Considerando $p(1)$:
$$
p(1) = a_{0} + a_{1} + a_{2} + a_{3} = 0
$$
$$
W = \{ (a_{0},a_{1},a_{2},a_{3}) \in \mathbb{R}^{4} | a_{0}+a_{1}+a_{2}+a_{3} = 0 \}
$$
$W$ è l'insieme delle soluzioni di un sistema omogeneo avente una sola equazione. Perciò per definizione è un sottospazio vettoriale.
Si come gli elementi di $W$ sono coordinate di $V$, anche $V$ è sottospazio vettoriale.

### b)
Determinare una base di $V$.

$$
\begin{cases}
a_{0} + a_{1} + a_{2} + a_{3} = 0
\end{cases}
\qquad
\begin{cases}
a_{0} = -a_{1}-a_{2}-a_{3}
\end{cases}
\qquad
\begin{cases}
a_{0} = -t -s -u \\
a_{1} = t \\
a_{2} = s \\
a_{3} = u
\end{cases}
$$
Prendiamo le soluzioni di base del sistema, creando così la base $\mathcal{B} = \{ (-1, 1, 0, 0), (-1, 0, 1, 0), (-1, 0, 0, 1) \}$ per $W$.
Traducendo questi risultati in polinomi otteniamo che $\mathcal{B} = \{ x - 1, x^{2} - 1, x^{3} - 1 \}$ per $V$.

## Es 5.16
Siano dati i polinomi
$$
p_{1}(x) = 1 + x, \qquad p_{2}(x) = 1 + 2x + x^{2}, \qquad p_{3}(x) = x - x^{2}
$$
### a)
Verificare che l'insieme $\{ p_{1}(x), p_{2}(x), p_{3}(x) \}$ è una base di $\mathbb{R}_{2}[x]$.

Consideriamo che:
$$
\mathbb{R}_{2}[x] = a_{0} + a_{1}x + a_{2}x^{2}
$$
Considerando la base canonica $\{ 1, x, x^{2}\}$, i polinomi di $\mathbb{R}_{2}[x]$ hanno come coordinate $(a_{0}, a_{1}, a_{2}) \in \mathbb{R}^{3}$
Quindi i polinomi di partenza trasformati diventano:
$$
v_{1} = (1, 1, 0), \qquad v_{2} = (1, 2, 1), \qquad v_{3} = (0, 1, -1)
$$
Se questi vettori sono una base per tutto $\mathbb{R}^{3}$ allora vuol dire che i polinomi di partenza sono una base per tutto $\mathbb{R}_{2}[x]$.
$$
\begin{bmatrix}
1 & 1 & 0 & 0 \\
1 & 2 & 1 & 0 \\
0 & 1 & -1 & 0
\end{bmatrix}
\rightarrow_{E_{2,1}(-1)}
\begin{bmatrix}
1 & 1 & 0 & 0 \\
0 & 1 & 1 & 0 \\
0 & 1 & -1 & 0
\end{bmatrix}
\rightarrow_{E_{3,2}(-1)}
\begin{bmatrix}
1 & 1 & 0 & 0 \\
0 & 1 & 1 & 0 \\
0 & 0 & -2 & 0
\end{bmatrix}
\rightarrow_{D_{3}\left( -\frac{1}{2} \right)}
\begin{bmatrix}
1 & 1 & 0 & 0 \\
0 & 1 & 1 & 0 \\
0 & 0 & 1 & 0
\end{bmatrix}
\rightarrow_{E_{2,3}(-1)}
\begin{bmatrix}
1 & 1 & 0 & 0 \\
0 & 1 & 0 & 0 \\
0 & 0 & 1 & 0
\end{bmatrix}
\rightarrow_{E_{1,2}(-1)}
\begin{bmatrix}
1 & 0 & 0 & 0 \\
0 & 1 & 0 & 0 \\
0 & 0 & 1 & 0
\end{bmatrix}
$$
Perciò i tre vettori sono effettivamente una base di $\mathbb{R}^{3}$. Di conseguenza i 3 polinomi di partenza sono anch'essi una base di $\mathbb{R}_{2}[x]$ rispettivamente.

### b)
Esprimere $f(x) = x^{2} - x +2$ come combinazione lineare di $p_{1}(x), p_{2}(x), p_{3}(x)$.
$$
\begin{bmatrix}
1 & 1 & 0 & 2 \\
1 & 2 & 1 & -1 \\
0 & 1 & -1 & 1
\end{bmatrix}
\rightarrow_{E_{2,1}(-1)}
\begin{bmatrix}
1 & 1 & 0 & 2 \\
0 & 1 & 1 & -3 \\
0 & 1 & -1 & 1
\end{bmatrix}
\rightarrow_{E_{3,2}(-1)}
\begin{bmatrix}
1 & 1 & 0 & 2 \\
0 & 1 & 1 & -3 \\
0 & 0 & -2 & 4
\end{bmatrix}
\rightarrow_{D_{3}\left( -\frac{1}{2} \right)}
\begin{bmatrix}
1 & 1 & 0 & 2 \\
0 & 1 & 1 & -3 \\
0 & 0 & 1 & -2
\end{bmatrix}
\rightarrow_{E_{2,3}(-1)}
\begin{bmatrix}
1 & 1 & 0 & 2 \\
0 & 1 & 0 & -1 \\
0 & 0 & 1 & -2
\end{bmatrix}
\rightarrow_{E_{1,2}(-1)}
\begin{bmatrix}
1 & 0 & 0 & 3 \\
0 & 1 & 0 & -1 \\
0 & 0 & 1 & -2
\end{bmatrix}
$$
Dunque $f(x) = 3p_{1}(x) - p_{2}(x) - 2p_{3}(x)$.

## Es 5.17
Sia $W$ l'insieme dei polinomi $p(x) = ax^{3}+bx^{2}+cx+d \in \mathbb{R}[x]$, di grado al più $3$, tali che $p(0) = p(1) = 0$. Determinare l'insieme generatore di $W$.
Considerando la base canonica di $\mathbb{R}_{3}[x]$, allora le coordinate di ciascun polinomio sono $(a, b, c, d)$. Osserviamo quindi le condizioni:
$$
\begin{cases}
d = 0 \\
a + b + c + d = 0
\end{cases}
\qquad
\begin{cases}
d = 0 \\
a + b + c = 0
\end{cases}
$$
Le soluzioni di questo sistema omogeneo daranno una base di $V = \{ (a, b, c, d) \in \mathbb{R}^{4} | a + b + c + d = 0, d = 0\}$, invertendo la mappatura è possibile ricavare la base di $V$ che è per definizione un'insieme generatore.
$$
\begin{bmatrix}
0 & 0 & 0 & 1 & 0 \\
1 & 1 & 1 & 0 & 0
\end{bmatrix}
\rightarrow_{S_{1,2}}
\begin{bmatrix}
1 & 1 & 1 & 0 & 0 \\
0 & 0 & 0 & 1 & 0
\end{bmatrix}
\rightarrow
\begin{cases}
a = -t-s \\
b = t \\
c = s \\
d = 0
\end{cases}
$$
Ora ci ricaviamo le soluzioni di base per trovare una base di $V$. $\mathcal{B}(V) = \{ (-1, 1, 0, 0), (-1, 0, 1, 0) \}$.
Dunque l'insieme generatore, nonché base, di $W$, è $\langle -x^{3} + x^{2}, -x^{3} + x \rangle$.

## Es 5.18
Sia $S$ l'insieme delle matrici simmetriche:
$$
S = \bigg\{ \begin{bmatrix}
a & b \\
b & d
\end{bmatrix} | a,b,d \in \mathbb{R} \bigg\}
$$
### a)
Verificare che $S$ è sottospazio di $M_{2 \times 2}$.
Per verificare che $S$ sia un sottospazio vettoriale dobbiamo verificare che esso sia un'insieme chiuso rispetto alla somma e alla moltiplicazione per scalare.
1. somma
Sia
$$
A =
\begin{bmatrix}
a & b \\
b & d
\end{bmatrix}, \qquad
B =
\begin{bmatrix}
e & f \\
f & g
\end{bmatrix}
$$
La loro somma è:
$$
A + B = \begin{bmatrix}
a + e & b + f \\
b + f & d + g
\end{bmatrix}
= C
$$
Perché una matrice sia simmetrica, deve essere uguale alla sua trasposta:
$$
C = \begin{bmatrix}
a + e & b + f \\
b + f & d + g
\end{bmatrix} = C^{T} = \begin{bmatrix}
a + e & b + f \\
b + f & d + g
\end{bmatrix}
$$
2. prodotto
Sia
$$
A = \begin{bmatrix}
a & b \\
b & d
\end{bmatrix}
$$
Il prodotto di $A$ per uno scalare $k$ è:
$$
kA = \begin{bmatrix}
ka + kb \\
kb + kd
\end{bmatrix} = C
$$
Perché una matrice sia simmetrica, deve essere uguale alla sua trasposta:
$$
C = 
\begin{bmatrix}
ka + kb \\
kb + kd
\end{bmatrix} = C^{T} =
\begin{bmatrix}
ka + kb \\
kb + kd
\end{bmatrix}
$$

Dunque ogni combinazione lineare di un generico elemento di $S$ è a sua volta un elemento di $S$. Perciò $S$ è un sottospazio vettoriale di $M_{2 \times 2}$.

### b)
Determinare una base di $S$.

Un generico elemento $A$ di $S$ è:
$$
A =
a
\begin{bmatrix}
1 & 0 \\
0 & 0
\end{bmatrix}
+
b
\begin{bmatrix}
0 & 1 \\
1 & 0
\end{bmatrix}
+
c
\begin{bmatrix}
0 & 0 \\
0 & 1
\end{bmatrix}
$$
Le 3 matrici sono linearmente indipendenti:
$$
\begin{bmatrix}
1 & 0 & 0 & 0 \\
0 & 1 & 0 & 0 \\
0 & 1 & 0 & 0 \\
0 & 0 & 1 & 0
\end{bmatrix}
\rightarrow
\begin{cases}
a = 0 \\
b = 0 \\
d = 0
\end{cases}
$$
Una base di $S$ è $\mathcal{B} = \bigg\{ \begin{bmatrix}1 & 0 \\ 0 & 0\end{bmatrix}, \begin{bmatrix} 0 & 1 \\ 1 & 0 \end{bmatrix}, \begin{bmatrix} 0 & 0 \\ 0 & 1\end{bmatrix} \bigg\}$.

## Es 5.19
Sia
$$
A = 
\begin{bmatrix}
1 & -1 \\
-2 & 2
\end{bmatrix}
$$
e sia $S = \{ M \in M_{2}(\mathbb{R}) | AM = MA = 0 \}$. Dimostrare che $S$ è un sottospazio di $M_{2}(\mathbb{R})$ e calcolarne la dimensione:
Prendiamo la generica matrice M e diciamo che:
$$
M = 
\begin{bmatrix}
x & y \\
z & w
\end{bmatrix}
$$
allora
$$
AM = 
\begin{bmatrix}
x - z & y - w \\
-2x + 2z & -2y + 2w
\end{bmatrix} = 0
\rightarrow
\begin{cases}
x = z \\
y = w \\
\end{cases}
$$
$$
MA = 
\begin{bmatrix}
x - 2y & -x + 2y \\
z - 2w & -z + 2w
\end{bmatrix}
= 0
\rightarrow
\begin{cases}
x = 2y \\
z = 2w
\end{cases}
$$
$$
\begin{cases}
x = z \\
y = w \\
x = 2y \\
z = 2w
\end{cases}
$$
Ponendo $y = t$.
$$
\begin{cases}
x = 2t \\
y = t \\
z = 2t \\
w = t
\end{cases}
$$
$$
S = \bigg\{ t \begin{bmatrix}
2 & 1 \\
2 & 1
\end{bmatrix} | t \in \mathbb{R} \bigg\}
$$
Prendiamo una matrice di $S$, in questo caso quella più semplice ovvero quando $t = 1$.
$$
B = \begin{bmatrix}
2 & 1 \\
2 & 1
\end{bmatrix}
$$
$S$ è un sottospazio se è chiuso rispetto alla somma e al prodotto:
1. somma
Sia $A_{1} = t_{1} B$ e $A_{2} = t_{1}B$:
$$
A_{1} + A_{2} = t_{1}B + t_{2}B = (t_{1}+t_{2})B \in S
$$
2. prodotto per scalare
Sia $A = tB$ e $k$ uno scalare:
$$
kA = k(tB) = (kt)B \in S
$$
Quindi $S$ è un sottospazio vettoriale di dimensione $1$.

## Es 5.20
Si consideri la matrice
$$
A = \begin{bmatrix}
1 & k \\
2 & 3
\end{bmatrix}
$$
### a)
Si determini una base del sottospazio $U = \{ X \in M_{2}(\mathbb{R}) : AX = XA \}$
Consideriamo un generico elemento di $U$:
$$
X = \begin{bmatrix}
x & y \\
z & w
\end{bmatrix}
$$
Allora:
$$
AX = 
\begin{bmatrix}
x + kz & y + kw \\
2x + 3z & 2y + 3w
\end{bmatrix}
$$
$$
XA = \begin{bmatrix}
x + 2y & kx + 3y \\
z + 2w & kz + 3w 
\end{bmatrix}
$$
$$
\begin{cases}
kz = 2y \\
kx + 2y = kw \\
2x + 2z = 2w \\
2y = kz
\end{cases}
\rightarrow
\begin{bmatrix}
0 & -2 & k & 0 & 0 \\
k & 2 & 0 & -k & 0 \\
2 & 0 & 2 & -2 & 0 \\
0 & 2 & -k & 0 & 0
\end{bmatrix}
\rightarrow_{S_{1,3}}
\begin{bmatrix}
2 & 0 & 2 & -2 & 0 \\
k & 2 & 0 & -k & 0 \\
0 & -2 & k & 0 & 0 \\
0 & 2 & -k & 0 & 0
\end{bmatrix}
\rightarrow_{D_{1}\left( \frac{1}{2} \right)}
\begin{bmatrix}
1 & 0 & 1 & -1 & 0 \\
k & 2 & 0 & -k & 0 \\
0 & -2 & k & 0 & 0 \\
0 & 2 & -k & 0 & 0
\end{bmatrix}
\rightarrow_{E_{2,1}(-k)}
\begin{bmatrix}
1 & 0 & 1 & -1 & 0 \\
0 & 2 & -k & 0 & 0 \\
0 & -2 & k & 0 & 0 \\
0 & 2 & -k & 0 & 0
\end{bmatrix}
$$
$$
\rightarrow_{E_{4,2}(-1)}
\begin{bmatrix}
1 & 0 & 1 & -1 & 0 \\
0 & 2 & -k & 0 & 0 \\
0 & -2 & k & 0 & 0 \\
0 & 0 & 0 & 0 & 0
\end{bmatrix}
\rightarrow_{E_{3,2}(1)}
\begin{bmatrix}
1 & 0 & 1 & -1 & 0 \\
0 & 2 & -k & 0 & 0 \\
0 & 0 & 0 & 0 & 0 \\
0 & 0 & 0 & 0 & 0
\end{bmatrix}
$$
$$
\begin{cases}
x = s - t \\
y = \frac{kt}{2} \\
z = t \\
w = s
\end{cases}
$$
$$
X = t \begin{bmatrix}
-1 & \frac{k}{2} \\
1 & 0
\end{bmatrix}
+ s \begin{bmatrix}
1 & 0 \\
0 & 1
\end{bmatrix}
$$
Quindi una base di $U$ è $\mathcal{B} = \bigg\{ \begin{bmatrix} -1 & \frac{k}{2} \\ 1 & 0 \end{bmatrix}, \begin{bmatrix} 1 & 0 \\ 0 & 1 \end{bmatrix} \bigg\}$
### b)
Mostrare che il sottoinsieme $W = \{ X \in U : X \text{ è invertibile} \}$ non è un sottospazio vettoriale di $U$.

$W$ non contiene l'elemento nullo perché esso non è invertibile.

## Es 5.21
Sia $W = \langle A, B, C \rangle$ il sottospazio di $M_{2}(\mathbb{R})$ generato dalle matrici
$$
A = \begin{bmatrix}
0 & 0 \\
k & 0
\end{bmatrix}, \qquad
B = \begin{bmatrix}
1 & k \\
-2 & 0
\end{bmatrix}, \qquad
C = \begin{bmatrix}
k & 1 \\
k - 1 & 1
\end{bmatrix}
$$
Si determini la dimensione di $W$ e una sua base al variare del parametro reale $k$.
$$
\begin{bmatrix}
0 & 1 & k & 0 \\
0 & k & 1 & 0 \\
k & -2 & k-1 & 0 \\
0 & 0 & 1 & 0
\end{bmatrix}
\rightarrow_{S_{1,3}}
\begin{bmatrix}
k & -2 & k-1 & 0 \\
0 & k & 1 & 0 \\
0 & 1 & k & 0 \\
0 & 0 & 1 & 0
\end{bmatrix}
\rightarrow_{E_{2,3}(-k)}
\begin{bmatrix}
k & -2 & k-1 & 0 \\
0 & 0 & -k^{2} & 0 \\
0 & 1 & k & 0 \\
0 & 0 & 1 & 0
\end{bmatrix}
\rightarrow_{S_{2,3}}
\begin{bmatrix}
k & -2 & k-1 & 0 \\
0 & 1 & k & 0 \\
0 & 0 & -k^{2} & 0 \\
0 & 0 & 1 & 0
\end{bmatrix}
$$
Se $k = 0$:
$$
\begin{bmatrix}
0 & -2 & -1 & 0 \\
0 & 1 & 0 & 0 \\
0 & 0 & 0 & 0 \\
0 & 0 & 1 & 0
\end{bmatrix}
\rightarrow_{S_{3,4}}
\begin{bmatrix}
0 & -2 & -1 & 0 \\
0 & 1 & 0 & 0 \\
0 & 0 & 1 & 0 \\
0 & 0 & 0 & 0
\end{bmatrix}
\rightarrow_{E_{1,3}(1)}
\begin{bmatrix}
0 & -2 & 0 & 0 \\
0 & 1 & 0 & 0 \\
0 & 0 & 1 & 0 \\
0 & 0 & 0 & 0
\end{bmatrix}
\rightarrow_{E_{1,2}(2)}
\begin{bmatrix}
0 & 0 & 0 & 0 \\
0 & 1 & 0 & 0 \\
0 & 0 & 1 & 0 \\
0 & 0 & 0 & 0
\end{bmatrix}\rightarrow
\begin{cases}
x = t \\
y = 0 \\
z = 0
\end{cases}
$$
$\mathcal{B} = \{ B, C \}$ e la dimensione di $W$ è 2.

Se $k \neq 0$
$$
\begin{bmatrix}
k & -2 & k-1 & 0 \\
0 & 1 & k & 0 \\
0 & 0 & -k^{2} & 0 \\
0 & 0 & 1 & 0
\end{bmatrix}
\rightarrow_{D_{\frac{1}{k}}}
\begin{bmatrix}
1 & -\frac{2}{k} & 1-\frac{1}{k} & 0 \\
0 & 1 & k & 0 \\
0 & 0 & -k^{2} & 0 \\
0 & 0 & 1 & 0
\end{bmatrix}
\rightarrow_{E_{3,4}(k^{2})}
\begin{bmatrix}
1 & -\frac{2}{k} & 1-\frac{1}{k} & 0 \\
0 & 1 & k & 0 \\
0 & 0 & 0 & 0 \\
0 & 0 & 1 & 0
\end{bmatrix}
\rightarrow_{E_{2,4}(-k)}
\begin{bmatrix}
1 & -\frac{2}{k} & 1-\frac{1}{k} & 0 \\
0 & 1 & 0 & 0 \\
0 & 0 & 0 & 0 \\
0 & 0 & 1 & 0
\end{bmatrix}
\rightarrow_{E_{1,4}\left( \frac{1}{k}-1 \right)}
\begin{bmatrix}
1 & -\frac{2}{k} & 0 & 0 \\
0 & 1 & 0 & 0 \\
0 & 0 & 0 & 0 \\
0 & 0 & 1 & 0
\end{bmatrix}
\rightarrow_{E_{1,2}\left( \frac{2}{k} \right)}
\begin{bmatrix}
1 & 0 & 0 & 0 \\
0 & 1 & 0 & 0 \\
0 & 0 & 0 & 0 \\
0 & 0 & 1 & 0
\end{bmatrix}
$$
In questo caso le tre matrici sono linearmente indipendenti e quindi formano una base. Quindi la dimensione di $W$ è 3.

## Es 5.22
Sia $V = \langle A, B, C \rangle$ il sottospazio di $M_{2 \times 2}(\mathbb{R})$ dove
$$
A = \begin{bmatrix}
2 & 0 \\
1 & 2
\end{bmatrix}, \qquad
B = \begin{bmatrix}
2 & 1 \\
3 & 4
\end{bmatrix}, \qquad
C = \begin{bmatrix}
2 & 3 \\
7 & 8
\end{bmatrix}
$$
### a)
Si determini la dimensione e una base di $V$.

Per trovare una base doppiamo vedere quali degli elementi generatori sono linearmente indipendenti tra di loro:
$$
\begin{bmatrix}
2 & 2 & 2 & 0 \\
0 & 1 & 3 & 0 \\
1 & 3 & 7 & 0 \\
2 & 4 & 8 & 0
\end{bmatrix}
\rightarrow_{D_{1}\left( \frac{1}{2} \right)}
\begin{bmatrix}
1 & 1 & 1 & 0 \\
0 & 1 & 3 & 0 \\
1 & 3 & 7 & 0 \\
2 & 4 & 8 & 0
\end{bmatrix}
\rightarrow_{E_{3,1}(-1)}
\begin{bmatrix}
1 & 1 & 1 & 0 \\
0 & 1 & 3 & 0 \\
0 & 2 & 6 & 0 \\
2 & 4 & 8 & 0
\end{bmatrix}
\rightarrow_{D_{3}\left( \frac{1}{2} \right)}
\begin{bmatrix}
1 & 1 & 1 & 0 \\
0 & 1 & 3 & 0 \\
0 & 1 & 3 & 0 \\
2 & 4 & 8 & 0
\end{bmatrix}
\rightarrow_{E_{3,2}(-1)}
\begin{bmatrix}
1 & 1 & 1 & 0 \\
0 & 1 & 3 & 0 \\
0 & 0 & 0 & 0 \\
2 & 4 & 8 & 0
\end{bmatrix}
\rightarrow_{S_{3,4}}
\begin{bmatrix}
1 & 1 & 1 & 0 \\
0 & 1 & 3 & 0 \\
2 & 4 & 8 & 0 \\
0 & 0 & 0 & 0
\end{bmatrix}
$$
$$
\rightarrow_{E_{3,1}(-2)}
\begin{bmatrix}
1 & 1 & 1 & 0 \\
0 & 1 & 3 & 0 \\
0 & 2 & 6 & 0 \\
0 & 0 & 0 & 0
\end{bmatrix}
\rightarrow_{E_{3,2}(-2)}
\begin{bmatrix}
1 & 1 & 1 & 0 \\
0 & 1 & 3 & 0 \\
0 & 0 & 0 & 0 \\
0 & 0 & 0 & 0
\end{bmatrix}
\rightarrow_{E_{1,2}(-1)}
\begin{bmatrix}
1 & 0 & -2 & 0 \\
0 & 1 & 3 & 0 \\
0 & 0 & 0 & 0 \\
0 & 0 & 0 & 0
\end{bmatrix}
$$
Il rango della matrice è $2$, difatti $C$ può essere scritta come combinazione lineare di $A, B$. Quindi una base di $V$ è $\mathcal{B} = \{ A, B \}$

### b)
Si esprima $D = \begin{bmatrix} 2 & 2 \\ 5 & 6 \end{bmatrix}$ come combinazione lineare della base trovata al punto a).

$$
\begin{cases}
2\lambda + 2\mu = 2 \\
\mu = 2 \\
\lambda + 3 \mu = 5 \\
2\lambda + 4\mu = 6
\end{cases}
\qquad
\begin{cases}
2\lambda + 2\mu = 2 \\
\mu = 2 \\
\lambda = -1 \\
2\lambda + 4\mu = 6
\end{cases}
\qquad
\begin{cases}
-2 + 4 = 2 \\
\mu = 2 \\
\lambda = -1 \\
-2 + 8 = 6
\end{cases}
$$
Quindi $D = -A + 2B$.
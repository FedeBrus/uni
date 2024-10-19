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
\rightarrow_{E_{3,2}(k)}
\begin{bmatrix}
1 & k & 1 & 0 \\
0 & 1 & -1 & 0 \\
0 & 0 & -1 & 0
\end{bmatrix}
$$
$rg(A) = n, \forall k \in \mathbb{R}$:
Il sistema ha soluzione unica se e solo se $k \neq 0$.
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
Trovare una base di $A$.
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
\rightarrow_{\frac{E_{4,2}}{-\frac{3}{2}}}
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
\rightarrow_{\frac{E_{3,2}}{-3}}
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
\rightarrow_{\frac{D_{2}}{\frac{1}{k-3}}}
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
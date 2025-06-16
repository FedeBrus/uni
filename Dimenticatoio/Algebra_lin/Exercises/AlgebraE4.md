## Es 4.1
Determinare il rango delle seguenti matrici al variare del parametro $t \in \mathbb{R}$.
$$
A_{1} = \begin{bmatrix}
1 & -4 & 2 \\
0 & t + 1 & -1 \\
0 & 0 & t - 3
\end{bmatrix}
$$
La matrice è già a scalini, dove $t+1$ e $t-3$ sono pivot. Si nota subito come il $rg(A) = 3, \forall t \in \mathbb{R}, t \neq -1,3$ . Mentre nei casi $t = -1$ e $t = 3$, $rg(A) = 2$.
$$
A_{2} = \begin{bmatrix}
1 & -4 & 2 \\
0 & t + 1 & -1 \\
0 & 0 & t - 3 \\
0 & 0 & t
\end{bmatrix}
$$
In questo caso la matrice non è già a scalini, ma lo diventa immediatamente in due casi: $t = 0$ e $t = 3$.

Nel caso $t = 0$, la matrice diventa della forma:
$$
A_{2} = \begin{bmatrix}
1 & -4 & 2 \\
0 & 1 & -1 \\
0 & 0 & - 3 \\
0 & 0 & 0
\end{bmatrix}
$$
Dunque $rg(A) = 3$.

Nel caso $t = 3$, la matrice diventa della forma:
$$
A_{2} = \begin{bmatrix}
1 & -4 & 2 \\
0 & 4 & -1 \\
0 & 0 & 0 \\
0 & 0 & 3
\end{bmatrix}
\rightarrow_{S_{3, 4}}
\begin{bmatrix}
1 & -4 & 2 \\
0 & 4 & -1 \\
0 & 0 & 3 \\
0 & 0 & 0
\end{bmatrix}
$$
Dunque $rg(A) = 3$.

Nel caso $t = -1$
$$
A_{2} = 
\begin{bmatrix}
1 & -4 & 2 \\
0 & 0 & -1 \\
0 & 0 & -4 \\
0 & 0 & -1
\end{bmatrix}
\rightarrow_{E_{4,2}(-1)}
\begin{bmatrix}
1 & -4 & 2 \\
0 & 0 & -1 \\
0 & 0 & -4 \\
0 & 0 & 0
\end{bmatrix}
\rightarrow_{E_{3,2}(-4)}
\begin{bmatrix}
1 & -4 & 2 \\
0 & 0 & -1 \\
0 & 0 & 0 \\
0 & 0 & 0
\end{bmatrix}
$$
Dunque $rg(A) = 2$

Nel caso $t \neq 3, 0, -1$, la matrice diventa della forma:
$$
A_{2} = \begin{bmatrix}
1 & -4 & 2 \\
0 & t + 1 & -1 \\
0 & 0 & t - 3 \\
0 & 0 & t
\end{bmatrix}
$$
Dunque $rg(A) = 3$
$$
A_{3} = 
\begin{bmatrix}
1 & 0 & 3 & t \\
2 & 1 & 2 & t + 1 \\
t & 0 & t & 0
\end{bmatrix}
\rightarrow_{D_{2}\left( \frac{1}{2} \right)}
\begin{bmatrix}
1 & 0 & 3 & t \\
1 & \frac{1}{2} & 1 & \frac{t + 1}{2} \\
t & 0 & t & 0
\end{bmatrix}
\rightarrow_{E_{2,1}(-1)}
\begin{bmatrix}
1 & 0 & 3 & t \\
0 & \frac{1}{2} & -2 & \frac{-t + 1}{2} \\
t & 0 & t & 0
\end{bmatrix}
\rightarrow_{E_{2,1}(-t)}
\begin{bmatrix}
1 & 0 & 3 & t \\
0 & \frac{1}{2} & -2 & \frac{-t + 1}{2} \\
0 & 0 & -2t & -t^{2}
\end{bmatrix}
$$
Dunque $rg(A) = 3, \forall t \in \mathbb{R}, t \neq 0$. Invece, se $t = 0$, l'ultima riga è tutta nulla e dunque $rg(A)=2$
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

## Es 4.3
Si considerino le matrici (dove $k$ è un parametro reale)
$$
A = 
\begin{bmatrix}
6k & 4 & -2 & 2 \\
4k+1 & 4 & -1 & 1 \\
-2k-1 & -2 & 1 & -1 \\
2k + 3  & 2 & 0 & 0
\end{bmatrix},
\qquad
b = 
\begin{bmatrix}
0 \\
1 \\
0 \\
2
\end{bmatrix}
$$
### a)
Si stabilisca il rango di $A$ al variare di $k$.
$$
(A|b) = 
\begin{bmatrix}
6k & 4 & -2 & 2 & 0 \\
4k+1 & 4 & -1 & 1 & 1 \\
-2k-1 & -2 & 1 & -1 & 0 \\
2k + 3  & 2 & 0 & 0 & 2
\end{bmatrix}
$$
Per rendere le cosi più facili è meglio scambiare la prima e la quarta colonna:
$$
(A|b) = 
\begin{bmatrix}
2 & 4 & -2 & 6k & 0 \\
1 & 4 & -1 & 4k+1 & 1 \\
-1 & -2 & 1 & -2k-1 & 0 \\
 0 & 2 & 0 & 2k + 3 & 2
\end{bmatrix}
\rightarrow_{D_{1}\left( \frac{1}{2} \right)}
\begin{bmatrix}
1 & 2 & -1 & 3k & 0 \\
1 & 4 & -1 & 4k+1 & 1 \\
-1 & -2 & 1 & -2k-1 & 0 \\
 0 & 2 & 0 & 2k + 3 & 2
\end{bmatrix}
\rightarrow_{E_{2,1}(-1)}
\begin{bmatrix}
1 & 2 & -1 & 3k & 0 \\
0 & 2 & 0 & k+1 & 1 \\
-1 & -2 & 1 & -2k-1 & 0 \\
 0 & 2 & 0 & 2k + 3 & 2
\end{bmatrix}
\rightarrow_{E_{3,1}(1)}
\begin{bmatrix}
1 & 2 & -1 & 3k & 0 \\
0 & 2 & 0 & k+1 & 1 \\
0 & 0 & 0 & k-1 & 0 \\
0 & 2 & 0 & 2k + 3 & 2
\end{bmatrix}
\rightarrow_{S_{3,4}}
\begin{bmatrix}
1 & 2 & -1 & 3k & 0 \\
0 & 2 & 0 & k+1 & 1 \\
0 & 2 & 0 & 2k + 3 & 2 \\
0 & 0 & 0 & k-1 & 0 
\end{bmatrix}
$$
$$
\rightarrow_{E_{3,2}}(-1)
\begin{bmatrix}
1 & 2 & -1 & 3k & 0 \\
0 & 2 & 0 & k+1 & 1 \\
0 & 0 & 0 & k + 2 & 1 \\
0 & 0 & 0 & k-1 & 0 
\end{bmatrix}
$$
In questo caso se $k = 1$, l'ultima riga si annulla e dunque $rg(A) = 3$. Invece se $k = -2$ ad annullarsi sarà la terza equazione, ma con uno scambio di righe è facile vedere che $rg(A) = 3$.
Infine se $k \neq -2, -1, 1$.

### b)
Il sistema è risolubile se $rg(A|b) = rg(A)$, i valori "problematici" di $k$ sono $k = -2$ e $k = 1$.

Se $k = -2$:
$$
\begin{bmatrix}
1 & 2 & -1 & -6 & 0 \\
0 & 2 & 0 & -1 & 1 \\
0 & 0 & 0 & 0 & 1 \\
0 & 0 & 0 & -3 & 0 
\end{bmatrix}
$$
In questo caso il sistema non è risolubile.

Se $k = 1$
$$
\begin{bmatrix}
1 & 2 & -1 & 3 & 0 \\
0 & 2 & 0 & 2 & 1 \\
0 & 0 & 0 & 3 & 1 \\
0 & 0 & 0 & 0 & 0 
\end{bmatrix}
\rightarrow_{D_{3}\left( \frac{1}{3} \right)}
\begin{bmatrix}
1 & 2 & -1 & 3 & 0 \\
0 & 2 & 0 & 2 & 1 \\
0 & 0 & 0 & 1 & \frac{1}{3} \\
0 & 0 & 0 & 0 & 0 
\end{bmatrix}
\rightarrow_{D_{2}\left( \frac{1}{2} \right)}
\begin{bmatrix}
1 & 2 & -1 & 3 & 0 \\
0 & 1 & 0 & 1 & \frac{1}{2} \\
0 & 0 & 0 & 1 & \frac{1}{3} \\
0 & 0 & 0 & 0 & 0 
\end{bmatrix}
\rightarrow_{E_{2.3}(-1)}
\begin{bmatrix}
1 & 2 & -1 & 3 & 0 \\
0 & 1 & 0 & 0 & \frac{1}{6} \\
0 & 0 & 0 & 1 & \frac{1}{3} \\
0 & 0 & 0 & 0 & 0 
\end{bmatrix}
\rightarrow_{E_{1,3}(-3)}
\begin{bmatrix}
1 & 2 & -1 & 0 & -1 \\
0 & 1 & 0 & 0 & \frac{1}{6} \\
0 & 0 & 0 & 1 & \frac{1}{3} \\
0 & 0 & 0 & 0 & 0 
\end{bmatrix}
\rightarrow_{E_{1,2}(-2)}
\begin{bmatrix}
1 & 0 & -1 & 0 & -\frac{4}{3} \\
0 & 1 & 0 & 0 & \frac{1}{6} \\
0 & 0 & 0 & 1 & \frac{1}{3} \\
0 & 0 & 0 & 0 & 0 
\end{bmatrix}
\rightarrow
\begin{cases}
x = \frac{1}{3} \\
y = \frac{1}{6} \\
z = t \\
w = t - \frac{4}{3}
\end{cases}
$$
Ricordando che la prima e la quarta colonna sono state scambiate, $Sol(Ax = b) = \left\{  \left( \frac{1}{3}, \frac{1}{6}, 0, -\frac{4}{3} \right) + t(0,0,1,1) \right\}$
## Es 4.4
Si considerino le matrici
$$
A =
\begin{bmatrix}
3 & 1-k & -1 \\
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
3 & 1-k & -1 \\
3 & 1 & 1 \\
-3 & -1-k & -1
\end{bmatrix}
\rightarrow_{E_{2, 1}(-1)}
\begin{bmatrix}
3 & 1-k & -1 \\
0 & k & 2 \\
-3 & -1-k & -1
\end{bmatrix}
\rightarrow_{E_{3,1}(1)}
\begin{bmatrix}
3 & 1-k & -1 \\
0 & k & 2 \\
0 & -2k & -2
\end{bmatrix}
\rightarrow_{E_{3,2}(2)}
\begin{bmatrix}
3 & 1-k & -1 \\
0 & k & 2 \\
0 & 0 & 2
\end{bmatrix}
$$
$$
\begin{bmatrix}
3 & 2 & -1 \\
-1 & 1 & 0 \\
2 & k & 1
\end{bmatrix}
\rightarrow_{D_{2}(3)}
\begin{bmatrix}
3 & 2 & -1 \\
-3 & 3 & 0 \\
2 & k & 1
\end{bmatrix}
\rightarrow_{E_{2,1}(1)}
\begin{bmatrix}
3 & 2 & -1 \\
0 & 5 & -1 \\
2 & k & 1
\end{bmatrix}
\rightarrow_{E_{3,1}\left( -\frac{2}{3} \right)}
\begin{bmatrix}
3 & 2 & -1 \\
0 & 5 & -1 \\
0 & k-\frac{4}{3} & \frac{5}{3}
\end{bmatrix}
\rightarrow_{D_{3}(3)}
\begin{bmatrix}
3 & 2 & -1 \\
0 & 5 & -1 \\
0 & 3k-4 & 5
\end{bmatrix}
\rightarrow_{E_{3,2} \left( -\frac{3k-4}{5} \right) }
\begin{bmatrix}
3 & 2 & -1 \\
0 & 5 & -1 \\
0 & 0 & \frac{21 + 3k}{5}
\end{bmatrix}
\rightarrow_{D_{3}\left( \frac{5}{3} \right)}
\begin{bmatrix}
3 & 2 & -1 \\
0 & 5 & -1 \\
0 & 0 & 7 + k
\end{bmatrix}
$$
Dunque la nullità delle matrici è $0$ se $k \neq 0, -7$.
### b)
Sia $C = AB$. Stabilire se il sistema lineare $Cx = 0$ ha soluzione unica quando $k = 0$.
$$
AB = 
\begin{bmatrix}
3 & 1 & -1 \\
3 & 1 & 1 \\
-3 & -1 & -1
\end{bmatrix}
\begin{bmatrix}
3 & 2 & -1 \\
-1 & 1 & 0 \\
2 & 0 & 1
\end{bmatrix}
=
\begin{bmatrix}
6 & 7 & -4 \\
10 & 7 & -2 \\
-10 & -7 & 2
\end{bmatrix}
\rightarrow_{E_{3,2}(1)}
\begin{bmatrix}
6 & 7 & -4 \\
10 & 7 & -2 \\
0 & 0 & 0
\end{bmatrix}
$$
In questo caso $n - rg(A) = 1$, dunque esistono infinite soluzioni.

## Es 4.5
Si considerino le matrici
$$
A =
\begin{bmatrix}
1 & 0 & 1 & 3 \\
1 & 1 & 1 & 5 \\
1 & -1 & k+2 & k-1 \\
1 & 0 & k+2 & 2k-1
\end{bmatrix},
\qquad
b = 
\begin{bmatrix}
1 \\
1 \\
2 \\
k
\end{bmatrix}
$$
con $k$ parametro reale.

### a)
Si risolva il sistema $Ax = b$ al variare del parametro $k$.
$$
\begin{bmatrix}
1 & 0 & 1 & 3 & 1 \\
1 & 1 & 1 & 5 & 1 \\
1 & -1 & k+2 & k-1 & 2 \\
1 & 0 & k+2 & 2k-1 & k
\end{bmatrix}
\rightarrow_{E_{2,1}(-1)}
\begin{bmatrix}
1 & 0 & 1 & 3 & 1 \\
0 & 1 & 0 & 2 & 0 \\
1 & -1 & k+2 & k-1 & 2 \\
1 & 0 & k+2 & 2k-1 & k
\end{bmatrix}
\rightarrow_{E_{3,1}(-1)}
\begin{bmatrix}
1 & 0 & 1 & 3 & 1 \\
0 & 1 & 0 & 2 & 0 \\
0 & -1 & k+1 & k-4 & 1 \\
1 & 0 & k+2 & 2k-1 & k
\end{bmatrix}
\rightarrow_{E_{4,1}(-1)}
\begin{bmatrix}
1 & 0 & 1 & 3 & 1 \\
0 & 1 & 0 & 2 & 0 \\
0 & -1 & k+1 & k-4 & 1 \\
0 & 0 & k+1 & 2k-4 & k-1
\end{bmatrix}
$$
$$
\rightarrow_{E_{3,2}(1)}
\begin{bmatrix}
1 & 0 & 1 & 3 & 1 \\
0 & 1 & 0 & 2 & 0 \\
0 & 0 & k+1 & k-2 & 1 \\
0 & 0 & k+1 & 2k-4 & k-1
\end{bmatrix}
\rightarrow_{E_{4,3}(-1)}
\begin{bmatrix}
1 & 0 & 1 & 3 & 1 \\
0 & 1 & 0 & 2 & 0 \\
0 & 0 & k+1 & k-2 & 1 \\
0 & 0 & 0 & k-2 & k-2
\end{bmatrix}
$$
Se $k = -1$
$$
\begin{bmatrix}
1 & 0 & 1 & 3 & 1 \\
0 & 1 & 0 & 2 & 0 \\
0 & 0 & 0 & -3 & 1 \\
0 & 0 & 0 & -3 & -3
\end{bmatrix}
\rightarrow_{E_{4,3}(-1)}
\begin{bmatrix}
1 & 0 & 1 & 3 & 1 \\
0 & 1 & 0 & 2 & 0 \\
0 & 0 & 0 & -3 & 1 \\
0 & 0 & 0 & 0 & -4
\end{bmatrix}
$$
Dunque se $k = -1$ il sistema non è compatibile.

Se $k = 2$
$$
\begin{bmatrix}
1 & 0 & 1 & 3 & 1 \\
0 & 1 & 0 & 2 & 0 \\
0 & 0 & 3 & 0 & 1 \\
0 & 0 & 0 & 0 & 0
\end{bmatrix}
\rightarrow_{D_{3}\left( \frac{1}{3} \right)}
\begin{bmatrix}
1 & 0 & 1 & 3 & 1 \\
0 & 1 & 0 & 2 & 0 \\
0 & 0 & 1 & 0 & \frac{1}{3} \\
0 & 0 & 0 & 0 & 0
\end{bmatrix}
\rightarrow_{E_{1,3}(-1)}
\begin{bmatrix}
1 & 0 & 0 & 3 & \frac{2}{3} \\
0 & 1 & 0 & 2 & 0 \\
0 & 0 & 1 & 0 & \frac{1}{3} \\
0 & 0 & 0 & 0 & 0
\end{bmatrix}
\rightarrow
\begin{cases}
x = -3t + \frac{2}{3} \\
y = -2t \\
z = \frac{1}{3} \\
w = t
\end{cases}
$$
Dunque il sistema ha infinite soluzioni dipendenti da un parametro $t \in \mathbb{R}$. $Sol(Ax = b) = \left\{  \left( \frac{2}{3}, 0, \frac{1}{3}, 0 \right) + t(-3,-2,0,1) | \forall t \in \mathbb{R}\right\}$
Infine se $k \neq -1, 2$
$$
\begin{bmatrix}
1 & 0 & 1 & 3 & 1 \\
0 & 1 & 0 & 2 & 0 \\
0 & 0 & k+1 & k-2 & 1 \\
0 & 0 & 0 & k-2 & k-2
\end{bmatrix}
\rightarrow
\begin{cases}
x + z + 3w = 1 \\
y + 2w = 0 \\
(k+1)z + (k-2)w = 1 \\
(k-2)w = k-2
\end{cases}
\qquad
\begin{cases}
x + z = -2 \\
y = -2 \\
(k+1)z + (k-2) = 1 \\
w = 1
\end{cases}
\qquad
\begin{cases}
x = -2 - \frac{3 - k}{k+1} \\
y = -2 \\
z = \frac{3 - k}{k+1} \\
w = 1
\end{cases}
\qquad
\begin{cases}
x = \frac{-k - 5}{k+1} \\
y = -2 \\
z = \frac{3 - k}{k+1} \\
w = 1
\end{cases}
$$
### b)
Si stabilisca per quali valori di $k$ il vettore $v = \left( -\frac{7}{3},-2, \frac{1}{3}, 1 \right)$ appartiene all'insieme $Sol(Ax = b)$.
$$
\begin{cases}
-\frac{7}{3} = \frac{-k - 5}{k+1} \\
-2 = -2 \\
\frac{1}{3} = \frac{3 - k}{k+1} \\
1 = 1
\end{cases}
\qquad
\begin{cases}
-7k - 7 = -3k - 15 \\
-2 = -2 \\
k + 1 = 9 - 3k \\
1 = 1
\end{cases}
\begin{cases}
4k = 8 \\
-2 = -2 \\
4k = 8 \\
1 = 1
\end{cases}
$$
Perché $v$ sia soluzione di $Ax = b$, deve essere che $k = 2$.

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
## Es 4.8
Sia $A$ la matrice reale
$$
A = 
\begin{bmatrix}
k & k-1 & k \\
0 & 2k-2 & 0 \\
1 & k-1 & 2-k
\end{bmatrix}
$$
### a)
Si determini per quali valori di $k$ la matrice $A$ è invertibile. Si calcoli la matrice inversa di $A$ per $k = -1$.
$$
\begin{bmatrix}
k & k-1 & k \\
0 & 2k-2 & 0 \\
1 & k-1 & 2-k
\end{bmatrix}
\rightarrow_{E_{3,1}(-1)}
\begin{bmatrix}
k & k-1 & k \\
0 & 2k-2 & 0 \\
1-k & 0 & 2-2k
\end{bmatrix}
\rightarrow_{E_{1,3}(1)}
\begin{bmatrix}
1 & k-1 & 2 - k \\
0 & 2k-2 & 0 \\
1-k & 0 & 2-2k
\end{bmatrix}
\rightarrow_{D_{2}\left( \frac{1}{2} \right)}
\begin{bmatrix}
1 & k-1 & 2 - k \\
0 & k-1 & 0 \\
1-k & 0 & 2-2k
\end{bmatrix}
$$
$$
\rightarrow_{E_{1,2}(-1)}
\begin{bmatrix}
1 & 0 & 2-k \\
0 & k-1 & 0 \\
1-k & 0 & 2-2k
\end{bmatrix}
\rightarrow_{E_{3,1}(-2)}
\begin{bmatrix}
1 & 0 & 2-k \\
0 & k-1 & 0 \\
-1-k & 0 & -2
\end{bmatrix}
\rightarrow_{E_{3,1}(k)}
\begin{bmatrix}
1 & 0 & 2-k \\
0 & k-1 & 0 \\
-1 & 0 & -2 + 2k - k^{2}
\end{bmatrix}
\rightarrow_{E_{3,1}(1)}
\begin{bmatrix}
1 & 0 & 2-k \\
0 & k-1 & 0 \\
0 & 0 &  k(1-k)
\end{bmatrix}
$$
Da qui si nota che se $k = 1$, allora $rg(A) = 1$.
Se $k = 0$, allora $rg(A) = 2$.
Se $k \neq 0, 1$, allora $rg(A) = 3$ e la matrice è invertibile.

Se $k = -1$:
$$
\begin{bmatrix}
-1 & -2 & -1 \\
0 & -4 & 0 \\
1 & -2 & 3
\end{bmatrix}
$$
$$
(A | I_{3}) =
\begin{bmatrix}
-1 & -2 & -1 & 1 & 0 & 0 \\
0 & -4 & 0 & 0 & 1 & 0 \\
1 & -2 & 3 & 0 & 0 & 1
\end{bmatrix}
\rightarrow_{E_{3,1}(1)}
\begin{bmatrix}
-1 & -2 & -1 & 1 & 0 & 0 \\
0 & -4 & 0 & 0 & 1 & 0 \\
0 & -4 & 2 & 1 & 0 & 1
\end{bmatrix}
\rightarrow_{E_{3,2}(-1)}
\begin{bmatrix}
-1 & -2 & -1 & 1 & 0 & 0 \\
0 & -4 & 0 & 0 & 1 & 0 \\
0 & 0 & 2 & 1 & -1 & 1
\end{bmatrix}
\rightarrow_{D_{3}\left( \frac{1}{2} \right)}
\begin{bmatrix}
-1 & -2 & -1 & 1 & 0 & 0 \\
0 & -4 & 0 & 0 & 1 & 0 \\
0 & 0 & 1 & \frac{1}{2} & -\frac{1}{2} & \frac{1}{2}
\end{bmatrix}
\rightarrow_{D_{2}\left( -\frac{1}{4} \right)}
\begin{bmatrix}
-1 & -2 & -1 & 1 & 0 & 0 \\
0 & 1 & 0 & 0 & -\frac{1}{4} & 0 \\
0 & 0 & 1 & \frac{1}{2} & -\frac{1}{2} & \frac{1}{2}
\end{bmatrix}
\rightarrow_{D_{1}(-1)}
\begin{bmatrix}
1 & 2 & 1 & -1 & 0 & 0 \\
0 & 1 & 0 & 0 & -\frac{1}{4} & 0 \\
0 & 0 & 1 & \frac{1}{2} & -\frac{1}{2} & \frac{1}{2}
\end{bmatrix}
$$
$$
\rightarrow_{E_{1,3}(-1)}
\begin{bmatrix}
1 & 2 & 0 & -\frac{3}{2} & \frac{1}{2} & -\frac{1}{2} \\
0 & 1 & 0 & 0 & -\frac{1}{4} & 0 \\
0 & 0 & 1 & \frac{1}{2} & -\frac{1}{2} & \frac{1}{2}
\end{bmatrix}
\rightarrow_{{E_{1,2}}(-2)}
\begin{bmatrix}
1 & 0 & 0 & -\frac{3}{2} & 1 & -\frac{1}{2} \\
0 & 1 & 0 & 0 & -\frac{1}{4} & 0 \\
0 & 0 & 1 & \frac{1}{2} & -\frac{1}{2} & \frac{1}{2}
\end{bmatrix}
$$
Quindi:
$$
A^{-1} = \begin{bmatrix}
-\frac{3}{2} & 1 & -\frac{1}{2} \\
0 & -\frac{1}{4} & 0 \\
\frac{1}{2} & -\frac{1}{2} & \frac{1}{2}
\end{bmatrix}
$$
## Es 4.9
Sia $A$ la matrice reale
$$
A =
\begin{bmatrix}
1 & -2 & 0 \\
3k & 8+2k & k-1 \\
0 & 8k+8 & 0
\end{bmatrix}
$$
### a)
Calcolare il rango di $A$ al variare del parametro $k$.
$$
\begin{bmatrix}
1 & -2 & 0 \\
3k & 8+2k & k-1 \\
0 & 8k+8 & 0
\end{bmatrix}
\rightarrow_{E_{2,1}(-3k)}
\begin{bmatrix}
1 & -2 & 0 \\
0 & 8k+8 & k-1 \\
0 & 8k+8 & 0
\end{bmatrix}
\rightarrow_{E_{3,2}(-1)}
\begin{bmatrix}
1 & -2 & 0 \\
0 & 8k+8 & k-1 \\
0 & 0 & 1-k
\end{bmatrix}
$$
Se $k = 1$, allora $rg(A)=2$, idem per $k = -1$. Se invece $k \neq \pm 1$, allora $rg(A) = 3$

### b)
Esistono valori di $k$ per i quali la matrice è invertibile?

Il rango della matrice è massimo quando $k\neq \pm 1$.

## Es 4.10
Dato $k \in \mathbb{R}$, si considerino le seguenti matrici reali.
$$
A_{k} = 
\begin{bmatrix}
1 & 0 & 1 \\
k & 1 & 2 \\
0 & 2 & 1
\end{bmatrix},
\qquad
B =
\begin{bmatrix}
-1 & 0 & 1 \\
0 & -1 & 2 \\
0 & 1 & 0
\end{bmatrix}
$$
### a)
Stabilire per quali valori di $k$ la matrice $A_{k}$ è invertibile.
$$
\begin{bmatrix}
1 & 0 & 1 \\
k & 1 & 2 \\
0 & 2 & 1
\end{bmatrix}
\rightarrow_{E_{2,1}(-k)}
\begin{bmatrix}
1 & 0 & 1 \\
0 & 1 & 2-k \\
0 & 2 & 1
\end{bmatrix}
\rightarrow_{E_{3,2}(-2)}
\begin{bmatrix}
1 & 0 & 1 \\
0 & 1 & 2-k \\
0 & 0 & 2k-3
\end{bmatrix}
$$
$rg(A_{k}) = 2$ se $k = \frac{3}{2}$, $rg(A_{k}) = 3$, se $k \neq \frac{3}{2}$, Quindi la matrice è invertibile per $k \neq \frac{3}{2}$.

### b)
Trovare la matrice inversa di $A_{1}$, per $k = 1$.
$$
(A_{1} | I_{3}) =
\begin{bmatrix}
1 & 0 & 1 & 1 & 0 & 0 \\
1 & 1 & 2 & 0 & 1 & 0 \\
0 & 2 & 1 & 0 & 0 & 1
\end{bmatrix}
\rightarrow_{E_{2,1}(-1)}
\begin{bmatrix}
1 & 0 & 1 & 1 & 0 & 0 \\
0 & 1 & 1 & -1 & 1 & 0 \\
0 & 2 & 1 & 0 & 0 & 1
\end{bmatrix}
\rightarrow_{E_{3,2}(-2)}
\begin{bmatrix}
1 & 0 & 1 & 1 & 0 & 0 \\
0 & 1 & 1 & -1 & 1 & 0 \\
0 & 0 & -1 & 2 & -2 & 1
\end{bmatrix}
\rightarrow_{D_{3}(-1)}
\begin{bmatrix}
1 & 0 & 1 & 1 & 0 & 0 \\
0 & 1 & 1 & -1 & 1 & 0 \\
0 & 0 & 1 & -2 & 2 & -1
\end{bmatrix}
\rightarrow_{E_{2,3}(-1)}
\begin{bmatrix}
1 & 0 & 1 & 1 & 0 & 0 \\
0 & 1 & 0 & 1 & -1 & 1 \\
0 & 0 & 1 & -2 & 2 & -1
\end{bmatrix}
\rightarrow_{E_{1,3}(-1)}
\begin{bmatrix}
1 & 0 & 0 & 3 & -2 & 1 \\
0 & 1 & 0 & 1 & -1 & 1 \\
0 & 0 & 1 & -2 & 2 & -1
\end{bmatrix}
$$
Quindi:
$$
A^{-1}_{1} = \begin{bmatrix}
3 & -2 & 1 &  \\
1 & -1 & 1 \\
-2 & 2 & -1
\end{bmatrix}
$$
### c)
Risolvere l'equazione matriciale $A_{1}X + B = 0$, con $X$ matrice reale $3 \times 3$. 
$$
\begin{align}
A_{1}X + B &= 0 \\
A_{1}X & = -B \\
A_{1}^{-1}A_{1}X & = A^{-1}_{1}(-B) \\
X &= A_{1}^{-1}(-B)
\end{align}
$$
$$
X =
\begin{bmatrix}
3 & -2 & 1 &  \\
1 & -1 & 1 \\
-2 & 2 & -1
\end{bmatrix}
\begin{bmatrix}
1 & 0 & -1 \\
0 & 1 & -2 \\
0 & -1 & 0
\end{bmatrix}
=
\begin{bmatrix}
3 & -3 & 1 \\
1 & -2 & 1 \\
-2 & 3 & -2
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

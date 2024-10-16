## Es 3.1
Risolvere il seguente sistema non omogeneo:
$$
\begin{cases}
2x + 4y + 4z = 4 \\
x - z = 1 \\
-x + 3y + 4z = 2
\end{cases}
\qquad
\rightarrow
(A | b) = 
\begin{bmatrix}
2 & 4 & 4 & 4 \\
1 & 0 & -1 & 1 \\
-1 & 3 & 4 & 2
\end{bmatrix}
$$
Trasformo la matrice del sistema in una matrice a scalini:
$$
(A | b) = 
\begin{bmatrix}
2 & 4 & 4 & 4 \\
1 & 0 & -1 & 1 \\
-1 & 3 & 4 & 2
\end{bmatrix}
\rightarrow_{S_{1,2}}
\begin{bmatrix}
1 & 0 & -1 & 1 \\
2 & 4 & 4 & 4 \\
-1 & 3 & 4 & 2
\end{bmatrix}
\rightarrow_{E_{2,1}(-2)}
\begin{bmatrix}
1 & 0 & -1 & 1 \\
0 & 4 & 6 & 2 \\
-1 & 3 & 4 & 2
\end{bmatrix}
\rightarrow_{E_{3,1}(1)}
\begin{bmatrix}
1 & 0 & -1 & 1 \\
0 & 4 & 6 & 2 \\
0 & 3 & 3 & 3
\end{bmatrix}
$$
$$
\rightarrow_{D_{3}\left( \frac{1}{3} \right)}
\begin{bmatrix}
1 & 0 & -1 & 1 \\
0 & 4 & 6 & 2 \\
0 & 1 & 1 & 1
\end{bmatrix}
\rightarrow_{D_{2}\left( \frac{1}{2} \right)}
\begin{bmatrix}
1 & 0 & -1 & 1 \\
0 & 2 & 3 & 1 \\
0 & 1 & 1 & 1
\end{bmatrix}
\rightarrow_{S_{2, 3}}
\begin{bmatrix}
1 & 0 & -1 & 1 \\
0 & 1 & 1 & 1 \\
0 & 2 & 3 & 1
\end{bmatrix}
\rightarrow_{E_{3, 2}(-2)}
\begin{bmatrix}
1 & 0 & -1 & 1 \\
0 & 1 & 1 & 1 \\
0 & 0 & 1 & -1
\end{bmatrix}
$$
$$
\rightarrow_{E_{1, 3}(1)}
\begin{bmatrix}
1 & 0 & 0 & 0 \\
0 & 1 & 1 & 1 \\
0 & 0 & 1 & -1
\end{bmatrix}
\rightarrow_{E_{2, 3}(-1)}
\begin{bmatrix}
1 & 0 & 0 & 0 \\
0 & 1 & 0 & 2 \\
0 & 0 & 1 & -1
\end{bmatrix}
\rightarrow
\begin{cases}
x = 0 \\
y = 2 \\
z = -1
\end{cases}
$$
## Es 3.2
Risolvere il seguente sistema omogeneo:
$$
\begin{cases}
x + 2y + w = 0 \\
2x + 5y + 4z + 4w = 0 \\
3x+5y -6z+4w=0
\end{cases}
$$
Utilizzo la riduzione gaussiana:
$$
(A | b) = 
\begin{bmatrix}
1 & 2 & 0 & 1 & 0 \\
2 & 5 & 4 & 4 & 0 \\
3 & 5 & -6 & 4 & 0
\end{bmatrix}
\rightarrow_{E_{2,1}(-2)}
\begin{bmatrix}
1 & 2 & 0 & 1 & 0 \\
0 & 1 & 4 & 2 & 0 \\
3 & 5 & -6 & 4 & 0
\end{bmatrix}
\rightarrow_{E_{3,1}(-3)}
\begin{bmatrix}
1 & 2 & 0 & 1 & 0 \\
0 & 1 & 4 & 2 & 0 \\
0 & -1 & -6 & 1 & 0
\end{bmatrix}
\rightarrow_{E_{3,2}(1)}
\begin{bmatrix}
1 & 2 & 0 & 1 & 0 \\
0 & 1 & 4 & 2 & 0 \\
0 & 0 & -2 & 3 & 0
\end{bmatrix}
$$
$$
\rightarrow_{D_{3}\left( -\frac{1}{2} \right)}
\begin{bmatrix}
1 & 2 & 0 & 1 & 0 \\
0 & 1 & 4 & 2 & 0 \\
0 & 0 & 1 & -\frac{3}{2} & 0
\end{bmatrix}
\rightarrow_{E_{2,3}(-4)}
\begin{bmatrix}
1 & 2 & 0 & 1 & 0 \\
0 & 1 & 0 & 8 & 0 \\
0 & 0 & 1 & -\frac{3}{2} & 0
\end{bmatrix}
\rightarrow_{E_{1,2}(-2)}
\begin{bmatrix}
1 & 0 & 0 & -15 & 0 \\
0 & 1 & 0 & 8 & 0 \\
0 & 0 & 1 & -\frac{3}{2} & 0
\end{bmatrix}
\rightarrow
\begin{cases}
x - 15w = 0 \\
y + 8w = 0 \\
z - \frac{3}{2}w = 0
\end{cases}
\qquad \forall t \in \mathbb{R}
$$
Risolvo il sistema ponendo $w = t, t \in \mathbb{R}$.
$$
\begin{cases}
x = 15t \\
y = -8t \\
z = \frac{3}{2}t \\
w = t
\end{cases}
\qquad \forall t \in \mathbb{R}
$$
Abbiamo $\infty^{1}$ soluzioni: $Sol(Ax=0) = \left\{  \left( 15t, -8t, \frac{3}{2}t, t \right) | t \in \mathbb{R}  \right\}$

## Es 3.3
Si consideri il sistema di equazioni lineari:
$$
\begin{cases}
kx + ky + k^{2}z = 4 \\
x+y+kz=k \\
x+2y+3z=2k
\end{cases}
$$
### a)
Si dica per quali valori del parametro reale $k$ il sistema è compatibile.

Utilizzo la riduzione gaussiana per portarmi ad un sistema più semplice:

$$
\begin{bmatrix}
k & k & k^{2} & 4 \\
1 & 1 & k & k \\
1 & 2 & 3 & 2k
\end{bmatrix}
\rightarrow_{S_{1,3}}
\begin{bmatrix}
1 & 2 & 3 & 2k \\
1 & 1 & k & k \\
k & k & k^{2} & 4
\end{bmatrix}
\rightarrow_{E_{3,2}(-k)}
\begin{bmatrix}
1 & 2 & 3 & 2k \\
1 & 1 & k & k \\
0 & 0 & 0 & 4 - k^{2}
\end{bmatrix}
\rightarrow_{E_{2,1}(-1)}
\begin{bmatrix}
1 & 2 & 3 & 2k \\
0 & -1 & k-3 & -k \\
0 & 0 & 0 & 4 - k^{2}
\end{bmatrix}
$$
Risulta che abbiamo un pivot nell'ultima colonna, ovvero $rg(A) \neq rg(A | b)$. Ciò significa che il sistema non è compatibile se e solo se $4-k^{2} \neq 0$.
Il che significa che se $4-k^{2} = 0$ allora il sistema ha soluzioni ($k = \pm 2$).

### b)
Esistono valori di $k$ per i quali il sistema ha infinite soluzioni? In tali casi determinare le soluzioni.

Bisogna vedere se nei casi in cui il sistema è compatibile esso ha uniche o infinite soluzioni:

Nel caso di $k = 2$:
$$
\begin{bmatrix}
1 & 2 & 3 & 4 \\
0 & -1 & -1 & -2 \\
0 & 0 & 0 & 0
\end{bmatrix}
\rightarrow_{D_{2}(-1)}
\begin{bmatrix}
1 & 2 & 3 & 4 \\
0 & 1 & 1 & 2 \\
0 & 0 & 0 & 0
\end{bmatrix}
\rightarrow_{E_{1,2}(-2)}
\begin{bmatrix}
1 & 0 & 1 & 0 \\
0 & 1 & 1 & 2 \\
0 & 0 & 0 & 0
\end{bmatrix}
$$
Da cui il sistema:
$$
\begin{cases}
x + z = 0 \\
y + z = 2
\end{cases}
\qquad
\begin{cases}
x = -t \\
y = 2 - t \\
z = t
\end{cases}
\qquad
\forall t \in \mathbb{R}
$$
Dove $z$ è una variabile libera.
Quindi si hanno $\infty^{1}$ soluzioni: $Sol(Ax = b) = \{ (-t, 2-t, t) | t \in \mathbb{R}\}$ 

Nel caso di $k = -2$:
$$
\begin{bmatrix}
1 & 2 & 3 & -4 \\
0 & -1 & -5 & 2 \\
0 & 0 & 0 & 0
\end{bmatrix}
\rightarrow_{E_{1,2}\left( 2 \right)} 
\begin{bmatrix}
1 & 0 & -7 & 0 \\
0 & -1 & -5 & 2 \\
0 & 0 & 0 & 0
\end{bmatrix}
$$
Da cui il sistema:
$$
\begin{cases}
x - 7z = 0 \\
-y -5z = 2
\end{cases}
\qquad
\begin{cases}
x = 7t \\
y = -2 - 5t \\
z = t
\end{cases}
\qquad
\forall t \in \mathbb{R}
$$
Dove $z$ è una variabile libera.
Quindi si hanno $\infty^{1}$ soluzioni: $Sol(Ax = b) = \{ (7t, -2-5t, t) | t \in \mathbb{R}\}$.

## Es 3.4
Risolvere il seguente sistema, al variare del parametro reale $k$.
$$
\begin{cases}
x+2w=1 \\
x+y+3z+2w = 1 \\
2x+y+(k+2)z+4w = 2 \\
x+y+3z+(k^{2}-k+2)w = k
\end{cases}
$$
Riportiamo il sistema a una forma più semplice con la riduzione gaussiana:
$$
\begin{bmatrix}
1 & 0 & 0 & 2 & 1 \\
1 & 1 & 3 & 2 & 1 \\
2 & 1 & k+2 & 4 & 2 \\
1 & 1 & 3 & k^{2}-k+2 & k
\end{bmatrix}
\rightarrow_{E_{2,1}(-1)}
\begin{bmatrix}
1 & 0 & 0 & 2 & 1 \\
0 & 1 & 3 & 0 & 0 \\
2 & 1 & k+2 & 4 & 2 \\
1 & 1 & 3 & k^{2}-k+2 & k
\end{bmatrix}
\rightarrow_{E_{3,1}(-2)}
\begin{bmatrix}
1 & 0 & 0 & 2 & 1 \\
0 & 1 & 3 & 0 & 0 \\
0 & 1 & k+2 & 0 & 0 \\
1 & 1 & 3 & k^{2}-k+2 & k
\end{bmatrix}
\rightarrow_{E_{4,1}(-1)}
\begin{bmatrix}
1 & 0 & 0 & 2 & 1 \\
0 & 1 & 3 & 0 & 0 \\
0 & 1 & k+2 & 0 & 0 \\
0 & 1 & 3 & k^{2}-k & k - 1
\end{bmatrix}
$$
$$
\rightarrow_{E_{3,2}(-1)}
\begin{bmatrix}
1 & 0 & 0 & 2 & 1 \\
0 & 1 & 3 & 0 & 0 \\
0 & 0 & k-1 & 0 & 0 \\
0 & 1 & 3 & k^{2}-k & k - 1
\end{bmatrix}
\rightarrow_{E_{4,2}(-1)}
\begin{bmatrix}
1 & 0 & 0 & 2 & 1 \\
0 & 1 & 3 & 0 & 0 \\
0 & 0 & k-1 & 0 & 0 \\
0 & 0 & 0 & k(k-1) & k - 1
\end{bmatrix}
$$
Notiamo che al variare di $k$ cambia la compatibilità del sistema.
Il sistema è impossibile quando $k(k-1) = 0$ e $k - 1 \neq 0$, ovvero quando $k = 0$.

Se $k \neq 0$ e $k(k-1) = k - 1 = 0$, quindi quando $k = 1$, allora il sistema diventa:
$$
\begin{bmatrix}
1 & 0 & 0 & 2 & 1 \\
0 & 1 & 3 & 0 & 0 \\
0 & 0 & 0 & 0 & 0 \\
0 & 0 & 0 & 0 & 0
\end{bmatrix}
\rightarrow
\begin{cases}
x + 2w = 1 \\
y + 3z = 0
\end{cases}
$$
In questo caso $n - rg(A) = 2$, quindi abbiamo due variabili libere, $z$ e $w$.
La soluzione del sistema è:
$$
\begin{cases}
x + 2w = 1 \\
y + 3z = 0 \\
z = t \\
w = s
\end{cases}
\qquad
\begin{cases}
x = 1 - 2s \\
y = -3t \\
z = t \\
w = s
\end{cases}
\qquad
\forall t,s \in \mathbb{R}
$$
Dunque si hanno $\infty^{2}$ soluzioni reali descrivibili nel seguente modo:
$$
\begin{align}
Sol(Ax = b) &= \{ (1-2s, -3t, t, s) | t,s \in \mathbb{R}\} \\
&= \{ (1,0,0,0) + s(-2, 0, 0, 1) + t(0, -3, 1, 0) \}
\end{align}
$$
Quando $k \neq 0$ e $k \neq 1$ allora si ha che:
$$
\begin{cases}
x + 2w = 1 \\
y + 3z = 0 \\
(k - 1)z = 0 \\
k(k - 1)w = (k - 1)
\end{cases}
\qquad
\begin{cases}
x = 1 - \frac{2}{k} \\
y = 0 \\
z = 0 \\
w = \frac{1}{k}
\end{cases}
\qquad
\begin{cases}
x = \frac{2 - k}{2} \\
y = 0 \\
z = 0 \\
w = \frac{1}{k}
\end{cases}
$$
Dunque:
$$
Sol(Ax | b) = \left\{  \left( \frac{2-k}{k}, 0, 0, \frac{1}{k} \right) \bigg\rvert  k \in \mathbb{R}, k \neq 0 \text{ e } k\neq 1 \right\}
$$
## Es 3.5
Determinare per quali valori del parametro reale $t$ il sistema $Ax = b$ è compatibile. In tali casi determinare esplicitamente le soluzioni.
$$
A = \begin{bmatrix}
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
(A | b) = \begin{bmatrix}
-1 & 3 & 0 & 2 \\
1 & 2 & -1 & 1 \\
0 & 0 & 2t+1 & 5
\end{bmatrix}
\rightarrow_{E_{2,1}(1)}
\begin{bmatrix}
-1 & 3 & 0 & 2 \\
0 & 5 & -1 & 3 \\
0 & 0 & 2t+1 & 5
\end{bmatrix}
$$
Prima di procedere bisogna analizzare il comportamento del parametro: abbiamo che $2t + 1 \neq 0$, perché se così fosse allora $rg(A) \neq rg(A|b)$. Perciò $t \neq -\frac{1}{2}$.
Il sistema che si ricava è:
$$
\begin{cases}
-x+3y=2 \\
5y-z=3 \\
(2t+1)z = 5
\end{cases}
\qquad
\begin{cases}
x = \frac{18t+24-20t-10}{5(2t + 1)} \\
y = \frac{6t+8}{5(2t + 1)} \\
z = \frac{5}{2t+1}
\end{cases}
\qquad
\begin{cases}
x = \frac{-2t+14}{5(2t + 1)} \\
y = \frac{6t+8}{5(2t + 1)} \\
z = \frac{5}{2t+1}
\end{cases}
$$
Quindi $Sol(Ax = b) = \left\{ \left(\frac{-2t+14}{5(2t + 1)}, \frac{6t+8}{5(2t + 1)}, \frac{5}{2t+1} \right) \big\rvert t \in \mathbb{R}, t \neq-\frac{1}{2}\right\}$.

## Es 3.6
Si dica per quali valori di $k$ il sistema di equazioni lineari:
$$
\begin{cases}
x+y=1 \\
kx+y+z=1-k \\
y + (1-k)z = 1
\end{cases}
$$
ammette un'unica soluzione. In tale caso trovare la soluzione.

Riduciamo il sistema ad una forma più semplice:
$$
\begin{bmatrix}
1 & 1 & 0 & 1 \\
k & 1 & 1 & 1-k \\
0 & 1 & 1-k & 1
\end{bmatrix}
\rightarrow_{E_{2,1}(-k)}
\begin{bmatrix}
1 & 1 & 0 & 1 \\
0 & 1-k & 1 & 1-2k \\
0 & 1 & 1-k & 1
\end{bmatrix}
\rightarrow_{S_{2},3}
\begin{bmatrix}
1 & 1 & 0 & 1 \\
0 & 1 & 1-k & 1 \\
0 & 1-k & 1 & 1-2k
\end{bmatrix}
\rightarrow_{E_{3, 2}(k)}
\begin{bmatrix}
1 & 1 & 0 & 1 \\
0 & 1 & 1-k & 1 \\
0 & 1 & 1+k-k^{2} & 1-k
\end{bmatrix}
\rightarrow_{E_{3, 2}(-1)}
\begin{bmatrix}
1 & 1 & 0 & 1 \\
0 & 1 & 1-k & 1 \\
0 & 0 & 2k-k^{2} & -k
\end{bmatrix}
$$
Perché il sistema sia compatibile si ha che $2k-k^{2} \neq 0$:
$$
k(2 - k) \neq 0
$$
Quindi se $k\neq 0$ e $k \neq 2$ vi sono delle soluzioni:
$$
\begin{cases} 
x + y = 1\\
y + (1-k)z = 1 \\
k(2-k)z = -k
\end{cases}
\qquad
\begin{cases} 
x + y = 1\\
y + (1-k)z = 1 \\
z = -\frac{1}{2- k}
\end{cases}
\qquad
\begin{cases} 
x + y = 1\\
y = 1 + \frac{1-k}{2-k}\\
z = -\frac{1}{2- k}
\end{cases}
\qquad
\begin{cases} 
x = \frac{1-k}{2-k} \\
y = 1 + \frac{1-k}{2-k} \\
z = -\frac{1}{2- k}
\end{cases}
$$
Sia dunque che se $Sol(Ax = b) = \left\{  \frac{1-k}{2-k}, 1 + \frac{1-k}{2-k}, -\frac{1}{2-k} \big\rvert k \in \mathbb{R}, k \neq 0 \text{ e } k \neq 2 \right\}$

## Es 3.7
Si consideri il sistema di equazioni lineari:
$$
\begin{cases}
2x_{1}-x_{2}=k \\
x_{1}-x_{2}-x_{3} = 0 \\
x_{1}-kx_{2}+kx_{3} = k
\end{cases}
$$
### a) 
Si dica per quali valori di $k$ il sistema è compatibile e quando ha infinite soluzioni. 

Riduciamo il sistema ad una forma più semplice:
$$
\begin{bmatrix}
2 & -1 & 0 & k \\
1 & -1 & -1 & 0 \\
1 & -k & k & k
\end{bmatrix}
\rightarrow_{S_{1,2}}
\begin{bmatrix}
1 & -1 & -1 & 0 \\
2 & -1 & 0 & k \\
1 & -k & k & k
\end{bmatrix}
\rightarrow_{E_{2,1}(-2)}
\begin{bmatrix}
1 & -1 & -1 & 0 \\
0 & 1 & 2 & k \\
1 & -k & k & k
\end{bmatrix}
$$
$$
\rightarrow_{E_{3,1}(-1)}
\begin{bmatrix}
1 & -1 & -1 & 0 \\
0 & 1 & 2 & k \\
0 & -k+1 & k+1 & k
\end{bmatrix}
\rightarrow_{E_{3,2}(k)}
\begin{bmatrix}
1 & -1 & -1 & 0 \\
0 & 1 & 2 & k \\
0 & 1 & 3k+1 & k(k+1)
\end{bmatrix}
\rightarrow_{E_{3,2}(-1)}
\begin{bmatrix}
1 & -1 & -1 & 0 \\
0 & 1 & 2 & k \\
0 & 0 & 3k-1 & k^{2}
\end{bmatrix}
$$
Se sia $3k-1 = 0$ sia $k^{2} = 0$ allora il sistema ha infinite soluzioni, ma non esiste alcun $k \in \mathbb{R}$ tale che tale condizioni si verifichi:
Ipotizziamo per assurdo che esista tale $k$.
Se così fosse se ne può ricavare il valore ponendo le due condizioni a sistema:
$$
\begin{cases}
3k - 1 = 0 \\
k^{2} = 0
\end{cases}
\qquad
\begin{cases}
k = \frac{1}{3} \\
\frac{1}{9} = 0
\end{cases}
$$
Ciò è assurdo.
Invece se $rg(A) \neq rg(A | b)$, ovvero $3k - 1 = 0$ e $k^{2} \neq 0$, quindi quando $k = \frac{1}{3}$, il sistema non è compatibile.
### b) 
Per i valori di $k$ che rendono il sistema compatibile, trovare le sue soluzioni.

Per tutti i valori di $k \neq \frac{1}{3}$ si ha che:
$$
\begin{bmatrix}
1 & -1 & -1 & 0 \\
0 & 1 & 2 & k \\
0 & 0 & 3k-1 & k^{2}
\end{bmatrix}
\rightarrow_{D_{3}(3k-1)}
\begin{bmatrix}
1 & -1 & -1 & 0 \\
0 & 1 & 2 & k \\
0 & 0 & 1 & \frac{k^{2}}{3k-1}
\end{bmatrix}
$$
$$
\rightarrow_{E_{2, 3}(-2)}
\begin{bmatrix}
1 & -1 & -1 & 0 \\
0 & 1 & 0 & \frac{k^{2}-k}{3k-1} \\
0 & 0 & 1 & \frac{k^{2}}{3k-1}
\end{bmatrix}
\rightarrow_{E_{1,3}(1)}
\begin{bmatrix}
1 & -1 & 0 & \frac{k^{2}}{3k-1} \\
0 & 1 & 0 & \frac{k^{2}-k}{3k-1} \\
0 & 0 & 1 & \frac{k^{2}}{3k-1}
\end{bmatrix}
\rightarrow_{E_{1, 2}(1)}
\begin{bmatrix}
1 & 0 & 0 & \frac{2k^{2}-k}{3k-1} \\
0 & 1 & 0 & \frac{k^{2}-k}{3k-1} \\
0 & 0 & 1 & \frac{k^{2}}{3k-1}
\end{bmatrix}
$$
Dunque nel caso $k \neq 0$ si ha che: $Sol(Ax = b) = \left\{  \frac{k}{3k-1}(2k-1, k-1, k) | k \in \mathbb{R}, k \neq \frac{1}{3} \right\}$

## Es 3.8
Si consideri il sistema lineare $Ax = b$ con matrice dei coefficienti $A$ e vettore dei termini noti $b$, dipendenti dal parametro reale $k$, così definiti:
$$
A = \begin{bmatrix}
1 & -1 & 0 \\
1 & 1 & -1 \\
0 & 2 & k+1 \\
1 & -1 & 0
\end{bmatrix}
\qquad
b = \begin{bmatrix}
1 \\
1 \\
k \\
1+2k
\end{bmatrix}
$$
### a)
Si trovino (se esistono) i valori di $k$ per i quali il sistema $Ax = b$ ha soluzione unica.
$$
(A | b) = 
\begin{bmatrix}
1 & -1 & 0 & 1 \\
1 & 1 & -1 & 1 \\
0 & 2 & k+1 & k \\
1 & -1 & 0 & 1+2k
\end{bmatrix}
\rightarrow_{E_{2,1}(-1)}
\begin{bmatrix}
1 & -1 & 0 & 1 \\
0 & 2 & -1 & 0 \\
0 & 2 & k+1 & k \\
1 & -1 & 0 & 1+2k
\end{bmatrix}
\rightarrow_{E_{4,1}(-1)}
\begin{bmatrix}
1 & -1 & 0 & 1 \\
0 & 2 & -1 & 0 \\
0 & 2 & k+1 & k \\
0 & 0 & 0 & 2k
\end{bmatrix}
$$
Purché il sistema sia compatibile si ha che $k = 0$.
Dunque riscriviamo la matrice completa sostituendo $k$ con $0$.
$$
\begin{bmatrix}
1 & -1 & 0 & 1 \\
0 & 2 & -1 & 0 \\
0 & 2 & 1 & 0 \\
0 & 0 & 0 & 0
\end{bmatrix}
\rightarrow_{E_{3,2}(-1)}
\begin{bmatrix}
1 & -1 & 0 & 1 \\
0 & 2 & -1 & 0 \\
0 & 0 & 2 & 0 \\
0 & 0 & 0 & 0
\end{bmatrix}
\rightarrow_{E_{2,3}\left( \frac{1}{2} \right)}
\begin{bmatrix}
1 & -1 & 0 & 1 \\
0 & 2 & 0 & 0 \\
0 & 0 & 2 & 0 \\
0 & 0 & 0 & 0
\end{bmatrix}
$$
$$
\rightarrow_{D_{2}\left( \frac{1}{2} \right)}
\begin{bmatrix}
1 & -1 & 0 & 1 \\
0 & 1 & 0 & 0 \\
0 & 0 & 2 & 0 \\
0 & 0 & 0 & 0
\end{bmatrix}
\rightarrow_{D_{3}\left( \frac{1}{2} \right)}
\begin{bmatrix}
1 & -1 & 0 & 1 \\
0 & 1 & 0 & 0 \\
0 & 0 & 1 & 0 \\
0 & 0 & 0 & 0
\end{bmatrix}
\rightarrow_{E_{1,2}(1)}
\begin{bmatrix}
1 & 0 & 0 & 1 \\
0 & 1 & 0 & 0 \\
0 & 0 & 1 & 0 \\
0 & 0 & 0 & 0
\end{bmatrix}
$$
Il sistema assume un'unica soluzione $(1, 0, 0)$ per $k = 0$.

### b)
Per i valori trovati in a), si determino le soluzioni a tale sistema.

## Es 3.9
Dato il seguente sistema lineare:
$$
\begin{cases}
x+y+z=k \\
kx+y+2z=1 \\
x+ky+3z=1
\end{cases}
$$
stabilire:
### a)
per quali valori di $k \in \mathbb{R}$ ammette soluzioni e non ammette soluzioni.

Riduco il sistema ad una forma più semplice:
$$
\begin{bmatrix}
1 & 1 & 1 & k \\
k & 1 & 2 & 1 \\
1 & k & 3 & 1
\end{bmatrix}
\rightarrow_{E_{3,1}(-1)}
\begin{bmatrix}
1 & 1 & 1 & k \\
k & 1 & 2 & 1 \\
0 & k-1 & 2 & 1-k
\end{bmatrix}
$$
$$
\rightarrow_{S_{2,3}}
\begin{bmatrix}
1 & 1 & 1 & k \\
0 & k-1 & 2 & 1-k \\
k & 1 & 2 & 1
\end{bmatrix}
\rightarrow_{E_{3,1}(-k)}
\begin{bmatrix}
1 & 1 & 1 & k \\
0 & k-1 & 2 & 1-k \\
0 & 1-k & 2-k & 1-k^{2}
\end{bmatrix}
\rightarrow_{E_{3,2}(1)}
\begin{bmatrix}
1 & 1 & 1 & k \\
0 & k-1 & 2 & 1-k \\
0 & 0 & 4 - k & -k^{2}-k+2
\end{bmatrix}
$$
Il sistema non è compatibile se $rg(A) \neq rg(A|b)$, ovvero quando $4-k = 0$ e $-k^{2}-k+2 \neq 0$.
$$
\begin{cases}
4-k=0 \\
-k^{2}-k+2\neq 0
\end{cases}
\qquad
\begin{cases}
k = 4 \\
-18 \neq 0
\end{cases}
$$
Dunque se $k = 4$ il sistema non ammette soluzioni.

Invece quando $k - 1 = 0$, ovvero quando $k = 1$, si ha che $rg(A) = rg(A | b) = 2$, mentre $n = 3$. Il che vuol dire che quando $k = 1$ il sistema ha $\infty^{1}$ soluzioni.
Per ogni $k \neq 1,4$ il sistema ammette un'unica soluzione.

### b)
qual è l'insieme delle soluzioni nei casi in cui le ammette.

Se $k \neq 1, 4$ allora:
$$
\begin{bmatrix}
1 & 1 & 1 & k \\
0 & k-1 & 2 & 1-k \\
0 & 0 & 4 - k & -k^{2}-k+2
\end{bmatrix}
\rightarrow
\begin{cases}
x+y+z=k \\
(k-1)y+2z=1-k \\
(4-k)z=-k^{2}-k+2
\end{cases}
\qquad
$$
$$
\begin{cases}
x + y =k -\frac{(k + 2)(1 - k)}{4-k} \\ 
(k-1)y = 1-k-2\left(\frac{(k + 2)(1 - k)}{4-k} \right) \\
z = \frac{(k + 2)(1 - k)}{4-k}
\end{cases}
\qquad
\begin{cases}
x + y =k -\frac{(k + 2)(1 - k)}{4-k} \\ 
(k-1)y = \left(\frac{(4-k)-(4k-k^{2})+2(k + 2)(k - 1)}{4-k} \right) \\
z = \frac{(k + 2)(1 - k)}{4-k}
\end{cases}
$$
$$
\begin{cases}
x + y =k -\frac{(k + 2)(1 - k)}{4-k} \\ 
(k-1)y = \left(\frac{3(k^{2}-k)}{4-k} \right) \\
z = \frac{(k + 2)(1 - k)}{4-k}
\end{cases}
\qquad
\begin{cases}
x = -\frac{3k}{4-k} + k -\frac{(k + 2)(1 - k)}{4-k} \\ 
y = \frac{3k}{4-k} \\
z = \frac{(k + 2)(1 - k)}{4-k}
\end{cases}
\qquad
\begin{cases}
x = \frac{-3k+4k-k^{2}+k^{2}+k-2}{4-k} \\ 
y = \frac{3k}{4-k} \\
z = \frac{(k + 2)(1 - k)}{4-k}
\end{cases}
\qquad
\begin{cases}
x = \frac{2(k-1)}{4-k} \\ 
y = \frac{3k}{4-k} \\
z = \frac{(k + 2)(1 - k)}{4-k}
\end{cases}
$$
Se $k = 1$ allora:
$$
\begin{bmatrix}
1 & 1 & 1 & 1 \\
0 & 0 & 2 & 0 \\
0 & 0 & 3 & 0
\end{bmatrix}
\rightarrow
\begin{cases}
x+y+z = 1 \\
2z = 0 \\
3z = 0 \\
\end{cases}
\qquad
\begin{cases}
x = 1 - t \\
y = t \\
z = 0
\end{cases}
\qquad \forall t \in \mathbb{R}
$$
In questo caso $y$ è una variabile libera.
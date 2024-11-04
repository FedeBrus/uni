## Es 1

Sia $V = \langle v_{1}, v_{2}, v_{3}\rangle$ il sottospazio di $\mathbb{R}^{4}$ generato dai vettori $v_{1} = (k, 0, 0, 1), v_{2} = (2, 0, 0, 0), v_{3} = (2, 0, k, 0)$ (k parametro reale). 

### a) 
Trovare una base di $V$ al variare del parametro $k$. 

Sappiamo che $v_{1},v_{2},v_{3}$ generano l'intero insieme $V$, quindi rimane da verificare la loro indipendenza lineare:
$$
\begin{bmatrix}
k & 2 & 2 \\
0 & 0 & 0 \\
0 & 0 & k \\
1 & 0 & 0
\end{bmatrix}
\rightarrow_{S_{3,1}}
\begin{bmatrix}
1 & 0 & 0 \\
0 & 0 & 0 \\
0 & 0 & k \\
k & 2 & 2
\end{bmatrix}
\rightarrow_{E_{1,3}(-k)}
\begin{bmatrix}
1 & 0 & 0 \\
0 & 0 & 0 \\
0 & 0 & k \\
0 & 2 & 2
\end{bmatrix}
\rightarrow _{S_{2,4}}
\begin{bmatrix}
1 & 0 & 0 \\
0 & 2 & 2 \\
0 & 0 & k \\
0 & 0 & 0 \\
\end{bmatrix}
\rightarrow D_{2\left( \frac{1}{2} \right)}
\begin{bmatrix}
1 & 0 & 0 \\
0 & 1 & 1 \\
0 & 0 & k \\
0 & 0 & 0 \\
\end{bmatrix}
$$
I tre vettori sono linearmente indipendenti nel momento in cui $k \neq 0$, perché in tal caso si annullerebbe il pivot e $rg(A) = 2$.
Distinguiamo i seguenti casi:
Se $k = 0$:
$$
\begin{bmatrix}
1 & 0 & 0 \\
0 & 1 & 1 \\
0 & 0 & 0 \\
0 & 0 & 0 \\
\end{bmatrix}
$$
Una base di $V$ è $\mathcal{B} = \{ v_{1},v_{2} \}$.

Se $k \neq 0$:
$$
\begin{bmatrix}
1 & 0 & 0 \\
0 & 1 & 1 \\
0 & 0 & k \\
0 & 0 & 0 \\
\end{bmatrix}
\rightarrow_{D_{3}\left( \frac{1}{k} \right)}
\begin{bmatrix}
1 & 0 & 0 \\
0 & 1 & 1 \\
0 & 0 & 1 \\
0 & 0 & 0 \\
\end{bmatrix}
\rightarrow_{E_{2,3}(-1)}
\begin{bmatrix}
1 & 0 & 0 \\
0 & 1 & 0 \\
0 & 0 & 1 \\
0 & 0 & 0 \\
\end{bmatrix}
$$
Una base di $V$ è $\mathcal{B} = \{ v_{1}, v_{2}, v_{3} \}$.
### b)
Posto $k = 0$, completare la base trovata al punto precedente ad una base di $\mathbb{R}^{4}$. 

Per estende la base trovata ad una base di $\mathbb{R}^{4}$ accostiamo la base canonica alla matrice di partenza e riduciamo a scalini tale matrice.
$$
\begin{bmatrix}
0 & 2 & 2 & 1 & 0 & 0 & 0 \\
0 & 0 & 0 & 0 & 1 & 0 & 0 \\
0 & 0 & 0 & 0 & 0 & 1 & 0 \\
1 & 0 & 0 & 0 & 0 & 0 & 1 
\end{bmatrix}
\rightarrow S_{1, 4}
\begin{bmatrix}
1 & 0 & 0 & 0 & 0 & 0 & 1 \\
0 & 0 & 0 & 0 & 1 & 0 & 0 \\
0 & 0 & 0 & 0 & 0 & 1 & 0 \\
0 & 2 & 2 & 1 & 0 & 0 & 0
\end{bmatrix}
\rightarrow_{S_{2, 4}}
\begin{bmatrix}
1 & 0 & 0 & 0 & 0 & 0 & 1 \\
0 & 2 & 2 & 1 & 0 & 0 & 0 \\
0 & 0 & 0 & 0 & 0 & 1 & 0 \\
0 & 0 & 0 & 0 & 1 & 0 & 0
\end{bmatrix}
\rightarrow_{S_{3,4}}
\begin{bmatrix}
1 & 0 & 0 & 0 & 0 & 0 & 1 \\
0 & 2 & 2 & 1 & 0 & 0 & 0 \\
0 & 0 & 0 & 0 & 1 & 0 & 0 \\
0 & 0 & 0 & 0 & 0 & 1 & 0
\end{bmatrix}
\rightarrow_{D_{\frac{1}{2}}}
\begin{bmatrix}
1 & 0 & 0 & 0 & 0 & 0 & 1 \\
0 & 1 & 1 & \frac{1}{2} & 0 & 0 & 0 \\
0 & 0 & 0 & 0 & 1 & 0 & 0 \\
0 & 0 & 0 & 0 & 0 & 1 & 0
\end{bmatrix}
$$
Dunque la base estesa è $\mathcal{B} = \{ v_{1},v_{2},e_{2},e_{3} \}$
### c) 
Stabilire per quali valori di $k$ il vettore $w = (−3, 0, −1, 1)$ appartiene a $V$.
$$
\begin{bmatrix}
k & 2 & 2 & -3 \\
0 & 0 & 0 & 0 \\
0 & 0 & k & -1 \\
1 & 0 & 0 & 1
\end{bmatrix}
\rightarrow
\begin{cases}
\lambda k + 2\mu+ 2\nu = -3 \\
0 = 0 \\
\nu k = -1 \\
\lambda = 1
\end{cases}
\qquad
\begin{cases}
k + 2\mu+ 2\nu = -3 \\
0 = 0 \\
\nu k = -1 \\
\lambda = 1
\end{cases}
\qquad
\begin{cases}
k + 2\mu - \frac{2}{k} = -3 \\
0 = 0 \\
\nu = -\frac{1}{k} \\
\lambda = 1
\end{cases}
\qquad
\begin{cases}
\mu  = -\frac{3}{2}+\frac{1}{k}-\frac{k}{2} \\
0 = 0 \\
\nu = -\frac{1}{k} \\
\lambda = 1
\end{cases}
$$
Dunque $w \in V, \qquad \forall k \in \mathbb{R}, k \neq 0$ 

## Es 2
Si considerino i vettori di $\mathbb{R}^{3}: v_{1} = (1, 2, 1), v_{2} = (1, 1, −1), v_{3} = (1, 1, 3), w_{1} = (2, 3, −1), w_{2} = (1, 2, 2), w_{3} = (1, 1, −3)$. 
### a) 
Si calcoli la dimensione dei sottospazi $V = \langle v_{1}, v_{2}, v_{3} \rangle,  W = \langle w_{1}, w_{2}, w_{3}\rangle$. 

Per calcolare la dimensione del sottospazio $V$ vediamo quali vettori sono linearmente indipendenti:
$$
\begin{bmatrix}
1 & 1 & 1 \\
2 & 1 & 1 \\
1 & -1 & 3
\end{bmatrix}
\rightarrow_{E_{2,1}(-2)}
\begin{bmatrix}
1 & 1 & 1 \\
0 & -1 & -1 \\
1 & -1 & 3
\end{bmatrix}
\rightarrow _{E_{3,1}(-1)}
\begin{bmatrix}
1 & 1 & 1 \\
0 & -1 & -1 \\
0 & -2 & 2
\end{bmatrix}
\rightarrow_{E_{3,2}(-2)}
\begin{bmatrix}
1 & 1 & 1 \\
0 & -1 & -1 \\
0 & 0 & 4
\end{bmatrix}
\rightarrow_{D_{3}\left( \frac{1}{4} \right)}
\begin{bmatrix}
1 & 1 & 1 \\
0 & -1 & -1 \\
0 & 0 & 1
\end{bmatrix}
\rightarrow_{D_{2}(-1)}
\begin{bmatrix}
1 & 1 & 1 \\
0 & 1 & 1 \\
0 & 0 & 1
\end{bmatrix}
$$
$rg(A) = 3$, quindi tutti i vettori sono linearmente indipendenti, dunque $dim(V) = 3$.

Per calcolare la dimensione del sottospazio $W$ vediamo quali vettori sono linearmente indipendenti:
$$
\begin{bmatrix}
2 & 1 & 1 \\
3 & 2 & 1 \\
-1 & 2 & -3
\end{bmatrix}
\rightarrow_{E_{2,1}\left( -\frac{3}{2} \right)}
\begin{bmatrix}
2 & 1 & 1 \\
0 & \frac{1}{2} & -\frac{1}{2} \\
-1 & 2 & -3
\end{bmatrix}
\rightarrow_{E_{3,1}\left( \frac{1}{2} \right)}
\begin{bmatrix}
2 & 1 & 1 \\
0 & \frac{1}{2} & -\frac{1}{2} \\
0 & \frac{5}{2} & -\frac{5}{2}
\end{bmatrix}
\rightarrow_{E_{3,2}(-5)}
\begin{bmatrix}
2 & 1 & 1 \\
0 & \frac{1}{2} & -\frac{1}{2} \\
0 & 0 & 0
\end{bmatrix}
$$
$rg(A) = 2$, quindi solo i vettori $w_{1}, w_{2}$ sono linearmente indipendenti, dunque $dim(V) = 2$.

### b) 
Si trovi una base del sottospazio intersezione $V \cap W$.

Per procedere dobbiamo individuare il sottospazio $V \cap W$. Risolviamo il sistema:
$$
\begin{bmatrix}
1 & 1 & 1 & -2 & -1 & -1 & 0 \\
2 & 1 & 1 & -3 & -2 & -1 & 0 \\
1 & -1 & 3 & 1 & -2 & 3 & 0
\end{bmatrix}
$$

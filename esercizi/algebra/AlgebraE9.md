## Es 9.1
Sia $T : \mathbb{R}^{2}\rightarrow \mathbb{R}^{3}$ l’applicazione definita da $T (x, y) = (2x, x − y, 2y)$, e siano $\mathcal{B} = ((1, 0), (1, 1) )$ e $\mathcal{B}' = ((1, 1, 0), (0, 1, 1), (0, 0, 2))$ due basi di $\mathbb{R}^{2}$ e $\mathbb{R}^{3}$ rispettivamente. Determinare la matrice $A = M_{\mathcal{B}}^{\mathcal{B}'} (T)$ associata a $T$ rispetto alle basi $\mathcal{B}$ e $\mathcal{B}'$.

Il primo passo consiste nell'applicare la trasformazione $T$ a ciascun vettore della base $\mathcal{B}$.
$$
\begin{align}
T(1,0)  & = (2, 1, 0) \\
T(1,1) & = (2, 0, 2)
\end{align}
$$
Il secondo passo consiste nel riscrivere i due vettori trovati secondo la base $\mathcal{B}'$.
$$
\begin{bmatrix}
1 & 0 & 0 & 2 & 2 \\
1 & 1 & 0 & 1 & 0 \\
0 & 1 & 2 & 0 & 2
\end{bmatrix}
\rightarrow_{E_{2,1}(-1)}
\begin{bmatrix}
1 & 0 & 0 & 2 & 2 \\
0 & 1 & 0 & -1 & -2 \\
0 & 1 & 2 & 0 & 2
\end{bmatrix}
\rightarrow_{E_{3,2}(-1)}
\begin{bmatrix}
1 & 0 & 0 & 2 & 2 \\
0 & 1 & 0 & -1 & -2 \\
0 & 0 & 2 & 1 & 4
\end{bmatrix}
\rightarrow_{D_{3}\left( \frac{1}{2} \right)}
\begin{bmatrix}
1 & 0 & 0 & 2 & 2 \\
0 & 1 & 0 & -1 & -2 \\
0 & 0 & 1 & \frac{1}{2} & 2
\end{bmatrix}
$$
Il terzo passo consiste nel creare una matrice avente i vettori trovati come colonna:
$$
A = \begin{bmatrix}
2 & 2 \\
-1 & -2 \\
\frac{1}{2} & 2
\end{bmatrix}
$$
## Es 9.2
Sia $S:\mathbb{R}^{3} \rightarrow \mathbb{R} ^{3}$ la funzione lineare associata a:
$$
\begin{bmatrix}
0 & 0 & 0 \\
0 & 0 & 1 \\
1 & 2 & 3
\end{bmatrix}
$$
rispetto alla base $\mathcal{B} = ((1,1,1),(0,2,2),(0,0,3))$

### a)
Si scriva la matrice associata a $S$ rispetto alla base canonica.

Innanzitutto bisogna ricavare la matrice di transizione che da $\mathcal{B}$ porti a $\mathcal{E}$.
$$
P = M_{\mathcal{B}}^{\mathcal{E}}(id) = \begin{bmatrix}
1 & 0 & 0 \\
1 & 2 & 0 \\
1 & 2 & 3
\end{bmatrix}
$$
Per trovare l'inversa bisogna risolvere il seguente sistema:
$$
\begin{bmatrix}
1 & 0 & 0 & 1 & 0 & 0 \\
1 & 2 & 0 & 0 & 1 & 0 \\
1 & 2 & 3 & 0 & 0 & 1
\end{bmatrix}
\rightarrow_{E_{2,1}(-1)}
\rightarrow_{E_{3,1}(-1)}
\begin{bmatrix}
1 & 0 & 0 & 1 & 0 & 0 \\
0 & 2 & 0 & -1 & 1 & 0 \\
0 & 2 & 3 & -1 & 0 & 1
\end{bmatrix}
\rightarrow_{E_{3,2}(-1)}
\begin{bmatrix}
1 & 0 & 0 & 1 & 0 & 0 \\
0 & 2 & 0 & -1 & 1 & 0 \\
0 & 0 & 3 & 0 & -1 & 1
\end{bmatrix}
\rightarrow_{D_{2}\left( \frac{1}{2} \right)}
\rightarrow_{D_{3}\left( \frac{1}{3} \right)}
\begin{bmatrix}
1 & 0 & 0 & 1 & 0 & 0 \\
0 & 1 & 0 & -\frac{1}{2} & \frac{1}{2} & 0 \\
0 & 0 & 1 & 0 & -\frac{1}{3} & \frac{1}{3}
\end{bmatrix}
$$
Dunque:
$$
P^{-1} = \begin{bmatrix}
1 & 0 & 0 \\
-\frac{1}{2}  & \frac{1}{2} & 0 \\
0 & -\frac{1}{3}  & \frac{1}{3} \end{bmatrix}
$$
Per calcolare $P^{-1}$ potremmo anche utilizzare il determinante:
Sviluppando sulla prima riga:
$$
\det P = 6
$$
Dunque:
$$
P^{-1} = \frac{1}{\det P} \begin{bmatrix}
a_{ij}'
\end{bmatrix}^{T}
$$
$$
P^{-1} = \frac{1}{6} \begin{bmatrix}
6 & -3 & 0 \\
0 & 3 & -2 \\
0 & 0 & 2
\end{bmatrix}^{T} = 
\frac{1}{6}\begin{bmatrix}
6 & 0 & 0 &  \\
-3 & 3 & 0 \\
0 & -2 & 2
\end{bmatrix} =
\begin{bmatrix}
1 & 0 & 0 \\
-\frac{1}{2} & \frac{1}{2}  & 0 \\
0 & -\frac{1}{3} & \frac{1}{3}
\end{bmatrix}
$$

Dunque ora basta effettuare il prodotto matriciale $PSP^{-1}$, si ricorda che il prodotto matriciale corrisponde alla composizione di funzioni. Di conseguenza si converte dalla base canonica a $\mathcal{B}$, poi si applica la trasformazione $S$ e infine si converte il tutto in base canonica. 
$$
E = PSP^{-1} = 
\begin{bmatrix}
1 & 0 & 0 \\
1 & 2 & 0 \\
1 & 2 & 3
\end{bmatrix}
\begin{bmatrix}
0 & 0 & 0 \\
0 & 0 & 1 \\
1 & 2 & 3
\end{bmatrix}
\begin{bmatrix}
1 & 0 & 0 \\
-\frac{1}{2} & \frac{1}{2} & 0 \\
0 & -\frac{1}{3} & \frac{1}{3}
\end{bmatrix}
=
\begin{bmatrix}
0 & 0 & 0 \\
0 & 0 & 2 \\
3 & 6 & 11
\end{bmatrix} 
\begin{bmatrix}
1 & 0 & 0 \\
-\frac{1}{2} & \frac{1}{2} & 0 \\
0 & -\frac{1}{3} & \frac{1}{3}
\end{bmatrix}
= 
\begin{bmatrix}
0 & 0 & 0 \\
0 & -\frac{2}{3} & \frac{2}{3} \\
0 & -\frac{2}{3} & \frac{11}{3}
\end{bmatrix}
$$
### b)
Determinare basi dell'immagine $\mathrm{Im}(S)$ e del nucleo $N(S)$.

L'immagine di $S$ è data dalla combinazione lineare delle colonne linearmente indipendenti di $E$. Quindi una sua base è $\left( \left( 0, -\frac{2}{3}, -\frac{2}{3} \right), \left( 0, \frac{2}{3}, \frac{11}{3} \right) \right)$.
Mentre il nucleo di $S$ è dato dalla soluzione del seguente sistema:
$$
\begin{bmatrix}
0 & 0 & 0 \\
0 & -\frac{2}{3} & \frac{2}{3} \\
0 & -\frac{2}{3} & \frac{11}{3}
\end{bmatrix}
\rightarrow_{S_{1,3}}
\begin{bmatrix}
0 & -\frac{2}{3} & \frac{11}{3} \\
0 & -\frac{2}{3} & \frac{2}{3} \\
0 & 0 & 0
\end{bmatrix}
\rightarrow_{D_{1}\left( \frac{3}{2} \right)}
\rightarrow_{D_{2}\left( \frac{3}{2} \right)}
\begin{bmatrix}
0 & 1 & \frac{11}{2} \\
0 & -1 & 1 \\
0 & 0 & 0
\end{bmatrix}
\rightarrow_{E_{2,1}(1)}
\begin{bmatrix}
0 & 1 & \frac{11}{2} \\
0 & 0 & \frac{13}{2} \\
0 & 0 & 0
\end{bmatrix}
\rightarrow_{D_{2}\left( \frac{2}{13} \right)}
\begin{bmatrix}
0 & 1 & \frac{11}{2} \\
0 & 0 & 1 \\
0 & 0 & 0
\end{bmatrix}
\rightarrow_{E_{1,2}\left( -\frac{2}{11} \right)}
\begin{bmatrix}
0 & 1 & 0 \\
0 & 0 & 1 \\
0 & 0 & 0
\end{bmatrix}
\rightarrow
\begin{cases}
y = 0 \\
z = 0 \\
x = t
\end{cases}
$$
Dunque una base di $N(S)$ è $((1,0,0)) = (e_{1})$.

## Es 9.3
Sia $S : \mathbb{R}^{4}\rightarrow \mathbb{R}^{3}$ la funzione lineare $S(x_{1}, x_{2}, x_{3}, x_{4}) = (3x_{1} − 2x_{3} + x_{4}, 4x_{1} − 2x_{2} + 2x_{3} + 3x_{4}, x_{1} + 2x_{3} + 2x_{4})$. 

### a)
Si trovi una base del nucleo di $S$ e una base dell'immagine di $S$.

Analizziamo prima $N(S):$
$$
\begin{bmatrix}
3 & 4 & 1 \\
0 & -2 & 0 \\
-2 & 2 & 2 \\
1 & 3 & 2
\end{bmatrix}
\rightarrow_{S_{1,4}}
\begin{bmatrix}
1 & 3 & 2 \\
0 & -2 & 0 \\
-2 & 2 & 2 \\
3 & 4 & 1 
\end{bmatrix}
\rightarrow_{E_{3,1}(2)}
\rightarrow_{E_{4,1}(-3)}
\begin{bmatrix}
1 & 3 & 2 \\
0 & -2 & 0 \\
0 & 8 & 6 \\
0 & -5 & -5 
\end{bmatrix}
\rightarrow_{D_{2}\left( -\frac{1}{2} \right)}
\rightarrow_{D_{4}\left( -\frac{1}{5} \right)}
\begin{bmatrix}
1 & 3 & 2 \\
0 & 1 & 0 \\
0 & 8 & 6 \\
0 & 1 & 1 
\end{bmatrix}
\rightarrow_{E_{3,2}(-8)}
\rightarrow_{E_{4,2}(-1)}
\begin{bmatrix}
1 & 3 & 2 \\
0 & 1 & 0 \\
0 & 0 & 6 \\
0 & 0 & 1 
\end{bmatrix}
$$
$$
\rightarrow_{E_{3,4}(-6)}
\rightarrow_{E_{1,4}(-2)}
\begin{bmatrix}
1 & 3 & 0 \\
0 & 1 & 0 \\
0 & 0 & 0 \\
0 & 0 & 1 
\end{bmatrix}
\rightarrow_{E_{1,2}(-3)}
\begin{bmatrix}
1 & 0 & 0 \\
0 & 1 & 0 \\
0 & 0 & 0 \\
0 & 0 & 1 
\end{bmatrix}
$$
Lo spazio delle colonne è indipendente, dunque $N(S) = \{ 0 \}$. Mentre $\mathrm{Im}(S) = \langle (3, 0, -2, 1), (4, -2, 2, 3), (1, 0, 2, 2) \rangle$. Essendo tutti i vettori indipendenti allora $\mathcal{B} = ((3, 0, -2, 1), (4, -2, 2, 3), (1, 0, 2, 2))$ è base di $\mathrm{Im}(S)$.
### b) 
Sia $\mathcal{E}$ la base canonica di $\mathbb{R}^{4}$ e sia $\mathcal{B}$ la base di $\mathbb{R}^{3}$ costituita dai vettori $v_{1} = (1, 0, 1), v_{2} = (1, 0, 0), v_{3} = (1, 1, 1)$ Si determini la matrice $M_{\mathcal{E}}^{\mathcal{B}}(S)$ associata a $S$.

Il primo passo è di applicare la trasformazione ad ogni vettore della base $\mathcal{E}$.
$$
\begin{align}
S(e_{1}) &= (3, 4, 1) \\
S(e_{2}) &= (0, -2, 0) \\
S(e_{3}) &= (-2, 2, 2) \\
S(e_{4}) &= (1, 3, 2)
\end{align}
$$
Il secondo passe è trovare le coordinate dei vettori trovati rispetto alla base $\mathcal{B}$.
$$
\begin{bmatrix}
1 & 1 & 1 & 3 & 0 & -2 & 1 \\
0 & 0 & 1 & 4 & -2 & 2 & 3 \\
1 & 0 & 1 & 1 & 0 & 2 & 2
\end{bmatrix}
\rightarrow_{S_{2,3}}
\begin{bmatrix}
1 & 1 & 1 & 3 & 0 & -2 & 1 \\
1 & 0 & 1 & 1 & 0 & 2 & 2 \\
0 & 0 & 1 & 4 & -2 & 2 & 3
\end{bmatrix}
\rightarrow_{E_{2,1}(-1)}
\begin{bmatrix}
1 & 1 & 1 & 3 & 0 & -2 & 1 \\
0 & -1 & 0 & -2 & 0 & 4 & 1 \\
0 & 0 & 1 & 4 & -2 & 2 & 3
\end{bmatrix}
$$
$$
\rightarrow_{D_{2}(-1)}
\rightarrow_{E_{1,3}(-1)}
\begin{bmatrix}
1 & 1 & 0 & -1 & 2 & -4 & -2 \\
0 & 1 & 0 & 2 & 0 & -4 & -1 \\
0 & 0 & 1 & 4 & -2 & 2 & 3
\end{bmatrix}
\rightarrow_{E_{1,2}(-1)}
\begin{bmatrix}
1 & 0 & 0 & -3 & 2 & 0 & -1 \\
0 & 1 & 0 & 2 & 0 & -4 & -1 \\
0 & 0 & 1 & 4 & -2 & 2 & 3
\end{bmatrix}
$$
Dunque: 
$$
M_{\mathcal{E}}^{\mathcal{B}} = \begin{bmatrix}
-3 & 2 & 0 & -1 \\
2 & 0 & -4 & -1 \\
4 & -2 & 2 & 3
\end{bmatrix}
$$
## Es 9.4
Sia $T : \mathbb{R}^{3}\rightarrow \mathbb{R}^{3}$ la funzione lineare definita da $T (x, y, z) = (x + y, 2x − y − z, 2y + z)$ e sia $\mathcal{B} = ((1, 2, −4), (0, 1, 1), (1, 0, −7))$ una base di $\mathbb{R}^{3}$. 
### a) 
Stabilire se $T$ è iniettiva e/o suriettiva.

Essendo $T$ un endomorfismo allora vale la proprietà per la quale $T$ è iniettiva se e solo se $T$ è suriettiva.
$$
A = \begin{bmatrix}
1 & 1 & 0 \\
2 & -1 & -1 \\
0 & 2 & 1
\end{bmatrix}
\rightarrow_{E_{2,1}(-2)}
\begin{bmatrix}
1 & 1 & 0 \\
0 & -3 & -1 \\
0 & 2 & 1
\end{bmatrix}
\rightarrow_{E_{3,2}\left( \frac{2}{3} \right)}
\begin{bmatrix}
1 & 1 & 0 \\
0 & -3 & -1 \\
0 & 0 & \frac{1}{3}
\end{bmatrix}
$$
Dunque la matrice associata alla funzione $T$ ha rango $3$, il che vuol dire che $\text{null}(A) = 0 \Longleftrightarrow T \text{ è iniettiva}$.
Quindi $T$ è biettiva.
### b)
Si determini la matrice $M_{\mathcal{B}}^{\mathcal{E}}$ associata a $T$ rispetto alla base $\mathcal{B}$ e alla base canonica $\mathcal{E}$.

Innanzitutto applichiamo la trasformazione ai vettori di $\mathcal{B}$:
$$
\begin{align}
T(1,2,-4) &= (3, 4, 0) \\
T(0,1,1) &= (1,-2,3) \\
T(1, 0, -7) &= (1, 9, -7)
\end{align}
$$
Essendo i vettori $\mathcal{B}$ già esplicitati secondo la base canonica, non resta che mettere in colonna i vettori trovati.
$$
M_{\mathcal{B}}^{\mathcal{E}}(T) = \begin{bmatrix}
3 & 1 & 1 \\
4 & -2 & 9 \\
0 & 3 & -7
\end{bmatrix}
$$
### c) 
Si determini la matrice $M_{\mathcal{E}}^{\mathcal{B}}(T)$ associata a $T$ rispetto alla base $\mathcal{B}$ e alla base canonica $\mathcal{E}$. 

Innanzitutto applichiamo la trasformazione ai vettori di $\mathcal{E}$:
$$
\begin{align}
T(e_{1}) &= (1, 2, 0) \\
T(e_{2}) &= (1, -1, 2) \\
T(e_{3}) &= (0, -1, 1)
\end{align}
$$
Ora risolviamo il seguente sistema per trovare le coordinate dei vettori trovati rispetto a $\mathcal{B}$:
$$
\begin{bmatrix}
1 & 0 & 1 & 1 & 1 & 0 \\
2 & 1 & 0 & 2 & -1 & -1 \\
-4 & 1 & -7 & 0 & 2 & 1 
\end{bmatrix}
\rightarrow_{E_{2,1}(-2)}
\rightarrow_{E_{3,1}(4)}
\begin{bmatrix}
1 & 0 & 1 & 1 & 1 & 0 \\
0 & 1 & -2 & 0 & -3 & -1 \\
0 & 1 & -3 & 4 & 6 & 1 
\end{bmatrix}
\rightarrow_{E_{3,2}(-1)}
\begin{bmatrix}
1 & 0 & 1 & 1 & 1 & 0 \\
0 & 1 & -2 & 0 & -3 & -1 \\
0 & 0 & -1 & 4 & 9 & 2 
\end{bmatrix}
$$
$$
\rightarrow_{D_{3}(-1)}
\begin{bmatrix}
1 & 0 & 1 & 1 & 1 & 0 \\
0 & 1 & -2 & 0 & -3 & -1 \\
0 & 0 & 1 & -4 & -9 & -2 
\end{bmatrix}
\rightarrow_{E_{2,3}(2)}
\rightarrow_{E_{1,3}(-1)}
\begin{bmatrix}
1 & 0 & 0 & 5 & 10 & 2 \\
0 & 1 & 0 & -8 & -21 & -5 \\
0 & 0 & 1 & -4 & -9 & -2 
\end{bmatrix}
$$
Dunque:
$$
M_{\mathcal{E}}^{\mathcal{B}}(T) = \begin{bmatrix}
5 & 10 & 2 \\
-8 & -21 & -5 \\
-4 & -9 & -2
\end{bmatrix}
$$

### d) 
Si determini la matrice $M_{\mathcal{B}}^{\mathcal{B}}$ associata a $T$ rispetto alla base $\mathcal{B}$.

Innanzitutto applichiamo la trasformazione ai vettori di $\mathcal{B}$:
$$
\begin{align}
T(1,2,-4) &= (3, 4, 0) \\
T(0,1,1) &= (1,-2,3) \\
T(1, 0, -7) &= (1, 9, -7)
\end{align}
$$
Dopodiché bisogna trovare le coordinate dei vettori trovati rispetto a $\mathcal{B}$.
$$
\begin{bmatrix}
1 & 0 & 1 & 3 & 1 & 1 \\
2 & 1 & 0 & 4 & -2 & 9 \\
-4 & 1 & -7 & 0 & 3 & -7 
\end{bmatrix}
\rightarrow_{E_{2,1}(-2)}
\rightarrow_{E_{3,1}(4)}
\begin{bmatrix}
1 & 0 & 1 & 3 & 1 & 1 \\
0 & 1 & -2 & -2 & -4 & 7 \\
0 & 1 & -3 & 12 & 7 & -3 
\end{bmatrix}
\rightarrow_{E_{3,2}(-1)}
\begin{bmatrix}
1 & 0 & 1 & 3 & 1 & 1 \\
0 & 1 & -2 & -2 & -4 & 7 \\
0 & 0 & -1 & 14 & 11 & -10 
\end{bmatrix}
$$
$$
\rightarrow_{D_{3}(-1)}
\begin{bmatrix}
1 & 0 & 1 & 3 & 1 & 1 \\
0 & 1 & -2 & -2 & -4 & 7 \\
0 & 0 & 1 & -14 & -11 & 10 
\end{bmatrix}
\rightarrow_{E_{2,3}(2)}
\rightarrow_{E_{1,3}(-1)}
\begin{bmatrix}
1 & 0 & 0 & 19 & 21 & -8 \\
0 & 1 & 0 & -30 & -26 & 27 \\
0 & 0 & 1 & -14 & -11 & 10 
\end{bmatrix}
$$
Dunque:
$$
M_{\mathcal{B}}(T) = \begin{bmatrix}
19 & 21 & -8 \\
-30 & -26 & 27 \\
-14 & -11 & 10
\end{bmatrix}
$$
## Es 9.5
Sia $\mathcal{B} = (v_{1}=(1,0,1), v_{2} = (0,-1,0), v_{3} = (2,0,0))$ una base di $\mathbb{R}^{3}$ e sia $T$ l'endomorfismo di $\mathbb{R}^{3}$ così definito:
$$
\begin{align}
T(v_{1}) &= (3,1,2) \\
T(v_{2}) &= (0,1,1) \\
T(v_{3}) &= (6,4,6)
\end{align}
$$
### a)
Si determini la matrice $M(T)$ associata a $T$ rispetto alla base canonica.

Sappiamo che:
$$
M_{\mathcal{B}}^{\mathcal{E}}(T) = \begin{bmatrix}
3 & 0 & 6 \\
1 & 1 & 4 \\
2 & 1 & 6
\end{bmatrix}
$$
Allora rimane da trovare la matrice $P = M_{\mathcal{E}}^{\mathcal{B}}(id)$:
$$
\begin{bmatrix}
1 & 0 & 2 & 1 & 0 & 0 \\
0 & -1 & 0 & 0 & 1 & 0\\
1 & 0 & 0 & 0 & 0 & 1
\end{bmatrix}
\rightarrow_{E_{3,1}(-1)}
\begin{bmatrix}
1 & 0 & 2 & 1 & 0 & 0 \\
0 & -1 & 0 & 0 & 1 & 0\\
0 & 0 & -2 & -1 & 0 & 1
\end{bmatrix}
\rightarrow_{D_{2}(-1)}
\rightarrow_{D_{3}\left( -\frac{1}{2} \right)}
\begin{bmatrix}
1 & 0 & 2 & 1 & 0 & 0 \\
0 & 1 & 0 & 0 & -1 & 0\\
0 & 0 & 1 & \frac{1}{2} & 0 & -\frac{1}{2}
\end{bmatrix}
\rightarrow_{E_{1,3}(-2)}
\begin{bmatrix}
1 & 0 & 0 & 0 & 0 & 1 \\
0 & 1 & 0 & 0 & -1 & 0\\
0 & 0 & 1 & \frac{1}{2} & 0 & -\frac{1}{2}
\end{bmatrix}
$$
Dunque per trovare $M(T)$ bisogna eseguire il prodotto $M_{\mathcal{B}}^{\mathcal{E}}P$:
$$
M(T) = M_{\mathcal{B}}^{\mathcal{E}}(T)P = 
\begin{bmatrix}
3 & 0 & 6 \\
1 & 1 & 4 \\
2 & 1 & 6
\end{bmatrix}
\begin{bmatrix}
0 & 0 & 1 \\
0 & -1 & 0\\
\frac{1}{2} & 0 & -\frac{1}{2}
\end{bmatrix} =
\begin{bmatrix}
3 & 0 & 0 \\
2 & -1 & -1 \\
3 & -1 & -1
\end{bmatrix}
$$
### b)
Si determini base e dimensione dell’Immagine e del Nucleo di $T$.

La base dell'immagine di $T$ corrisponde con la base dello spazio delle colonne della matrice $M(T)$, ovvero $( (3,2,3), (0, -1, -1) )$.
Invece per il nucleo si può risolvete il sistema $M(T)x = 0$.
$$
\begin{bmatrix}
3 & 0 & 0  \\
2 & -1 & -1 \\
3 & -1 & -1
\end{bmatrix}
\rightarrow_{D_{1}\left( \frac{1}{3} \right)}
\rightarrow_{E_{3,2}(-1)}
\begin{bmatrix}
1 & 0 & 0  \\
2 & -1 & -1 \\
1 & 0 & 0
\end{bmatrix}
\rightarrow_{E_{3,1}(-1)}
\rightarrow_{E_{2,1}(-2)}
\begin{bmatrix}
1 & 0 & 0  \\
0 & -1 & -1 \\
0 & 0 & 0
\end{bmatrix}
\rightarrow_{D_{2}(-1)}
\begin{bmatrix}
1 & 0 & 0  \\
0 & 1 & 1 \\
0 & 0 & 0
\end{bmatrix}
\rightarrow
\begin{cases}
x = 0 \\
y = -t \\
z = t
\end{cases}
$$
Dunque una base del nucleo è $((0, -1, 1))$, la cui dimensione è ovviamente $1$.
### c)
Si stabilisca per quali valori di $k$ il vettore $v_{k} = (k + 1,0,k)$ appartiene all'Immagine di $T$.
$$
\begin{bmatrix}
3 & 0 & k + 1 \\
2 & -1 & 0 \\
3 & -1 & k
\end{bmatrix}
\rightarrow_{E_{3,1}(-1)}
\begin{bmatrix}
3 & 0 & k + 1 \\
2 & -1 & 0 \\
0 & -1 & -1
\end{bmatrix}
\rightarrow_{E_{2,1}\left( -\frac{2}{3} \right)}
\begin{bmatrix}
3 & 0 & k + 1 \\
0 & -1 & -\frac{2(k+1)}{3} \\
0 & -1 & -1
\end{bmatrix}
\rightarrow
\begin{cases}
x = \frac{k+1}{3} \\
y = \frac{2(k+1)}{3}
\end{cases}
$$
Quindi il $v_{k}$ fa sempre parte dell'immagine di $T$ a discapito del valore di $k$.

## Es 9.6
Verificare che $v = (1,0,0,1)$ è autovettore dell'applicazione lineare $T$ così definita
$$
T(x_{1},x_{2},x_{3},x_{4}) = (2x_{1}-2x_{3},-x_{1}+2x_{2}+x_{3}+x_{4},x_{3},x_{1}-2x_{3}+x_{4})
$$
Determinare inoltre il relativo autovalore.
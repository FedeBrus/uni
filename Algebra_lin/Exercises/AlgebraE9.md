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
A=
\begin{bmatrix}
3 & 0 & -2 & 1 \\
4 & -2 & 2 & 3 \\
1 & 0 & 2 & 2
\end{bmatrix}
\rightarrow_{S_{1,3}}
\begin{bmatrix}
1 & 0 & 2 & 2 \\
4 & -2 & 2 & 3 \\
3 & 0 & -2 & 1
\end{bmatrix}
\rightarrow_{E_{2,1}(-4)}
\rightarrow_{E_{3,1}(-3)}
\begin{bmatrix}
1 & 0 & 2 & 2 \\
0 & -2 & -6 & -5 \\
0 & 0 & -8 & -5
\end{bmatrix}
$$
La matrice associata ad $S$ ha rango $rg(A)=3$, le 3 colonne indipendenti sono quelle associate ai primi 3 vettori, dunque una base di $\mathrm{Im}$ è $\mathcal{B} = ((3,4,1), (0, -2, 0), (-2,2,2))$. Per il teorema di nullità + rango si ha che $N(A) = 4-3 = 1$. Per trovarne una base possiamo proseguire con la riduzione della matrice associata:
$$
\begin{bmatrix}
1 & 0 & 2 & 2 \\
0 & -2 & -6 & -5 \\
0 & 0 & -8 & -5
\end{bmatrix}
\rightarrow_{D_{2}\left( -\frac{1}{2} \right)}
\rightarrow_{D_{3}\left( -\frac{1}{8} \right)}
\begin{bmatrix}
1 & 0 & 2 & 2 \\
0 & 1 & 3 & \frac{5}{2} \\
0 & 0 & 1 & \frac{5}{8}
\end{bmatrix}
\rightarrow_{E_{2,3}(-3)}
\rightarrow_{E_{1,3}(-2)}
\begin{bmatrix}
1 & 0 & 0 & \frac{6}{8} \\
0 & 1 & 0 & \frac{5}{8} \\
0 & 0 & 1 & \frac{5}{8}
\end{bmatrix}
\rightarrow
\begin{cases}
x = -\frac{6}{8}t \\
y = -\frac{5}{8}t \\
z = -\frac{5}{8}t \\
w = t
\end{cases}
$$
Perciò una base di $N(A)$ è $\mathcal{N} = (\left( 6,5,5, -8 \right))$.
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
Si determini la matrice $M_{\mathcal{B}}^{\mathcal{E}}(T)$ associata a $T$ rispetto alla base $\mathcal{B}$ e alla base canonica $\mathcal{E}$.

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
1 & 0 & 0 & 17 & 12 & -9 \\
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
Dunque una base del nucleo è $((0, -1, 1))$, la cui dimensione è ovviamente $1$. Riducendo in forma a scalini ridotta si sarebbero potute vedere entrambi le basi. I vettori corrispettivi alle colonne dove sono presenti i pivot per la base dell'immagine e la soluzione di base del sistema per la base del sistema.
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
\rightarrow-D_{2}(-1)
\begin{bmatrix}
3 & 0 & k + 1 \\
0 & 1 & \frac{2(k+1)}{3} \\
0 & -1 & -1
\end{bmatrix}
\rightarrow-_{E_{3,2}(1)}
\begin{bmatrix}
3 & 0 & k + 1 \\
0 & 1 & \frac{2(k+1)}{3} \\
0 & 0 & -1 + \frac{2(k+1)}{3}
\end{bmatrix}
$$
Da cui si deduce che se $v_{k} \in \mathrm{Im}(T) \implies\frac{2(k+1)}{3} = 1 \implies 2k + 2 = 3 \implies k = \frac{1}{2}$.
## Es 9.6
Verificare che $v = (1,0,0,1)$ è autovettore dell'applicazione lineare $T$ così definita
$$
T(x_{1},x_{2},x_{3},x_{4}) = (2x_{1}-2x_{3},-x_{1}+2x_{2}+x_{3}+x_{4},x_{3},x_{1}-2x_{3}+x_{4})
$$
Determinare inoltre il relativo autovalore.
Per verificare ciò basta solamente applicare la trasformazione al vettore $v$.
$$
T(v) = (2,-1 + 1, 0, 1 + 1) = (2, 0, 0, 2) = 2(v)
$$
Dunque $v$ è autovettore di $T$ con rispettivo autovalore $\lambda_{v} = 2$.

## Es 9.7
Sia $T$ l'endomorfismo di $\mathbb{R}^{3}$ definito da:
$$
A = \begin{bmatrix}
1 & 1 & 0 \\
0 & 3 & 0 \\
0 & 0 & 2
\end{bmatrix}
$$
### a)
Stabilire se esistono autovettori di $T$ ed eventualmente determinarli.

In questo caso è più semplice procedere trovando prima gli autovalori e successivamente i corrispettivi autovettori.
Per fare ciò bisogna calcolare il polinomio caratteristico, dato da $\det(A - \lambda I_{3})$.
$$
\det(A - \lambda I_{3}) = 
\begin{vmatrix}
1-\lambda & 1 & 0 \\
0 & 3 -\lambda & 0 \\
0 & 0 & 2-\lambda
\end{vmatrix} =
(1 - \lambda)(3-\lambda)(2 - \lambda) = p_{A}(\lambda)
$$
$p_{A}(\lambda) = 0 \Longleftrightarrow \lambda = 1,2,3$. Gli autovalori di $T$ sono: $\lambda_{1} = 1, \lambda_{2}=2, \lambda_{3}=3$.

Consideriamo $\lambda_{1}$:
Calcoliamo $N(A - I_{3})$:
$$
\begin{bmatrix}
0 & 1 & 0 \\
0 & 2 & 0 \\
0 & 0 & 1
\end{bmatrix}
\rightarrow
\begin{bmatrix}
0 & 0 & 0 \\
0 & 1 & 0 \\
0 & 0 & 1
\end{bmatrix}
\rightarrow
\begin{cases}
x = t \\
y = 0 \\
z = 0
\end{cases}
$$
Il nucleo è $\{ (t,0,0) | t \in \mathbb{R} \} = \langle (1,0,0) \rangle$. Perciò $E(\lambda_{1}) =\langle (1,0,0) \rangle$.

Consideriamo $\lambda_{2}$:
Calcoliamo $N(A - 2I_{3})$:
$$
\begin{bmatrix}
-1 & 1 & 0 \\
0 & 2 & 0 \\
0 & 0 & 0
\end{bmatrix}
\rightarrow
\begin{bmatrix}
1 & -1 & 0 \\
0 & 1 & 0 \\
0 & 0 & 0
\end{bmatrix}
\rightarrow
\begin{bmatrix}
1 & 0 & 0 \\
0 & 1 & 0 \\
0 & 0 & 0
\end{bmatrix}
\rightarrow
\begin{cases}
x = 0 \\
y = 0 \\
z = t
\end{cases}
$$
Il nucleo è $\{ (0,0,t) | t \in \mathbb{R} \} = \langle (0,0,1) \rangle$. Perciò $E(\lambda_{2}) =\langle (0,0,1) \rangle$.

Consideriamo $\lambda_{3}$:
Calcoliamo $N(A - 3I_{3})$:
$$
\begin{bmatrix}
-2 & 1 & 0 \\
0 & 0 & 0 \\
0 & 0 & -1
\end{bmatrix}
\rightarrow
\begin{bmatrix}
1 & -\frac{1}{2} & 0 \\
0 & 0 & 0 \\
0 & 0 & 1
\end{bmatrix}
\rightarrow
\begin{cases}
x = \frac{t}{2} \\
y = t  \\
z = 0
\end{cases}
$$
Il nucleo è $\left\{  \left( \frac{t}{2},t,0 \right) | t \in \mathbb{R}  \right\} = \langle (1,2,0) \rangle$. Perciò $E(\lambda_{3}) =\langle (1,2,0) \rangle$.

### b)
Stabilire se $T$ è diagonalizzabile.

In questo caso si può affermare immediatamente che $T$ è diagonalizzabile, in quanto è sono stati trovati 3 autovalori distinti in $\mathbb{R}^{3}$. Perciò gli autovettori associati agli autovalori sono tra loro linearmente indipendenti e dunque formano una base di $\mathbb{R}^{3}$. Avendo trovato dunque una base di $\mathbb{R}^{3}$ composta da autovettori allora $T$ è diagonalizzabile.

### c)
Determinare la base rispetto alla quale $T$ ha matrice associata $D$ diagonale e determinare la matrice diagonale $D$ e la matrice $P$ diagonalizzante.
Fissiamo la base $\mathcal{B} = (v_{\lambda_{1}},v_{\lambda_{2}},v_{\lambda_{3}})$ dove $T(v_{\lambda_{i}}) = \lambda_{i}v_{\lambda_{i}}$. Prendiamo $\mathcal{B} = ((1,0,0), (0,0,1),(1,2,0))$.
Si ha che:
$$
D = M_{\mathcal{B}} = \begin{bmatrix}
T_{\mathcal{B}}(T(v_{\lambda_{1}}) & T_{\mathcal{B}}(T(v_{\lambda_{2}}) & T_{\mathcal{B}}(T(v_{\lambda_{3}}))
\end{bmatrix}
= 
\begin{bmatrix}
\lambda_{1} & 0 & 0 \\
0 & \lambda_{2} & 0 \\
0 & 0 & \lambda_{3}
\end{bmatrix}
$$
La matrice $P$ diagonalizzante è:
$$
P = M_{\mathcal{B}}^{\mathcal{E}} = \begin{bmatrix}
1 & 0 & 1 \\
0 & 0 & 2 \\
0 & 1 & 0
\end{bmatrix}
$$
## Es 9.8 (DA FINIRE)
Riconoscere che le seguenti matrici $M$ sono diagonalizzabili, e calcolare per ciascuna di esse una matrice $P$ diagonalizzante.
$$
A = \begin{bmatrix}
1 & 2 & 3 \\
0 & 3 & 1 \\
0 & 0 & 4
\end{bmatrix}
$$
$$
B = \begin{bmatrix}
2 & 1 & 1 & 0 \\
0 & 3 & 4 & 0 \\
0 & 0 & 5 & 0 \\
0 & 0 & 0 & 2
\end{bmatrix} 
$$
Consideriamo la matrice $A$:
Calcoliamo $p_{A}(\lambda)$
$$
p_{A}(\lambda) =
\begin{vmatrix}
1 - \lambda & 2 & 3 \\
0 & 3 - \lambda  & 1 \\
0 & 0 & 4 - \lambda
\end{vmatrix} = (1- \lambda) (3-\lambda) (4 - \lambda)
$$
$p_{A}(\lambda) \Longleftrightarrow \lambda = 1, 3, 4$. Gli autovalori sono dunque $\lambda_{1} = 1, \lambda_{2} = 2, \lambda_{3}=4$.

Consideriamo $\lambda_{1}$:
$$
A - I_{3} = 
\begin{bmatrix}
0 & 2 & 3 \\
0 & 2 & 1  \\
0 & 0 & 2
\end{bmatrix}
\rightarrow
\begin{bmatrix}
0 & 2 & 3 \\
0 & 0 & -2 \\
0 & 0 & 2
\end{bmatrix}
\rightarrow
\begin{bmatrix} 
0 & 0 & 0 \\
0 & 1 & 0 \\
0 & 0 & 1
\end{bmatrix}
\rightarrow
\begin{cases}
x = t \\
y = 0 \\
z = 0
\end{cases}
$$
$E(\lambda_{1}) = N(A - I_{3}) = \langle (1,0,0) \rangle$. Chiamiamo $v_{1} = (1,0,0)$.

Consideriamo $\lambda_{2}$:
$$
A - 3I_{3} = 
\begin{bmatrix}
-2 & 2 & 3 \\
0 & 0 & 1 \\
0 & 0 & 4
\end{bmatrix}
\rightarrow
\begin{bmatrix}
1 & -1 & -\frac{3}{2} \\
0 & 0 & 0 \\
0 & 0 & 1
\end{bmatrix}
\rightarrow
\begin{bmatrix}
1 & -1 & 0 \\
0 & 0 & 0 \\
0 & 0 & 1
\end{bmatrix}
\rightarrow
\begin{cases}
x =t \\
y = t \\
z = 0
\end{cases}
$$
$E(\lambda_{2}) = N(A - 3I_{3}) = \langle (1,1,0) \rangle$. Chiamiamo $v_{2} = (1,1,0)$.

Consideriamo $\lambda_{3}$:
$$
A - 4I_{3} = 
\begin{bmatrix}
-3 & 2 & 3 \\
0 & -1 & 1 \\
0 & 0 & 0
\end{bmatrix}
\rightarrow
\begin{bmatrix}
1 & -\frac{2}{3} & -1 \\
0 & 1 & -1 \\
0 & 0 & 0
\end{bmatrix}
\rightarrow
\begin{bmatrix}
1 & 0 & -\frac{5}{3} \\
0 & 1 & -1 \\
0 & 0 & 0
\end{bmatrix}
\rightarrow
\begin{cases}
x = 5t \\
y = 3t \\
z = 3t
\end{cases}
$$
$E(\lambda_{3}) = N(A - 4I_{3}) = \langle (5, 3, 3) \rangle$. Chiamiamo $v_{3} = (5, 3, 3)$.

Dunque una matrice associata diagonale $D$ di $T_{A}$ è:
$$
\begin{bmatrix}
1 & 0 & 0 \\
0 & 3 & 0 \\
0 & 0 & 4
\end{bmatrix}
$$
Secondo la base $\mathcal{A} = (v_{1},v_{2},v_{3})$.
La matrice diagonalizzante $P$ invece è:
$$
P = 
\begin{bmatrix}
v_{1} & v_{2} & v_{3}
\end{bmatrix} = 
\begin{bmatrix}
1 & 1 & 5 \\
0 & 1 & 3 \\
0 & 0 & 3
\end{bmatrix}
$$
Consideriamo $B$:
## Es 9.9
$$
A = \begin{bmatrix}
-1 & 1 \\
0 & -1
\end{bmatrix} \qquad
B = \begin{bmatrix}
-1 & 2 \\
-3 & 1
\end{bmatrix} \qquad
C = \begin{bmatrix}
-3 & 4 \\
1 & 0
\end{bmatrix}
$$
### a)
Si determini il polinomio caratteristico di ciascuna matrice.
### b)
Si determinino gli autovalori, e i relativi autospazi, di ciascuna matrice.
### c)
Si stabilisca se le matrici sono diagonalizzabili.

Consideriamo la matrice $A$:
Consideriamo $A - \lambda I_{2}$:
$$
\det(A - \lambda I_{2}) = \begin{vmatrix}
-1 - \lambda & 1 \\
0 & -1 - \lambda
\end{vmatrix} = (-1 - \lambda)^{2} = p_{A}(\lambda)
$$
$\det(A - \lambda I_{2}) = 0 \Longleftrightarrow \lambda = 1$. In questo caso $A$ ha come autovalore $\lambda_{1} = 1$ con $m_{alg}(\lambda_{1}) = 2$. Inoltre $E(\lambda_{1}) = N(A - \lambda_{1}I_{2}) )  = N(A + I_{2})$.
$$
A + I_{2} = \begin{bmatrix}
0 & 1 \\
0 & 0
\end{bmatrix}
\rightarrow
\begin{cases}
x = t \\
y = 0
\end{cases}
$$
Ovvero $((1, 0))$ è base di $E(\lambda_{1})$. La matrice non è diagonalizzabile poiché la somma delle molteplicità geometriche è inferiore alla somma delle molteplicità algebriche.

Consideriamo la matrice $B$:
Consideriamo $B - \lambda I_{2}$:
$$
\det(A-\lambda I_{2}) = \begin{vmatrix}
-1 - \lambda & 2 \\
-3 & 1 - \lambda
\end{vmatrix} = -(1-\lambda^{2}) +6 = \lambda^{2} + 5 = p_{B}(\lambda)
$$
In questo caso la matrice non ha autovalori, perciò non è diagonalizzabile.

Consideriamo la matrice $C$:
Consideriamo $C - \lambda I_{2}$:
$$
\det(C - \lambda I_{2}) = \begin{vmatrix}
-3 - \lambda & 4 \\
1 & -\lambda
\end{vmatrix} =
\lambda(3+\lambda) - 4 = \lambda^{2}+3\lambda-4 = (\lambda + 4)(\lambda - 1) = p_{C}(\lambda)
$$
In questo caso gli autovalori sono $\lambda_{1} = -4$ e $\lambda_{2} = 1$, entrambi con molteplicità algebrica $1$.

Consideriamo $\lambda_{1} = -4$:
$$
A + 4I_{2} = \begin{bmatrix}
1 & 4 \\
1 & 4
\end{bmatrix}
\rightarrow
\begin{cases}
x = -4t \\
y = t
\end{cases}
$$
Dunque $E(\lambda_{1}) = \langle (-4, 1) \rangle$.

Consideriamo $\lambda_{2} = 1$:
$$
A - I_{2} = \begin{bmatrix}
-4 & 4 \\
1 & -1
\end{bmatrix}
\rightarrow
\begin{cases}
x = t \\
y = t
\end{cases}
$$
Dunque $E(\lambda_{2}) = \langle (1, 1) \rangle$.

Siccome la somma delle molteplicità geometriche è uguale alla somma delle molteplicità algebriche allora la matrice è diagonalizzabile.
## Es 9.10
Date le matrici
$$
A = \begin{bmatrix}
2 & 1 & 0 \\
0 & 1 & -1 \\
0 & 2 & 4
\end{bmatrix}
\qquad
B = \begin{bmatrix}
-3 & 1 & -1 \\
-7 & 5 & -1 \\
-6 & 6 & -2
\end{bmatrix}
\qquad
C = \begin{bmatrix}
1 & -3 & 3 \\
3 & -5 & 3 \\
6 & -6 & 4
\end{bmatrix}
$$
### a)
Si determini il polinomio caratteristico di ciascuna matrice.
### b)
Si determinino gli autovalori, e i relativi autospazi, di ciascuna matrice.
### c)
Si stabilisca se le matrici sono diagonalizzabili

Consideriamo $A$:
$$
\begin{align}

p_{A}(\lambda) = \det(A - \lambda I_{3}) = \begin{vmatrix}
2 - \lambda  & 1 & 0 \\
0 & 1 -\lambda  & -1 \\
0 & 2 & 4 - \lambda
\end{vmatrix}
&= (2 - \lambda)[(1-\lambda)(4-\lambda)-(-2)]  \\
&= (2-\lambda)[4 - 4\lambda -\lambda + \lambda^{2}+2]  \\
&= (2 - \lambda)(\lambda^{2}-5\lambda+6) \\
&= (2-\lambda)(\lambda-3)(\lambda-2)
\end{align}
$$
I 2 autovalori di $A$ sono $\lambda_{1}=2, \lambda_{2}=3$.
$$
E(\lambda_{1}) = N\begin{bmatrix}
0 & 1 & 0 \\
0 & -1 & -1 \\
0 & 2 & 2
\end{bmatrix}
\rightarrow
N \begin{bmatrix}
0 & 1 & 0 \\
0 & 0 & 1 \\
0 & 0 & 0
\end{bmatrix}
\rightarrow
\begin{cases}
x = t \\
y = 0 \\
z = 0
\end{cases}
\rightarrow
\langle (1,0,0) \rangle 
$$
$$
E(\lambda_{2}) = N \begin{bmatrix}
-1 & 1 & 0 \\
0 & -2 & -1 \\
0 & 2 & 1
\end{bmatrix}
\rightarrow
N\begin{bmatrix}
1 & -1 & 0 \\
0 & 2 & 1 \\
0 & 0 & 0
\end{bmatrix}
\rightarrow
N \begin{bmatrix}
1 & 0 & \frac{1}{2} \\
0 & 1 & \frac{1}{2} \\
0 & 0 & 0
\end{bmatrix}
\rightarrow
\begin{cases}
x = -\frac{1}{2}t \\
y = -\frac{1}{2}t \\
z = t
\end{cases}
\rightarrow
\langle (1,1,-2) \rangle 
$$
La matrice non è diagonalizzabile perché la molteplicità geometrica di $\lambda_{1}$ è inferiore rispetto alla sua molteplicità algebrica.

Consideriamo $B$:
$$
\begin{align}
p_{B}(\lambda) = \det(B-\lambda I_{3}) = \begin{vmatrix}
-3-\lambda & 1 & -1 \\
-7 & 5-\lambda & -1 \\
-6 & 6 & -2-\lambda
\end{vmatrix}
&= (-3-\lambda)[(5-\lambda)(-2-\lambda)+6] - 1[-7(-2-\lambda)-6] -1[-42+6(5-\lambda)] \\
&= (-3-\lambda)[-10+2\lambda-5\lambda+\lambda^{2}+6] - [14+7\lambda-6] - [-42+30-6\lambda] \\
&= (-3-\lambda)(\lambda^{2}-3\lambda-4) - (8+7\lambda)-(-6\lambda-12) \\
&= (-3-\lambda)(\lambda-4)(\lambda+1) + 4 - \lambda \\
&= (\lambda-4)[(-3-\lambda)(\lambda+1)-1] \\
&= (\lambda-4)(-\lambda^{2}-4\lambda-4) \\
&= -(\lambda-4)(\lambda^{2}+4\lambda+4) \\
&= -(\lambda-4)(\lambda+2)^{2}
\end{align}
$$
Gli autovalori di $B$ sono $\lambda_{1}=4, \lambda_{2}=-2$
$$
E(\lambda_{1}) = N\begin{bmatrix}
-7 & 1 & -1 \\
-7 & 1 & -1 \\
-6 & 6 & -6
\end{bmatrix}
\rightarrow
N\begin{bmatrix}
-7 & 1 & -1 \\
0 & 0 & 0 \\
-1 & 1 & -1
\end{bmatrix}
\rightarrow
N\begin{bmatrix}
1 & 0 & 0 \\
0 & 1 & -1 \\
0 & 0 & 0
\end{bmatrix}
\rightarrow
\begin{cases}
x = 0 \\
y = t \\
z = t
\end{cases}
\rightarrow
\langle (0,1,1) \rangle 
$$
$$
E(\lambda_{2}) = 
N\begin{bmatrix}
-1 & 1 & -1 \\
-7 & 7 & -1 \\
-6 & 6 & 0
\end{bmatrix}
\rightarrow
N\begin{bmatrix}
1 & -1 & 0 \\
0 & 0 & 1 \\
0 & 0 & 0 
\end{bmatrix}
\rightarrow 
\begin{cases}
x = t \\
y = t \\
z = 0
\end{cases}
\rightarrow
\langle (1,1,0) \rangle 
$$
Dunque $B$ non è diagonalizzabile in quanto la molteplicità geometrica di $\lambda_{2}$ è minore della sua molteplicità algebrica.

Consideriamo $C$:
$$
\begin{align}
p_{C}(\lambda) = \det(C - \lambda I_{3}) = \begin{vmatrix}
1-\lambda & -3 & 3 \\
3 & -5-\lambda & 3 \\
6 & -6 & 4-\lambda
\end{vmatrix}
&= (1-\lambda)[(-5-\lambda)(4-\lambda)+18]+3[3(4-\lambda)-18]+3[-18+6(5+\lambda)] \\
 & = (1-\lambda)[-20-4\lambda+5\lambda+\lambda^{2}+18]+3[12-3\lambda-18]+3[-18+30+6\lambda] \\
 & = (1-\lambda)(\lambda^{2}+\lambda-2)+3(-3\lambda-6)+3(6\lambda+12) \\
 & = (1-\lambda)(\lambda+2)(\lambda-1)-9\lambda-18+18\lambda+36 \\
 & = -(1-\lambda)^{2}(\lambda+2)+9(\lambda+2) \\
 & = (\lambda+2)(-(1-\lambda)^{2}+ 9) \\
 & = (\lambda+2)(-(\lambda^{2}-2\lambda+1)+9) \\
 & = (\lambda+2)(-\lambda^{2}+2\lambda+8) \\
 & = -(\lambda+2)(\lambda^{2}-2\lambda-8) \\
 & = -(\lambda+2)(\lambda-4)(\lambda+2) \\
 & = -(\lambda+2)^{2}(\lambda-4)
\end{align}
$$
Gli autovalori di $C$ sono $\lambda_{1}=-2$ e $\lambda_{2}=4$.
$$
E(\lambda_{1}) = 
N\begin{bmatrix}
3 & -3 & 3 \\
3 & -3 & 3 \\
6 & -6 & 6
\end{bmatrix}
\rightarrow
N\begin{bmatrix}
1 & -1 & 1 \\
0 & 0 & 0 \\
0 & 0 & 0
\end{bmatrix}
\rightarrow
\begin{cases}
x = t - s \\
y = t \\
z = s
\end{cases}
\rightarrow
\langle (1,1,0), (-1, 0, 1) \rangle 
$$
$$
E(\lambda_{2}) = 
N\begin{bmatrix}
-3 & -3 & 3 \\
3 & -9 & 3 \\
6 & -6 & 0
\end{bmatrix}
\rightarrow
N\begin{bmatrix}
-1 & -1 & 1 \\
1 & -3 & 1 \\
1 & -1 & 0
\end{bmatrix}
\rightarrow
N\begin{bmatrix}
-1 & -1 & 1 \\
0 & -4 & 2 \\
0 & -2 & 1
\end{bmatrix}
\rightarrow
N\begin{bmatrix}
1 & 0 & -\frac{1}{2} \\
0 & 1 & -\frac{1}{2} \\
0 & 0 & 0
\end{bmatrix}
\rightarrow
\begin{cases}
x = \frac{t}{2} \\
y = \frac{t}{2} \\
z = t
\end{cases}
\rightarrow
\langle (1,1,2) \rangle 
$$
La matrice è diagonalizzabile.
## Es 9.11
Sia $T$ l'endomorfismo definito dalla matrice associata rispetto alla base canonica:
$$
A = M(T) = \begin{bmatrix}
0 & 6 & 0 \\
1 & 0 & 1 \\
1 & 0 & 1
\end{bmatrix}
$$
### a)
Determinare immagine e nucleo di $T$.
### b)
Determinare autovalori e autovettori di $T$.
### c)
Stabilire se $T$ è diagonalizzabile.
### d)
Stabilire se esiste una base di $\mathbb{R}^{3}$ formata da autovettori di $A$, e in caso positivo determinarla.

Troviamo innanzitutto l'immagine e nucleo di $T$.
$$
\begin{bmatrix}
0 & 6 & 0 \\
1 & 0 & 1 \\
1 & 0 & 1
\end{bmatrix}
\rightarrow_{D_{1}\left( \frac{1}{6} \right)}
\rightarrow_{E_{3,2}(-1)}
\begin{bmatrix}
0 & 1 & 0 \\
1 & 0 & 1 \\
0 & 0 & 0
\end{bmatrix}
\rightarrow_{S_{1,2}}
\begin{bmatrix}
1 & 0 & 1 \\
0 & 1 & 0 \\
0 & 0 & 0
\end{bmatrix}
$$
Osservando la posizione dei pivot si ha che $\mathrm{Im}(T) = \langle (0,1,1), (6, 0, 0) \rangle$.
$$
\begin{bmatrix}
1 & 0 & 1 \\
0 & 1 & 0 \\
0 & 0 & 0
\end{bmatrix}
\rightarrow
\begin{cases}
x = -t \\
y = 0 \\
z = t
\end{cases}
\rightarrow
\langle (-1,0,1) \rangle 
$$
Troviamo prima gli autovalori:
$$
\begin{align}
p_{A}(\lambda) = \det(A-\lambda I_{3}) =
\begin{vmatrix}
-\lambda & 6 & 0 \\
1 & -\lambda & 1 \\
1 & 0 & 1-\lambda
\end{vmatrix}
&= -\lambda[(-\lambda)(1-\lambda)] -6[(1-\lambda)- 1] \\
&= -\lambda[-\lambda+\lambda^{2}] +6\lambda \\
 & = \lambda^{2} -\lambda^{3} + 6\lambda \\
 & = \lambda(-\lambda^{2}+\lambda+6) \\
 & = -\lambda(\lambda^{2}-\lambda-6) \\
 & = -\lambda(\lambda-3)(\lambda+2)
\end{align}
$$
Gli autovalori di $A$ sono $\lambda_{1}=0,\lambda_{2}=3,\lambda_{3}=-2$.
$$
E(\lambda_{1}) = N\begin{bmatrix}
0 & 6 & 0 \\
1 & 0 & 1 \\
1 & 0 & 1
\end{bmatrix}
\rightarrow
\langle (-1,0,1) \rangle 
$$
$$
E(\lambda_{2}) = N\begin{bmatrix}
-3 & 6 & 0 \\
1 & -3 & 1 \\
1 & 0 & -2
\end{bmatrix}
\rightarrow
N\begin{bmatrix}
1 & -2 & 0 \\
0 & -1 & 1 \\
0 & 2 & -2
\end{bmatrix}
\rightarrow
N\begin{bmatrix}
1 & 0 & -2 \\
0 & 1 & -1 \\
0 & 0 & 0
\end{bmatrix}
\rightarrow
\begin{cases}
x = 2t \\
y = t \\
z = t
\end{cases}
\rightarrow
\langle (2,1,1) \rangle 
$$
$$
E(\lambda_{3}) = N\begin{bmatrix}
2 & 6 & 0 \\
1 & 2 & 1 \\
1 & 0 & 3
\end{bmatrix}
\rightarrow
N\begin{bmatrix}
1 & 3 & 0 \\
0 & -1 & 1 \\
0 & -3 & 3
\end{bmatrix}
\rightarrow
N\begin{bmatrix}
1 & 0 & 3 \\
0 & 1 & -1 \\
0 & 0 & 0
\end{bmatrix}
\rightarrow
\begin{cases}
x = -3t \\
y = t \\
z = t
\end{cases}
\rightarrow
\langle (-3,1,1) \rangle 
$$
$T$ è effettivamente diagonalizzabile.
I 3 autovettori trovati appartengono a 3 autovalori distinti, quindi sono tra loro linearmente indipendenti. Con 3 vettori linearmente indipendenti è possibile formare una base di $\mathbb{R}^{3}$, in questo caso $\mathcal{B} =((-1,0,1),(2,1,1),(-3,1,1))$.
## Es 9.12
Sia $T:\mathbb{R}^{3}\rightarrow \mathbb{R}^{3}$ l'endomorfismo a cui è associata la matrice:
$$
A = \begin{bmatrix}
2 & 0 & 0 \\
0 & -2 & -6 \\
0 & 2 & 5
\end{bmatrix}
$$
### a)
Si determinino gli autovalori di $T$ e si determini se $T$ è diagonalizzabile.
### b)
Si determini una base di $\mathbb{R}^{3}$ formata da autovettori di $T$.

$$
\begin{align}
p_{A}(\lambda) = \det(A - \lambda I_{3}) = 
\begin{vmatrix}
2 - \lambda & 0 & 0 \\
0 &  - 2 - \lambda &  -6 \\
0 & 2 & 5 - \lambda
\end{vmatrix}
&= (2-\lambda)[(-2-\lambda)(5-\lambda)+12] \\
 & = (2-\lambda)[-10-5\lambda+2\lambda+\lambda^{2}+12] \\
 & = (2-\lambda)(\lambda^{2}-3\lambda+2) \\
 & = (2-\lambda)(\lambda-2)(\lambda-1) \\
 & = -(\lambda-2)^{2}(\lambda-1)
\end{align}
$$
Gli autovalori di $A$ sono $\lambda_{1}=2, \lambda_{2}=1$
$$
E(\lambda_{1}) = N\begin{bmatrix}
0 & 0 & 0 \\
0 &  - 4 &  -6 \\
0 & 2 & 3
\end{bmatrix}
\rightarrow
N\begin{bmatrix}
0 & 1 & \frac{3}{2} \\
0 & 0 & 0 \\
0 & 0 & 0
\end{bmatrix}
\rightarrow
\begin{cases}
x = t \\
y = -\frac{3}{2}s \\
z = s
\end{cases}
\rightarrow
\langle (1, 0, 0), (0,-3,2) \rangle 
$$
$$
E(\lambda_{2}) = N \begin{bmatrix}
1 & 0 & 0 \\
0 & -3 & -6 \\
0 & 2 & 4
\end{bmatrix}
\rightarrow
N\begin{bmatrix}
1 & 0 & 0 \\
0 & 1 & 2 \\
0 & 0 & 0
\end{bmatrix}
\rightarrow
\begin{cases}
x = 0 \\
y = -2t \\
z = t
\end{cases}
\rightarrow
\langle (0, -2, 1) \rangle 
$$
Risulta che $T$ è diagonalizzabile e i suoi autovettori formano la base di $\mathbb{R}^{3}$ $\mathcal{B}= ((1,0,0),(0,-3,2),(0, -2, 1))$.
## Es 9.13
Discutere la diagonalizzabilità delle seguenti matrici al variare del parametro reale $k$.
$$
A = 
\begin{bmatrix}
1 & 1 & 0 \\
0 & k & 0 \\
0 & 0 & 2
\end{bmatrix}
$$
$$
\begin{align}
p_{A}(\lambda) = \det(A - \lambda I_{3}) = \begin{vmatrix}
1-\lambda & 1 & 0 \\
0 & k-\lambda & 0 \\
0 & 0 & 2-\lambda
\end{vmatrix}
&= (1-\lambda)(k-\lambda)(2-\lambda)
\end{align}
$$
Gli autovalori di $A$ sono $\lambda_{1}=1, \lambda_{2}=k,\lambda_{3}=2$.
Se $k \neq 1,2$ allora la matrice ha 3 autovalori distinti perciò è sicuramente diagonalizzabile.
Se $k = 1$:
$$
E(\lambda_{1}) = E(\lambda_{2}) = \begin{bmatrix}
0 & 1 & 0 \\
0 & 0 & 0 \\
0 & 0 & 1
\end{bmatrix}
\rightarrow
\begin{cases}
x = t \\
y = 0 \\
z = 0
\end{cases}
\rightarrow
\langle (1,0,0) \rangle 
$$
Quindi siccome la molteplicità geometrica sarebbe minore di quella algebrica, $A$ non sarebbe diagonalizzabile.
Se $k = 2$:
$$
E(\lambda_{3}) = E(\lambda_{2}) = \begin{bmatrix}
-1 & 1 & 0 \\
0 & 0 & 0 \\
0 & 0 & 0
\end{bmatrix}
\rightarrow
\begin{bmatrix}
1 & -1 & 0 \\
0 & 0 & 0 \\
0 & 0 & 0
\end{bmatrix}
\rightarrow
\begin{cases}
x = -t \\
y = t \\
z = s
\end{cases}
\rightarrow
\langle (-1,1,0),(0,0,1) \rangle 
$$
In questo caso $A$ sarebbe diagonalizzabile.
## Es 9.14
Sia $T$ l'endomorfismo di $\mathbb{R}^{3}$ così definito:
$$
T(x_{1},x_{2},x_{3}) = \left( x_{1},x_{1}-\frac{1}{2}x_{3},x_{2} \right)
$$
### a)
Calcolare gli autovalori e gli autovettori di $T$.

La matrice associata $A$ è:
$$
A = 
\begin{bmatrix}
1 & 0 & 0 \\
1 & 0 & -\frac{1}{2} \\
0 & 1 & 0
\end{bmatrix}
$$
$$
\begin{align}
p_{A}(\lambda) = \det(A - \lambda I_{3}) = 
\begin{vmatrix}
1 - \lambda & 0 & 0 \\
1 & -\lambda & -\frac{1}{2} \\
0 & 1 & -\lambda
\end{vmatrix}
& = (1-\lambda)\left( \lambda^{2}+\frac{1}{2} \right) \\
\end{align}
$$
La matrice $A$ ha solo un autovettore reale $\lambda_{1}=1$.
$$
E(\lambda_{1}) = 
N\begin{bmatrix}
0 & 0 & 0 \\
1 & -1 & -\frac{1}{2} \\
0 & 1 & -1
\end{bmatrix}
\rightarrow
N\begin{bmatrix}
0 & 0 & 0 \\
1 & 0 & -\frac{3}{2} \\
0 & 1 & -1
\end{bmatrix}
\rightarrow
\begin{cases}
x = \frac{3}{2}t \\
y = t \\
z = t
\end{cases}
\rightarrow
\left\langle  \left( 3,2,2 \right)  \right\rangle 
$$
### b)
$T$ è diagonalizzabile?

$T$ non è diagonalizzabile.

### c)
Se al campo dei numeri reali si sostituisce quello dei numeri complessi, l’endomorfismo di $\mathbb{C}^{3}$ che
si ottiene è diagonalizzabile?

In tale caso si avrebbero 3 autovalori distinti e quindi $T$ diventerebbe diagonalizzabile.
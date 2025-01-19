## Es 6.1

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

## Es 6.2
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

### b) (DA FARE)
Si trovi una base del sottospazio intersezione $V \cap W$.

Per procedere dobbiamo individuare il sottospazio $V \cap W$. Risolviamo il sistema:


## Es 6.3
Si considerino i polinomi a coefficienti reali:
$$
p_{1}=x^{2}+x \qquad p_{2} = kx^{2} - 1 \qquad p_{3} =x^{2}+2x +k
$$
## a)
Stabilire per quali valori di $k$ i tre polinomi formano una base dello spazio $\mathbb{R}_{2}[x]$.

Per vedere se formano una base riduciamo a scalini la matrice formata da i polinomi in colonna, considerando le coordinate secondo la base canonica di $\mathbb{R}_{2}[x]$.
$$
\begin{bmatrix}
1 & k & 1 \\
1 & 0 & 2 \\
0 & -1 & k
\end{bmatrix}
\rightarrow-_{E_{2,1}(-1)}
\begin{bmatrix}
1 & k & 1 \\
0 & -k & 1 \\
0 & -1 & k
\end{bmatrix}
\rightarrow_{S_{3,2}}
\begin{bmatrix}
1 & k & 1 \\
0 & -1 & k \\
0 & -k & 1
\end{bmatrix}
\rightarrow_{E_{3,2}(-k)}
\begin{bmatrix}
1 & k & 1 \\
0 & -1 & k \\
0 & 0 & 1-k^{2}
\end{bmatrix}
\rightarrow_{D_{2}(-1)}
\begin{bmatrix}
1 & k & 1 \\
0 & 1 & -k \\
0 & 0 & 1-k^{2}
\end{bmatrix}
$$
Perché i tre polinomi di partenza formino una base di $\mathbb{R}_{2}[x]$ è necessario che l'ultimo pivot non si annulli, ciò accade se $k \neq \pm 1$.

### b)
Per i valori di $k$ per cui i polinomi sono dipendenti, trovare uno o più polinomi che completano l’insieme $\{p_{1}, p_{2}, p_{3}\}$ ad una base di $\mathbb{R}_{2}[x]$.

Se $k = 1$:
In questo caso $p_{3}$ è combinazione lineare di $p_{1}$ e $p_{2}$.
Possiamo estendere $\{ p_{1}, p_{2} \}$ ad una base di $\mathbb{R}_{2}[x]$ considerando i vettori della base canonica.
$$
\begin{bmatrix}
1 & 1 & 1 & 0 & 0 \\
1 & 0 & 0 & 1 & 0 \\
0 & -1 & 0 & 0 & 1
\end{bmatrix}
\rightarrow_{E_{2,1}(-1)}
\begin{bmatrix}
1 & 1 & 1 & 0 & 0 \\
0 & -1 & -1 & 1 & 0 \\
0 & -1 & 0 & 0 & 1
\end{bmatrix}
\rightarrow_{E_{3,2}(-1)}
\begin{bmatrix}
1 & 1 & 1 & 0 & 0 \\
0 & -1 & -1 & 1 & 0 \\
0 & 0 & 1 & -1 & 1
\end{bmatrix}
\rightarrow_{D_{2}(-1)}
\begin{bmatrix}
1 & 1 & 1 & 0 & 0 \\
0 & 1 & 1 & -1 & 0 \\
0 & 0 & 1 & -1 & 1
\end{bmatrix}
\rightarrow_{E_{2,3}(-1)}
\begin{bmatrix}
1 & 1 & 1 & 0 & 0 \\
0 & 1 & 0 & 0 & -1 \\
0 & 0 & 1 & -1 & 1
\end{bmatrix}
\rightarrow_{E_{1,2}(-1)}
\begin{bmatrix}
1 & 0 & 1 & 0 & 1 \\
0 & 1 & 0 & 0 & -1 \\
0 & 0 & 1 & -1 & 1
\end{bmatrix}
\rightarrow_{E_{1,3}(-1)}
\begin{bmatrix}
1 & 0 & 0 & 1 & 0 \\
0 & 1 & 0 & 0 & -1 \\
0 & 0 & 1 & -1 & 1
\end{bmatrix}
$$
Dunque $\{ p_{1}, p_{2}, e_{1} \}$ formano una base di $\mathbb{R}_{2}[x]$.

Se $k = -1$:
In questo caso $p_{3}$ è combinazione lineare di $p_{1}$ e $p_{2}$.
Possiamo estendere $\{ p_{1}, p_{2} \}$ ad una base di $\mathbb{R}_{2}[x]$ considerando i vettori della base canonica.
$$
\begin{bmatrix}
1 & -1 & 1 & 0 & 0 \\
1 & 0 & 0 & 1 & 0 \\
0 & -1 & 0 & 0 & 1
\end{bmatrix}
\rightarrow_{E_{2,1}(-1)}
\begin{bmatrix}
1 & -1 & 1 & 0 & 0 \\
0 & 1 & -1 & 1 & 0 \\
0 & -1 & 0 & 0 & 1
\end{bmatrix}
\rightarrow_{E_{3,2}(1)}
\begin{bmatrix}
1 & -1 & 1 & 0 & 0 \\
0 & 1 & -1 & 1 & 0 \\
0 & 0 & -1 & 1 & 1
\end{bmatrix}
\rightarrow_{D_{3}(-1)}
\begin{bmatrix}
1 & -1 & 1 & 0 & 0 \\
0 & 1 & -1 & 1 & 0 \\
0 & 0 & 1 & -1 & -1
\end{bmatrix}
\rightarrow_{E_{2,3}(1)}
\begin{bmatrix}
1 & -1 & 1 & 0 & 0 \\
0 & 1 & 0 & 0 & -1 \\
0 & 0 & 1 & -1 & -1
\end{bmatrix}
\begin{bmatrix}
1 & -1 & 1 & 0 & 0 \\
0 & 1 & 0 & 0 & -1 \\
0 & 0 & 1 & -1 & -1
\end{bmatrix}
\rightarrow_{E_{1,2}(1)}
\begin{bmatrix}
1 & 0 & 1 & 0 & -1 \\
0 & 1 & 0 & 0 & -1 \\
0 & 0 & 1 & -1 & -1
\end{bmatrix}
\rightarrow_{E_{1,3}(-1)}
\begin{bmatrix}
1 & 0 & 0 & 1 & 0 \\
0 & 1 & 0 & 0 & -1 \\
0 & 0 & 1 & -1 & -1
\end{bmatrix}
$$
Anche in questo caso $\{ p_{1}, p_{2}, e_{1} \}$ formano una base di $\mathbb{R}_{2}[x]$.

## Es 6.4
Nello spazio vettoriale $V = \mathbb{R}_{2}[x]$ dei polinomi reali di grado non superiore a due, si considerino gli elementi:
$$
p_{1} = x − 1 \qquad p_{2} = x + 1 \qquad p_{3} = x^{2} − x.
$$
### a)
Si mostri che l’insieme $\mathcal{B} = \{p_{1}, p_{2}, p_{3}\}$ è una base di $V$.

$$
\begin{bmatrix}
0 & 0 & 1 \\
1 & 1 & -1 \\
-1 & 1 & 0
\end{bmatrix}
\rightarrow_{E_{3,2}(1)}
\begin{bmatrix}
0 & 0 & 1 \\
1 & 1 & -1 \\
0 & 2 & -1
\end{bmatrix}
\rightarrow_{S_{1,2}}
\begin{bmatrix}
1 & 1 & -1 \\
0 & 0 & 1 \\
0 & 2 & -1
\end{bmatrix}
\rightarrow_{S_{2,3}}
\begin{bmatrix}
1 & 1 & -1 \\
0 & 2 & -1 \\
0 & 0 & 1 
\end{bmatrix}
\rightarrow_{D_{2}\left( \frac{1}{2} \right)}
\begin{bmatrix}
1 & 1 & -1 \\
0 & 1 & -\frac{1}{2} \\
0 & 0 & 1 
\end{bmatrix}
$$
In questo caso $rg(A) = dim(\langle p_{1}, p_{2}, p_{3} \rangle) = 3$. Quindi $\mathcal{B}$ è una base.
### b)
Si trovino le coordinate del polinomio costante $1$ nella base $\mathcal{B}$.

In altre parole il problema ci chiede di trovare quale combinazione lineare dei polinomi di partenza da come risultato $1$. Per rispondere alla domanda basta risolvere il seguente sistema:
$$
\begin{bmatrix}
0 & 0 & 1 & 0 \\
1 & 1 & -1 & 0 \\
-1 & 1 & 0 & 1
\end{bmatrix}
\rightarrow_{E_{3,2}(1)}
\begin{bmatrix}
0 & 0 & 1 & 0 \\
1 & 1 & -1 & 0 \\
0 & 2 & -1 & 1
\end{bmatrix}
\rightarrow_{S_{1,2}}
\begin{bmatrix}
1 & 1 & -1 & 0 \\
0 & 0 & 1 & 0 \\
0 & 2 & -1 & 1
\end{bmatrix}
\rightarrow_{S_{2,3}}
\begin{bmatrix}
1 & 1 & -1 & 0 \\
0 & 2 & -1 & 1 \\
0 & 0 & 1 & 0 
\end{bmatrix}
\rightarrow_{D_{2}\left( \frac{1}{2} \right)}
\begin{bmatrix}
1 & 1 & -1 & 0\\
0 & 1 & -\frac{1}{2} & \frac{1}{2} \\
0 & 0 & 1 & 0 
\end{bmatrix}
\rightarrow _{E_{2,3}\left( \frac{1}{2} \right)}
\begin{bmatrix}
1 & 1 & -1 & 0\\
0 & 1 & 0 & \frac{1}{2} \\
0 & 0 & 1 & 0 
\end{bmatrix}
\rightarrow_{E_{1,3}(1)}
\begin{bmatrix}
1 & 1 & 0 & 0\\
0 & 1 & 0 & \frac{1}{2} \\
0 & 0 & 1 & 0 
\end{bmatrix}
\rightarrow_{E_{1,2}(-1)}
\begin{bmatrix}
1 & 0 & 0 & -\frac{1}{2}\\
0 & 1 & 0 & \frac{1}{2} \\
0 & 0 & 1 & 0 
\end{bmatrix}
$$
Dunque $T_{\mathcal{B}}(1) = \left\{  -\frac{1}{2}, \frac{1}{2}, 0  \right\}$.

## Es 6.5
Sia $V$ lo spazio vettoriale dei polinomi a coefficienti reali nella variabile $x$, di grado minore o uguale a $3$.

### a)
Si mostri che $U = \{ f(x) \in V | f(1) = f(2) = 0 \}$ è un sottospazio vettoriale di $V$ e se ne trovi una base.

La condizione posta dal problema è esprimibile tramite un sistema:
$$
\begin{cases}
a_{3} + a_{2} + a_{1} + a_{0} = 0 \\
8a_{3} + 4a_{2} + 2a_{1} + a_{0} = 0
\end{cases}
$$
Notiamo come il sistema è omogeneo, perciò l'insieme delle sue soluzioni è sicuramente uno spazio vettoriale.
Per trovare una base di questo sistema basta trovare le sue soluzioni di base:
$$
\begin{bmatrix}
1 & 1 & 1 & 1 & 0 \\
8 & 4 & 2 & 1 & 0
\end{bmatrix}
\rightarrow_{E_{2,1}(-8)}
\begin{bmatrix}
1 & 1 & 1 & 1 & 0 \\
0 & -4 & -6 & -7 & 0
\end{bmatrix}
\rightarrow_{D_{2}(-4)}
\begin{bmatrix}
1 & 1 & 1 & 1 & 0 \\
0 & 1 & \frac{3}{2} & \frac{7}{4} & 0
\end{bmatrix}
\rightarrow_{E_{1,2}(-1)}
\begin{bmatrix}
1 & 0 & -\frac{1}{2} & -\frac{3}{4} & 0 \\
0 & 1 & \frac{3}{2} & \frac{7}{4} & 0
\end{bmatrix}
\rightarrow
\begin{cases}
a_{3} = \frac{a_{1}}{2} + \frac{3a_{0}}{4} \\
a_{2} = -\frac{3a_{1}}{2} - \frac{7a_{0}}{4} \\
a_{1} = t \\
a_{0} = s
\end{cases}
$$
L'insieme delle soluzioni è $\left\{  t\left( \frac{1}{2}, -\frac{3}{2}, 1, 0 \right) + s\left( \frac{3}{4}, -\frac{7}{4}, 0, 1 \right) | t, s \in \mathbb{R}  \right\}$, dunque una base di $U$ è $\left\{ \left( \frac{1}{2}x^{3} -\frac{3}{2}x^{2} + x \right), \left( \frac{3}{4}x^{3} - \frac{7}{4}x^{2} + 1 \right) \right\}$.

### b)
Si completi la base trovata al punto precedente ad una base di $V$.

$$
\begin{bmatrix}
\frac{1}{2} & \frac{3}{4} & 1 & 0 & 0 & 0 \\
-\frac{3}{2} & -\frac{7}{4} & 0 & 1 & 0 & 0 \\
1 & 0 & 0 & 0 & 1 & 0 \\
0 & 1 & 0 & 0 & 0 & 1
\end{bmatrix}
\rightarrow_{D_{1}(2)}
\begin{bmatrix}
1 & \frac{3}{2} & 2 & 0 & 0 & 0 \\
-\frac{3}{2} & -\frac{7}{4} & 0 & 1 & 0 & 0 \\
1 & 0 & 0 & 0 & 1 & 0 \\
0 & 1 & 0 & 0 & 0 & 1
\end{bmatrix}
\rightarrow_{D_{2}(2)}
\begin{bmatrix}
1 & \frac{3}{2} & 2 & 0 & 0 & 0 \\
-3 & -\frac{7}{2} & 0 & 2 & 0 & 0 \\
1 & 0 & 0 & 0 & 1 & 0 \\
0 & 1 & 0 & 0 & 0 & 1
\end{bmatrix}
\rightarrow_{E_{2,1}(3)}
\begin{bmatrix}
1 & \frac{3}{2} & 2 & 0 & 0 & 0 \\
0 & 1 & 6 & 2 & 0 & 0 \\
1 & 0 & 0 & 0 & 1 & 0 \\
0 & 1 & 0 & 0 & 0 & 1
\end{bmatrix}
\rightarrow_{E_{1,3}(-1)}
\begin{bmatrix}
0 & \frac{3}{2} & 2 & 0 & -1 & 0 \\
0 & 1 & 6 & 2 & 0 & 0 \\
1 & 0 & 0 & 0 & 1 & 0 \\
0 & 1 & 0 & 0 & 0 & 1
\end{bmatrix}
\rightarrow_{S_{1,3}}
\begin{bmatrix}
1 & 0 & 0 & 0 & 1 & 0 \\
0 & 1 & 6 & 2 & 0 & 0 \\
0 & \frac{3}{2} & 2 & 0 & -1 & 0 \\
0 & 1 & 0 & 0 & 0 & 1
\end{bmatrix}
$$
$$
\rightarrow_{E_{3,4}\left( -\frac{3}{2} \right)}
\begin{bmatrix}
1 & 0 & 0 & 0 & 1 & 0 \\
0 & 1 & 6 & 2 & 0 & 0 \\
0 & 0 & 2 & 0 & -1 & -\frac{3}{2} \\
0 & 1 & 0 & 0 & 0 & 1
\end{bmatrix}
\rightarrow_{E_{2,4}(-1)}
\begin{bmatrix}
1 & 0 & 0 & 0 & 1 & 0 \\
0 & 0 & 6 & 2 & 0 & -1 \\
0 & 0 & 2 & 0 & -1 & -\frac{3}{2} \\
0 & 1 & 0 & 0 & 0 & 1
\end{bmatrix}
\rightarrow_{S_{2,4}}
\begin{bmatrix}
1 & 0 & 0 & 0 & 1 & 0 \\
0 & 1 & 0 & 0 & 0 & 1 \\
0 & 0 & 2 & 0 & -1 & -\frac{3}{2} \\
0 & 0 & 6 & 2 & 0 & -1
\end{bmatrix}
\rightarrow_{E_{4,3}(-3)}
\begin{bmatrix}
1 & 0 & 0 & 0 & 1 & 0 \\
0 & 1 & 0 & 0 & 0 & 1 \\
0 & 0 & 2 & 0 & -1 & -\frac{3}{2} \\
0 & 0 & 0 & 2 & 3 & \frac{7}{2}
\end{bmatrix}
\rightarrow _{D_{4}\left( \frac{1}{2} \right)}
\begin{bmatrix}
1 & 0 & 0 & 0 & 1 & 0 \\
0 & 1 & 0 & 0 & 0 & 1 \\
0 & 0 & 2 & 0 & -1 & -\frac{3}{2} \\
0 & 0 & 0 & 1 & \frac{3}{2} & \frac{7}{1}
\end{bmatrix}
\rightarrow_{D_{3}\left( \frac{1}{2} \right)}
\begin{bmatrix}
1 & 0 & 0 & 0 & 1 & 0 \\
0 & 1 & 0 & 0 & 0 & 1 \\
0 & 0 & 1 & 0 & -\frac{1}{2} & -\frac{3}{4} \\
0 & 0 & 0 & 1 & \frac{3}{2} & \frac{7}{1}
\end{bmatrix}
$$
## Es 6.6
Sia $W$ il sottoinsieme dello spazio di polinomi $\mathbb{R}_{3}[x]$ definito da:
$$
W = \{ p(x) \in \mathbb{R}_{3}[x] | p'''(x) = 0, p(1) = 0 \}
$$
### a)
Mostrare che $W$ è un sottospazio vettoriale di $\mathbb{R}_{2}[x]$.

$$
\begin{cases}
(a_{3}x^{3}+a_{2}x^{2}+a_{1}x+a_{0})''' = 0 \\
a_{3}+a_{2}+a_{1}+a_{0} = 0
\end{cases}
\rightarrow
\begin{cases}
(3a_{3}x^{2}+a_{2}x+a_{1})''= 0 \\
a_{3}+a_{2}+a_{1}+a_{0} = 0
\end{cases}
\rightarrow
\begin{cases}
(6a_{3}x+a_{2})'= 0 \\
a_{3}+a_{2}+a_{1}+a_{0} = 0
\end{cases}
\rightarrow
\begin{cases}
a_{3}= 0 \\
a_{3}+a_{2}+a_{1}+a_{0} = 0
\end{cases}
$$
Dunque $W$ è l'insieme delle soluzioni di un sistema omogeneo, che sappiamo essere sicuramente uno spazio vettoriale. Inoltre grazie alla condizione $a_{3} = 0$, sappiamo che l'insieme $W$ contiene polinomi di grado al più 2, perciò possiamo restringere lo spazio vettoriale di cui $W$ è sottospazio a $\mathbb{R}_{2}[x]$.

### b)
Trovare una base e la dimensione di $W$.
Per trovare una base di $W$ basta risolvere il sistema di prima.
$$
\begin{bmatrix}
1 & 0 & 0 & 0 & 0 \\
1 & 1 & 1 & 1 & 0
\end{bmatrix}
\rightarrow_{E_{2,1}(-1)}
\begin{bmatrix}
1 & 0 & 0 & 0 & 0 \\
0 & 1 & 1 & 1 & 0
\end{bmatrix}
\rightarrow
\begin{cases}
a_{3} = 0 \\
a_{2} = -t - s \\
a_{1} = t \\
a_{0} = s
\end{cases}
$$
L'insieme delle soluzioni del sistema è $\{ t(0, -1, 1, 0) + s(0, -1, 0, 1) \}$ e dunque una base di $W$ è $\{ (0, -1, 1, 0), (0, -1, 0, 1) \}$, perciò $dim(W) = 2$. 

### c)
Determinare le coordinate del polinomio $p(x) = 2x^{2} - x - 1 \in W$ rispetto alla base trovata al punto b).
$$
\begin{bmatrix}
0 & 0 & 0 \\
-1 & -1 & 2 \\
1 & 0 & -1 \\
0 & 1 & -1
\end{bmatrix}
\rightarrow
\begin{cases}
t = -1 \\
s = -1
\end{cases}
$$
Dunque $T_{\mathcal{B}}(p(x)) = (-1, -1)$.

## Es 6.7
sia $W$ il seguente sottoinsieme dello spazio delle matrici $3 \times 3$.
$$
W = \{ A \in M_{3,3}(\mathbb{R}) | A = A^{T}, tr(A) = 0 \}
$$
### a)
Mostrare che $W$ è un sottospazio vettoriale di $M_{3,3}(\mathbb{R})$.

L'insieme $W$ può essere descritto tramite l'insieme delle soluzione di un sistema. (Notare che si stanno considerando le coordinate degli elementi di $W$ rispetto alla base canonica di $M_{3,3}(\mathbb{R})$)
$$
\begin{cases}
a_{2} - a_{4} = 0 \\
a_{3} - a_{7} = 0 \\
a_{6} - a_{8} = 0 \\
a_{1} + a_{5} + a_{9} = 0
\end{cases}
$$
Siccome $W$ coincide con l'insieme delle soluzioni di un sistema omogeneo è uno spazio vettoriale.

### b)
Trovare una base di $W$.
$$
\begin{bmatrix}
0 & 1 & 0 & -1 & 0 & 0 & 0 & 0 & 0 & 0 \\
0 & 0 & 1 & 0 & 0 & 0 & -1 & 0 & 0 & 0 \\
0 & 0 & 0 & 0 & 0 & 1 & 0 & -1 & 0 & 0 \\
1 & 0 & 0 & 0 & 1 & 0 & 0 & 0 & 1 & 0
\end{bmatrix}
\rightarrow_{S_{1,4}}
\begin{bmatrix}
1 & 0 & 0 & 0 & 1 & 0 & 0 & 0 & 1 & 0 \\
0 & 0 & 1 & 0 & 0 & 0 & -1 & 0 & 0 & 0 \\
0 & 0 & 0 & 0 & 0 & 1 & 0 & -1 & 0 & 0 \\
0 & 1 & 0 & -1 & 0 & 0 & 0 & 0 & 0 & 0
\end{bmatrix}
\rightarrow _{S_{1,3}}
\begin{bmatrix}
1 & 0 & 0 & 0 & 1 & 0 & 0 & 0 & 1 & 0 \\
0 & 1 & 0 & -1 & 0 & 0 & 0 & 0 & 0 & 0 \\
0 & 0 & 0 & 0 & 0 & 1 & 0 & -1 & 0 & 0 \\
0 & 0 & 1 & 0 & 0 & 0 & -1 & 0 & 0 & 0
\end{bmatrix}
\rightarrow_{S_{3,4}}
\begin{bmatrix}
1 & 0 & 0 & 0 & 1 & 0 & 0 & 0 & 1 & 0 \\
0 & 1 & 0 & -1 & 0 & 0 & 0 & 0 & 0 & 0 \\
0 & 0 & 1 & 0 & 0 & 0 & -1 & 0 & 0 & 0 \\
0 & 0 & 0 & 0 & 0 & 1 & 0 & -1 & 0 & 0
\end{bmatrix}
$$
$$
\begin{cases}
a_{1} = -s - g \\
a_{2} = t \\
a_{3} = k \\
a_{4} = t \\
a_{5} = s \\
a_{6} = h \\
a_{7} = k \\
a_{8} = h \\
a_{9} = g
\end{cases}
\qquad
t, s, k, h, g \in \mathbb{R}
$$
La base è dunque formata da $\{ (0, 1, 0, 1, 0, 0, 0, 0, 0), (-1, 0, 0, 0, 1, 0, 0, 0, 0), (0,0,1,0,0,0,1,0,0), (0,0,0,0,0,1,0,1,0), (-1,0,0,0,0,0,0,0,1) \}$.
Che, ritradotta in matrici a partire dalle loro coordinate corrisponde a:
$$
\mathcal{B} = 
\left\{
\begin{bmatrix}
0 & 1 & 0 \\
1 & 0 & 0 \\
0 & 0 & 0 \\
\end{bmatrix},
\begin{bmatrix}
-1 & 0 & 0 \\
0 & 1 & 0 \\
0 & 0 & 0
\end{bmatrix},
\begin{bmatrix}
0 & 0 & 1 \\
0 & 0 & 0 \\
1 & 0 & 0
\end{bmatrix},
\begin{bmatrix}
0 & 0 & 0 \\
0 & 0 & 1 \\
0 & 1 & 0
\end{bmatrix},
\begin{bmatrix}
-1 & 0 & 0 \\
0 & 0 & 0 \\
0 & 0 & 1
\end{bmatrix}
\right\}
$$
### c)
Calcolare le coordinate di $B = \begin{bmatrix} 2 & 1 & 1 \\ 1 & -2 & 3 \\ 1 & 3 & 0 \end{bmatrix} \in W$ rispetto alla base trovata al punto b).
Risulta abbastanza evidente, senza aver bisogno di fare conti, che $T_{\mathcal{B}}(B) = (1, -2, 1, 3, 0)$.
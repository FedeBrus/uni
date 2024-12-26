## Es 1.6
Si considerino le rette di equazioni cartesiane
$$
r : \begin{cases}
x + 2y = 0 \\
y-z = 0
\end{cases}
\qquad
s : \begin{cases}
2x = 0 \\
x+ y +z = 0
\end{cases}
$$
### a)
Dopo avere verificato che le due rette sono incidenti, determinare l'equazione cartesiana della retta passante per $P(1,1,1)$ e incidente a $r$ e $s$.

Verifico che le rette siano incidenti mettendo le loro equazioni a sistema.
$$
r \cap s : \begin{cases}
x + 2y = 0 \\
y - z = 0 \\
2x = 0 \\
x + y +z = 0
\end{cases}
\qquad
\begin{cases}
y = 0 \\
y - z = 0 \\
x = 0 \\
y + z = 0
\end{cases}
\qquad
\begin{cases}
x = 0 \\
y = 0 \\
z = 0
\end{cases}
$$
Se la retta $h$ deve essere incidente sia a $r$ che a $s$, allora interseca le due rette nel loro punto di incidenza $A(0,0,0)$.
Due punti identificano una retta.
$$
h : \begin{cases}
x = t \\
y = t \\
z = t
\end{cases}
\qquad
\begin{cases}
y = x \\
z = x
\end{cases}
\qquad
\begin{cases}
-x + y = 0 \\
-x + z = 0
\end{cases}
$$
### b)
Determinare l'equazione cartesiana del piano passante per $C = (1,2,-3)$ e perpendicolare a $r$.

Trovo la forma parametrica di $r$.
$$
r: 
\begin{cases}
x = t \\
t + 2y = 0 \\
y - z = 0
\end{cases}
\qquad
\begin{cases}
x = t \\
y = -\frac{t}{2} \\
z = -\frac{t}{2}
\end{cases}
\qquad
$$
$$
\vec{r} = \left( 1, -\frac{1}{2}, -\frac{1}{2} \right)
$$
$$
\pi: x -\frac{y}{2} -\frac{z}{2} = d
$$
Ricavo $d$ sostituendo le coordinate del punto $C$ che so appartenere al piano cercato.
$$
d = 1 - 1 + \frac{3}{2} = \frac{3}{2}
$$
Dunque il piano viene descritto dalla equazione:
$$
\pi: x - \frac{y}{2} - \frac{z}{2} = \frac{3}{2}
$$
### c)
Determinare equazioni cartesiane della retta passante per il punto $P(1,1,1)$ e perpendicolare alle due rette $r$ e $s$.

Sappiamo già che $\vec{r} = (-2, 1, 1)$ .
Trovo la forma parametrica di $s$:
$$
s:
\begin{cases}
y = t \\
2x = 0 \\
0 + t + z = 0
\end{cases}
\qquad
\begin{cases}
x = 0 \\
y = t \\
z = -t
\end{cases}
$$
Quindi $\vec{s}$ e $\vec{r}$ sono:
$$
\begin{align}
\vec{r} = (-2, 1, 1) \\
\vec{s} = (0, 1, -1) 
\end{align}
$$
$$
\vec{r} \times \vec{s} = (-1 -1, -2, -2) = (-2, -2, -2) = (1, 1, 1)
$$
Quindi la retta che stiamo cercando è:
$$
f : \begin{cases}
x = 1 + t \\
y = 1 + t \\
z = 1 + t
\end{cases}
\qquad
\begin{cases}
-x + y = 0 \\
-x + z = 0
\end{cases}
$$
## Es 1.7
Sia $r$ la retta nello spazio passante per i punti $A=(0, 0, 1)$ e $B = (−2, −1, 0)$. Sia $s$ la retta passante per i punti $C = (1, 1, 1)$ e $D = (2, 0, 0)$. 

Prima trovo le equazioni delle due rette:
$$
\begin{align}
\vec{r} = (2, 1, 1) \\
\vec{s} = (2, 1, 1)
\end{align}
$$
$$
r: \begin{cases}
x = 2t \\
y = t \\
z = 1 + t
\end{cases}
\qquad
\forall t \in \mathbb{R}
\qquad
s: \begin{cases}
x = 1 \\
y = 1 + s \\
z = 1 + s
\end{cases}
\qquad
\forall s \in \mathbb{R}
$$
### a) 
Mostrare che le due rette sono complanari e trovare un’equazione del piano $\pi$ che le contiene.

Le due rette sono complanari perché sono parallele.
Ricavo una seconda direzione per costruire il piano $\pi$:
$$
\overrightarrow{AC} = (1, 1, 0)
$$
Dunque l'equazione del piano è:
$$
\pi : \begin{cases}
x = 2t + s \\
y = t + s \\
z = 1 + t
\end{cases}
\qquad
\forall t,s\in \mathbb{R}
\qquad
\begin{cases}
x = 2z - 2 + y - z + 1 \\
s = y - z + 1 \\
t = z - 1
\end{cases}
$$
Dunque $\pi = x - y -z + 1 = 0$

### b) 
Trovare equazioni parametriche della retta per l’origine ortogonale al piano $\pi$ del punto a).

Sappiamo che per essere ortogonale a $\pi$ la retta $h$ dovrà avere come vettore direzione il vettore normale al piano.
$$
\vec{n} = (1, -1, -1)
$$
Dunque la retta da noi cercata è della forma:
$$
h: \begin{cases}
x = t \\
y = -t \\
z = -t
\end{cases}
\qquad
\forall t \in \mathbb{R}
$$
## Es 1.8
Si considerino i piani dello spazio $π : x − y + z = 0$ e $π' : 8x + y − z = 0$. 

### a) 
Stabilire la posizione reciproca dei due piani.
$$
\begin{cases}
1 = 8t \\
-1 = t \\
1 = -t
\end{cases}
$$
Da cui risulta che $1 = 8$, quindi i due piani non sono né coincidenti, né paralleli.
Possiamo verificare se i due piani sono ortogonali tra loro o meno.
Se sono ortogonali allora il prodotto scalare tra i vettori normali dei piani deve risultare $0$.
$$
(1,-1,1) \cdot (8, 1, -1) = 8 - 1 - 1 = 6 \neq 0
$$
Da qui si conclude che i due piani sono incidenti e non ortogonali tra di loro.

### b) 
Trovare un’equazione cartesiana del piano passante per $P = (1, 1, 1)$ e perpendicolare ai piani $π$ e $π'$. 
Possiamo facilmente trovare un vettore perpendicolare ai vettori normali di $\pi$ e $\pi'$ effettuando il prodotto vettoriale tra essi:
$$
(1,-1,1) \times (8, 1, -1) = (1 - 1, 8 + 1, 1 + 8) = (0, 9, 9)
$$
$$
\pi'': y + z = d
$$
Troviamo $d$ sostituendo a $x, y, z$ le componenti del punto $P \in \pi''$:
$$
\begin{align}
1 + 1 = d \\
d = 2
\end{align}
$$
Quindi $\pi'': y + z = 2$

## Es 1.9
Si considerino i piani $π_{1}, π_{2}, π_{3}$ di equazioni $π_{1} : z − 3 = 0$, $π_{2} : x + y + 2 = 0$, $π_{3} : 3x + 3y − z + 9 = 0$ e la retta $r = \pi_{1} \cap \pi_{2}$. 
### a) 
Si stabilisca se il piano $π_{3}$ contiene $r$. 

Iniziamo trovando l'equazione parametrica della retta $r$:
$$
r : 
\begin{cases}
z - 3 = 0 \\
x + y + 2 = 0
\end{cases}
\qquad
\begin{cases}
x = t \\
y = -2 - t \\
z = 3
\end{cases}
$$
Verificando che due punti qualsiasi della retta $r$ appartengono al piano $\pi_{3}$ si può concludere che l'intera retta sia contenuta dal piano.
Alternativamente si può verificare verificando che la direzione della retta sia ortogonale alla direzione normale del piano e che un punto casuale della retta appartenga al piano.
$$
\begin{align}
(3, 3, -1) \cdot (1, -1, 0) &= 0  \\
3 - 3 + 0  & = 0  \\
0  & = 0
\end{align}
$$
Dunque la retta è ortogonale al piano. Prendiamo un punto casuale della retta ponendo $t = 0$.
$$
A : \begin{cases}
x = 0 \\
y = -2 \\
z = 3
\end{cases}
$$
Verifichiamo che tale punto faccia parte del piano $\pi_{3}$:
$$
\begin{align}
3x + 3y - z + 9 &= 0 \\
0 - 6 - 3  & = -9 \\
-9 & = - 9
\end{align}
$$
Dunque $A \in \pi_{3}$ e $r \in \pi_{3}$.

### b) 
Si trovi un’equazione cartesiana del piano $\pi_{4}$ passante per l’origine e contenente $r$. 

Per costruire tale piano si possono imporre queste condizioni: deve passare per il punto $O (0,0,0)$, una delle sue componenti è la direzione di $r$ e la seconda componente è la direzione della retta passante per $O$ e per un punto di $r$.

Dunque troviamo tale retta:
$$
\begin{cases}
x = 0 + 0t \\
y = 0 - 2t \\
z = 0 + 3t
\end{cases}
\qquad
\begin{cases}
x = 0 \\
y = -2t \\
z = 3t
\end{cases}
$$
Dunque il piano $\pi_{4}$ è definito dalla seguente equazione:
$$
\pi_{4}:
\begin{cases}
x = 0 + 0t + 1s \\
y = 0 - 2t - 1s \\
z = 0 + 3t
\end{cases}
\qquad
\forall t, s \in \mathbb{R}
$$
Segue la forma cartesiana:
$$
\pi_{4}:
\begin{cases}
s = x \\
y = - 2t - x \\
t = \frac{z}{3}
\end{cases}
\qquad
\begin{cases}
s = x \\
y = - \frac{2z}{3} - x \\
t = \frac{z}{3}
\end{cases}
\qquad
x+y+\frac{2z}{3} = 0
$$
### c) 
Si calcoli la proiezione ortogonale dell’origine sul piano $\pi_{1}$.

Il metodo più semplice per fare ciò è trovare una retta $s$ che sia ortogonale al piano e che intersechi l'origine e successivamente trovare la proiezione ortogonale mettendo a sistema la retta e il piano $\pi_{1}$.

La direzione di $s$ è $(0, 0, 1)$ e passa per il punto $(0,0,0)$:
$$
s : \begin{cases}
x = 0 \\
y = 0 \\
z = t
\end{cases}
\qquad
\begin{cases}
x = 0 \\
y = 0
\end{cases}
$$
Ora troviamo l'intersezione per trovare la proiezione:
$$
\begin{cases}
x = 0 \\
y = 0 \\
z - 3 = 0
\end{cases}
\qquad
\begin{cases}
x = 0 \\
y = 0 \\
z = 3
\end{cases}
$$
Dunque la proiezione ortogonale è il punto $(0,0,3)$.

## Es 1.10
Si determini la distanza del punto $P(3,1,2)$ dalla retta $r$ di equazione parametrica.
$$
r:
\begin{cases}
x = 6 + t \\
y = 2 + 2t \\
z = -1 - 3t
\end{cases}
$$
Troviamo un piano che sia ortogonale alla retta $r$ e che intersechi il punto $P$.
Tale piano è della forma:
$$
\pi : x + 2y - 3z = d
$$
Ora imponendo che il piano intersechi il punto $P$, si riesce a ricavare il termine noto $d$.
$$
d = 3 + 2 - 6 = -1
$$
Dunque $\pi : x + 2y - 3z = - 1$.
Troviamo il punto di intersezione tra $\pi$ e $r$:
$$
\pi \cap r: 
\begin{cases}
x+2y-3z=-1 \\
x=6+t \\
y=2+2t \\
z=-1-3t
\end{cases}
\qquad
\begin{cases} 
6+t+4+4t+3+9t=-1 \\
x=6+t \\
y=2+2t \\
z=-1-3t
\end{cases}
\begin{cases} 
t=-1 \\
x= 5 \\
y= 0 \\
z= 2
\end{cases}
$$
Dunque la distanza tra i due punti è la normale del vettore che li unisce:
$$
dist(P, \pi \cap r) = \sqrt{ (3 - 5)^{2} + (1- 0)^{2} + (2-2)^{2} } = \sqrt{ 4 + 1  + 0} = 5
$$
## Es 1.11
Si determini la distanza del punto $P(-1, 0, 2)$ dal piano $\pi$ di equazione $\pi : x - 2y +3z = -9$.

In questo casa basta applicare la formula:
$$
dist(P, \pi) = \frac{1(-1) -2(0) +3(2) + 9}{\sqrt{ 1^{2}+(-2)^{2}+3^{2} }} = \frac{14}{\sqrt{ 14 }} = \sqrt{ 14 }
$$
## Es 1.12
### a)
Determinare la posizione reciproca (cioè se sono incidenti, parallele o sghembe) delle rette $r$ e $r'$ di equazioni parametriche:
$$
r : \begin{cases}
x = 2t \\
y = t + 1 \\
z = t + 3
\end{cases}
\qquad
r': \begin{cases}
x = s \\
y = 2 \\
z = s + 2
\end{cases}
$$
Se le due rette sono incidenti esiste un $k$ reale tale che $\vec{r} = k\vec{r'}$:
$$
\begin{cases}
2 = k \\
1 = 0 \\
1 = k
\end{cases}
$$
Il sistema è ovviamente impossibile, quindi le due rette non sono parallele.
Controlliamo se sono incidenti.
$$
\begin{cases}
x = 2t \\
y = t + 1 \\
z = t + 3 \\
x = s \\
y = 2 \\
z = s + 2 \\
\end{cases}
\qquad
\begin{cases}
s = x \\
y = 2 \\ 
t = \frac{x}{2} \\
2 = \frac{x}{2} + 1 \\
z = \frac{x}{2} + 3 \\
z = x + 2
\end{cases}
\qquad
\begin{cases}
s = x \\
y = 2 \\
t = \frac{x}{2} \\
x = 2 \\
x = 4
\end{cases}
$$
Esiste un punto $(2, 2, 4)$ che è intersezione delle due rette.

### b)
Se le rette sono incidenti determinare l'ampiezza dell'angolo tra esse.
$$
\cos \theta = \frac{(2, 1, 1) \cdot (1, 0, 1)}{\sqrt{ 6 }\sqrt{ 2 }} = \frac{3}{2\sqrt{ 3 }} = \frac{\sqrt{ 3 }}{2}
$$


## Es 1.13
Sia $P$ il punto di coordinate $P(2,1,3)$ e sia $r$ la retta di equazioni cartesiane
$$
\begin{cases}
x-y=0 \\
y+z-3 = 0
\end{cases}
$$
### a)
Si trovi la distanza di $P$ da $r$.

Per trovare la distanza di un punto da una retta basta trovare un piano ortogonale alla retta e imporne l'incidenza con il punto:

Prima bisogna trovare la forma parametrica della retta $r$:
$$
\begin{cases}
x = t \\
y = t \\
z - 3 = - t
\end{cases}
\qquad
\begin{cases}
x = t \\
y = t \\
z = 3 - t
\end{cases}
$$
Il piano $\pi$ ha equazione del tipo:
$$
x + y - z = d
$$
Imponendo il piano passa per $P$, inserendo le componenti di $P$ possiamo ricavare il valore di $d$.
$$
d = 2 + 1 - 3 = 0 
$$
Dunque il piano ha equazione:
$$
x + y - z = 0
$$
Ora troviamo un punto $A = \pi \cap r$.
$$
\pi \cap r: 
\begin{cases}
x + y - z = 0 \\
x = t \\
y = t \\
z = 3 - t
\end{cases}
\qquad
\begin{cases}
t + t - 3 + 3t = 0 \\
x = t \\
y = t \\
z = 3 - t
\end{cases}
\qquad
\begin{cases}
t = 1 \\
x = 1 \\
y = 1 \\
z = 2
\end{cases}
$$
Ora bisogna trovare un vettore generato dai punti $P$ e $A$.
$$
\vec{v} = (1, 0, 1)
$$
Ora basta ricavare la lunghezza del vettore:
$$
dist = \sqrt{ 1 + 0 + 1 } = \sqrt{ 2 }
$$
## Es 1.14
Nel piano, si considerino le rette $r_{1}, r_{2}, r_{3}$
$$
r_{1} :
\begin{cases}
x = 1 - 2t \\
y = 2t
\end{cases}
\qquad
r_{2} : x - 2y + 1 = 0
\qquad
r_{3} : 2x + y - 2 = 0
$$
### a)
Si trovi un'equazione cartesiana della retta $r$ parallela a $r_{1}$ e passante per il punto $A = r_{2} \cap r_{3}$
$$
r_{2} \cap r_{3}: 
\begin{cases}
x -2y + 1 = 0 \\
2x + y -2 = 0
\end{cases}
\qquad
\begin{cases}
x = 2y - 1 \\
4y - 2 + y -2 = 0
\end{cases}
\qquad
\begin{cases}
x = \frac{3}{5} \\
y = \frac{4}{5}
\end{cases}
$$
Dunque la retta $r$ è:
$$
r: 
\begin{cases}
x = \frac{3}{5}-2t \\
y = \frac{4}{5}+2t
\end{cases}
\qquad
\begin{cases}
- \frac{x}{2} + \frac{3}{10} = t \\
y = \frac{4}{5}-x+\frac{3}{5}
\end{cases}
\qquad
x + y = \frac{7}{5}
$$
## Es 1.15

### Dati:
$$
\begin{align}
A &= (1, 2, 1) \\ \\
\pi &: x+z=4 \\  \\
s &: \begin{cases}
x = 1 + t \\
y = 2 \\
z = 0
\end{cases}
\end{align}
$$


### a)
Si determini il punto B, proiezione ortogonale di $A$ sul piano $\pi$  e la retta $r$ passante per $A, B$.

Trovo il vettore normale al piano:
$$
\vec{n_{\pi}} = (1,0,1) 
$$
Dopodiché scrivo la forma parametrica della retta $r$ passante per $A$ e ortogonale a $\pi$.
$$
r: \begin{cases}
x = 1 + s \\
y = 2 \\
z = 1 + s
\end{cases}
$$
Il punto $B$ è determinato da $r \cap \pi$:
$$
\begin{cases}
x = 1 + s \\
y = 2 \\
z = 1 + s \\
x + z = 4
\end{cases}
\qquad
\begin{cases}
s = x - 1 \\
y = 2 \\
z = 1 + x - 1 \\
x + z = 4
\end{cases}
\qquad
\begin{cases}
s = x - 1 \\
y = 2 \\
z = x \\
x = 2
\end{cases}
\qquad
\begin{cases}
s = 1 \\
y = 2 \\
z = 2 \\
x = 2
\end{cases}
$$
Abbiamo così trovato il punto $B = (2, 2, 2)$.
### b)
Indicato con C il punto di intersezione tra $s$ e $r$ e con $D$ il punto di intersezione tra $s$ e $\pi$, si determini un'equazione della retta $CD$.

Trovo $s \cap r$ mettendo trovando le loro forme cartesiane e mettendole a sistema:
$$
s : \begin{cases}
x = 1 + t \\
y = 2 \\
z = 0
\end{cases}
\qquad
\begin{cases} 
t = x - 1 \\
y = 2 \\
z = 0
\end{cases}
\qquad
\begin{cases} 
y = 2 \\
z = 0
\end{cases}
$$
$$
r : \begin{cases}
x = 1 + s \\
y = 2 \\
z = 1 + s
\end{cases}
\qquad
\begin{cases}
s = x - 1 \\
y = 2 \\
z = 1 + x - 1
\end{cases} 
\qquad
\begin{cases}
s = x - 1 \\
y = 2 \\
z = x
\end{cases} 
\qquad
\begin{cases}
y = 2 \\
-x + z = 0
\end{cases} 
$$
$$
s \cap r:
\begin{cases}
y = 2 \\
y = 2 \\
z = 0 \\
-x + z = 0
\end{cases}
\qquad
\begin{cases}
y = 2 \\
z = 0 \\
x = 0
\end{cases}
$$
Ora ho trovato il punto $C = (0, 2, 0)$.

Ora metto a sistema $s$ e $\pi$ in modo da trovare $D$:
$$
s \cap \pi:
\begin{cases}
y = 2 \\
z = 0 \\
x + z = 4
\end{cases}
\qquad
\begin{cases}
x = 4 \\
y = 2 \\
z = 0
\end{cases}
$$
Ora ho trovato il punto $D = (4, 2, 0)$.
La retta $CD$ passante per $C$ e $D$ ha direzione $\overrightarrow{CD} = (4, 0, 0)$.
$$
CD : \begin{cases}
x = 4t \\
y = 2 \\
z = 0
\end{cases}
\qquad
\forall t \in \mathbb{R}
$$
### c)
Si determini l'angolo tra $r$ e la retta.

Utilizzo la formula per trovare il coseno dell'angolo convesso $\theta$ tra $r$ e $CD$.

Prima ricavo i vettori direzione delle rette:
$$
\begin{align}
\vec{r} &= (1, 0, 1) \\
\overrightarrow{CD} &= (4, 0, 0)
\end{align}
$$
Ora posso usare la formula:
$$
\begin{align}
\cos \theta &= \frac{\vec{r} \cdot \overrightarrow{CD}}{|\vec{r}| |\overrightarrow{CD}|} = \frac{4}{4\sqrt{ 2 }} = \frac{\sqrt{ 2 }}{2} \\ \\

\theta  & = \arccos \left({\frac{\sqrt{ 2 }}{2}}\right) = \frac{\pi}{4}
\end{align}
$$
## Es 1.16
Determinare per quali valori $k$ il triangolo di vertici $A_{1}(0, 0)$, $A_{2}(4,2)$, $A_{3}(1, k)$ ha area $5$.

Per risolvere il problema si considera il parallelogramma di cui il triangolo è metà.
L'area di tale parallelogramma ha area $10$ ed è formato dai vettori $\overrightarrow{A_{1}A_{2}}$ e $\overrightarrow{A_{1}A_{3}}$.
$$
\overrightarrow{A_{1}A_{2}} = (4, 2) = \vec{v}
$$
$$
\overrightarrow{A_{1}A_{3}} = (1, k) = \vec{w}
$$
Utilizzo la formula dell'area del parallelogramma costruito con 2 vettori.
$$
A_{\text{parallelogramma}} = |v_{1}w_{2} - v_{2}w_{1}| = |4k-2| = 10
$$
$$
A_{\text{triangolo}} = |2k-1| = 5
$$
$$
\begin{cases}
2k - 1 = 5 & \text{se } 2k - 1 \geq 0 \\
1 - 2k = 5 & \text{se } 2k - 1 < 0
\end{cases}
$$
$$
\begin{cases}
k = 3 & \text{se } 2 - k \geq 0 \\
k = -2 & \text{se } 2 - k < 0
\end{cases}
$$
Quindi i valori di $k$ per i quali il triangolo $A_{1}, A_{2}, A_{3}$ ha area $5$ sono $k = 3$ e $k = -2$.

### Es 1.17
Siano $A = (0, -1, 0), B = (-2, 0, -3), C = (-1, 0, -1)$ punti nello spazio.

### a)
Calcolare l'area del triangolo di vertici $A, B, C.$

Per calcolare l'area del triangolo prima calcolo l'area del parallelogramma nello spazio costruito sui vettori $\overrightarrow{AB}$ e $\overrightarrow{AC}$.
$$
\overrightarrow{AB} = (-2, 1, -3) 
$$
$$
\overrightarrow{AC} = (-1, 1, -1)
$$
$$
A_{\text{parallelogramma}} = |\overrightarrow{AB} \times \overrightarrow{AC}| = |(-1 + 3, 3 - 2, -2 + 1)| = \sqrt{ 4 +1+1 } = \sqrt{ 6 }
$$
$$
A_{\text{triangolo}} = \frac{\sqrt{ 6 }}{2}
$$
### b)
Stabilire se il punto $D = (2, 2, 2)$ appartiene al piano  contenente $A, B, C$.

Utilizzo i vettori $\overrightarrow{AB}$ e $\overrightarrow{AC}$ e il punto $A$ per costruire la forma parametrica del piano $\pi$.
$$
\begin{align}
\pi :
\begin{cases}
x = -2t - s \\
y = -1 + t + s \\
z = -3t - s
\end{cases}
\qquad
\begin{cases}
s = -2t - x \\
y = -1 + t + s \\
z = -3t + 2t + x
\end{cases}
\qquad
\begin{cases}
s = -2t - x \\
y = -1 + t + s \\
t = x - z 
\end{cases}
\qquad
\begin{cases}
s = -2t - x \\
y = -1 + x - z + -2(x - z) - x \\
t = x - z 
\end{cases}
\qquad
\begin{cases}
s = -2t - x \\
2x + y - z = -1 \\
t = x - z 
\end{cases} \\
\end{align}
$$
Quindi $\pi : 2x + y - z = -1$. Bisogna sostituire le componenti di $D$ nell'equazione di $\pi$.
$$
2 \cdot 2 + 2 - 2 \neq -1
$$

## Es 1.18
Calcolare il volume  del parallelepipedo di lati $u(1,0,0), v(-3,1,1), w(-2,2,5)$.

Il volume di un parallelepipedo si calcola con la seguente formula $|u \cdot (v \times w)|$.
$$
V = |u \cdot (v \times w)| = |u \cdot (5-2,-2+15,-6+2)| = |(1,0,0) \cdot (3, 13, -4)| = 3
$$
### Es 1.19
Siano $P_{1} = (1,-1,0), P_{2} = (1, 0, -1), P_{3} =\left( 1 + \frac{2}{\sqrt{ 3 }}, -\frac{1}{\sqrt{ 3 }},-1-\frac{1}{\sqrt{ 3 }}\right), P_{4}=(1,2,1)$ quattro punti nello spazio.
### a) 
calcolare l'angolo tra i vettori $\overrightarrow{P_{1}P_{2}}$ e $\overrightarrow{P_{2},P_{3}}$.

Utilizzo la formula per trovare il coseno dell'angolo convesso tra due vettori:
$$
\overrightarrow{P_{1}P_{2}} = (0, 1, -1)
$$
$$
\overrightarrow{P_{2}P_{3}} = \left( \frac{2}{\sqrt{ 3 }},-\frac{1}{\sqrt{ 3 }},- \frac{1}{\sqrt{ 3 }} \right)
$$
$$
\cos \theta = \frac{\overrightarrow{P_{1}P_{2}} \cdot \overrightarrow{P_{2}P_{3}}}{|\overrightarrow{P_{1}P_{2}}||\overrightarrow{P_{2}P_{3}}|} = \frac{0}{|\overrightarrow{P_{1}P_{2}}||\overrightarrow{P_{2}P_{3}}|} = 0
$$
$$
\theta = \arccos(0) = \frac{\pi}{2}
$$
### b)
Calcolare il volume del prisma con base il triangolo $P_{1}P_{2}P_{3}$ e lato il segmento $P_{1}P_{4}$.

Utilizzo la formula del volume di un parallelepipedo nello spazio costruito con i 3 vettori $\overrightarrow{P_{1}P_{2}}, \overrightarrow{P_{1}P_{3}}, \overrightarrow{P_{1}P_{4}}$.
$$
\overrightarrow{P_{1}P_{2}} = (0,1,-1)
\qquad
\overrightarrow{P_{1}P_{3}} = \left( \frac{2}{\sqrt{ 3 }}, 1 - \frac{1}{\sqrt{ 3 }}, -1 -\frac{1}{\sqrt{ 3 }} \right)
\qquad
\overrightarrow{P_{1}P_{4}} = (0, 3, 1)
$$
$$
\begin{align}
V_{\text{parallelepipedo}} &= |\overrightarrow{P_{1}P_{4}} \cdot (\overrightarrow{P_{1}P_{2}} \times \overrightarrow{P_{1}P_{3}})| \\
 & = \left|(0,3,1) \cdot \left( -1-\frac{1}{\sqrt{ 3 }} + 1 - \frac{1}{\sqrt{ 3 }}, -\frac{2}{\sqrt{ 3 }} - 0, 0 - \frac{2}{\sqrt{ 3 }} \right) \right|  \\
 & = \left|(0,3,1) \cdot \left( -\frac{2}{\sqrt{ 3 }}, -\frac{2}{\sqrt{ 3 }}, -\frac{2}{\sqrt{ 3 }}\right) \right|  \\
 & = \left| 0 - \frac{6}{\sqrt{ 3 }} - \frac{2}{\sqrt{ 3 }} \right| \\
 & = \left| -\frac{8}{\sqrt{ 3 }} \right| \\
 & = \frac{8}{\sqrt{ 3 }}
\end{align}
$$
Da cui:
$$
V_{\text{triangolo}} = \frac{1}{2} \left(V_{\text{parallelepipedo}}\right) = \frac{4}{\sqrt{ 3 }}
$$
## Es 1.20
Si considerino i piani $\pi_{1},\pi_{2}, \pi_{3}$ di equazioni:
$$
\pi_{1} : 2x - y = 1
\qquad
\pi_{2} : x + y + z = 0
\qquad
\pi_{3} : x - 2z = 1
$$
### a)
Si determini l'insieme intersezione dei tre piani.

Per trovare l'insieme intersezione basta mettere a sistema le 3 equazioni dei piani:
$$
\pi_{1}\cap \pi_{2}\cap \pi_{3}:
\begin{cases}
2x - y = 1 \\
x + y + z = 0 \\
x - 2z = 1
\end{cases}
\qquad
\begin{cases}
y = 2x - 1 \\
3x - 1 + z = 0 \\
x - 2z = 1
\end{cases}
\qquad
\begin{cases}
y = 2x - 1 \\
z = -\frac{2}{7} \\
x = 1 + 2z
\end{cases}
\qquad
\begin{cases}
y = -\frac{1}{7} \\
z = -\frac{2}{7} \\
x = \frac{3}{7}
\end{cases}
$$
Quindi $\pi_{1} \cap \pi_{2} \cap \pi_{3}$ è il punto $P\left( \frac{3}{7}, -\frac{1}{7}, -\frac{2}{7} \right)$.

### b)
Si trovi il piano $\pi_{4}$ passante per l'origine e perpendicolare $r = \pi_{1} \cap \pi_{2}$.

Prima troviamo l'equazione parametrica e cartesiana della retta $r$:
$$
r: 
\begin{cases}
2x-y = 1 \\
x + y + z = 0
\end{cases}
\qquad
\begin{cases}
x = t \\
2t - y = 1 \\
t + y + z = 0
\end{cases}
\qquad
\begin{cases}
x = t \\
y = -1 + 2t \\
z = -1 - 3t
\end{cases}
$$
Per trovare la formula del piano $\pi_{4}$ abbiamo bisogno della direzione del vettore normale al piano per determinare i coefficienti $a, b, c$ e un punto contenuto da esso, quindi l'origine.
$$
\pi_{4} : x + 2y - 3z = d
$$
Per ottenere il valore di $d$ bisogna sostituire le coordinate dell'origine, che sappiamo essere un punto appartenente al piano $\pi_{4}$:
$$
0 = d
$$
Quindi il piano $\pi_{4}$ è descritto dall'equazione:
$$
\pi_{4}: x + 2y - 3z = 0
$$
### c)
Si determini l'area del triangolo di vertici $A,B,C$ con $A = \pi_{1} \cap \pi_{2} \cap \pi_{3}, B=\pi_{1} \cap \pi_{3}\cap \pi_{4}, C=\pi_{2} \cap\pi_{3} \cap\pi_{4}$:
$$
\pi_{1}\cap \pi_{2}\cap \pi_{3} = A = \left( \frac{3}{7}, -\frac{1}{7}, -\frac{2}{7} \right)
$$
$$
\pi_{1} \cap \pi_{3} \cap \pi_{4}:
\begin{cases}
2x - y = 1 \\
x - 2z = 1 \\
x + 2y - 3z = 0
\end{cases}
\qquad
\begin{cases}
y = 2x - 1 \\
x - 2z = 1 \\
5x - 2 - 3z = 0
\end{cases}
\qquad
\begin{cases}
y = 2x - 1 \\
x = 1 + 2z \\
5x - 2 - 3z = 0
\end{cases}
\qquad
\begin{cases}
y = 2x - 1 \\
x = 1 + 2z \\
z = -\frac{3}{7}
\end{cases}
\qquad
\begin{cases}
y = -\frac{5}{7} \\
x = \frac{1}{7} \\
z = -\frac{3}{7}
\end{cases}
$$
$$
\pi_{2}\cap \pi_{3}\cap \pi_{4} :
\begin{cases}
x + y + z = 0 \\
x - 2z = 1 \\
x + 2y - 3z = 0
\end{cases}
\qquad
\begin{cases}
1 + y + 3z = 0 \\
x = 1 + 2z \\
z = 1 + 2y
\end{cases}
\qquad
\begin{cases}
y = -\frac{4}{7} \\
x = \frac{5}{7} \\
z = -\frac{1}{7}
\end{cases}
$$
Dunque:
$$
\begin{align}
A  & = \left( \frac{3}{7}, -\frac{1}{7}, -\frac{2}{7} \right) \\ \\
B  & = \left( \frac{1}{7},-\frac{5}{7}, -\frac{3}{7}\right) \\ \\
C  & = \left( \frac{5}{7}, -\frac{4}{7}, -\frac{1}{7} \right)
\end{align}
$$
L'area del triangolo è meta dell'area del parallelogramma costruito sui vettore $\overrightarrow{AB}$ e $\overrightarrow{AC}$:
$$
\overrightarrow{AB} = \left( -\frac{2}{7}, -\frac{4}{7}, -\frac{1}{7} \right)
$$
$$
\overrightarrow{AC} = \left( \frac{2}{7}, -\frac{3}{7}, \frac{1}{7} \right)
$$
$$ 
\begin{align}
A & = \frac{1}{2} \left| \overrightarrow{AB} \times \overrightarrow{AC} \right|  \\
  & = \frac{1}{2} \left|\left(\frac{-4 - 3}{49}, \frac{-2 + 2}{49}, \frac{6 + 8}{49} \right)\right|  \\
  & = \frac{1}{2} \left| \left(-\frac{1}{7}, 0, \frac{2}{7}\right) \right|  \\
  & = \frac{1}{2}\sqrt{ \frac{1}{49} + 0 + \frac{4}{49}} \\
  & = \frac{1}{2} \frac{\sqrt{ 5 }}{7}  \\
  & = \frac{\sqrt{ 5 }}{14}
\end{align}
$$
## Es 1. 21
Nello spazio si considerino le due rette di equazioni:
$$
r : \begin{cases}
x = 1 + t \\
y = -t \\
z = 2t + 3
\end{cases}
\qquad
s: \begin{cases}
x + y = 0 \\
2x - z = 0
\end{cases}
$$
### a)
Mostrare che le due rette sono parallele.

Si porta $s$ in forma parametrica:
$$
s : \begin{cases}
x = t \\
y = -t \\
z = 2t
\end{cases}
$$
Si verifica che le rette sono parallele controllando che i vettori direzioni siano proporzionali:
$$
\begin{cases}
1 = 1k \\
-1 = -1k \\
2k = 2k
\end{cases}
\qquad
k = 1
$$
Le rette sono parallele perché $\exists k \in \mathbb{R} : \vec{r} = k\vec{s}$

### b)
Determinare la distanza tra le due rette.

Siccome le due rette sono parallele, basta trovare un piano la cui direzione è la stessa delle rette e trovo le intersezioni con esse.
$$
\pi \cap s: \begin{cases}
x - y + 2z = 0 \\
x + y = 0 \\
2x - z = 0
\end{cases}
\qquad
\begin{cases} 
y = 0 \\
x = 0 \\
y = 0
\end{cases}
$$
$$
\pi \cap r: \begin{cases}
x - y + 2z = 0 \\
x = 1 + t \\
y = -t \\
z = 2t + 3
\end{cases}
\qquad
\begin{cases}
t = -y \\
x = 1 - y \\
z = -2y + 3 \\
x - y + 2z = 0
\end{cases}
\qquad
\begin{cases}
t = -y \\
x = 1 - y \\
z = -2y + 3 \\
y = \frac{7}{6}
\end{cases}
\qquad
\begin{cases}
t = -y \\
x = -\frac{1}{6} \\
z = \frac{2}{3} \\
y = \frac{7}{6}
\end{cases}
$$
$$
\begin{align}
r \ni A = \left( -\frac{1}{6}, \frac{7}{6}, \frac{2}{3} \right) \\
s \ni B = (0, 0, 0)
\end{align}
$$
$$
\begin{align}
\overrightarrow{AB} &= \left( \frac{1}{6}, -\frac{7}{6}, -\frac{2}{3} \right) \\
|\overrightarrow{AB}| &= \sqrt{ \frac{1}{36} + \frac{49}{36} + \frac{16}{36} } = \sqrt{ \frac{14}{9} } =\frac{\sqrt{ 14 }}{3}
\end{align}
$$

## Es 1.22
Nello spazio si considerino le due rette di equazioni:
$$
r : \begin{cases}
x = 1 + t \\
y = 1 - t \\
z = 3
\end{cases}
\qquad
s: x + y - 1 = x - y + z = 0
$$
Per facilitare i conti trovo la forma cartesiana di $r$ e la forma parametrica di $s$ :
$$
r : \begin{cases}
t = x - 1 \\
x + y = 2 \\
z = 3
\end{cases}
\qquad
\begin{cases}
x + y = 2 \\
z = 3
\end{cases}
$$
$$
s : \begin{cases}
x + y - 1 = 0 \\
x - y + z = 0
\end{cases}
\qquad
\begin{cases}
x = t \\
t = 1 - y \\
t - y + z = 0
\end{cases}
\qquad
\begin{cases}
x = t \\
y = 1 - t \\
z = 1 - 2t
\end{cases}
$$
### a)
Mostrare che le due rette sono sghembe

Per mostrare che le due rette sono sghembe basta dimostrare che non sono incidenti e che non sono parallele.
Per dimostrare ciò le si mette a sistema.
$$
r \cap s:
\begin{cases}
x + y = 2 \\
z = 3 \\
x + y = 1 \\
x - y + z = 0
\end{cases}
\qquad
\begin{cases}
1 = 2 \\
z = 3 \\
x - y + z = 0
\end{cases}
\qquad
\text{sistema impossibile}
$$
Il che vuol dire che non esiste l'intersezione di $r$ e $s$ e dunque non sono incidenti.

Ora dimostriamo che le dure rette non sono parallele cercando la proporzionalità tra le loro direzioni:
$$
\vec{r} = (1, -1, 0) \qquad \vec{s} = (1, -1, -2)
$$
$$
\begin{cases}
1 = 1t \\
-1 = -1t \\
0 = -2t
\end{cases}
\qquad
\begin{cases}
t = 1 \\
t = 0 \\ 
0 = 1
\end{cases}
\qquad
\text{sistema impossibile}
$$
Dunque $\nexists t \in \mathbb{R} : \vec{r} = t\vec{s}$.
Dunque le due rette sono sghembe.

### b)
Determinare un'equazione del piano contenente la retta $r$ e parallelo alla retta $s$.

Prima di tutto mi trovo il fascio di piani contenente $r$.
$$
\pi_{r} :
\begin{cases}
\lambda(x + y - 2) = 0 \\
\mu(z - 3) = 0
\end{cases}
$$
Dunque il piano generico contenente $r$ è dato dall'equazione:
$$
\pi_{r} : \lambda x + \lambda y + \mu z = 2\lambda-3\mu
$$
Bisogna trovare il piano $\pi$ tale che $\vec{n}_{\pi} \cdot \vec{s} = 0$, ovvero:
$$
\begin{align}
(\lambda, \lambda, \mu) \cdot (1, -1, -2) & = 0  \\
\lambda - \lambda - 2\mu  & = 0 \\
-2 \mu  & = 0  \\
\mu & = 0
\end{align}
$$
Mentre $\lambda$ può assumere qualsiasi valore reale non nullo, dato che $\mu = 0$.
Utilizziamo $\lambda = 1$ per semplicità dei conti, l'equazione del piano $\pi$ è:
$$
\pi : x + y = 2
$$
### c)
Determinare la distanza tra le due rette.
Per determinare la distanza tra le due rette si hanno a disposizione diversi metodi: siccome abbiamo già l'equazione di un piano contenente una retta e parallelo all'altra utilizzeremo il II° metodo.

Troviamo un punto $A$ appartenente a $s$, ponendo $x = 0$.
$$ A:
\begin{cases}
x = 0 \\
y = 1 \\
z = 1
\end{cases}
$$
Quindi $A = (A_{x}, A_{y}, A_{z}) = (0, 1, 1)$.
La distanza tra $s$ e $r$ è la distanza tra $A$ e $\pi$:
$$
d(s, r) = d(A, \pi) = \frac{|1 - 2|}{\sqrt{ 2 }} = \frac{\sqrt{ 2 }}{2}
$$

### d)
Determinare un'equazione del piano parallelo alle due rette ed equidistante da esse.

Sia $B$ un punto di $r$ e $A$ un punto di $s$. Abbiamo che $d(A, \rho) = d(B, \rho)$ dove $\rho \parallel s, r$. Mettiamo le condizioni a sistema
Seguono dati utili per il sistema:
$$
\begin{align}
A & = (2, -1, -3) \\
B & = (1, 1, 3) \\
\vec{s} & = (1, -1, -2) \\
\vec{r} & = (1, -1, 0) \\
\vec{n}_{\rho}  & = (1, 1, 0)
\end{align}
$$
$$
\rho : 
\frac{|2 - 1 -d|}{\sqrt{ 2 }} = \frac{|1 + 1 -d|}{\sqrt{ 2 }} = |1 - d| = |2 - d|
$$
Quindi:
- se $d \geq 2$:
$$
\begin{align}
d - 1 &= d - 2 \\
1 &= 2 \qquad \text{assurdo}
\end{align}
$$
- se $1 \leq d < 2$
$$
\begin{align}
d - 1 &= 2 - d \\
d  &= \frac{3}{2}
\end{align}
$$
- se $d < 1$
$$
\begin{align}
1 - d &= 2 - d \\
1  & = 2 \qquad \text{assurdo}
\end{align}
$$
Dunque l'unico risultato plausibile è $d = \frac{3}{2}$.

Il piano $\rho$ è dato dall'equazione:
$$
\rho = x + y = \frac{3}{2}
$$
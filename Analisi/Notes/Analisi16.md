## Cauchy $\implies$ Hopital
$$
\lim_{ x \to x_{0}^{+} }  \frac{f(x)}{g(x)} = \left[ \frac{0}{0} \right] \qquad x_{0} \in \mathbb{R}
$$
Posso estendere per continuità le funzioni a $x_{0}$, $f(x_{0}) = g(x_{0}) = 0$, sebbene non siano propriamente definite in $x_{0}$, mi affido al fatto che formano una forma indeterminata e associo quei valori alle funzioni in $x_{0}$.

Ipotesi (limite destro):
1. $f$ e $g$ sono continue in $[x_{0}, x]$
2. $f$ e $g$ sono derivabili in $(x_{0}, x)$ 
3. $g'(x) \neq 0$ in ogni punto di tra $x_{0}$ e $x$

Le ipotesi contengono le ipotesi necessarie per il teorema di de L'Hopital.
$$
\lim_{ x \to x_{0}^{+} }  \frac{f(x)}{g(x)} = \lim_{ x \to x_{0}^{+} }  \frac{f(x) - f(x_{0})}{g(x) - g(x_{0})} = \lim_{ x \to x_{0}^{+} } \frac{f'(c(x_{0}, x))}{g'(c(x_{0}, x))} \qquad c \in (x_{0}, x)
$$
Pongo $x_{0} < t = c(x_{0}, x) < x$, per il teorema dei carabinieri anche $t \rightarrow  x_{0}^{+}$
$$
\lim_{ t \to x_{0}^{+} } \frac{f'(t)}{g'(t)}
$$

In effetti $c$ dipende sia da $x_{0}$ che da $x$.
Ho utilizzato il teorema di Cauchy.
$$
\frac{f(x) - f(x_{0})}{g(x)- g(x_{0})} =^{TC} \frac{f'(c(x_{0}, x))}{g'(c(x_{0}, x))}
$$

## Lagrange $\implies$ monotonia

## Teorema monotonia 2
Sia $f:[a, b] \rightarrow \mathbb{R}$ e continua in $[a, b]$ e derivabile in $(a, b)$.
Allora valgono le seguenti conclusioni:

1. Se $f$ è debolmente crescente $\implies$ $f'(x) \geq 0, \forall x \in (a, b)$
2. // Se $f$ è strettamente crescente $\implies$ $f'(x) > 0, \forall x \in (a, b)$ //
3. Se $f'(x) \geq 0, \forall x \in (a, b) \implies$ $f$ è debolmente crescente in $(a, b)$
4. Se $f'(x) > 0, \forall x \in (a, b) \implies$ $f$ è strettamente crescente in $(a, b)$

#### Attenzione!
La seconda conclusione è falsa, si prendi per esempio $f = x^{3} \qquad x \in [-1, 1]$ in $0$.
Dunque:
1. Se $f$ è debolmente crescente $\implies$ $f'(x) \geq 0, \forall x \in (a, b)$
2. Se $f$ è strettamente crescente $\implies$ $f'(x) \geq 0, \forall x \in (a, b)$
3. Se $f'(x) \geq 0, \forall x \in (a, b) \implies$ $f$ è debolmente crescente in $(a, b)$
4. Se $f'(x) > 0, \forall x \in (a, b) \implies$ $f$ è strettamente crescente in $(a, b)$

### Dim
Della terza conclusione
Sia che $a < b < c < d$.
Voglio dimostrare che per ogni scelta di $c$ e $d$, $f(c) \leq f(d)$.
Applico Lagrange all'intervallo $[0, d]$. (Se è derivabile in tutti i punti di $(0, d)$, allora è derivabile anche in $(0, c)$)
$$
f(d) - f(c) = \underbrace{ (d - c) }_{ > 0 }\underbrace{ f'(z) }_{ \geq 0 } \qquad z \in (c, d)
$$
Quindi anche $f(d) - f(c) \geq 0$, dunque $f(d) \geq f(c)$.

La stessa dimostrazione vale per la quarta conclusione, cambiando tutti i $\geq$ con $>$.

### Dim
Della prima conclusione
Ipotesi: $f$ è debolmente crescente.
Voglio dimostrare che $f'(x) \geq 0, \forall x \in (a, b)$.

Si sceglie $x_{0} \in (a, b)$. Siccome so che la derivata esiste vuol dire che i limiti destro e sinistro del valore incrementale sono finiti e coincidono, quindi considero solo il limite destro per semplicità.
$$
f'(x_{0}) = \lim_{ h \to 0^{+} } \frac{f(x_{0}+h)-f(x_{0})}{h}
$$
Per la debole crescenza il numeratore è $N \geq 0$ e $D > 0$, e per il teorema della permanenza dei segni $f'(x_{0}) \geq 0$.
Questo scegliendo qualsiasi $x_{0} \in (a, b)$.

##### Esercizio:
Consideriamo $x^{5} + 2x = \sin x + 2024$, quante soluzioni ha questa equazione?
$$
f(x) = x^{5}+2x-\sin x
$$
E' una somma di funzioni dispari quindi è sicuramente dispari.
E' composizione di funzioni continue quindi è sicuramente continua.
Controllo i limiti agli estremi. (Gli estremi comprendono anche i limiti destri e sinistri di punti dove la funzione non è definita)

$$
\begin{align}
\lim_{ x \to  +\infty }  f(x) &= +\infty \\
\lim_{ x \to  -\infty }  f(x) &= -\infty
\end{align}
$$
Possiamo dunque concludere che la funzione è surgettiva, e dunque avrà sicuramente una soluzione per 2024.
Se dimostro che è strettamente monotona posso dimostrare che la soluzione è unica (ragiona intuitivamente e geometricamente)
La stretta monotonia implica l'iniettività, perciò la soluzione sarebbe unica. 
Si studia la monotonia facendo la derivata.
$$
f'(x) = 5x^{4} + 2 - \cos x \geq 5x^{4} + 1 \geq 1 > 0
$$
La funzione è dunque strettamente crescente $\implies$ La funzione è iniettiva in $\mathbb{R}$ $\implies$ una e una sola soluzione dell'equazione.

## Teorema monotonia 3
Supponiamo che $f'(x) \geq 0, \forall x \in (a, b)$.
Supponiamo che $f'(x) = 0$ sporadicamente, ossia in punti $x$ isolati tra loro.

Allora $f$ è strettamente crescente in $[a, b]$.
### Dim
Per ipotesi e monotonia 2, $f$ è debolmente crescente.
Se per assurdo, $f$ non è strettamente crescente, allora $f'(x) = 0$ in un sotto-intervallo non banale di $(a, b)$.
Ma questo è contrario all'ipotesi di sporadicità, allora $f$ è strettamente crescente.

## Studio globale delle funzioni
$$
f(x) = \frac{e^{x}}{x}
$$
### Passo 1
Determinare eventuali simmetrie (pari, dispari, periodica)

Simmetrie: In questo caso non sono presenti simmetrie
### Passo 2
Determinare l'insieme massimale di definizione, determinare la continuità, determinare i limiti agli estremi.

Insieme massimale: $A = \mathbb{R} \setminus \{ 0 \} = (-\infty, 0) \cup (0, +\infty)$
Continuità: La funzione è rapporto di funzioni continue, perciò è continua laddove definita.
Limiti agli estremi:
$$
\begin{align}
\lim_{ x \to +\infty } \frac{e^{x}}{x} &= +\infty \\
\lim_{ x \to -\infty } \frac{e^{x}}{x} &= 0\\
\lim_{ x \to 0^{+} } \frac{e^{x}}{x} &= +\infty \\
\lim_{ x \to 0^{-} } \frac{e^{x}}{x} &= -\infty
\end{align}
$$
Il limite a meno infinito va a $0$ da sotto, poiché il numeratore è positivo e il denominatore è negativo, rendendo la funzione negativa.

### Passo 3
Determinare gli zeri, determinare il segno della funzione.

Risolvere $f(x) = 0$, $f(x) > 0$, $f(x)<0$.
$$
\begin{align}
\frac{e^{x}}{x} &= 0 \\
e^{x} &= 0 \qquad \text{impossibile}
\end{align}
$$
![[studiosegno]]

Bisogna studiare il segno di numeratore e denominatore e fare lo studio dei segni.

### Passo 4
Studio derivate e monotonia.

Determinare dove $f'(x)$  esiste.
Il segno di $f'(x)$. (Risolvere $f'(x) = 0$, $f'(x) > 0$, $f'(x) < 0$)

$\frac{e^{x}}{x}$ derivabile in $\mathbb{R}\setminus \{ 0 \}$.
$$
f'(x) = \frac{e^{x}x-e^{x}}{x^{2}} = \frac{e^{x}(x - 1)}{x^{2}}
$$
$$
f'(x) = 0 \Longleftrightarrow e^{x}(x - 1) = 0 \Longleftrightarrow x = 1
$$
![[studiosegnoderivata]]
Dallo studio del segno si conclude che $f'(x) > 0$ se $x > 1$, $f'(x) < 0$ se $x < 1$. Bisogna ricordarsi che $f'(x)$ non è definita in $0$.

## Altri passi
Questi passi dipendono dalle motivazioni.

5. Asintoti
6. Punti di max e di min
7. Convessità / Concavità
8. Lipshitzianità

### Obbiettivi

1. Problemi max/min o sup/inf
ad esempio:
$$
A = \left\{  \frac{e^{x}}{x} \bigg| x > 0 \right\}
$$
$sup\{ A \} = +\infty$
$inf\{ A \} = min\{ A \} = e$
$max\{ A \} = \text{N.E.}$

2. Risoluzione di equazioni
ad esempio:
$$
\frac{e^{x}}{x} = 2024
$$
Intuitivamente guardando il grafico ha due soluzioni.
più in generale:
$$
\frac{e^{x}}{x} = \lambda \in \mathbb{R}
$$
Se $\lambda < 0$ ho una soluzione.
Se $0 \leq \lambda < e$ non ho soluzioni.
Se $\lambda = e$ ho una soluzione.
Se $\lambda > e$ ho due soluzioni.

3. Risoluzione di equazioni parametriche
ad esempio:
$$
e^{x} = \lambda x
$$
Quante soluzioni ho al variare di $\lambda$?

1° modo (da non usare):
Sovrapporre i grafici delle funzioni di destra e di sinistra, ovvero $f(x) = e^{x}$ e $g(x) = \lambda x$.
![[graficocomplicato]]
Ma questo metodo non è comodo, e in certi casi anche ambiguo.

2° modo:
Provo a isolare il parametro $\lambda$ e studiare $f(x) = \lambda$.
$$
f(x) = \frac{e^{x}}{x} = \lambda
$$
La risoluzione è quella del punto precedente.

##### Esempio:
$$
e^{x} = \lambda x^{2}
$$
Quante soluzioni ha questa equazione?

1° metodo:
Sovrapposizione dei grafici.
![[sovrapposizione]]

Sembra che se $\lambda > 0$ si hanno 2 soluzioni, mentre se $\lambda < 0$ non si hanno soluzioni.

2° metodo:
Isolo il parametro $\lambda$. Escludo $x = 0$, ma noto che anche l'equazione iniziale non ha $x = 0$ come soluzione, ma se la funzione originale avesse avuto $x = 0$ come soluzione, saprei già quante soluzioni avrei in quel punto.
$$
f(x) = \frac{e^{x}}{x^{2}}
$$
#### Passo 1
Nessuna simmetria
#### Passo 2
La funzione è definita in $\mathbb{R}\setminus\{ 0 \}$ ed è continua.

$$
\begin{align}
\lim_{ x \to +\infty } f(x) &= +\infty  \\
\lim_{ x \to -\infty } f(x) &= 0 \\
\lim_{ x \to  0^{+} } f(x) &= +\infty \\
\lim_{ x \to  0^{-} } f(x) &= +\infty
\end{align}
$$
#### Passo 3
$f(x) > 0, \qquad \forall x \mathbb{R} \setminus \{ 0 \}$
#### Passo 4
$$
f'(x) = \frac{e^{x}x^{2} - 2xe^{x}}{x^{4}} = \frac{e^{x}(x-2)}{x^{3}}
$$
![[studiosegnoesempio2]]

![[graficoesempio2]]
Se $\lambda \in (-\infty, 0]$ non ci sono soluzioni.
Se $\lambda \in \left(0, \frac{e^{2}}{4}\right)$ si ha una soluzione.
Se $\lambda \in \left\{\frac{e^{2}}{4} \right\}$ si hanno due soluzioni.
Se $\lambda \in\left( \frac{e^{2}}{4}, +\infty \right)$ si hanno tre soluzioni.

Quindi conviene sempre usare il secondo metodo.
##### Esempio:
$$
\sin x = x
$$
Risolvere l'equazione.
Con il primo metodo è impossibile da stabilire disegnando a mano.

2° metodo:
$x = 0$ è soluzione.
$$
f(x) = x - \sin x
$$
Devo risolvere $f(x) = 0$
#### Passo 1
La funzione è dispari.

#### Passo 2
Definita in $\mathbb{R}$ ed è continua.
$$
\begin{align}
\lim_{ x \to +\infty } f(x) &= +\infty \\
\lim_{ x \to -\infty } f(x) &= -\infty \\
\end{align}
$$
Si noti come la funzione è surgettiva, quindi sicuramente l'equazione ha soluzione.
#### Passo 3
Non si può fare perché farlo è ciò che sta chiedendo l'esercizio.

#### Passo 4
$f$ è derivabile in $\mathbb{R}$.
$$
f'(x) = 1 - \cos x = 0 \Longleftrightarrow \cos x = 1
$$
Quindi $x = 2k\pi, k\in \mathbb{Z}$
Si noti come $f'(x) \geq 0, \forall x \in \mathbb{R}$, quindi la funzione, per monotonia 2, sappiamo è crescente.
Siccome $f'(x) = 0$ solo in punti sporadici, per monotonia 3, sappiamo che è strettamente crescente, ma allora $f$ è anche iniettiva.

Quindi sappiamo che l'equazione ha una sola soluzione, che è quella trovata all'inizio.

## Punti di discontinuità
$f: A \rightarrow \mathbb{R}, a \subseteq \mathbb{R}, x_{0} \in A$
$$
\lim_{ x \to x_{0} } f(x) \neq f(x_{0})
$$
Allora $x_{0}$ è un punto di discontinuità.

1. Punti di discontinuità di prima specie
$$
\lim_{ x \to x_{0}^{+} } f(x) = l^{+} \in \bar{\mathbb{R}}, \lim_{ x \to x_{0}^{-} } f(x) = l^{-} \in \bar{\mathbb{R}}
$$
con $l^{+} \neq l^{-}$.
Se entrambi i limiti sono finiti allora $l^{+}- l^{-}$ si dice salto di $f$ in $x_{0}$.

2. Punti di discontinuità di seconda specie
$$
\begin{align}
\lim_{ x \to x_{0}^{+} }  f(x) &\qquad\text{non esiste} \\
&\text{o} \\
\lim_{ x \to x_{0}^{-} }  f(x) & \qquad\text{non esiste}
\end{align}
$$

3. Punti di discontinuità di terza specie
$$
\lim_{ x \to x_{0} }  f(x) = l \in \bar{\mathbb{R}}, l \neq f(x_{0})
$$
Se $l \in \mathbb{R}$ allora $x_{0}$ si dice punto di discontinuità eliminabile, tramite il prolungamento per continuità. Se $l = \pm \infty$ allora $x_{0}$ si dice punto di discontinuità non eliminabile.

##### Esempio
$$
f(x) = \lfloor x \rfloor \qquad \text{parte intera di x}
$$
Inteso come il più grande intero non più grande di $x$. In questo caso abbiamo una discontinuità di prima specie.

##### Esempio:
$$
f(x) = \begin{cases}
\cos\left( \frac{1}{x} \right) \qquad \forall x  \in (0, 1] \\
0 \qquad x = 0
\end{cases}
$$
Il seguente limite va fatto tenendo conto della prima parte della funzione.
$$
\lim_{ x \to 0^{+} } f(x) = \lim_{ x \to 0^{+} } \cos\left( \frac{1}{x} \right) \qquad \text{non esiste}
$$

##### Esempio:
![[terza_specie]]

## Punti di non derivabilità
1. $x_{0} \in \mathbb{R}$ è punto angoloso di una funzione se esistono $\lim_{ h \to 0^{+} } \frac{f(x_{0}+h)-f(x_{0})}{h}$ e $\lim_{ h \to 0^{-} } \frac{f(x_{0}+h)-f(x_{0})}{h}$ sono diversi e almeno uno è finito.
Ad esempio $f(x) = |x|$ non è derivabile in $x_{0} = 0$.

2. $x_{0} \in \mathbb{R}$ è una cuspide se $\lim_{ h \to 0^{+} } \frac{f(x_{0}+h)-f(x_{0})}{h}$ e $\lim_{ h \to 0^{-} } \frac{f(x_{0}+h)-f(x_{0})}{h}$ sono entrambi infiniti ma di segno opposto.
Ad esempio $f(x) = \sqrt{ |x| }$ non è derivabile in $x_{0} = 0$.
$$
\begin{align}
\lim_{ x \to 0^{+} } \frac{f(x_{0} + h) - f(h)}{h} = \lim_{ h \to 0^{+} } \frac{f(h)}{h} = \lim_{ h \to  0^{+} } \frac{\sqrt{ h }}{h} = +\infty  \\
\lim_{ x \to 0^{-} } \frac{f(x_{0} + h) - f(h)}{h} = \lim_{ h \to 0^{+} } \frac{f(h)}{h} = \lim_{ h \to  0^{+} } \frac{- \sqrt{ h }}{h} = -\infty
\end{align}
$$

3. $x_{0} \in \mathbb{R}$ è punto a tangente verticale se esiste infinito il limite $\lim_{ h \to 0 } \frac{f(x_{0}+h) - f(x_{0})}{h}$.
Ad esempio $f(x) = \sqrt[3]{ x }$ non è derivabile in $x_{0} = 0$.
$$
\lim_{ x \to 0 } \frac{f(x_{0} + h) - f(h)}{h} = \lim_{ h \to 0 } \frac{f(h)}{h} = \lim_{ h \to  0 } \frac{\sqrt[3]{ h }}{h} = +\infty  \\
$$

## Teorema degli zeri di Bolzano per gli intervalli aperti
Sia $f: (a, b) \rightarrow \mathbb{R}$ continua, con $-\infty \leq a < b \leq +\infty$, tale che:
$$
\begin{align}
\lim_{ x \to a^{+} } f(x) = l^{-} \in \bar{\mathbb{R}} \\
\lim_{ x \to b^{-} } f(x) = l^{+} \in \bar{\mathbb{R}}
\end{align}
$$
con $l^{-}$ e $l^{+}$ non nulli e di segno opposto, allora esiste almeno un $c \in (a, b)$ tale che:
$$
f(c) = 0
$$
## Teorema di Weierstrass per gli intervalli aperti
Sia $f:(a,b) \rightarrow \mathbb{R}$ continua, con $-\infty \leq a< b \leq +\infty$, tale che esistano (finiti o infiniti) i limiti destro e sinistro:
$$
\begin{align}
\lim_{ x \to a^{+} } f(x) = l^{-} \\
\lim_{ x \to b^{-} } f(x) = l^{+}
\end{align}
$$
1. Se esiste un punto $x_{0} \in (a, b) : f(x_{0}) > max\{ l^{+}, l^{-} \} \implies$ $f$ ammette un massimo.
2. Se esiste un punto $x_{0} \in (a,b): f(x_{0}) < min\{ l^{+}, l^{-} \} \implies$ $f$ ammette un minimo.

##### Esempio:
$$
f(x) = x^{4} - 4x^{3} + x^{2}
$$
E' una funzione continua in tutto $\mathbb{R} = (-\infty, +\infty)$.
$$
\begin{align}
\lim_{ x \to +\infty } f(x) = +\infty \\
\lim_{ x \to -\infty } f(x) = +\infty
\end{align}
$$
$min\{ l^{+}, l^{-} \} = +\infty$. $\forall x_{0} \in \mathbb{R}, f(x_{0}) < +\infty$, quindi sappiamo che esiste un minimo.

##### Esempio:
$$
f(x) = \frac{x}{x^{2} + 1}
$$
E' una funzione continua in tutto $\mathbb{R} = (-\infty, +\infty)$.
$$
\begin{align}
\lim_{ x \to +\infty } f(x) = 0 \\
\lim_{ x \to -\infty } f(x) = 0
\end{align}
$$
$max\{ l^{+}, l^{-} \} = min\{ l^{+}, l^{-} \} = 0$, questa funzione ammette sia minimo che massimo.

##### Grafico $f(x)$
##### Passo 1
E' una funzione dispari
##### Passo 2
Definita e continua in $\mathbb{R}$, i limiti agli estremi li abbiamo già fatti prima.
##### Passo 3
$f(x) = 0 \Longleftrightarrow x = 0$
$f(x) > 0 \Longleftrightarrow x > 0$
$f(x) < 0 \Longleftrightarrow x < 0$
##### Passo 4
$f'(x) = \frac{x^{2} + 1 - 2x^{2}}{(x^{2}+1)^{2}} = \frac{1 - x^{2}}{(1+x^{2})^{2}}$
$f'(x) = 0 \Longleftrightarrow x = \pm 1$
$f'(x) > 0 \Longleftrightarrow x \in (-1, 1)$
$f'(x) < 0 \Longleftrightarrow x \in (-\infty, -1) \cup (1, +\infty)$

![[grafico]]

Osservando il grafico si nota che $f(-1)$ è il minimo mentre $f(1)$ è il massimo.

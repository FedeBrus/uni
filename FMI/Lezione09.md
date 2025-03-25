### * Proposizione 9.13
Siano $n, m \in \mathbb{Z}$, $m \neq 0$ e siano $q$ e $r$ il quoziente e il resto della divisione di $n$ per $m$.
$$
\begin{cases}
n = qm + r \\
0 \leq r < |m|
\end{cases}
$$
Allora $(n, m) = (m, r)$.

## Algoritmo di Euclide
Siano $n,m \in \mathbb{Z}$, $m \neq 0$. Vogliamo utilizzare la propoisizione 9.13, $(m, 0) = |m|$ e $(n, m)=(m,n)=(|n|, |m|)$.
Possiamo supporre che $n\geq m > 0$, perché possiamo sempre scambiarli e cambiare il segno, dunque ci si può sempre trovare in questa situazione. Ad esempio, se voglio calcolare $(-28, 48) = (28, 48) = (48, 28)$.
Condizioni iniziali: $n \geq m > 0$.
$$
\begin{align} \\
&\qquad (n, m) &\qquad m \\
n = q_{1}m + r_{1} &\qquad (m, r_{1}) &\qquad r_{1} \\
m = q_{2}r_{1} + r_{2} &\qquad (r_{1}, r_{2}) &\qquad r_{2} \\
r_{1} = q_{3}r_{2} + r_{3} &\qquad (r_{2}, r_{3}) &\qquad r_{3}  \\
&\qquad \vdots &\qquad \\
r_{k-3} = q_{k-1}r_{k-2}+r_{k-1} &\qquad (r_{k-2}, r_{k-1}) & \qquad r_{k-1} \\
r_{k-2} = q_{k}r_{k-1}+r_{k} &\qquad (r_{k - 1}, r_{k}) &\qquad r_{k} \\
r_{k-1} = q_{k+1}r_{k}+r_{k+1} &\qquad (r_{k}, 0) &\qquad 0 \\
 & \qquad r_{k} & \qquad
\end{align}
$$
$\exists!k\in \mathbb{N}, r_{k+1} = 0$.
Procedura a ritroso:
$$
\begin{align}
r_{k} &= r_{k-2}-q_{k}r_{k-1} \\
r_{k-1} &= r_{k-3}-q_{k-1}r_{k-2} \\
&\vdots \\
r_{1} &= n - q_{1}m
\end{align}
$$
ma allora:
$$
r_{k} = r_{k-2} - q_{k}r_{k-1} = r_{k-2} - q_{k}(r_{k-3}-q_{k-1}r_{k-2}) = (1 + q_{k}q_{k-1})r_{k-2} -q_{k}r_{k-3}
$$
All'ultima sostituzione a ritroso, $r_{k}$ verrà espresso in termini di $n$ e $m$.
$$
(n,m) = r_{k} = xn + ym
$$
#### Esempio
Calcolare $(28, 48)$ e trovare una coppia $(x, y) \in \mathbb{Z} \times \mathbb{Z}$ tale che $x 28 + y 48= (28,48)$.

## Proprietà dei numeri coprimi e caraterrizzazione dei numeri primi (p. 26)
### Proposizione 10.1
Siano $n, m \in \mathbb{Z}$ non entrambi nulli e coprimi. Sia $q \in \mathbb{Z}$.
Valgono:
1. $n | mq \implies n|q$
2. $n|q$ e $m|q$ $\implies nm|q$

### Dimostrazione
Grazie al corollario 9.8, $\exists x,y \in \mathbb{Z} : xn+ym =(n,m) = 1 \implies xn+ym=1 \implies qxn+ymq = q$.
Quindi $qx(n)+y(mq) = q$. Siccome $n|mq$ e $n|n$, grazie al lemma utile $n|qxn+ymq$ e quindi $n|q$.

### Dimostrazione
$n|q$ e $m|q$ $\Longleftrightarrow \exists k,h \in \mathbb{Z} :$ $q = nk$ e $q = mh$. Quindi $n | (q=mh)$, ma $n$ e $m$ sono coprimi ma allora per il punto 1 $n|h \Longleftrightarrow \exists l\in \mathbb{Z}:h=nl$. Riprendendo una delle equazioni iniziali si ha che $q = m(nl) = (mn)l \implies mn | q$.

### Definizione 9.4 (p25)
Un numero $p \in \mathbb{Z}$ si dice primo se $p \geq 2$ e possiede solo i quattro divisori banali, ovvero $\pm 1, \pm p$.

### Corollario 10.2
Sia $p \in \mathbb{Z}$ tale che $p \geq 2$. Allora $p$ è primo se e soltanto se soddisfa la seguente proprietà:
$$
(\star) \forall n,m \in \mathbb{Z}: (p|nm \implies p|n \text{ or } p|m)
$$
### Dimostrazione $\implies$
Sia $p$ un numero primo. Supponiamo che $n,m \in \mathbb{Z}$ tali che $p|nm$. Dobbiamo provare che $p|n$ oppure $p|m$. Se $p|n$, OK. Supponiamo che $p\not{|}\ n$. Allora $\pm 1$ sono i soli divisori di $p, n$. Ma allora $p|m$.

### Dimostrazione $\impliedby$
Supponiamo che $p$ soddisfi $(\star)$. Proviamo che $p$ è primo. Scriviamo $p=dh$ per qualche $d, h \in \mathbb{Z}$. Vale:
$$
p|p \implies p|dh \overbrace{ \implies }^{ (\star) } p|d \text{ o } p|h
$$
Ma $d|p$ e se valgono entrambe allora $p = d$ o $p=-d$. Se $p = d \implies p = ph \implies h = 1$. Se $p = -d \implies p=-ph \implies h = -1$.
Lo stesso vale per $h$. Quindi $p$ è primo.

#### Esercizio 10.1
Sia $p$ un numero primo.
Dimostrate per induzione su $k \geq 1$ (1a forma).
$$
P(k) := (n,m \dots, n_{k} \in \mathbb{Z}: p|n_{1}n_{2}\dots n_{k} \implies p|n_{i}, \text{ per qualche } i \in \{ 1, \dots, k \})
$$



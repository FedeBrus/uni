### Teorema 2.11 di ricorsione
Sia $X$ un certo insieme non vuoto, sia $h:\mathbb{N}\times X\rightarrow X$ una qualunque funzione e sia $c \in X$, detto dato iniziale. Allora $\exists!f:\mathbb{N}\rightarrow X$ tale che:
$$
(\star)_{c} 
\begin{cases}
f(0)=c \\
f(succ(n)) = h(n, f(n)), \forall n \in \mathbb{N}
\end{cases}
$$
![[intuizione_ricorsione|1200]]
### Applicazioni del teorema di ricorsione
Fissato un numero $m \in \mathbb{N}$ si vuole definire una "somma a sinistra con $m$", ovvero si vuole dare un significato a ciò che vorrei scrivere con $m + \bullet: \mathbb{N} \rightarrow \mathbb{N}, n \mapsto m + n, \forall n \in N$.

### Definizione formale di somma a sinistra con $m$
Siano:
- $X := \mathbb{N}$
- $c = f(0) := m + 0 = m$
- $h:\mathbb{N} \times \mathbb{N} \rightarrow \mathbb{N}, h(a, b) := succ(b)$
Grazie al teorema di ricorsione, $\exists!f:\mathbb{N}\rightarrow \mathbb{N}$ tale che $(\star)_{m}$. Usualmente invece di $f$ si usa il simbolo: $m + \bullet: \mathbb{N}\rightarrow \mathbb{N}$
$$
(\star)_{m} \begin{cases}
 m + 0 = m \\
m + succ(n) = succ(m + n), \forall n \in \mathbb{N}
\end{cases}
$$
### Definizione formale di prodotto a sinistra con $m$
Siano:
- $X := \mathbb{N}$
- $c = f(0) := m \cdot 0 = 0$
- $h:\mathbb{N}\times \mathbb{N} \rightarrow \mathbb{N}, h(a, b)=m+b$
Grazie al teorema di ricorsione, $\exists!f:\mathbb{N}\rightarrow \mathbb{N}$ tale che $(\star)_{m}$. Usualmente invece di $f$ si usa il simbolo: $m \cdot \bullet: \mathbb{N} \rightarrow \mathbb{N}$
$$
(\star)_{m} \begin{cases}
m \cdot 0 = 0 \\
m \cdot succ(n) = m + m \cdot n, \forall n \in \mathbb{N}
\end{cases}
$$
Ogni iterata si ferma perché $h$ non è definita su tutto $\mathbb{N} \times X$.
#### Esercizio 3.1
Dimostrare che $0+n=n, \forall n \in \mathbb{N}$ e $1+n = n+1, \forall n \in \mathbb{N}$. (Sugg principrio di induzione).

Dimostriamo che $0 + n = n, \forall n \in \mathbb{N}$ con il principio di induzione e la definizione di somma a sinistra con $m = 0$:
$$
\begin{cases} 0 + 0 = 0 \\ 0 + succ(n) = succ(0+n), \forall n \in \mathbb{N} \end{cases} 
$$
Sia $P(n)$ la seguente proposizione:
$$ 
P(n) := 0 + n = n, \qquad\forall n \in \mathbb{N} 
$$
Dalla definizione risulta banale verificare $P(0)$, dunque la base dell'induzione è verificata. Si assuma $P(n)$ vera e sia $n \in \mathbb{N}$: bisogna verificare che $P(n) \implies P(succ(n))$. Sappiamo che per un generico $n$ vale che:
$$ 
0 + succ(n) = succ(0+n) 
$$
Siccome $P(n)$ è assunta essere vera è possibile riscriverla così: 
$$ 
0 + succ(n) = succ(n) 
$$
Ma questa è proprio $P(succ(n))$. Dunque il passo induttivo ($P(n) \implies P(succ(n))$) è stato verificato e applicando il teorema del principio di induzione $0 + n = n, \forall n \in \mathbb{N}$.

Dimostriamo che $1 + n = n + 1, \forall n \in \mathbb{N}$ con il principio di induzione e la definizione di somma a sinistra con $m = 1$.
$$
\begin{cases}
1 + 0 = 1 \\
1 + succ(n) = succ(1 + n), \forall n \in \mathbb{N}
\end{cases}
$$
Sia $P(n)$ la seguente proposizione:
$$
P(n) := 1 + n = n + 1, \qquad \forall n \in \mathbb{N}
$$
Verifichiamo il caso base $P(0)$. Utilizziamo la definizione di somma a sinistra con $m = 0$ e $n = 1$. Essendo il caso base banalmente vero, dalla definizione si ha che $0 + succ(0) = succ(0 + 0) \Longleftrightarrow 0 + 1 = 1$. Ma allora si ha che $P(0)$ è verificata, poiché $1+0 = 1 = 0 + 1$.

Ora si assuma $P(n)$ vera e sia $n \in \mathbb{N}$: bisogna verificare che $P(n) \implies P(succ(n))$. Sappiamo che per un generico $n$ vale che:
$$
1 + succ(n) = succ(1 + n)
$$
Siccome $P(n)$ è assunta essere vera è possibile la seconda parte dell'equazione nel seguente modo:
$$
succ(1+ n) = succ(n+1)
$$
Ma dalla definzione della somma a sinistra si evince che $succ(n+1)=succ(n)+1, \forall n \in \mathbb{N}$. Il che significa che $1+succ(n) = succ(1+n) = succ(n+1) = succ(n + 1)$. Dunque il passo induttivo ($P(n) \implies P(succ(n))$) è stato verificato e applicando il teorema del principio di induzione $1+n = n + 1, \forall n \in \mathbb{N}$.
### Oss
$1 = succ(0)$
$n + 1 = n + succ(0) = succ(n+0) = succ(n)$
In questo caso non serve dimostrare per induzione, perché è dato dalle definizioni date.

### Definizione 3.6 Ordinamento dei numeri naturali
Sia $X$ un insieme non vuoto e sia $\mathcal{R}$ una relazione tra $X$ e $X$, ovvero una relazione binaria su $X$, ovvero $\mathcal{R} \subset X \times X$. Diciamo che $\mathcal{R}$ è un ordinamento parziale di $X$ se valgono:
1. $x\mathcal{R}x, \forall x \in X$, riflessiva
2. $x\mathcal{R}y$ e $y\mathcal{R}x$, per qualche $x,y \in X\implies x = y$, antisimmetrica
3. $x\mathcal{R}y$ e $y\mathcal{R}z$, per qualche $x,y,z \in X \implies x\mathcal{R}z$, transitiva

Se in più vale anche 
1. $\forall x,y \in X$, o $x\mathcal{R}y$ o $y\mathcal{R}x$, tricotomia
allora $\mathcal{R}$ si dice ordinamento totale di $X$. Inoltre $(X, \mathcal{R})$ si dice insieme parzialmente (totalmente) ordinato se $\mathcal{R}$ è un ordinamento parziale (totale) di $X$.

### Def 3.3 
Definiamo la relazione binaria $\leq$ su $X$ ovvero $\leq \subset \mathbb{N}\times \mathbb{N}$ ponendo:
$$
n \leq m \text{ se } \exists k \in \mathbb{N} : n+k = m
$$
### Teorema 3.5
Considerando $(\mathbb{N}, \leq)$ è un insieme totalmente ordinato.
#### Esercizio 3.3
Dimostrare che $n\leq m$ e $h \leq k \implies n+h \leq m+k$ e $nh \leq mk$.
### Teorema (Principio di induzione prima forma "shiftato")
Sia $h\in \mathbb{N}$ e sia $\{ P(n) \}_{n\geq h}$ una famiglia di proposizioni indicizzate su $n\geq h$. Supponiamo che valga:
1. $P(h)$ è vera
2. $\forall n\geq h, P(n) \implies P(succ(n))$
Allora $P(n)$ è vera $\forall n\geq h$.

#### Esercizio esame 11 Febbraio 2016
Si dimostri per induzione su $n \in \mathbb{N}$ la seguente proprietà:
$$
\sum_{k=1}^{n} \frac{k}{2^{k}} = 2-\frac{n+2}{2^{n}}, \qquad \forall n \geq 1
$$
Soluzione versione estesa:
Sia $h = 1$ e, per ogni $n \in \mathbb{N}$ tale che $n \geq h = 1$, sia $P(n)$ la seguente proposizione:
$$
P(n) := \left( \sum_{k=1}^{n} \frac{k}{2^{k}} = 2-\frac{n+2}{2^{n}} \right)
$$
Verifichiamo la seguente condizione:
- $P(h)=P(1)=\left( \sum_{k=1}^{1} \frac{k}{2^{k}} = 2- \frac{1+2}{2^{1}} \right)$
$$
P(1) = \left(  \frac{1}{2^{1}}  = 2- \frac{3}{2}\right) \Longleftrightarrow P(1) = \left( \frac{1}{2} = \frac{4-3}{2} \right)  \Longleftrightarrow P(1) = \left( \frac{1}{2} = \frac{1}{2} \right)
$$
Dunque la abse dell'induzione (per $h = 1$) è verificata, in quanto $P(1)$ è vera, (base dell'induzione).
- Sia $n \in \mathbb{N}$ e si assuma che $P(n)$ sia vera, ovvero:
$$
P(n) = \left( \sum_{k=1}^{n}  \frac{k}{2^{k}} = 2 - \frac{n + 2}{2^{n}} \right)  \text{ è vera}
$$
(Ipotesi induttiva)
Devo dimostrare che $P(n + 1)$ è vera:
$$
P(n+1) = \left( \sum_{k=1}^{n+1} \frac{k}{2^{2^{k}}} = 2- \frac{(n+1)+2}{2^{n+1}}\right) 
$$
1° modo di verificare il passo induttivo:
Vale per associatività della somma:
$$
\begin{align}
\sum_{k=1}^{n+1} \frac{k}{2^{k}} =  \left(\sum_{k=1}^{n} \frac{k}{2^{k}}  \right)  + \frac{n+1}{2^{n+1}} &= \left( 2-\frac{n+2}{2^{n}} \right) + \frac{n+1}{2^{n+1}} \\
 & = 2 - \left( \frac{2(n+2) - (n+1)}{2^{n+1}} \right)  \\
 & = 2- \left( \frac{2n + 4-n - 1}{2^{n+1}} \right)  \\
 & =2 - \left( \frac{n +3}{2^{n+1}} \right)  \\
 & = 2- \frac{(n+1)+2}{2^{n+1}}
\end{align}
$$
Dunque $P(n+1)$ è vera, il passo induttivo è stato fatto, ovvero $P(n) \implies P(n+1)$ è vera. Quindi grazie al teorema del principio di induzione $P(n)$ è vera $\forall n \geq 1$.

2° modo di verificare il passo induttivo:
Assumiamo che $P(n)$ sia vera per qualche $n \geq 1$ ovvero:
$$
\sum_{k=1}^{n}  \frac{k}{2^{k}} = 2 - \frac{n+2}{2^{n}}
$$
Dobbiamo dimostrare che:
$$
\sum_{k=1}^{n+1}  \frac{k}{2^{k}} =  2 - \frac{(n+1)+2}{2^{n+1}}
$$
Vale:
$$
\begin{align}
P(n+1) = \left(\sum_{k=1}^{n+1}  \frac{k}{2^{k}} =  2 - \frac{(n+1)+2}{2^{n+1}}\right)  &\Longleftrightarrow \left( \left( \sum_{k=1}^{n} \frac{k}{2^{k}} \right) + \frac{n+1}{2^{n+1}} = 2- \frac{n+3}{2^{n+1}} \right)  \\
&\Longleftrightarrow \left( 2- \frac{n+2}{2^{n}} + \frac{n+1}{2^{n+1}} = 2 - \frac{n+3}{2^{n+1}} \right) \\
&\Longleftrightarrow \frac{-2n-4+n+1}{2^{n+1}} = -\frac{n+3}{2^{n+1}} \\
&\Longleftrightarrow -n-3 = - n-3
\end{align}
$$
L'ultima affermazione della precedente catena di equivalenze è evidentemente verificata, dunque anche $P(n+1)$ lo è.

Soluzione più snella (ufficiale):
Procediamo per induzione su $n \geq 1$.
(Base dell'induzione) $n = 1$.
Dobbiamo dimostrare che:
$$
\begin{align}
\sum_{k=1}^{1} \frac{k}{2^{k}} &= 2 - \frac{1+2}{2^{1}}  \\
\frac{1}{2^{1}}  & = 2 - \frac{3}{2} \\
\frac{1}{2} & = \frac{1}{2}
\end{align}
$$
La base per induzione è verificata in quanto $\sum_{k=1}^{1} \frac{k}{2^{k}}=\frac{1}{2}=2-\frac{1+2}{2^{1}}$.
(Passo induttivo) $\underbrace{ n \geq 1, n }_{ * } \implies  n+ 1$.
Assumiamo che $*$ ($\sum_{k=1}^{n} \frac{k}{2^{k}} = 2 - \frac{n+2}{2^{n}}$) per qualche $n\geq 1$ (ipotesi induttiva).
Dobbiamo provare che:
$$
\sum_{k=1}^{n+1}  \frac{k}{2^{k}} = 2 - \frac{(n+1)+2}{2^{n}}
$$
Adesso si utilizza il primo o il secondo modo, senza dover dichiarare la $P(n)$.

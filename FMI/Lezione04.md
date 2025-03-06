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
### Oss
$1 = succ(n)$
$n + 1 = n + succ(0) = succ(n+0) = succ(n)$
In questo caso non serve dimostrare per induzione, perché è dato dalle definizioni date.

### Definizione 3.6 Ordinamento dei numeri naturali
Sia $X$ un insieme non vuoto e sia $\mathcal{R}$ una relazione tra $X$ e $X$, ovvero una relazione binaria su $X$, ovvero $\mathcal{R} \subset X \times X$. Diciamo che $\mathcal{R}$ è un ordinamento parziale di $X$ se valgono:
1. $x\mathcal{R}x, \forall x \in X$, riflessiva
2. $x\mathcal{R}y$ e $y\mathcal{R}x$, per qualche $x,y \in X\implies x = y$, antisimmetrica
3. $x\mathcal{R}y$ e $y\mathcal{R}z$, per qualche $x,y,z \in X \implies x\mathcal{R}z$, transitiva

Se in più cale anche 
1. $\forall x,y \in X, x\mathcal{R}y$ o $y\mathcal{R}x$, tricotomia
allora $\mathcal{R}$ si dice ordinamento totale di $X$. Inoltre $(X, \mathcal{R})$ si dice insieme parzialmente (totalmente) ordinato se $\mathcal{R}$ è un ordinamento parziale (totale) di $X$.

### Def 3.3 
Definiamo la relazione binaria $\leq$ su $X$ ovvero $\leq \subset \mathbb{N}\times \mathbb{N}$ ponendo:
$$
n \leq m \text{ se } \exists k \in \mathbb{N} : n+k = m
$$
### Teorema 3.5
Considerando $(\mathbb{N}, \leq)$ è un insieme totalemnte ordinato.
### Esercizio 3.3
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
1° modo di arrontodare il passo induttivo:
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
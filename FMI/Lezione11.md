## Congruenze e $\text{mod}\ n$
### Definizione
Sia $n \in \mathbb{Z}$. Dati $a,b \in \mathbb{Z}$. Diciamo che $a$ è congruo a $b$ modulo $n$, scriveremo $a \equiv b\  (\text{mod } n)$, se $n|(a - b)$

#### Esempio
$2 \equiv 16\ (\text{mod } 7)\Longleftrightarrow 7|2-16=-14, -14 = (-2)7$. Vera.
$14 \not\equiv 4\ (\text{mod } 7) \Longleftrightarrow 7 \not{|}\  14 - 4 = 10$

### Proposizione 11.2
Fissiamo $n \in \mathbb{Z}$. Siano $a,b,c \in \mathbb{Z}$. Valgono:
1. $a \equiv a\ (\text{mod } n), \forall a \in \mathbb{Z}$
2. $a \equiv b\ (\text{mod}\ n) \implies b \equiv a\ (\text{mod}\ n), \forall a,b \in \mathbb{Z}$
3. $a \equiv b\ (\text{mod}\ n)$ e $b \equiv c\ (\text{mod}\ n) \implies a \equiv c\ (\text{mod}\ c), \forall a,b,c \in \mathbb{Z}$ 

### Dimostrazione
1. $a \equiv a\ (\text{mod}\ n) \Longleftrightarrow n | a - a = 0, 0n = 0$ sono entrambe vere.
2. Supponiamo che $a \equiv b\ (\text{mod}\ n)$, ovvero $n|a-b \Longleftrightarrow n | -(a-b) = b - a \Longleftrightarrow b \equiv a\ (\text{mod}\ n)$
3. Supponiamo che $a \equiv b\  (\text{mod}\ n)$ e $b \equiv c\ (\text{mod}\ n)$, ovvero $n|a-b$ e $n|b - c$. Per il lemma utile $n|1(a-b)+1(b-c) =a-c$, ma siccome $n | a- c \Longleftrightarrow a\equiv c\ (\text{mod}\ n)$ 

### Definizione 11.3
Sia $X$ un insieme non vuoto e sia $\mathcal{R}$ una relazione binaria su $X$, cioè $\mathcal{R} \subset X \times X$. $\mathcal{R}$ si dice relazione di equivalenza su $X$ se soddisfa le seguenti proprietà:
1. $x\mathcal{R}x, \forall x \in X$
2. $x\mathcal{R}y \Longleftrightarrow y\mathcal{R}x, \forall x,y \in X$
3. $x\mathcal{R}y, y\mathcal{R}z \implies x \mathcal{R}z, \forall x,y,z \in X$

### Definizione
Supponiamo che $\mathcal{R}$ sia una relazione di equivalenza su $X$.
Dato $x \in X$, si dice classe di equivalenza di $x$ rispetto a $\mathcal{R}$ oppure $\mathcal{R}$-classe di equivalenza di $x$ il seguente sottoinsieme di $X$.
$$
[x]_{\mathcal{R}} := \{ y \in X | y \mathcal{R} x \}
$$
### Proposizione 11.7
Sia $X$ un'insieme non vuoto e sia $\sim$ una relazione di equivalenza su $X$. Valgono:
1. $\forall x \in X, x \in [x]_{\sim}$
2. $\forall x,y \in X, [x]_{\sim} = [y]_{\sim} \Longleftrightarrow x \sim y$
3. $\forall x,y \in X, [x]_{\sim} \cap [y]_{\sim} \neq \emptyset \implies [x]_{\sim}=[y]_{\sim}$

### Dimostrazione
1. Grazie alla proprietà riflessiva, $\forall x \in X:x \sim x$. $[x]_{\sim} := \{ y \in X | y \sim x \} \ni x$
2. $\implies$: Supponendo che $[x]_{\sim} = [y]_{\sim}$. Vale: $x \in [x]_{\sim} = [y]_{\sim} \implies x \sim y$, per definizione di $[y]_{\sim}$.
	$\impliedby$: Supponiamo che $x \sim y$, dobbiamo provare che $[x]_{\sim} = [y]_{\sim}$.
		$[x]_{\sim} \subset [y]_{\sim}$: se $z \in [x]_{\sim}$. Quindi $z \sim x$ e siccome $x \sim y$, allora per la transitività $z \sim y$ e quindi $z \in[y]_{\sim}$.
		$[x]_{\sim} \supset [y]_{\sim}$. Il procedimento è lo stesso sopra utilizzando inoltre la proprietà simmetrica.
3. Supponiamo che $[x]_{\sim} \cap [y]_{\sim} \neq \emptyset$. Scelgo $z \in [x]_{\sim} \cap [y]_{\sim} \Longleftrightarrow z \in [x]_{\sim}, z \in [y]_{\sim}$. Quindi $z \sim x$ e $z \sim y$, ma allora $x \sim y$ e per il punto 2 allora $[x]_{\sim} = [y]_{\sim}$.

### Definizione
Siano $X$ e $\sim$ come sopra. Definiamo l'insieme quoziente $X$ modulo $\sim$ come segue:
$$
X\big/_{\sim} := \{ [x]_{\sim} \in 2^{X} | x \in X \} = \bigcup_{x \in X}  \{ [x]_{\sim} \}
$$
La seconda uguaglianza indica una notazione più precisa perché si eliminano le ripetizioni.
Le $[x]_{\sim} \in X\big/_{\sim}$, allora ogni $y \in [x]_{\sim}$ si dice essere un rappresentante della $\sim$-classe $[x]_{\sim}$.

Fissiamo $n \in \mathbb{Z}$ Poniamo $X:=\mathbb{Z}$ e $\sim_{n} = (\bullet \equiv \bullet\ (\text{mod}\ n))$, ovvero $\forall a,b \in \mathbb{Z}$, $a \sim_{n} b \Longleftrightarrow a\equiv b\ (\text{mod}\ n) \Longleftrightarrow n| a-b$.
In questo caso, il corrispondente insieme quoziente $\mathbb{Z}\big/_{\sim_{n}}$ si indica come segue:
$$
\mathbb{Z}\big/_{\sim_{n}} =: \mathbb{Z} \big/_{n \mathbb{Z}}
$$
e si chiama insieme degli interi modulo $n$ oppure insieme delle classi di resto modulo $n$.
Dato $a \in \mathbb{Z}$, la $\sim_{n}$-classe di $a$ in $\mathbb{Z}$ si indica $[a]_{n}:=[a]_{(\bullet \equiv \bullet\ (\text{mod}\ n))}$ e si chiama classe di $a$ modulo $n$ o anche solo $a$ modulo $n$.

### Calcolo di una classe modulo $n$
$$
\begin{align}
[a]_{n} &= \{ x \in \mathbb{Z} |x \sim_{n} a \} \\
&=  \{ x \in \mathbb{Z} | x\equiv a\ (\text{mod}\ n) \}  \\
&= \{ x \in \mathbb{Z} | n|x-a \}  \\
&= \{ x \in \mathbb{Z} | \exists k \in \mathbb{Z} \text{ tale che } x-a = kn \} \\
&= \{ x \in \mathbb{Z} | x = a+kn, \text{ per qualche } k \in \mathbb{Z} \} \\
&= \{ \dots, a-3n, a-2n, a-n, a, a+n, a+2n, a+3n, \dots \} \subset \mathbb{Z}
\end{align}
$$
### Osservazioni
$\forall a, n \in \mathbb{Z}, [a]_{n} = [a]_{-n} \implies \mathbb{Z} \big/_{n \mathbb{Z}} = \mathbb{Z} \big/_{-n \mathbb{Z}}$. Quindi possiamo solamente studiare il caso $n\geq 0$.
Se $n = 0$, proviamo a determinare $\mathbb{Z} \big/_{0 \mathbb{Z}}$. 
$$
\begin{align}
[0]_{0} &= \{ 0 \} \\
[1]_{0} &= \{ 1 \} \\
\vdots
\end{align}
$$
$\forall a \in \mathbb{Z}, [a]_{0} = \{ a \}$.
Allora $\mathbb{Z} \big/_{0 \mathbb{Z}} = \{ \{ 0 \}, \{ 1 \}, \{ 2 \}, \dots \} \subset 2^{\mathbb{Z}}\implies a \in \mathbb{Z} \rightarrow \mathbb{Z} \big/_{0 \mathbb{Z}} \ni \{ a \}, a \mapsto \{ a \}$.

Consideriamo $n = 1$:
$$
[0]_{1} = \{ \dots, -2, -1, 0, 1, 2, \dots \} = \mathbb{Z} = [1]_{1} = [2]_{1} = \dots
$$
Dunque $\mathbb{Z} \big/_{1 \mathbb{Z}} = \{ [0]_{1} \} \subset 2^{\mathbb{Z}}$.

Consideriamo $n = 2$:
$$
\begin{align}
[0]_{2} &= \{ \dots, -4, -2, 0, 2, 4, \dots \} = [2]_{2} = [4]_{2} = \dots \\
[1]_{2} &= \{ \dots, -3, -1, 1, 3, 5, \dots \} = [3]_{2} = [5]_{2} = \dots
\end{align}
$$
Dunque $\mathbb{Z} \big/_{2 \mathbb{Z}} = \{ [0]_{2}, [1]_{2} \} \subset 2^{\mathbb{Z}}$.

Consideriamo $n = 3$:
$$
\begin{align}
[0]_{3} &= \{ \dots, -6, -3, 0, 3, 6, \dots \} = [3]_{3} = [6]_{3} = \dots \\
[1]_{3} &= \{ \dots, -7, -4, 1, 4, 7, \dots \} = [4]_{3} = [7]_{3} = \dots \\
[2]_{3} &= \{ \dots, -8, -5, 2, 5, 8, \dots \} = [5]_{3} = [8]_{3} = \dots
\end{align}
$$
Dunque $\mathbb{Z} \big/_{3\mathbb{Z}} = \{ [0]_{3}, [1]_{3}, [2]_{3} \} \subset 2^{\mathbb{Z}}$.
E così via.
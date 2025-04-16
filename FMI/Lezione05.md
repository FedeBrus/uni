#### Esercizio esame 10 Giugno 2014
Si dimostri per induzione su $n \geq 2$ che vale:
$$
\sum_{k=1}^{n} 6k^{2} = n(n+1)(2n + 1)
$$
Procediamo per induzione su $n \geq 2$.
(Base dell'induzione) $n = 2$.
Dobbiamo dimostrare che:
$$
\begin{align}
\sum_{k=1}^{2} 6k^{2} &=  2(2+1)(4+1)  \\
6 + 24  & = 2(3)(5)  \\
30 & = 30
\end{align}
$$
La base per induzione è verificata.
(Passo induttivo) $\underbrace{ n \geq 2, n }_{ * } \implies  n+ 1$.
Assumiamo che $\sum_{k=1}^{n} 6k^{2} = n(n+1)(2n+1)$ per qualche $n\geq 1$ (ipotesi induttiva).
Dobbiamo provare che:
$$
\begin{align}
\sum_{k=1}^{n+1}  6k^{2} = (n+1)(n+1 + 1)(2(n+1)+1) &\Longleftrightarrow \sum_{k=1}^{n} + 6(n+1)^{2} = (n+1)(n+2)(2n + 3) \\
 &\overbrace{ \Longleftrightarrow }^{ p. ind. } n(n+1)(2n+1) + 6(n^{2} + 2n + 1) = (n+1)(n+2)(2n+3) \\
 &\Longleftrightarrow (n^{2} + n)(2n+1) + 6n^{2} + 12n + 6 = (n^{2} + n + 2n + 2)(2n + 3) \\
 &\Longleftrightarrow 2n^{3}+2n^{2}+n^{2}+n + 6n^{2} +12n +6 = 2n^{3} + 2n^{2} + 4n^{2} +4n + 3n^{2} +3n +6n + 6 \\
 &\Longleftrightarrow 2n^{3} + 9n^{2} + 13n + 6 = 2n^{3}+ 9n^{2} + 13n + 6
\end{align}
$$
La catena di equivalenze è evidentemente verificata e il passo induttivo è verificato. Applicando il teorema del princpio di induzione $\sum_{k=1}^{n} 6k^{2} = n(n+1)(2n+1)$ vale $\forall n \in \mathbb{N}, n \geq 2$

Utilizzando il primo metodo si crea una catena di uguaglianze. Ad ogni momento ci si può fermare e verificare che un fattore di questa catena sia uguale a un fattore di ciò che si vuole dimostrare tramite una catena di equivalenze. Mettendo assieme la catena di uguaglianze e la catena di equivalenze, si verifica il passo induttivo.

In alternativa si poteva procedere così:
$$
\begin{align}
n(n+1)(2n+1) + 6(n+1)^{2} = (n+1)(n+2)(2n+3) &\Longleftrightarrow (n+1)[n(2n+1)+6(n+1)] = (n+1)(n+2)(2n+3)
\end{align}
$$
Siccome $n + 1 \geq 3$ qunidi si può dividere a destra e a sinistra:
$$
\begin{align}
(n+1)[n(2n+1)+6(n+1)] = (n+1)(n+2)(2n+3) &\Longleftrightarrow (n(2n+1)+6(n+1)) = (n+2)(2n+3) \\
&\Longleftrightarrow 2n^{2} + n + 6n +6 = 2n^{2} + 3n + 4n +6 \\
& \Longleftrightarrow 2n^{2} + 7n 6 = 2n^{2} + 7n +6
\end{align}
$$
Poiché l'ultima è un'identità, anche la prima uguaglianza è verificata.

## Insiemi finiti
Per ogni $n\in \mathbb{N} \setminus \{ 0 \}$, indichiamo con $I_{n}:= \{ 0,1,\dots,n-1 \}$ e $I_{0}:=\emptyset$
### Def 3.10
Diciamo che un insieme $X$ è finito se $\exists n \in \mathbb{N}:X$ è equipotente a $I_{n}$, ovvero $X \sim I_{n}$ ovvero $\exists f:X \rightarrow I_{n}$ bigezione. Il numero di elementi di un insieme finito è univocamente determinato.
$$
|X| = I_{n}
$$
ma spesso si usa questa notazione:
$$
|X| = n
$$
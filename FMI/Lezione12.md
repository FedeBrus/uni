Sia $n \in \mathbb{N}$ con $n>0$. Ricordiamo che $\mathbb{Z} \big/_{n\mathbb{Z}} := \bigcup_{a \in \mathbb{Z}} \{ [a]_{n} \} \subset 2^{\mathbb{Z}}$ e $[a]_{n} = \{ \dots, a-3n, a-2n, a-n, a, a+n, a+2n, a+3n, \dots \} \subset \mathbb{Z}$.
### Proposizioni 11.13
Sia $n > 0$ e sia $a\in \mathbb{Z}$. Eseguiamo la divisione euclidea di $a$ per $n$, ottenendo un quoziente $q$ e un resto $r$ tali che:
$$
\begin{cases}
a = qn + r \\
0 \leq r <n
\end{cases}
$$
Allora $[a]_{n} = [r]_{n}$.
### Dimostrazione
$a = qn + r \Longleftrightarrow a-r = qn \implies n|a-r \Longleftrightarrow a \equiv r\  (\text{mod}\ n) \implies [a]_{n}=[r]_{n} \in 2^{\mathbb{Z}}$.

#### Interpretazione geometrica
![[12_1]]

### Corollario 11.14
$\mathbb{Z} \big/_{n\mathbb{Z}} = \{ [0]_{n}, [1]_{n}, \dots, [n-1]_{n} \}, n>0$.
### Dimostraione
Dalla proposizione precedente, sapiiamo solo che $\mathbb{Z} \big/_{n\mathbb{Z}} \subset \{ [0]_{n}, [1]_{n}, \dots, [n-1]_{n} \}$.
Siano $r,s \in \mathbb{Z}$ tali che $0 \leq r \leq n -1$ e $0 \leq s \leq n - 1$ tali che $r \neq s \implies [r]_{n} \neq [s]_{n} \Longleftrightarrow s \not\equiv r (n)$.
A meno di scambiare i due simboli possiamo supporre che $r < s$.
Supponiamo per assurdo che $s \equiv r (n) \Longleftrightarrow n | s-r$. Sappiamo che $1\leq s-r \leq n - 1$, ma in questo range non esistono multipli di $n$, perciò sicuramente $n \not{|}\ s-r$ e la nostra asserzione è assurda.

#### Notazione
Sia $n>0$ e sia $a \in \mathbb{Z}$. Consideriamo $x \in [a]_{n}$. Allora $x$ si dice rappresentante della classe $[a]_{n}$. L'unico rapprsentante $r\in[a]_{n}$ compreso tra $0$ e $n-1$ (ovvero $r$ è il resto della divisione di $a$ per $n$), verrà chiamato rappresentante canonico.

#### Esercizio
Calcolare il rappresentante canonico delle seguenti classi:
- $[17]_{4} = [4 \cdot 4 + 1]_{4} = [1]_{4}$
- $[-16]_{5} = [-3\cdot 5-1+5-5]_{5} = [-4 \cdot 5 + 4]_{5} = [4]_{5}$


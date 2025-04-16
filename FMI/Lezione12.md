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
### Dimostrazione
Dalla proposizione precedente, sappiamo solo che $\mathbb{Z} \big/_{n\mathbb{Z}} \subset \{ [0]_{n}, [1]_{n}, \dots, [n-1]_{n} \}$.
Siano $r,s \in \mathbb{Z}$ tali che $0 \leq r \leq n -1$ e $0 \leq s \leq n - 1$ tali che $r \neq s \implies [r]_{n} \neq [s]_{n} \Longleftrightarrow s \not\equiv r\ (\text{mod}\ n)$.
A meno di scambiare i due simboli possiamo supporre che $r < s$.
Supponiamo per assurdo che $s \equiv r\ (\text{mod}\ n) \Longleftrightarrow n | s-r$. Sappiamo che $1\leq s-r \leq n - 1$, ma in questo range non esistono multipli di $n$, perciò sicuramente $n \not{|}\ s-r$ e la nostra asserzione è assurda.

#### Notazione
Sia $n>0$ e sia $a \in \mathbb{Z}$. Consideriamo $x \in [a]_{n}$. Allora $x$ si dice rappresentante della classe $[a]_{n}$. L'unico rapprsentante $r\in[a]_{n}$ compreso tra $0$ e $n-1$ (ovvero $r$ è il resto della divisione di $a$ per $n$), verrà chiamato rappresentante canonico.

#### Esercizio
Calcolare il rappresentante canonico delle seguenti classi:
- $[17]_{4} = [4 \cdot 4 + 1]_{4} = [1]_{4}$
- $[-16]_{5} = [-3\cdot 5-1+5-5]_{5} = [-4 \cdot 5 + 4]_{5} = [4]_{5}$

## Struttura di anello su $\mathbb{Z} \big/_{n\mathbb{Z}}$
- $(\mathbb{Z}, +, \cdot)$
	- $3+5=8, +:\mathbb{Z} \times \mathbb{Z} \rightarrow \mathbb{Z}, +((3,5))=8$
	- $3 \cdot 5 = 15, \cdot:\mathbb{Z} \times \mathbb{Z} \rightarrow \mathbb{Z}, \cdot((3,5))=8$
- $(\mathbb{Z} \big/_{n\mathbb{Z}}, +, \cdot)$?

$$
\begin{align}
+: \mathbb{Z} \big/_{n\mathbb{Z}} \times \mathbb{Z} \big/_{n\mathbb{Z}} &\rightarrow \mathbb{Z} \big/_{n\mathbb{Z}} \\
 ([a]_{n}, [b]_{n}) &\mapsto [a+b]_{n}
\end{align}
$$
$$
\begin{align}
\cdot: \mathbb{Z} \big/_{n\mathbb{Z}} \times \mathbb{Z} \big/_{n\mathbb{Z}} &\rightarrow \mathbb{Z} \big/_{n\mathbb{Z}} \\
 ([a]_{n}, [b]_{n}) &\mapsto [a \cdot b]_{n}
\end{align}
$$
### Proposizione 11.15
Sia $n > 0$. Definiamo $+: \mathbb{Z} \big/_{n\mathbb{Z}} \times \mathbb{Z} \big/_{n\mathbb{Z}} \rightarrow \mathbb{Z} \big/_{n\mathbb{Z}}$ e $\cdot: \mathbb{Z} \big/_{n\mathbb{Z}} \times \mathbb{Z} \big/_{n\mathbb{Z}} \rightarrow \mathbb{Z} \big/_{n\mathbb{Z}}$ come:
$$
\begin{align}
[a]_{n} + [b]_{n} &:= [a+b]_{n} \\
[a]_{n} \cdot [b]_{n} &:= [a \cdot b]_{n}
\end{align}
$$
La somma $+$ e il prodotto $\cdot$ sono ben definiti, ossia vale:
$$
\begin{align}
\forall a, a', b, b' \in \mathbb{Z}: [a]_{n} = [a']_{n} \text{ e } [b]_{n} = [b']_{n} &\implies [a+b]_{n} = [a'+b']_{n} \\
\forall a, a', b, b' \in \mathbb{Z}: [a]_{n} = [a']_{n} \text{ e } [b]_{n} = [b']_{n} &\implies [a \cdot b]_{n} = [a' \cdot b']_{n}
\end{align}
$$
### Dimostrazione
$[a]_{n} = [a']_{n} \Longleftrightarrow a = a'+kn$ per qualche $k \in \mathbb{Z}$.
$[b]_{n} = [b']_{n} \Longleftrightarrow b = b'+hn$ per qualche $h \in \mathbb{Z}$.
Ma allora $a+b = (a'+kn) + (b'+hn) = a'+b'+kn+hn = a'+b'+(k+h)n \implies [a+b]_{n} = [a'+b']_{n}$
Ma allora $a\cdot b = (a'+kn)(b'+hn) = a'b' + a'hn + b'kn+khn^{2} = a'b'+(a'h+b'k+khn)n \implies [a \cdot b]_{n} = [a' \cdot b']_{n}$

### Osservazione
Sia $n > 0$, sia $a \in \mathbb{Z}$ e sia $m > 0$. Allora:
$$
[a]_{n}^{m} := ([a]_{n})^{m} = [a]_{n}[a]_{n}\dots[a]_{n} = [a^{m}]_{n}
$$
Dunque $[a]^{m}_{n}=[a^{m}]_{n}$.

"La potenza è nulla senza programmazione teorica".
#### Problema
Calcolare il resto della divisione di:
$$
41^{10^{128}} \text{ per } 7
$$
Vale:
$$
[41^{10^{128}}]_{7} = [41]_{7}^{10^{128}} = [6]_{7}^{10^{128}} = [-1]^{10^{128}}_{7} = [1]_{7} = 1
$$

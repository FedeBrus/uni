La terna $(\mathbb{Z} \big/_{n\mathbb{Z}}, +, \cdot)$ si chiama anello.
#### Esercizio 11.1
Siano $n > 0$ e siano $a,b,c \in \mathbb{Z}$. Valgono:
$$
\begin{align}
([a]_{n}+[b]_{n}) + [c]_{n} &= [a]_{n}+([b]_{n} + [c]_{n}) \\
\Longleftrightarrow [a + b]_{n} + [c]_{n}  & = [a]_{n} + [b+c]_{n} \\
\Longleftrightarrow [(a+b)+c]_{n}  & = [a + (b + c)]_{n} \\
\end{align}
$$
Siccome l'ultima verificata sono tutte verificate.

$$
[a]_{n} + [0]_{n} = [a + 0]_{m} = [a]_{n}
$$
$[0]_{n}$ è l'elemento neutro della somma in $\mathbb{Z} \big/_{n\mathbb{Z}}$.
$$
[a]_{n} \cdot [1]_{n} = [a \cdot 1]_{m} = [a]_{n}
$$
$[1]_{n}$ è l'elemento neutro del prodotto in $\mathbb{Z} \big/_{n\mathbb{Z}}$.

Consideriamo $n = 6$ e $\mathbb{Z} \big/_{6\mathbb{Z}} = \{ [0]_{6}, [1]_{6}, [2]_{6}, [3]_{6}, [4]_{6}, [5]_{6}\}$
Ad esempio:
$$
[2]_{6} \cdot [3]_{6} = [6]_{6} = [0]_{6}
$$
Ma:
$$
[0]_{6} \neq [2]_{6}, [0]_{6} \neq [3]_{6}
$$
Quindi $\mathbb{Z} \big/_{n\mathbb{Z}}$ non è un dominio integrale. Mentre $\mathbb{Z}$ lo è perché se il risultato del prodotto è $0$ allora almeno uno dei fattori deve essere $0$.

Sia $n > 0$, vale:
In $\mathbb{Z} \big/_{n\mathbb{Z}}$: $\underbrace{ [1]_{n} + [1]_{n} + \dots + [1]_{n} }_{ n } = [0]_{n}$
In $\mathbb{Z}$: $\underbrace{ 1+1+\dots+1 }_{ n }=0$
Se $a \in \mathbb{Z}$, $a$ è invertibile $\Longleftrightarrow$ $\exists b \in \mathbb{Z}, ab=1$, quindi in $\mathbb{Z}$ gli unici elementi invertibili sono quelli banali: $\pm 1$.

## * 中国剩余定理
Siano $n, m > 0$ e siano $a, b \in \mathbb{Z}$. Consideriamo il seguente sistema di congruenze:
$$
\begin{cases}
x \in \mathbb{Z} \\
x \equiv a \ (\text{mod}\ n) \\
x \equiv b \ (\text{mod}\ m)
\end{cases}
\Longleftrightarrow
\begin{cases}
x \in \mathbb{Z} \\
[x]_{n} = [a]_{n} \\
[x]_{m} = [b]_{m}
\end{cases}
$$
Sia $S$ l'insieme delle soluzioni, ovvero:
$$
S := \{ x \in \mathbb{Z} | x \equiv a \ (\text{mod}\ n), x \equiv b \ (\text{mod}\ m) \}
$$
Allora $S \neq \emptyset$, ossia il sistema è compatibile se e soltanto se $(n,m) | b-a$.
Supponiamo che tale condizione sia verificata, ovvero $S\neq \emptyset$. Sia $c\in S$. Allora:
$$
S = [c]_{[n, m]} = \{ c + k[n,m] \in \mathbb{Z} | k \in \mathbb{Z}\} \subset \mathbb{Z}
$$
### Dimostrazione compatibilità
Dobbiamo trovare che $S \neq \emptyset \Longleftrightarrow (n,m) |a -b$.
$\implies$) Supponiamo che $S \neq \emptyset$, scegliamo $c \in S$, ovvero $c \equiv a\ \left( \text{mod}\ n \right)$ e $c \equiv b\ \left( \text{mod}\ m \right)$.
$$
\begin{cases}
x \in \mathbb{Z} \\
x \equiv a \ (\text{mod}\ n) \\
x \equiv b \ (\text{mod}\ m)
\end{cases}
\Longleftrightarrow
\begin{cases}
\exists k\in \mathbb{Z} : c = a+kn \\
\exists h\in \mathbb{Z} : c = b+hm \\
\end{cases}
$$
In particolare vale che $a+kn = b+hm \Longleftrightarrow a-b = -kb+hm$.
Poiché $(n,m)|n$ e $(n,m)|m$, grazie al lemma utile, $(n,m)|-kn+hm=a-b$.
$\impliedby$) Supponiamo che $(n,m)|a-b$, ovvero $\exists k\in \mathbb{Z}$ tale che $a-b = k(n,m)$ (da chiamare (1)).
Se applichiamo l'algoritmo di Euclide ad $n$ e $m$ con sostituzione a ritroso: $\exists r,s \in \mathbb{Z}$ tali che $(n,m) = rn+sm$ (da chiamare (2)).
Dalla (1) e dalla (2) segue che:
$$
a-b = k(rn + sm) = krn +ksm
$$
Dunque $a-b = krn +ksm \Longleftrightarrow a-krn = b+ksm =: c$. Allora $c \in S$, perché è vero che $c \equiv a\ (\text{mod}\ n)$ e $c \equiv b\ (\text{mod}\ m)$.

### Calcoliamo $S$
Assumiamo che $S\neq \emptyset$ ovvero $(n,m)|a-b$ con $c \in S$.
Dobbiamo provare che $S = [c]_{[n,m]} \subset \mathbb{Z}$.
Proviamo che $S \subset [c]_{[n,m]}$. Sia $c' \in S$. 
$c \in S$ e $c' \in S$. Vale:
$$
\begin{align}
c &= a + kn, k \in \mathbb{Z} \\
c &= b + hm, h \in \mathbb{Z} \\
c' &= a + k'n, k' \in \mathbb{Z} \\
c' &= b + h'm, h' \in \mathbb{Z}
\end{align}
$$
Allora $c'-c = a +k'n-(a+kn)=n(k'-k)$, quindi $n|c'-c$.
Allora $c'-c = b +h'm-(b+hm)=m(h'-h)$, quindi $m|c'-c$.
Ma allora per definizione di mcm: $[n,m]|c'-c \Longleftrightarrow c' \equiv c\ (\text{mod}\ [n,m])\Longleftrightarrow c' \in[c]_{[n,m]}$.

Proviamo che $S \supset [c]_{[n,m]}$. Sia $c' \in [c]_{[n,m]}$.
Quindi per definizione $c' = c + k[n,m], k \in \mathbb{Z}$. Valgono:
$[c']_{n} = [c+k[n,m]]_{n} = [c]_{n}+ [k]_{n}[[n,m]]_{n}$
Ma siccome $c$ è soluzione, per la scrittura alternativa del sistema abbiamo che:
$$
\begin{align}
[c']_{n} &= [c+k[n,m]]_{n}  \\
&= [c]_{n}+ [k]_{n}[[n,m]]_{n}  \\
& = [a]_{n} + [k]_{n}[0]_{n} \\
& = [a]_{n}
\end{align}
$$
Allo stesso modo:
$$
\begin{align}
[c']_{m} &= [c+k[n,m]]_{m}  \\
&= [c]_{m}+ [k]_{m}[[n,m]]_{m}  \\
& = [b]_{m} + [k]_{m}[0]_{m} \\
& = [b]_{m}
\end{align}
$$
Dunque $c' \in S$.

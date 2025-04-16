### Appello 10/06/2011
Si risolva il seguente sistema:
$$
\begin{cases}
x \equiv 9\ (\text{mod}\ 162) \\
x \equiv -9\ (\text{mod}\ 114)
\end{cases}
$$
Si dica inoltre se tale sistema ammette una soluzione divisibile per $17$.
#### Soluzione
Sia $S$ l'insieme delle soluzioni.
Primo passo: compatibilità.
Calcoliamo $(162, 114)$
$$
\begin{align} 
162 &= 2 \cdot 3^{4} \\
114 &= 2 \cdot 3 \cdot 19
\end{align}
$$
Dunque $(162,114) = 2 \cdot 3 = 6$.
$(162,114) = 6 | 18 = 9-(-9)$
Grazie al 中国剩余定理, vale che il sistema è compatibile, ovvero $S\neq \emptyset$.
Quindi $9 - (-9)=3 \cdot (162,114)$. (1)

Secondo passo: calcolo di una soluzione.
Applichiamo l'algoritmo di Euclide a $162$ e $114$:
$$
\begin{align}
162 &= 114 + 48 \\
114 &= 2 \cdot 48 + 18 \\
48 &= 2 \cdot 18 + 12 \\
18 &= 12 + 6 \\
12 &= 2\cdot 6 + 0
\end{align}
$$
$$
\begin{align}
6  & = 18 - 12 \\
 & = 18 - (48 - 2 \cdot 18) \\
  & = 3 \cdot 18 - 48 \\
 & = 3 (114 - 2 \cdot 48) -48  \\
  & = 3 \cdot 114 - 7 \cdot 48 \\
  & = 3 \cdot 114 - 7 (162 - 114) \\
  & = 10 \cdot 114 - 7 \cdot 162
\end{align}
$$
Vale dunque che $(162, 114) = 6 = 10 \cdot 114 - 7 \cdot 162$. (2)
Da (1) e (2), segue che;
$$
9-(-9) = 3 (162, 114) = 3(10 \cdot 114 - 7 \cdot 162) = 30 \cdot 114 + (-21) \cdot 162
$$
Vale:
$$
9 + 21 \cdot 162 = -9 + 30 \cdot 114 =: c \implies c = 3411
$$
Terzo passo: calcolo di $S$.
Grazie al 中国剩余定理, vale:
$$
S = [3411]_{[114, 162]} \subset \mathbb{Z}
$$
dove $[162, 114] = \frac{162 \cdot 114}{6} = 3078$.
Quindi:
$$
S = [3411]_{3078} = [3411 - 3078]_{3078} = [333]_{3078} = \{ 333 + 3078k \in \mathbb{Z} | k \in \mathbb{Z} \}
$$
Primo metodo (il più sicuro):
La domanda finale è equivalente alla seguente richiesta:
$$
\begin{cases}
x \in S \\
17 | x
\end{cases}
\Longleftrightarrow
\begin{cases}
x \equiv 333\ (\text{mod}\ 3078) \\
x \equiv 0\ (\text{mod}\ 17)
\end{cases}
$$
Grazie al 中国剩余定理, il sistema è compatibile $(3078, 17)|333 - 0$.
$$
(3078, 17) = 1 | 333 = 333 - 0
$$
Se ci avesse chiesto se esistesse una soluzione che divisa per $17$ dà $5$ come resto.
Allora il sistema da risolvere sarebbe stato:
$$
\begin{cases}
x \equiv 333\ (\text{mod}\ 3078) \\
x \equiv 5\ (\text{mod}\ 17)
\end{cases}
$$
Tornando alla domanda originale, osserviamo un secondo metodo, che non funziona proprio sempre:
Vale:
$$
\begin{align}
[333+3078k]_{17} &= [333]_{17} + [3087]_{17}[k]_{17} \\
 &= [19 \cdot 17  + 10]_{17} + [181 \cdot 17 + 1]_{17} [k]_{17} \\
 &= [10]_{17} + [1]_{17} [k]_{17} \\
 &= [10 + k]_{17}
\end{align}
$$
Qui è immediato ma se $3078$ avesse avuto come resto della divisione per $17$ un numero che non fosse $1, -1$, allora si sarebbero dovuti provare 17 $k$ diversi, da $k = 0$ a $k = 16$.

## Elementi invertibili modulo $n$
Siano $a, n \in \mathbb{Z}$ con $n > 0$.
### Definizione
Diciamo che $a$ è invertibile modulo $n$, oppure equivalentemente che $[a]_{n}$ è invertibile in $\mathbb{Z} \big/_{n\mathbb{Z}}$ se esiste $x \in \mathbb{Z}$ tale che:
$ax \equiv 1\ (\text{mod}\ n) \Longleftrightarrow [ax]_{n} = [1]_{n} = [a]_{n}[x]_{n} = [1]_{n} \Longleftrightarrow \exists [x]_{n} \in \mathbb{Z} \big/_{n\mathbb{Z}} : [a]_{n}[x]_{n}=[1]_{n}$.
Se ciò è vero, allora $x$ si dice essere un inverso di $a$ modulo $n$ e $[x]_{n}$ si dice essere una classe inversa di $[a]_{n}$.

### Lemma 12.3 
Supponiamo che $[a]_{n}$ sia invertibile in $\mathbb{Z} \big/_{n\mathbb{Z}}$. Allora $\exists![x]_{n}$ tale che:
$$
[a]_{n}[x]_{n} = [1]_{n}
$$
### Dimostrazione
Supponiamo che anche $[x']_{n} \in \mathbb{Z} \big/_{n\mathbb{Z}}$ abbia la precedente proprietà.
Vale:
$$
[x]_{n} = [x]_{n}[1]_{n} = [x]_{n} ([a]_{n} [x']_{n}) = ([x]_{n}[a]_{n}) [x']_{n} = [1]_{n}[x']_{n} = [x']_{n}
$$
Dunque $[x]_{n} = [x']_{n}$.

### Proposizione
Siano $a, n \in \mathbb{Z}$ con $n > 0$. Allora $a$ è invertibile modulo $n$ $\Longleftrightarrow$ $(a,n) = 1$. Inoltre, se $(a,n)=1$ allora applichiamo l'algoritmo di Euclide ad $a$ e $n$ con sostituzione a ritroso, ottenendo $x,y \in \mathbb{Z}$ tali che:
$$
1 = (a, n) = xa + yn
\Longleftrightarrow [1]_{n} = [xa + yn]_{n} = [xa]_{n} = [x]_{n}[a]_{n}
$$
Quindi $[x]_{n}$ è la classe inversa di $[a]_{n}$. Dunque $[x]_{n} = [a]_{n}^{-1}$.
### Dimostrazione
$\implies$)
Se $a$ è invertibile modulo $n$, allora $\exists x \in \mathbb{Z}$ tale che $ax \equiv 1\ (\text{mod}\ n) \Longleftrightarrow ax =1 +kn$ per qualche $k \in \mathbb{Z}$.
Dunque $1 = ax - kn$, e osserviamo che $(a,n)|a$ e $(a,n)|n$, quindi $(a,n)| ax - kn = 1$. Per definizione $(a,n) > 0$ e perciò $(a,n) = 1$.
$\impliedby)$
Supponiamo che $(a,n)=1$. Esistono, utilizzando Euclide, $x,y \in \mathbb{Z}$ tali che $xa+yn = (a,n) = 1 \implies xa +yn = 1 \implies [xa + yn]_{n} = [1]_{n} \implies [xa]_{n}=1 \implies [x]_{n}[a]_{n} = 1 \implies [x]_{n} = [a]_{n}^{-1}$.

#### Esercizi
Si dica se $21$ è invertibile modulo $30$, e in caso lo sia calcolare tutti gli inversi.

Soluzione:
$(21, 30) = 3 \neq 1$, dunque $21$ non è invertibile modulo $30$.

Si dica se $11$ è invertibile modulo $30$, e in caso lo sia calcolare tutti gli inversi.

Soluzione:
$(11, 30) = 1$, in questo caso la sua classe inversa è se stesso, cosa che non succede nei reali ad esempio.
### Definzione (7.3)
Un insieme $(X, \leq)$ totalmente ordinato si dice ben ordinato se ogni sottoinsieme non vuoto $A$ di $X$, ammette il minimo. In questo caso di dice che $\leq$ è un buon ordinamento su $X$.

### * Teorema di buon ordinamento dei numeri naturali (7.4)
$(\mathbb{N}, \leq)$ è un insieme ben ordinato.

### Dimostrazione
Dobbiamo provare che se $A$ è un sottinsieme di $\mathbb{N}$ senza minimo, allora $A = \emptyset$.
Invece di dimostrare che $A$ è vuoto, dimostriamo che il suo complementare coincide con $\mathbb{N}$.
Sia dunque $A$ un sottoinsieme di $\mathbb{N}$ senza minimo. Definiamo $B:= \mathbb{N} \setminus A$. Dobbiamo provare che $B = \mathbb{N}$.

Dimostriamo per induzione su $n \in \mathbb{N}$ che vale:
$$
P(n) := \left( \{ 0,1,\dots, n \} \subset B \right)
$$
Se $P(n)$ fosse vera $\forall n\in \mathbb{N}$, allora $n \in \{ 0,1,\dots,n \} \subset B, \forall n \in \mathbb{N} \implies B = \mathbb{N}$.

Base dell'induzione, $n = 0$:
Dobbiamo provare che $\{ 0 \} \subset B \Longleftrightarrow 0 \in B \Longleftrightarrow 0 \not\in A$. La condizione $0 \not\in A$ è verificata, altrimenti $0 \in A$ e quindi $0$ sarebbe il minimo di $A$ in quanto è addirittura il minimo di $\mathbb{N}$. Segue che $0 \in B$ e la base dell'induzione è verificata.

Passo induttivo, $n \geq 0, n \implies  n+1$:
Assumiamo che $\{ 0,1,\dots,n \}\subset B$ per qualche $n$ (ipotesi induttiva).
Dobbiamo dimostrare che $\{ 0,1,\dots, n, n+1 \} \subset B$.
Per ipotesi induttiva sappiamo che $A \subset  \{ n+1, n+2, \dots \}$ poiché sicura $\{ 0,1, \dots, n \} \not\in A$. Osserviamo che $n+1 \not\in A$, altrimenti $n+1=min(A)$ , che è sicuramente falso. Se $n+1 \not\in A \implies n+1 \in B \implies \{ 0,1,\dots,n,n+1 \} \subset B$.

Il passo induttivo è stato fatto e quindi grazie al principio di induzione la $P(n)$ vera, $\forall n \in \mathbb{N} \implies B = \mathbb{N} \Longleftrightarrow A = \emptyset \implies (\mathbb{N}, \leq)$ è ben ordinato.

## * Teorema 7.5 Principio di induzione di seconda forma
Sia $\{ P(n) \}_{n \in \mathbb{N}}$ una famiglia di proposizioni indicizzata su $\mathbb{N}$.
Supponiamo che:
1. (Base dell'induzione) $P(0)$ è vera.
2. (Passo induttivo di seconda forma) Se $n > 0$ e se $P(k)$ è vera $\forall k \in \mathbb{N}$ tale che $0\leq k <n$, allora $P(n)$ è vera. In simboli:
   $n > 0, \left( \forall k \in \mathbb{N}, 0\leq k<n, P(k) \implies P(n) \right)$

Allora $P(n), \forall n \in \mathbb{N}$.

### Dimostrazione
Sia $A:=\{ n \in \mathbb{N} | P(n) \text{ falsa} \}$.
Dobbiamo provare che $A = \emptyset$.
Supponiamo che $A \neq \emptyset$.
Poiché $A$ è un sottoinsieme di $\mathbb{N}$ ammette minimo $m = min(A) \in A$.
Per la base dell'induzione sappiamo che $0 \not\in A \implies m > 0$.
Inoltre $\forall k \in \{ 0, \dots, m-1 \}, P(k)\text{ vera}$. Ma per l'ipotesi sappiamo che allora anche $P(m)$ è vera, ma allora $m \not\in A$.

Ma questo è assurdo, dunque $A = \emptyset$.

Il principio di prima forma funziona solo sui naturali, mentre quello di seconda forma funziona su qualsiasi insieme ben ordinato.
## Teorema $\exists!$ del quoziente e del resto della divisione euclidea
Sia $\mathbb{Z} := \{ \dots,-2, -1, 0, 1, 2, \dots \}$ l'insieme dei numeri interi.
Siano $n, m \in \mathbb{Z}$ con $m \neq 0$. Allora $\exists!q,r \in \mathbb{Z}$ tali che:
$$
(\star) \begin{cases}
n = qm+r \\
0 \leq r < |m|
\end{cases}
$$
Questa è la divisione euclidea di $n$ per $m$, $q$ quoziente della divisione e $r$ il resto.
Inoltre, se $n \geq 0$ e $m > 0$, allora $q \geq 0$.

### Dimostrazione (esistenza di $q$ e $r$)
Supponiamo che $n \geq 0$ e $m > 0$. Fissiamo $m > 0$ Procediamo per induzione di seconda forma su $n \in \mathbb{N}$.
$$
P(n) := \left( \exists q,r \in \mathbb{N} \text{ con } (\star) \text{ vera} \right) 
$$
Base induzione, $n = 0$:
Vale:
$$
\begin{cases}
0 = 0m+0 \\
0 \leq 0 < m
\end{cases}
$$
Basta porre $q := 0$ e $r:= 0$ e $(\star)_{0}$ è verificata.

Passo induttivo di seconda forma, $n>0, (\forall k, 0 \leq k<n) \implies n$:
Per ipotesi induttiva assumiamo che $(\star)_{k}$ sia vera $\forall k \in \mathbb{N}, 0 \leq k<n$, con $n>0$.
Dobbiamo dimostrare che vale $(\star)_{n}$. 
Sia $n>0$. 
Se $n < m$, allora $n = 0m+n$ e $0\leq n <m$. In questo è sufficiente porre $q:=0$ e $r:=n$.
Se $n \geq m$, allora $k := n - m \implies  0 \leq k < n$. Quindi con $k$ si può utilizzare l'ipotesi induttiva di seconda forma.
Dunque $\exists q,r \in \mathbb{N}$ tali che $(\star)_{k}$:
$$
(\star)_{k} = \begin{cases}
k = qm +r \\
0 \leq r < m
\end{cases}
\implies
\begin{cases}
n - m = qm +r \\
0 \leq r < m
\end{cases}
\Longleftrightarrow
\begin{cases}
n = (q + 1)m + r \\
0 \leq r < m
\end{cases}
\Longleftrightarrow
P(n) \text{ vera }
$$
Il passo induttivo è stato fatto, dunque grazie al principio di induzione di seconda forma, $(\star)_{n}$ è vera $\forall n \in \mathbb{N}$.

Consideriamo $n < 0, m > 0$
Applichiamo il caso precedente a $-n > 0$ e $m > 0$.
$$
\begin{cases}
-n = qm + r \\
0 \leq r < m
\end{cases}
\Longleftrightarrow
\begin{cases}
n = -qm -r \\
0 \leq r < m
\end{cases}
$$
Se $r = 0$, allora $n = (-q)m + 0$ e $0 \leq 0 < m$.
Se $r > 0$, vale:
$$
n = (-q)m - r = (-q)m - m + m - r = (-q)m - m + (m - r) = (-q - 1)m + (m - r)
$$
Dunque $n = (-q - 1)m + (m - r)$ e $0 < m - r < m$.

Ora consideriamo i casi dove $m < 0$.
Dobbiamo eseguire la divisione di $n \in \mathbb{Z}$ per $m < 0$. Eseguiamo prima la divisione tra $n$ per $-m > 0$:
$$
\begin{cases}
n = q(-m) + r \\
0 \leq r < -m = |m|
\end{cases}
\Longleftrightarrow
\begin{cases}
n = (-q)m + r \\
0 \leq r < |m|
\end{cases}
$$
### Dimostrazione unicità di $q$ e $r$
Siano $n, m \in \mathbb{Z}, m \neq 0$ e siano $q, q', r, r' \in \mathbb{Z}$ tali che:
$$
\begin{cases}
n = qm +r \\
0 \leq r < |m|
\end{cases}
\qquad
\begin{cases}
n = q'm + r' \\
0 \leq r' < |m|
\end{cases}
$$
Vale:
$$
\begin{align}
qm + r = n = q'm + r' &\implies qm +r = q'm + r'  \\
&\Longleftrightarrow m(q - q') = r' - r  \\
&\implies |q - q'||m| = |r - r'| < |m|  \\
&\implies  |q-q'||m| < |m|  \\
&\implies  |q - q'| < 1  \\
&\implies  |q-q'| = 0  \\
&\implies  q = q'
\end{align}
$$


Ma allora:
$$
(q-q')m = r' - r \Longleftrightarrow  0 = r'-r \Longleftrightarrow  r = r'
$$
Per casa eseguire la divisione euclidea di $n$ per $m$:
1. n = 16, m = 5
2. n = -16, m = 5
3. n = 16, m = -5
4. n = -16, m = -5
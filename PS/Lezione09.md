Definiamo una minima di probabilità su $(\mathbb{R}, \mathcal{B}(\mathbb{R}))$ nel modo seguente:
$$
P((a,b]) = F(b) - F(a)
$$
#### Esempio
![[Distribuzione|80%]]
$$
F(x) = \begin{cases}
0 \text{ se } x < 0 \\
x \text{ se } 0\leq x < 1 \\
1 \text{ se } x \geq 1
\end{cases}
$$
$$
P(\{ a \}) = P \left( \bigcap_{n=1}^{+\infty} \left( a - \frac{1}{n}, a \right] \right)
$$
La successione è monotona decrescente, ovvero ad ogni iterazione l'intervallo è contenuto in quello precedente.
Quando siamo in presenza di questo tipo di successione è possibile fare il seguente:
$$
P\left( \lim_{ n \to +\infty } \left( a - \frac{1}{n}, a \right] \right) \underbrace{ = }_{ monotonia } \lim_{ n \to +\infty } P\left( \left( a - \frac{1}{n}, a \right] \right)
$$
Considerando la funzione dell'esempio e assumendo $a \in [0, 1]$.
$$
\begin{align}
P([a, b]) &= P\left( \bigcap_{n=1}^{+\infty} \left( a-\frac{1}{n}, b \right] \right)  \\
&= \lim_{ n \to +\infty } P\left( \left( a-\frac{1}{n}, b \right] \right) \\
&= \lim_{ n \to +\infty } \left(F(b) - F\left( a - \frac{1}{n} \right) \right)\\
&= F(b) - \lim_{ n \to +\infty } F\left( a - \frac{1}{n} \right) \\
&= F(b) - \lim_{ n \to +\infty } \left( a - \frac{1}{n} \right) \\
&= F(b) - a
\end{align}
$$
Se $a \leq 0$:
$$
P([a, b]) = F(b) - \lim_{ n \to +\infty } F\left( 0 - \frac{1}{n} \right) = F(b)
$$
Se $a \geq 1$:
$$
P([a, b]) = F(b) - \lim_{ n \to +\infty } F\left( 1 - \frac{1}{n} \right) = F(b) - 1 = 0, \forall b \geq a
$$
Proviamo a calcolare la probabilità di un singoletto.
$$
\begin{align}
P(\{ a \}) &= \lim_{ n \to +\infty } \left( F(a) - F\left( a - \frac{1}{n} \right) \right)  \\
&= F(a) - F\left( \lim_{ n \to +\infty } \left( a - \frac{1}{n} \right) \right) \\
&= F(a) - F(a) = 0, \forall a \in \mathbb{R}
\end{align}
$$
Consideriamo un punto $\{ a_{1} \}$. Allora $P(\{ a_{1} \}) = 0$.
Consideriamo anche $\{ a_{2} \}$. Allora $P(\{ a_{1} \} \cup \{ a_{2} \}) = 0$.
Consideriamo $\{ a_{i} \}_{i = 1}^{n}$. Allora $P\left( \bigcup_{i = 1}^{n} \{ a_{i} \} \right) = \sum_{i=1}^{n} P(\{ a_{i} \}) = 0$.
Consideriamo $\{ a_{n} \}_{n = 1}^{+\infty}$. Allora $P\left( \bigcup_{n = 1}^{+\infty} \{ a_{n} \} \right) = \sum_{n=1}^{+\infty} P(\{ a_{n} \}) = 0$.
Consideriamo $(a,b] = \{ d : d \in (a, b], d \in \mathbb{R} \} = A = \bigcup_{d \in A}\{ d \}$. Allora $P((a, b]) = P(A) = P\left( \bigcup_{d \in A} \{ d \} \right) \neq \sum_{d\in A} P(\{ d \}) = 0$.

Quando si hanno unioni più che numerabili di Borealiani, succedono cose strane, e la formula non è la somma delle singole probabilità.

Prendendo come riferimento sempre la funzione dell'esempio.
$$
\begin{align}
P((a, b)) & = P((a, b] \setminus \{ b \}) \\
 & = P((a,b]) - P(\{ b \})  \\
 & = P((a, b])
\end{align}
$$
Allo stesso modo:
$$
\begin{align}
P([a, b]) = P((a, b]) = P([a, b)) = P((a, b))
\end{align}
$$
Se differiscono di una quantità numerabile di singoletti, allora sono equiprobabili.

Consideriamo ora i seguenti intervalli:
$$
A_{k} = \left[ \frac{k}{k+1}, \frac{k}{k+1} + \frac{1}{10^{k}} \right]
$$
In particolare la successione $\{ A_{k} \}_{k = 1}^{+\infty}$. Gli eventi sono disgiunti.
$$
\begin{align}
P\left( \bigcup_{k = 1}^{+\infty} A_{k} \right) &= \sum_{k=1}^{+\infty} P\left( \left[ \frac{k}{k+1}, \frac{k}{k+1} + \frac{1}{10^{k}} \right] \right)  \\
&= \sum_{k=1}^{+\infty} \left( F\left( \frac{k}{k+1}+ \frac{1}{10^{k}} \right) - F\left( \frac{k}{k+1} \right) \right) \\
&= \sum_{k=1}^{+\infty} \left( \frac{k}{k+1} + \frac{1}{10^{k}} - \frac{k}{k + 1} \right)  \\
&= \sum_{k=1}^{+\infty}  \frac{1}{10^{k}} = \frac{1}{1 - \frac{1}{10}} - 1 = \frac{1}{9}
\end{align}
$$
Consideriamo questa funzione:
$$
F(x) = \begin{cases}
0 \text{ se } x < 0 \\
\frac{1}{2} \text{ se } 0 \leq x < 1 \\
1 \text{ se } x \geq 1
\end{cases}
$$
Consideriamo $0 \leq a \leq b < 1$.
$$
P((a,b]) = F(b) - F(a) = \frac{1}{2} - \frac{1}{2} = 0
$$
Consideriamo $-\infty \leq a \leq b \leq 0$.
$$
P((a, b]) = \lim_{ x \to b^{-} } F(x) - F(a) = 0 - 0 = 0
$$
Consideriamo $1 \leq a \leq b \leq +\infty$
$$
P((a, b]) = \lim_{ x \to b^{-} }  F(x) - F(a) = 1- 1= 0
$$
Quindi:
$$
P((-\infty, 0) \cup (0,1) \cup(1, +\infty)) = P((-\infty, 0)) + P((0, 1)) + P((1, +\infty)) = 0
$$
Prendiamo il complementare:
$$
P(\{ 0 \} \cup \{ 1 \}) = P(\{ 0 \}) + P(\{ 1 \}) = 1 - P((-\infty, 0) \cup (0, 1) \cup (1, +\infty)) = 1 - 0 = 1
$$
Calcoliamo i singoletti:
$$
\begin{align}
P(\{ 0 \}) &= P\left( \bigcap_{n = 1}^{+\infty} \left( 0 - \frac{1}{n}, 0 \right] \right) \\
 & = P\left( \lim_{ n \to +\infty } \left( 0 - \frac{1}{n}, 0 \right] \right)  \\
 & = \lim_{ n \to +\infty } P\left( \left( 0-\frac{1}{n}, 0 \right] \right) \\
 & = \lim_{ n \to +\infty } \left( F(0) - F\left( 0 - \frac{1}{n} \right) \right) \\
 & = F(0) - \lim_{ n \to +\infty } F\left( 0 - \frac{1}{n} \right) \\
 & = \frac{1}{2} - 0 = 0
\end{align}
$$
$$
P(\{ 1 \}) = 1 - P(\{ 0 \}) = \frac{1}{2}
$$
Calcoliamo ora:
$$
P\left( \left( -\frac{1}{2}, \frac{1}{2} \right] \right) = P\left( \left( -\frac{1}{2}, 0 \right) \cup \left( 0, \frac{1}{2} \right) \cup \{ 0 \} \right) = 0+ 0+\frac{1}{2}=  \frac{1}{2}
$$
La massa di probabilità è portata solamente dai singoletti, quindi se un boreliano li include avrà probabilità, altrimenti è 0. Si ha probabilità sui singoletti se la funzione è discontinua in quei punti.

Consideriamo la seguente funzione di distribuzione:
$$
F_{1}(x) = \begin{cases}
0 \text{ se } x < 0 \\
x \text{ se } 0 \leq x < 1 \\
1 \text{ se } x \geq 1
\end{cases}
\qquad
F_{2}(x) = \begin{cases}
0 \text{ se } x < 0 \\
\frac{1}{2} \text{ se } 0\leq x < 1 \\
1 \text{ se } x \geq 1
\end{cases}
$$
$$
F_{\varepsilon}(x) = (1-\varepsilon)F_{1}(x) + \varepsilon F_{2}(x),0\leq\varepsilon\leq 1
$$
![[]]

$$
\begin{align}
P(\{ 0 \}) &= \frac{1}{4} \\
P(\{ 1 \}) &= \frac{1}{4} \\
P((0, 1)) & = \frac{1}{2} \\
P([0,1]) & = 1 \\
P((-\infty, 0) \cup (1, +\infty)) &= 1 -P([0, 1]) = 0
\end{align}
$$
### Definizione Funzioni di distribuzione continue
Una $F(x)$ è continua se è una funzione continua. Se $\forall x \in \mathbb{R}, P(\{ x \}) = 0$.

### Definizione Funzioni di distribuzione discreta
Una $F(x)$ è discreta se assegna masse di probabilità solo ai singoletti. Cioè è una funzione a gradini.
Non può avere un numero di discontinuità più che numerabile.

### Definizione Funzioni di distribuzione miste
$F(x)$ è mista se $\exists\varepsilon \in(0,1)$, $F_{1}(x)$ continua e $F_{2}(x)$ discreta tale che:
$$
F(x) = (1-\varepsilon)F_{1}(x) + \varepsilon F_{2}(x)
$$
Per questo corso esistono solo questi 2 tipi.
Una funzione è assolutamente continua se ha una derivata.
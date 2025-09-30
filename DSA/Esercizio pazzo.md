$$
\begin{align}
2^{n+2} &= O(2^{n}) \\
\log ^{2}(n)  & = O(\log ^{2}(n))\\ 
\log_{n}(n \cdot (\sqrt{ n })^{2}) + \frac{1}{n^{2}}  & = O(1) \\
3n^{0.5} &= O(\sqrt{ n }) \\
16^{n/4} & = O(2^{n}) \\
2\sqrt{ n } + 4n^{1/4} + 8n^{1/8} + 16^{n/16} & = O(\sqrt{ n }) \\
\sqrt{ (\log(n)) (\log(n)) }  & = O(\log(n)) \\
\frac{n^{3}}{(n+1)(n+3)}  & = O(n) \\
2^{n} &= O(2^{n})
\end{align}
$$
$$
1,5,9 > 8 > 4,6 > 2 > 7 > 1
$$

---
$$
T(n) = \begin{cases}
kT\left( \frac{n}{k} \right)+kn  & n > 1 \\
1  & n \leq 1
\end{cases}
$$
---
Dare un limite superiore e inferiore della seguente ricorrenza:
$$
T(n) = \begin{cases}
T\left( \left\lfloor  \frac{n}{5}  \right\rfloor  \right) + T\left( \left\lfloor  \frac{7n}{10}  \right\rfloor  \right) + \frac{11}{5}n  & n > 1 \\
1  & n\leq 1
\end{cases}
$$
Utilizzo il metodo della sostituzione. Sappiamo dalla formula di ricorsione che $T(n)=\Omega(n)$.
Il mio tentativo è che $T(n)=O(n)$.
Passo induttivo:
$$
\begin{align}
T(n)  & \leq c \frac{n}{5} + c \frac{7n}{10} + \frac{11n}{5} \\
 & = c\frac{9n}{10} +\frac{11n}{5} \leq cn \Longleftrightarrow \frac{22n}{10} \leq \frac{c}{10} \Longleftrightarrow c\geq 22
\end{align}
$$
Passo base:
$$
\begin{align}
T(0)  & = 1 \leq c \cdot 0 & \text{Falso} \\
T(1)  & = 1 \leq c & c\geq 1 \\
T(2)  & = \frac{22}{5} + T(0)  + T(1) = \frac{32}{5} \leq 2c  &  c\geq \frac{32}{10} \\
T(3)  & = \frac{33}{5} + T(0) + T(2) = \frac{33}{5} + 1 + \frac{32}{5} = \frac{70}{5} \leq 3c & c\geq \frac{14}{3} \\
T(4)  & = \frac{44}{5} + T(0) + T(2) = \frac{44}{5} + 1 + \frac{32}{5} = \frac{81}{5} \leq 4c & c \geq \frac{81}{20} \\
T(5)  & = 11 + T(1) + T(3) & \text{Verificato per induzione}
\end{align}
$$
Dunque segue che $T(n) = \Theta(n)$.

---
Si indichi la complessità della seguente ricorrenza:
La complessità dell'algoritmo è:
$$
\begin{align}
T(n)  & = \sum_{i=1}^{n} \sum_{j=i}^{n}  1 + 2 T\left( \left\lfloor  \frac{n}{4}  \right\rfloor  \right)   + T\left( \left\lfloor   \frac{n}{2}  \right\rfloor  \right)  \\
 & = \frac{n(n - 1)}{2} + 2T\left( \left\lfloor  \frac{n}{4}  \right\rfloor  \right) + T\left( \left\lfloor   \frac{n}{2}  \right\rfloor  \right) \\
 & = 2T\left( \left\lfloor  \frac{n}{4}  \right\rfloor  \right) + T\left( \left\lfloor  \frac{n}{2}  \right\rfloor  \right)+ O(n^{2})
\end{align}
$$
per $n > 1$.
Dal costo non ricorsivo sappiamo che $T(n)=\Omega (n^{2})$.
Proviamo a dimostrare che $T(n)=O(n^{2})$.
Caso induttivo:
$$
\begin{align}
T(n)  & \leq 2c \frac{n^{2}}{16} + c\frac{n^{2}}{4} + n^{2} \\
 & = 2c \frac{5n^{2}}{16} +n^{2} \\
 & = \frac{5}{8}cn^{2}+n^{2} \leq cn^{2} \Longleftrightarrow n^{2} \leq \frac{3}{8} cn^{2} \Longleftrightarrow 1 \leq \frac{3}{8}c \Longleftrightarrow c\geq \frac{8}{3}
\end{align}
$$
Caso base:
$$
\begin{align}
T(0)  & = 1 \leq c \cdot 0  &  \text{Falso} \\
T(1)  & = 1 \leq c &  c\geq 1 \\
T(2)  & = 2T(0) + T(1) + 4 = 7 \leq 4c  & c\geq \frac{7}{4} \\
T(3)  & = 2T(0) + T(1) + 9 = 12 \leq 9c  & c \geq \frac{12}{9} \\
T(4)  & = 2T(1) + T(2) + 16 & \text{Verificato per induzione}
\end{align}
$$
---

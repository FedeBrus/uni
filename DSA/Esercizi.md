qSi trovi la complessità di:
$$
T(n) = \begin{cases}
1  & n\leq 1 \\
T(n - 1)+\log(n) & n > 1
\end{cases}
$$
Utilizziamo il metodo di sostituzione:
La mia guess è che $T(n)=O(n\log(n))$. Dimostriamolo per induzione.
Base dell'induzione: $T(2)$.
Vale che:
$$
\begin{align}
T(2) &= T(1) + \log(2) \leq c \cdot 2\log(2) \\
 & \Longleftrightarrow 1 + 1 \leq 2c \\
 & \Longleftrightarrow 1 \leq c
\end{align}
$$
La base dell'induzione è verificata.
Ipotesi induttiva: supponiamo che $\forall m <n, T(m)\leq cm\log(m)$. Dimostriamo che $T(n)\leq cn\log(n)$:
$$
\begin{align}
T(n) &= T(n-1) + \log(n) \\
 & \leq c(n-1)\log(n-1) +\log(n) \\
 & \leq c(n-1)\log(n)+\log(n) \\
 & \leq cn\log(n) -c \log n +\log(n) \\
 & \leq cn\log(n) & \text{con } c\geq 1
\end{align}
$$
Scegliendo $c=1$ e $n_{0}=1$ possiamo concludere che $T(n)=O(n\log(n))$.

In alternativa, assumendo l'asserto vero per $T(n)$ e volendo dimostrarlo per $T(n+1)$:
$$
\begin{align}
T(n+1) & =T(n) +\log(n+1)  \\
 & \leq cn\log(n) +\log(n+1) \\
 & \leq cn\log(n+1) +\log(n+1) \\
 & = \log(n+1) \cdot(cn + 1) \\
 & \leq \log(n+1) \cdot(cn+c) \\
 & = c(n+1)\log(n+1)
\end{align}
$$

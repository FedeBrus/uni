## Es 8.1
Sia $T:\mathbb{R}^{3}\rightarrow \mathbb{R}^{3}$ l'applicazione definita da $T(x_{1},x_{2},x_{3}) = (x_{1}^{2}, x_{2}, 2x_{3})$. Stabilire se $T$ è lineare.
L'applicazione $T$ è lineare se $T(av + bu) = aT(v) + bT(u)$, con $a, b \in \mathbb{R}$ e $v,u \in V$ e $v = (v_{1},v_{2},v_{3}), u = (u_{1},u_{2},u_{3})$.
$$
T(av+bu) = T(av_{1}+bu_{1}, av_{2}+bu_{2}, av_{3}+bu_{3}) = (a^{2}v_{1}^{2}+2abv_{1}u_{1}+b^{2}u^{2}_{1}, av_{2}+bu_{2}, 2av_{3}+2bv_{3})
$$
$$
aT(v) + bT(v) = a(v_{1}^{2}, v_{2}, 2v_{3}) + b(u_{1}^{2}, u_{2}, 2u_{3}) = (av_{1}^{2}+bu_{1}^{2}, av_{2}+bu_{2}, 2av_{3}+2bu_{3})
$$
## Es 8.2
Verificare che la funzione determinante definita sull'insieme delle matrici $M_{2 \times 2}$ a valori in $\mathbb{R}$ non è lineare.

## Es 8.3
Stabilire se esiste una applicazione lineare $T: \mathbb{R}^{2} \rightarrow \mathbb{R}^{2}$ tale che:
$$
T(1, 2) = (3, 0), \qquad T(2, 7) = (4, 5), \qquad T(1, 5) = (1, 4)
$$
Notiamo che $(1, 2) + (1,5) = (2,7)$.
Allora, se $T$ fosse lineare, allora $T(av + bu) = aT(v) + bT(u), \forall a, b \in \mathbb{R}, \forall v, u \in \mathbb{R}^{2}$.
Ma notiamo che:
$$
\begin{align}
T(2,7) &\neq T(1,2) + T(1,5) \\
(4,5) &\neq (3,0) + (1,4)  \\
(4,5) &\neq (4,4)
\end{align}
$$
## Es 8.4
Stabilire se esiste una applicazione lineare $T:\mathbb{R}^{2} \rightarrow \mathbb{R}^{2}$ tale che:
$$
T(1, 2) = (3, 0), \qquad T(2, 4) = (5, 0), \qquad T(0, 1) = (1, 1)
$$
Notiamo che $(2,4) = 2(1,2)$
Allora, se $T$ fosse lineare, allora $T(av + bu) = aT(v) + bT(u), \forall a, b \in \mathbb{R}, \forall v, u \in \mathbb{R}^{2}$.
Ma notiamo che:
$$
\begin{align}
T(2,4) &\neq 2T(1,2) \\
(5,0) &\neq 2(3,0) \\
(5,0) &\neq (6,0)
\end{align}
$$
## Es 8.5
Determinare una applicazione lineare $T:\mathbb{R}^{2} \rightarrow \mathbb{R}^{2}$ tale che:
$$
T(1, 1) = (1, 2) \qquad T(0,2) = (4, 4)
$$
Siccome $\mathcal{B} = \{ (1,1), (0,2) \}$ formano una base di $\mathbb{R}^{2}$.
$$
\begin{align}
T(1,1) &= (1,2) \\
T(0,2) &= (4,4)
\end{align}
$$

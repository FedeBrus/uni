## Confronto tra infiniti
---
$$
\lim_{ x \to +\infty } \frac{a^{x}}{x^{b}} = +\infty \qquad \forall a > 1, \forall b > 0 
$$
Quindi "l'esponenziale batte l'elevamento a potenza".
##### Dim:
$$
\lim_{ x \to +\infty } \frac{e^{x\log a}}{e^{b\log x}} = \lim_{ x \to +\infty } e^{x\log a - b\log x} = \lim_{ x \to +\infty } e^{x(\log a - \frac{b \log x}{x})}
$$
Si può fare perché $x \rightarrow +\infty$, quindi prendo un $x$ abbastanza grande per essere positivo.
Pongo $y = \frac{1}{x}$, se $x \rightarrow +\infty$ allora $y \rightarrow 0^{+}$.
$$
\begin{align}
\lim_{ x \to +\infty } e^{x(\log a - \frac{b \log x}{x})} &= \lim_{ y \to 0^{+} } e^{\frac{1}{y}(\log a-by\log\frac{1}{y})} \\ \\
 & = \lim_{ y \to 0^{+} } e^{\frac{1}{y}(\log a+by\log y)} \\ \\
 & = [e^{+\infty(\log a + 0)}] \\ \\
 & = +\infty
\end{align}
$$
---
$$
\lim_{ x \to +\infty } \frac{(\log x)^{a}}{x^{b}} = 0 \qquad \forall a > 0, \forall b > 0
$$
Pongo $y = \log x$, se $x \rightarrow +\infty$, allora $y \rightarrow +\infty$, e $x = e^{y}$.
$$
\lim_{ y \to +\infty } \frac{y^{a}}{e^{by}} = 0
$$
Noi sappiamo che "l'esponenziale batte la potenza" e dunque il limite è 0.

---
X casa:
##### Dim:
$$
\lim_{ x \to 0^{+} } x^{a}\log^{b}x = 0 \qquad \forall a > 0, \forall b > 0
$$
$$
\lim_{ x \to 0^{+} } \frac{(\log x)^{b}}{x^{-a}}
$$
Pongo $y = -\log x$, se $x \rightarrow 0^{+}$ allora $y \rightarrow +\infty$ e $x = 1 / e^{y}$
$$
\lim_{ y \to +\infty } -\frac{y^{b}}{e^{ay}}
$$
Sappiamo che "l'esponenziale batte la potenza" e dunque il limite è 0.

---
## Criterio funzione $\implies$ successione

"Limiti di funzioni aiutano i limiti di successioni".

##### Esempio:
$$
\lim_{ n \to +\infty } n \sin {\frac{1}{n}} = [0 \cdot +\infty]
$$
Pongo $x = \frac{1}{n}$, quindi $n = \frac{1}{x}$, se $n \rightarrow +\infty$, allora $x \rightarrow 0^{+}$.
$$
\lim_{ x \to 0^{+} } \frac{1}{x} \sin x = 1
$$
##### Esempio:
$$
\lim_{ n \to +\infty } n(\sqrt[n]{ 2 } - 1) = [+\infty \cdot 0]
$$
Pongo $x = \frac{1}{n}$, quindi $n = \frac{1}{x}$, se $n \rightarrow +\infty$, allora $x \rightarrow 0^{+}$.
$$
\lim_{ x \to 0^{+} } \frac{1}{x}(2^{x}-1) =^{LN} \log 2
$$
---
Dimostriamo:
$$
\lim_{ x \to 0 } \frac{\sin x}{x} = 1
$$
Le due funzioni sono dispari quindi il loro rapporto è pari e dunque il grafico è speculare, infatti $\left( \frac{\sin(-x)}{-x} \right) = \frac{-\sin x}{-x} = \frac{\sin x}{x}$, quindi è sufficiente fare $\lim_{ x \to 0^{+} } \frac{\sin{x}}{x}$.
##### Oss:
Ne deduciamo che è sufficiente considerare l'intervallo $\left( 0, \frac{\pi}{2} \right)$.

##### Oss:
Supponiamo di aver dimostrato che $\forall x \in (0, \frac{\pi}{2})$ vale che $\sin x \leq x \leq \tan x$.
Poiché $\sin x > 0 \quad \forall x \in (0, \frac{\pi}{2})$, posso dividere la disuguaglianza.
$$
1 \leq \frac{x}{\sin x} \leq \frac{1}{\cos x}
$$
Per il teorema dei carabinieri e teorema algebrico $\implies$ $\frac{\sin x}{x} = 1$.

##### Dimostriamo:
$$
\forall x \in \left( 0, \frac{\pi}{2} \right) \qquad \sin x \leq x \leq \tan x
$$
1. $\forall x \in (0, \frac{\pi}{2}) \qquad \sin x \leq x$. 
![[dimostrazione1.svg|600]]
2. $\forall x \in (0, \frac{\pi}{2}) \qquad x \leq \tan x$.
![[dimostrazione2.svg|500]]
---
##### Esempio:
Primo metodo (SBAGLIATO):
$$
\lim_{ x \to +\infty } \frac{\log(1+2^{x})}{x} = \lim_{ x \to +\infty } \frac{\log(1+2^{x})}{2^{x}} \cdot \frac{2^{x}}{x} = +\infty
$$
Secondo metodo (SBAGLIATO):
Potenza batte logaritmo, quindi il limite è $0$.

$$
\lim_{ x \to +\infty } \frac{\log\left( 2^{x}\left( 1+\frac{1}{2^{x}} \right) \right)}{x} = \frac{\log{2^{x}}}{x}+ \frac{\log\left( 1+\frac{1}{2^{x}} \right)}{x} = \log 2 + \left[ \frac{0}{+\infty} \right] = \log 2
$$
---
## Sotto-successioni
L'idea: strumento per dimostrare che un limite non esiste.

Data una successione, trovare una sua sotto-successione vuol dire fare una selezione di elementi della successione.
$$
a_{0}, a_{1}, a_{2}, a_{3}, a_{4}, a_{5}, a_{6}, a_{7}, ...
$$
Con la restrizione che gli indici che caratterizzano la sotto-successione siano strettamente crescenti.
$$
a_{1}, a_{3}, a_{4}, a_{5}, a_{7}, \dots
$$
Questa è una sotto-successione valida.

##### Esempio:
Con successione $(a_{n})_{n \in \mathbb{N}}$ si possono prendere le seguenti sotto-successioni:
- $(a_{2n})_{n \in \mathbb{N}} \rightarrow a_{0}, a_{2}, a_{4}, a_{6}, \dots$ 
- $(a_{2n+1})_{n \in \mathbb{N}} \rightarrow a_{1}, a_{3}, a_{5}, a_{7}, \dots$ 
- $(a_{4n+2})_{n \in \mathbb{N}} \rightarrow a_{2}, a_{6}, a_{10}, a_{14}, \dots$
- $(a_{n^{2}})_{n \in \mathbb{N}} \rightarrow a_{0}, a_{1}, a_{4}, a_{9}, a_{16}, \dots$
- $(a_{2^{n}})_{n \in \mathbb{N}} \rightarrow a_{1}, a_{2}, a_{4}, a_{8}, a_{16},\dots$

### Teorema:
Sia $(a_{n})_{n \in \mathbb{N}}$ successione in $\mathbb{R}$ e sia $(a_{n_{k}})_{k\in \mathbb{N}}$ sotto-successione. Supponiamo che:
$$
a_{n} \rightarrow l \in \bar{\mathbb{R}} \implies a_{n_{k}} \rightarrow l \in \bar{\mathbb{R}}
$$
Con lo stesso $l$.

Attenzione: se la successione $a_{n}$ non ha limiti non è detto che anche $a_{n_{k}}$ non abbia un limite.

Quindi se trovo una sotto-successione che non converge allora nemmeno la successione originale converge. Inoltre se trovo due sotto-successioni che convergono ma a limiti diversi, allora la successione originale non converge.

##### Esempio:
$$
a_{n} = n^{2} + (-3)^{n}
$$
$$
a_{2n} = (2n)^{2} + (-3)^{2n} = 4n^{2} + 9^{n} \rightarrow +\infty
$$
$$
a_{2n + 1} = (2n + 1)^{2} + (-3)^{2n + 1} = 4n^{2} + 4n + 1 + 9^{n}(-3) = 9^{n} \left(\frac{4n^{2}+4n+1}{9^{n}} - 3 \right) = -\infty
$$
Siccome le due sotto-successioni tendono a limiti diversi allora la successione $a_{n}$ non ha limite.

##### Esempio:
$$
\lim_{ n \to +\infty } \sin\left( \frac{\pi}{2} n \right)
$$
$$
a_{2n} = \sin\left( \pi n \right) = 0
$$
$$
a_{4n + 1} = \sin\left( 2\pi n + \frac{\pi}{2} \right) = \sin(2\pi n)\cos\left( \frac{\pi}{2} \right) + \cos(2\pi n) \sin \left( \frac{\pi}{2} \right) = 1
$$
Siccome le due sotto-successioni tendono a limiti diversi allora la successione $a_{n}$ non ha limite.

##### Esempio:
X casa:
$$
\lim_{ n \to +\infty } 2^{n} + (-1)^{n}n^{5}
$$
$$
a_{2n} = \lim_{ n \to +\infty } 2^{2n} + (-1)^{2n}(2n)^{5} = \lim_{ n \to +\infty } 4^{n} + (2n)^{5} = +\infty
$$
$$
a_{2n + 1} = \lim_{ n \to +\infty } 2^{(2n + 1)} + (-1)^{2n + 1}(2n + 1)^{5} = \lim_{ n \to +\infty } 2^{(2n + 1)} - (2n + 1)^{5} = \lim_{ n \to +\infty } 2^{(2n+1)}\left( 1 - \frac{(2n + 1)^{5}}{2^{(2n+1)}} \right) = +\infty
$$
Dunque la successione iniziale diverge a $+\infty$.

---
Supponiamo che:
$$
\lim_{ x \to x_{0} } f(x) = l \in \bar{\mathbb{R}} \qquad (x_{0} \in \bar{\mathbb{R}})
$$
Trovo $a_{n} \rightarrow x_{0} \in \bar{\mathbb{R}}$.
$$
\lim_{ x \to x_{0} } f(x) =^{CV}_{x = a_{n}} \lim_{ n \to +\infty } f(a_{n}) = l \in \bar{\mathbb{R}}
$$
Mettendo insieme quanto detto con l'opposto del teorema di regolarità delle successioni, se trovo $(a_{n})$ e $(b_{n})$ tali che $a_{n} \rightarrow x_{0}$, $b_{n} \rightarrow x_{0}$ e $f(a_{n}) \rightarrow l_{1} \in \bar{\mathbb{R}}$, $f(b_{n}) \rightarrow l_{2} \in \bar{\mathbb{R}}$, con $l_{1} \neq l_{2}$, allora $\lim_{ x \to x_{0} } f(x)$ non esiste.

##### Esempio:
$$
\lim_{ x \to +\infty } \sin x = \text{ ?}
$$
$$
\begin{align}
a_{n} &= \frac{\pi}{2} + 2n\pi \qquad n \in \mathbb{N} \\
a_{n} & \rightarrow +\infty = x_{0}
\end{align}
$$
$$
\begin{align}
b_{n} &= \frac{3\pi}{2} + 2n\pi \qquad n \in \mathbb{N} \\
b_{n} & \rightarrow +\infty = x_{0}
\end{align}
$$
$$
\begin{align}
f(a_{n}) = \sin(a_{n}) &= \sin\left( \frac{\pi}{2} + 2n\pi \right) \rightarrow 1 \\
f(b_{n}) = \sin(b_{n}) &= \sin\left( \frac{3\pi}{2} + 2n\pi \right) \rightarrow -1
\end{align}
$$
##### Esempio:
$$
\lim_{ x \to 0^{+} } \cos\left( \frac{1}{x^{2}} \right) = \text{ ? }
$$
Impongo che:
$$
\cos\left( \frac{1}{a_{n}^{2}} \right) = 1
$$
$$
\cos\left( \frac{1}{b_{n}^{2}} \right) = 0
$$
Quindi:
$$
\begin{align}
\frac{1}{a_{n}^{2}} &= 2n\pi \qquad n \in \mathbb{N} \\
a_{n} & = \frac{1}{\sqrt{ 2n\pi }}
\end{align}
$$
$$
\begin{align}
\frac{1}{b_{n}^{2}} &= \frac{\pi}{2} +n\pi \qquad n \in \mathbb{N} \\
b_{n} & = \sqrt{ \frac{2}{\pi+2n\pi} }
\end{align}
$$

##### Esempio
$$
\int_{0}^{+\infty} \frac{1}{x^{2}+\sqrt{ x }}dx
$$
2 mono-problemi
$$
\int_{0}^{+\infty} \frac{1}{x^{2}+\sqrt{ x }} dx = \int_{0}^{1} \frac{1}{x^{2}+\sqrt{ x }}dx + \int_{1}^{+\infty} \frac{1}{x^{2} +\sqrt{ x }}dx
$$
Intuizione: $f \geq 0$, per $x$ molto grandi la $f \sim \frac{1}{x^{2}}$. Siccome $2 > 1$ mi aspetto che l'integrale converga.
Utilizziamo il criterio asintotico:
Prendiamo come $g(x) = \frac{1}{x^{2}}$.
$$
\lim_{ x \to +\infty } \frac{f(x)}{g(x)} = \lim_{ x \to +\infty } \frac{\frac{1}{x^{2}+\sqrt{ x }}}{\frac{1}{x^{2}}} = \lim_{ x \to +\infty } \frac{x^{2}}{x^{2}+\sqrt{ x }} = 1 \neq 0, +\infty
$$
Quindi il comportamento asintotico di $f(x)$ e lo stesso di $g(x)$, ma il comportamento di $g(x)$ è ben noto, ovvero convergente.
Dunque l'integrale $\int_{1}^{+\infty} f(x) dx$ converge.

Ora bisogna guardare il primo integrale.
Intuizione: $f \geq 0$, per $x$ molto piccoli la $f \sim \frac{1}{\sqrt{ x }}$. Siccome $\frac{1}{2} < 1$ mi aspetto che l'integrale converga.
Utilizziamo il criterio asintotico:
Prendiamo come $g(x) = \frac{1}{\sqrt{ x }}$.
$$
\lim_{ x \to +\infty } \frac{\sqrt{ x }}{x^{2} + \sqrt{ x }} = \lim_{ x \to +\infty } \frac{\sqrt{ x }(1)}{\sqrt{ x }(1+x\sqrt{ x })} = 1 \neq 0, +\infty
$$
Quindi il comportamento asintotico di $f(x)$ e lo stesso di $g(x)$, ma il comportamento di $g(x)$ è ben noto, ovvero convergente.
Dunque l'integrale $\int_{0}^{1} f(x) dx$ converge.

Dunque l'integrale originale converge.

##### Esempio
$$
\int_{0}^{+\infty} \frac{\arctan(x)}{x\sqrt{ x }} dx
$$
La funzione è positiva in $I$, analizziamo il comportamento in $0$.
$\arctan(x) = x + o(x)$
$\frac{\arctan(x)}{x\sqrt{ x }} = \frac{x + o(x)}{x\sqrt{ x }} = \frac{1}{\sqrt{ x }} (1+o(1)) \qquad x\rightarrow0^{+}$
$$
\int_{0}^{+\infty} \frac{\arctan(x)}{x\sqrt{ x }} dx = \int_{0}^{1} \frac{\arctan(x)}{x\sqrt{ x }} dx +\int_{1}^{+\infty} \frac{\arctan(x)}{x\sqrt{ x }} dx 
$$
Primo integrale:
$$
\int_{1}^{+\infty} \frac{\arctan(x)}{x\sqrt{ x }} dx 
$$
Per $x$ molto grandi $f \sim \frac{1}{x\sqrt{ x }}$, quindi l'intuizione è che converga.
Criterio asintotico con $g(x) = \frac{1}{x\sqrt{ x }}$.
$$
\lim_{ x \to +\infty } \frac{\frac{\arctan(x)}{x\sqrt{ x }}}{\frac{1}{x\sqrt{ x }}} = \lim_{ x \to +\infty } \arctan(x) = \frac{\pi}{2} \neq 0, +\infty
$$
Quindi il comportamento è lo stesso quindi l'integrale converge.

Secondo integrale:
$$
\int_{0}^{1} \frac{\arctan(x)}{x\sqrt{ x }} dx
$$
Abbiamo visto che il comportamento di $f(x)$ è come $\frac{1}{\sqrt{ x }}$, quindi ci aspettiamo che converga.
Criterio asintotico con $g(x) = \frac{1}{\sqrt{ x }}$.
$$
\lim_{ x \to 0^{+} }  \frac{\frac{\arctan(x)}{x\sqrt{ x }}}{\frac{1}{\sqrt{ x }}} = \lim_{ x \to 0^{+} } \frac{\arctan(x)}{x} = 1 \neq 0, +\infty
$$
Quindi il comportamento è lo stesso quindi l'integrale converge.

L'integrale originale dunque converge.

##### Esempio
$$
\int_{0} ^{+\infty} \frac{1}{x\sqrt{ x }} dx = \int_{0}^{1} \frac{1}{x\sqrt{ x }} dx + \int_{1}^{+\infty} \frac{1}{x\sqrt{ x }} dx = +\infty +l = +\infty
$$

##### Esempio
$$
\int_{0} ^{+\infty} \frac{1}{\sqrt{ x }} dx = \int_{0}^{1} \frac{1}{\sqrt{ x }} dx + \int_{1}^{+\infty} \frac{1}{\sqrt{ x }} dx = l + \infty = +\infty
$$
##### Esempio
$$
\int_{0}^{1} \frac{1}{\sin (x)} dx
$$
Notiamo che $f(x) > 0, \forall x \in [0, 1]$.
$\sin(x) = x + o (x) \qquad x \rightarrow 0^{+}$
Quindi $f(x) \sim \frac{1}{x}$.
$$
\lim_{ x \to 0^{+} } \frac{x}{\sin(x)} = \lim_{ x \to 0^{+} } \frac{1}{\frac{\sin(x)}{x}} = 1 \neq 0, +\infty
$$
Quindi hanno lo stesso comportamento. Ma $\frac{1}{x}$ diverge positivamente, quindi anche l'integrale originale diverge.
$$
\int_{0}^{1} \frac{1}{\sin (x)} dx = +\infty
$$
### Funzioni integrande con segno variabile
Sia $f: I \rightarrow \mathbb{R}$ con segno variabile.
Sia $\int_{I} f(x) dx$ integrale improprio mono-problema.

#### Criterio di assoluta convergenza
Se $\int_{I}|f(x)|dx < +\infty \implies \int_{I}f(x)dx < +\infty$ 
Viceversa:
Se $\int_{I}|f(x)|dx = +\infty$, non posso dire nulla di $\int_{I}f(x)dx$.

##### Esempio
$$
\int_{2}^{+\infty} \frac{\sin(x)}{x^{2}} dx
$$
Poiché $\sin(x)$ cambia segno in $[2, +\infty]$, allora $\frac{\sin(x)}{x^{2}}$ fa lo stesso.
Proviamo ad applicare criterio di assoluta convergenza.
$$
\int_{2}^{+\infty} \left|\frac{\sin(x)}{x^{2}}\right| dx = \int_{2}^{+\infty} \frac{|\sin(x)|}{x^{2}} dx
$$
Ora la funzione integranda è positiva e posso usare il teorema del confronto o il criterio asintotico.
Poiché $|\sin(x)| \leq 1 \implies \frac{|\sin(x)|}{x^{2}} \leq \underbrace{ \frac{1}{x^{2}} }_{ g(x) }$.
$$
\int_{2}^{+\infty} \frac{1}{x^{2}} dx 
$$
Sappiamo che ciò converge, e per il teorema del confronto allora anche $\int_{2}^{+\infty} \frac{|\sin(x)|}{x^{2}} < +\infty$.
Ma allora per il criterio di assoluta convergenza anche $\int_{2}^{+\infty} \frac{\sin(x)}{x^{2}} < +\infty$.

##### Esempio
$$
\int_{0}^{5} \frac{\sin(x)}{x^{2}} dx = \int_{0}^{\frac{\pi}{2}} \frac{\sin(x)}{x^{2}} dx + \underbrace{ \int_{\frac{\pi}{2}}^{5} \frac{\sin(x)}{x^{2}} dx }_{ \text{integrale standard} }
$$
Ma $\sin(x) > 0, \forall x \in (0, \frac{\pi}{2}] \implies \frac{\sin(x)}{x^{2}} > 0, \forall x \in (0, \frac{\pi}{2}]$.
In $0$:
$$
\lim_{ x \to 0^{+} }  \frac{\sin(x)}{x^{2}} = \lim_{ x \to 0^{+} } \frac{\sin(x)}{x} \frac{1}{x} = +\infty
$$
Quindi è un integrale mono-problema.
Inoltre $\frac{\sin(x)}{x^{2}} \leq \frac{1}{x^{2}}, \forall x \in\left( 0, \frac{\pi}{2} \right]$
Ma $\frac{1}{x^{2}}$ diverge, quindi non posso dire niente su l'integrale originale.

$\sin(x) = x + o(x) \qquad x\rightarrow 0^{+}$
Quindi $\frac{\sin(x)}{x^{2}} = \frac{x + o(x)}{x^{2}} = \frac{1}{x}(1 + o(1))$. Quindi mi aspetto che essa diverga.
$$
\lim_{ x \to 0^{+} }  \frac{\frac{\sin(x)}{x^{2}}}{\frac{1}{x}} = \lim_{ x \to 0^{+} }  \frac{\sin(x)}{x} = 1 \neq 0, +\infty
$$
Quindi l'integrale di partenza diverge positivamente.

##### Esempio
$$
\int_{0}^{+\infty} e^{-x^{2}} dx
$$
Non ha una primitiva.
$$
\int_{0}^{+\infty} e^{-x^{2}} dx = \int_{0}^{1} e^{-x^{2}} + \int_{1}^{+\infty} e^{-x^{2}} dx 
$$
Si ricorda che:
$$
\lim_{ x \to +\infty } x^{n}e^{-x^{2}} = 0, \forall n \in \mathbb{Z}
$$
Quindi
$$
\lim_{ x \to +\infty } x^{2}e^{-x^{2}} = 0 = \lim_{ x \to +\infty } \frac{e^{-x^{2}}}{\frac{1}{x^{2}}}
$$
Quindi $f(x) < g(x)$ con $x \rightarrow +\infty$. Ovvero $e^{-x^{2}} < \frac{1}{x^{2}}$
Poiché $\int_{1}^{+\infty} \frac{1}{x^{2}} dx < +\infty$.
Quindi $\int_{1}^{+\infty} e^{-x^{2}} dx < +\infty$.

##### Esempio
$$
\cancel{\int_{-1} ^{1} \frac{1}{x^{3}} dx = \left[ -\frac{1}{2x^{2}} \right]^{1}_{-1} = -\frac{1}{2}[1-1] = 0}
$$
$$
\int_{-1}^{1} \frac{1}{x^{3}} dx = \underbrace{ \int_{-1}^{0} \frac{1}{x^{3}} dx }_{ -\infty } + \underbrace{ \int_{0}^{1} \frac{1}{x^{3}} }_{ +\infty } dx
$$
##### Esempio
$$
\int_{0}^{1} \log(x) dx
$$
Si ricorda che:
$$
\lim_{ x \to 0^{+} }  x^{\varepsilon}\log(x) = 0, \forall \varepsilon > 0
$$
Quindi
$$
\lim_{ x \to 0^{+} } \frac{\log(x)}{\frac{1}{x^{\varepsilon}}} = 0
$$
Quindi $\log(x) < \frac{1}{x^{\varepsilon}}$ con $x \rightarrow +\infty$.
Sia $\varepsilon = \frac{1}{2}$.
Quindi $\log(x) < \frac{1}{\sqrt{ x }}$ con $x \rightarrow +\infty$.
Siccome $\frac{1}{\sqrt{ x }}$ converge, allora anche $\log(x)$ converge.

### Funzioni con singolarità in punti diversi dall'origine
$$
\int_{1}^{2} \frac{1}{x^{2} - 1} dx
$$
Cambio variabile per riportarmi al caso $x = 0$ singolarità.
$(x^{2}-1)=\underbrace{ (x-1) }_{ problema }(x+1)$.
Pongo $y = (x-1) \implies dy = dx$.
Ma se $x = 1 \implies y = 0, x = 2, y = 1$.
Inoltre $(x^{2}-1)=y(y+2)$
Ora abbiamo:
$$
\int_{0}^{1} \frac{1}{y(y+2)}dy
$$
Notiamo che $\frac{1}{y(y+2)} = \frac{1}{y^{2} + 2y} \sim \frac{1}{2y}$ con $y \rightarrow 0^{+}$.

In generale:
$$
\int_{a}^{b} \frac{1}{|x-a|^{\alpha}} dx = \begin{cases}
\text{converge se }\alpha < 1 \\
\text{diverge a } +\infty \text{ se } \alpha \geq 1
\end{cases}
$$
$$
\int_{a}^{b} \frac{1}{|b-x|^{\alpha}} dx = \begin{cases}
\text{converge se }\alpha < 1 \\
\text{diverge a } +\infty \text{ se } \alpha \geq 1
\end{cases}
$$

Quindi diverge.

##### Esempio
$$
\int_{1}^{3} \frac{1}{\log(x)}
$$
Pongo $y = x - 1 \implies dy = dx$.
Se $x = 1 \implies y = 0$.
Se $x = 3 \implies y = 2$.
$x = y+1$.
$$
\int_{1}^{3} \frac{1}{\log(x)}dx = \int_{0}^{2} \frac{1}{\log(y + 1)}dy
$$
Per Taylor:
$$
\log(y + 1) = y + o(y), y\rightarrow 0^{+}
$$
Quindi quando $y \rightarrow 0^{+}$, $\log(y + 1) \sim \frac{1}{y}$.
$$
\lim_{ y \to 0^{+} }  \frac{y}{\log(y + 1)} = \lim_{ y \to  0^{+} }  \frac{1}{\frac{\log(y + 1)}{y}} = 1 \neq 0, +\infty
$$
Quindi diverge.

##### Esempio
$$
\vec{x}(t) = \left( \int_{0}^{t}\cos(x^{2})dx, \int_{0}^{t}\sin(x^{2})dx \right)
$$
Clotoide.
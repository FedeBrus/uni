$$
\int_{a}^b f(x) dx \qquad f: [a, b] \rightarrow \mathbb{R}, \text{continua}
$$
Trovare una primitiva $F:[a, b]\rightarrow \mathbb{R}$ tale che:
$$
F'(x) = f(x) \qquad \forall x \in [a, b]
$$
$$
\int_{a}^{b} f(x)dx = [F(x)]^{b}_{a} = F(b) - F(a)
$$
## Primitive elementari
$$
\int f(x)dx = \text{Qualunque primitiva}
$$
- $\int 1 dx = x$
- $\int e^{x} dx = e^{x}$
- $\int \cos x dx = \sin x$
- $\int \sin x dx = - \cos x$
- $\int x^{k} dx = \frac{x^{k+1}}{k + 1}$
- $\int \cosh(x) dx = \sinh x$
- $\int \sinh(x) dx = \cosh x$
- $\int a^{x} dx = \frac{a^{x}}{\log a}$
- $\int x^{a} dx = \frac{x^{a+1}}{a+1}, a \in \mathbb{R} \setminus \{ -1 \}$
- $\int \frac{1}{1+x^{2}}dx = \arctan x$
- $\int \frac{1}{x} dx = \log |x|$

##### Esercizio
$$
\int_{0}^{\frac{\pi}{2}} \sin(x) dx = [-\cos x]^{\frac{\pi}{2}}_{0} = 0 + 1 = 1
$$
$$
\int_{0}^{\pi} \sin(x) dx = [-\cos x]^{\pi}_{0} = -(-1) + 1 = 2
$$
$$
\int_{0}^{\pi} \cos(x) dx= [\sin x]^{\pi}_{0} = 0 - 0 = 0
$$
$$
\int_{\frac{\pi}{2}}^{\pi} \cos(x) dx = [\sin(x)]^{\pi}_{\frac{\pi}{2}} = 0 - 1 = -1
$$
$$
\int_{0}^{\pi}|\cos(x)| dx = \cancel{|\sin (x)|} =\left |\int_{0}^{\frac{\pi}{2}} \cos(x) dx \right| + \left| \int_{\frac{\pi}{2}}^{\pi} \cos(x)dx \right| = \int_{0}^{\frac{\pi}{2}} \cos(x) dx + \int_{\frac{\pi}{2}}^{\pi} -\cos(x)dx = 1 + 1 = 2
$$
Per i valori assoluti bisogna determinare per quali intervalli $f > 0$ e $f < 0$ e spezzare l'integrale 
Nell'integrale con intervallo in cui $f < 0$ si inverte il segno del valore assoluto.

$$
\int e^{2x} dx = \frac{1}{2} \int 2e^{2x} dx = \frac{e^{2x}}{2}
$$
Tutto ciò che andrebbe fatto con la regola a catena delle derivate va posto al denominatore.
$$
\int \cos(5x)dx = \frac{\sin(5x)}{5}
$$
$$
\int e^{-3x} dx = -\frac{e^{-3x}}{3}
$$
$$
\int \frac{1}{2x} dx = \frac{1}{2} \log |x| = \log \sqrt{ |x| }
$$
$$
\int \frac{1}{x^{5}} dx = \int x^{-5} dx = -\frac{x^{-4}}{4} = -\frac{1}{4x^{4}}
$$
$$
\int 2^{5x} dx = \frac{2^{5x}}{5\log(2)}
$$
Alternativamente
$$
\int 2^{5x} dx = \int e^{5x\log(2)} dx = \int e^{\log(2^{5x})} = \int e^{(5\log(2))x} dx = \frac{e^{5\log(2)x}}{5\log(2)}
$$
$$
\int \frac{1}{5^x} dx = \int 5^{-x} dx = \int e^{-x\log(5)} = \frac{e^{-x\log(5)}}{-\log(5)} = - \frac{1}{\log(5)} \cdot \frac{1}{5^{x}}
$$
$$
\int \cosh(x+3) dx = \int \frac{e^{x+3} + e^{-(x+3)}}{2} dx = \frac{1}{2} \left[ \int e^{x+3} dx + \int e^{-(x+3)} dx \right] = \frac{1}{2} [e^{x+3} - e^{-(x+3)}] = \frac{e^{x+3} - e^{-(x+3)}}{2} = \sinh(x+3)
$$
$$
\int \sin(3x + 4) dx = -\frac{\cos(3x + 4)}{3} 
$$
## Integrazione per sostituzione
$$
\int_{a}^{b} H'(x)dx = [H(x)]^{x = b}_{x = a}
$$
$$
H(x) = F(G(x))
$$
Dove $F, G$ sono primitive di $f, g$ in $[a,b]$.
$$
[H(x)]' = [F(G(x))]' = F'(G(x))G'(x) = f(G(x))g(x)
$$
Dunque
$$
\int_{a}^{b} H'(x) dx = \int_{a}^{b} f(G(x))g(x)dx
$$
Inoltre
$$
[H(x)]^{b}_{a} = [F(G(x))]^{b}_{a} = F(G(b)) - F(G(a)) = [F(y)]^{y = G(b)}_{y = G(a)} = \int_{G(a)}^{G(b)} f(y)dy
$$
Allora
$$
\int_{a}^{b} f(G(x))g(x) dx = \int_{G(a)}^{G(b)} f(y)dy
$$
Che è la formula dell'integrazione per sostituzione.

$$
\int_{a}^{b} f(G(x))g(x) dx 
$$
Pongo $y = G(x)$. Se $x = a \implies y = G(a)$, se $x = b \implies y=G(b)$.
$$
\frac{dy}{dx} = G'(x) = g(x) \Longleftrightarrow dy = g(x)dx
$$
Quindi
$$
\int_{G(a)}^{G(b)} f(y)dy
$$
##### Esempio
$$
\int \cos(\underbrace{ x^{3} }_{ G })\underbrace{ x^{2} }_{ \frac{g}{3} } dx
$$
Pongo $y = x^{3} \implies \frac{dy}{dx} = 3x^{2} \implies dy = 3x^{2}dx$
$$
\frac{1}{3}\int \cos(x^{3})3x^{2}dx = \frac{1}{3} \int \cos(y) dy = \frac{1}{3} \sin(y) = \frac{1}{3} \sin(x^{3})
$$
##### Esempio
$$
\int x^{5} e^{-x^{6}} dx
$$
Pongo $y = x^{6} \implies \frac{dy}{dx} = 6x^{5} \implies dy = 6x^{5}dx$
$$
\frac{1}{6}\int 6x^{5} e^{-x^{6}} dx = \frac{1}{6} \int e^{-y} dy = -\frac{e^{-y}}{6} = -\frac{e^{x^{6}}}{6}
$$
##### Esempio
$$
\int \sin(x)e^{\cos(x)} dx
$$
Pongo $y = \cos(x) \implies \frac{dy}{dx} = -\sin(x) \implies dy = -\sin(x)dx$
$$
-\int -\sin(x)e^{\cos(x)} dx = -\int e^{y}dy = -e^{y} = -e^{\cos x}
$$
##### Esempio
$$
\int \frac{x}{1 + x^{2}} dx = \frac{1}{2} \int \frac{2x}{1+x^{2}} dx
$$
Pongo $y = 1+x^{2} \implies dy = 2xdx$
$$
\frac{1}{2} \int \frac{2x}{1+x^{2}} dx = \frac{1}{2} \int \frac{dy}{y} = \frac{1}{2} \log|y| = \frac{\log(1+x^{2})}{2}
$$
##### Esempio
$$
\int \frac{ax + b}{1+x^{2}} dx, \qquad a, b \in \mathbb{R}
$$
$$
\int \frac{ax}{1+x^{2}} dx + \int \frac{b}{1+ x^{2}} dx = a \int \frac{x}{1+x^{2}} dx + b \int \frac{1}{1+x^{2}} dx = \frac{a \log (1+x^{2})}{2} + b\arctan(x) = a \log(\sqrt{ 1+x^{2} }) + b \arctan(x)
$$
##### Esempio
$$
\int \frac{1}{2+x^{2}}dx = \frac{1}{2} \int \frac{1}{1 + \frac{x^{2}}{2}}dx = \frac{1}{2} \int \frac{1}{1 + \left( \frac{x}{\sqrt{ 2 }} \right)^{2}} dx 
$$
Pongo $y = \frac{x}{\sqrt{ 2 }} \implies dy = \frac{1}{\sqrt{ 2 }}dx$
$$
\frac{1}{2} \int \frac{1}{1 + \left( \frac{x}{\sqrt{ 2 }} \right)^{2}} dx = \frac{\sqrt{ 2 }}{2} \int \frac{1}{1+y^{2}}dy = \frac{\sqrt{ 2 }}{2} \arctan(y) = \frac{\sqrt{ 2 }}{2}\arctan\left( \frac{x}{\sqrt{ 2 }} \right)
$$
##### Esempio
$$
\int \frac{\log ^{3}(x)}{x} dx = \int \frac{1}{x} \cdot \log^{3}(x) dx
$$
Pongo $y = \log (x) \implies dy =\frac{dx}{x}$
$$
\int y^{3}dy = \frac{y^{4}}{4} = \frac{\log^{4}(x)}{4}
$$
##### Esempio
Con la stessa sostituzione di prima
$$
\int \frac{1}{x\log ^{2}(x)}dx = \int \frac{dy}{y^{3}} =-\frac{y^{-2}}{2} = -\frac{1}{2\log ^{2}(x)}
$$
##### Esempio
$$
\int \frac{\log^{a}(x)}{x} dx, \qquad a \in \mathbb{R} \setminus \{ -1 \}
$$
$$
\int \frac{\log^{a}(x)}{x} = \frac{1}{1+a}\log ^{(1+a)}(x)
$$
##### Esempio
$$
\int \frac{1}{x\log(x)} dx = \int \frac{dy}{y} = \log|y| = \log|\log x|
$$
##### Esempio
$$
\int \frac{x}{1-x^{2}} dx
$$
Pongo $y = 1-x^{2} \implies dy = -2xdx$
$$
\int \frac{x}{1-x^{2}} dx = -\frac{1}{2} \int -\frac{2x}{1-x^{2}} dx = -\frac{1}{2} \int \frac{dy}{y} = -\frac{1}{2} \log|y| = -\frac{1}{2} \log| 1 - x^{2}| = \log\left( \frac{1}{\sqrt{ 1-x^{2} }} \right)
$$
##### Esempio
X casa
$$
\int \frac{1}{ax + b} dx = \frac{1}{a}\log |ax + b|
$$
## Integrazione per parti
$$
\int_{a}^{b}H'(x)dx = H(b) - H(a)
$$
Consideriamo $F$ e $G$ primitive in $[a, b]$ di $f$ e $g$ rispettivamente.
Poniamo $H(x) = F(x)G(x)$
$[H(x)]' = [F(x)G(x)]' = F'(x)G(x) + F(x)G'(x) = f(x)G(x) + F(x)g(x)$
Sostituendo:
$$
\int_{a}^{b} [f(x)G(x) + F(x)g(x)]dx = F(b)G(b) - F(a)G(a)
$$
$$
\int_{a}^{b} F(x)g(x) dx = F(b)G(b) -F(a)G(a) - \int_{a}^{b} f(x)G(x)dx
$$
$$
\int F(x)g(x) = FG - \int f(x)G(x)dx
$$
##### Esempio
$$
\int \underbrace{ x }_{ F }\underbrace{ e^{2x} }_{ g }dx
$$
$G'(x) = e^{2x} \implies G(x) = \frac{e^{2x}}{2}$
$$
\int xe^{2x} dx = \frac{xe^{2x}}{2} - \int 1 \frac{e^{2x}}{2}dx = \frac{xe^{2x}}{2} - \frac{1}{2}\int e^{2x} dx = \frac{xe^{2x}}{2} - \frac{1}{4}e^{2x} = e^{2x}\left( \frac{x}{2} - \frac{1}{4} \right)
$$

##### Esempio
$$
\begin{align}
\int x^{2}e^{-2x} dx &= -\frac{1}{2} \left( x^{2}e^{-2x} - \int 2xe^{-2x}dx \right)  \\
 & = -\frac{1}{2} \left( x^{2}e^{-2x} + xe^{-2x} - \int e^{-2x} dx \right) \\
 & = -\frac{1}{2} \left( x^{2}e^{-2x}+xe^{-2x}+\frac{1}{2}e^{-2x} \right) \\
 & = -\frac{e^{-2x}}{2} \left( x^{2}+x+\frac{1}{2} \right)
\end{align}
$$
##### Esempio
$$
\int x \cos(3x) dx = \frac{x}{3}\sin(3x) - \frac{1}{3} \int \sin(3x)dx =  \frac{x}{3}\sin(3x) + \frac{1}{9}\cos(3x) = \frac{1}{3}\left( x\sin(3x) + \frac{\cos(3x)}{3} \right)
$$

Con questa tecnica si calcolano tutti gli integrali così formati:
$$
\int P(x)e^{\alpha x}dx, \qquad \int P(x)\cos(\beta x)dx, \qquad \int P(x)\sin(\gamma x)dx
$$
Tutti questi si risolvano con la stessa tecnica.

#### Oss
Integrali del tipo:
$$
\int \sin(\alpha x)\sin(\beta x) dx, \qquad \int \sin(\alpha x)\cos(\beta x)dx, \qquad \int \cos(\alpha x)\cos(\beta x)dx
$$
Si fanno usando le formule note della trigonometria.

##### Esempio
$$
\int \cos ^{2}(x) dx
$$
Metodo 1 (per parti):
$$
\int \cos(x)\cos(x) dx = \cos(x)\sin(x) + \int \sin^{2}(x) dx = \cos(x)\sin(x) + \int (1 - \cos ^{2}(x))dx = \cos(x)\sin(x) + x - \int \cos^{2}(x) dx
$$
Quindi:
$$
2 \int \cos ^{2}(x) dx = \cos(x)\sin(x) + x
$$
Infine:
$$
\int \cos ^{2}(x)dx = \frac{\cos(x)\sin(x) + x}{2}
$$
Metodo 2 (formule trigonometriche):
$$
\cos(2x) = 2\cos ^{2}(x) - 1 = 1 - 2\sin ^{2}(x)
$$
$$
\int \cos ^{2}(x)dx = \int \frac{1}{2} (1 + \cos(2x)) dx = \frac{1}{2} \int 1 dx + \frac{1}{2}\int \cos(2x)dx = \frac{x}{2} + \frac{\sin(2x)}{4} = \frac{x}{2} + \frac{\sin(x)\cos(x)}{2} =\frac{1}{2}(x + \sin(x)\cos(x))
$$
##### Esempio
$$
\int \sin ^{2}(x)dx = \frac{1}{2} \int (1 - \cos(2x)) dx = \frac{1}{2} \left( x - \frac{1}{2}\sin(2x) \right) = \frac{1}{2} (x - \sin(x)\cos(x))
$$
##### Esempio
$$
\int \sin ^{3}(x) dx = \int \sin(x) \sin ^{2}(x) dx = (-\cos(x) \sin ^{2}(x)) + \int 2\sin(x)\cos ^{2}(x) dx = (-\cos(x)\sin ^{2}(x)) + 2\int \sin(x)(1 - \sin ^{2}(x)) dx
$$
$$
= (-\cos(x)\sin ^{2}(x)) + 2 \int \sin(x) dx - 2 \int \sin^{3}(x) dx
$$
Quindi:
$$
3 \int \sin ^{3}(x) dx = -\cos(x)\sin ^{2}(x) - 2\cos(x) = -\frac{1}{3}(\cos(x)(\sin ^{2}(x) - 2))
$$
##### Esempio
$$
\begin{align}
\cos ^{4}(x) dx &= \int \cos ^{3}(x) \cos(x) dx \\
 &= \cos ^{3}(x) \sin(x) + \int 3\cos ^{2}(x)\sin^{2}(x)dx \\
 &= \cos ^{3}(x)\sin(x) +3 \int \cos ^{2}(x)(1-\cos ^{2}(x)) \\
 &= \cos ^{3}(x)\sin(x) + 3\int \cos ^{2}(x)dx -3\int \cos ^{4}(x)dx \\
 &= \cos ^{3}(x)\sin(x) + \frac{3}{2}(\cos(x)\sin(x) + x) - 3 \int \cos ^{4}(x)dx
\end{align}
$$
Quindi
$$
\begin{align}
4\int\cos ^{4}(x)dx &= \cos ^{3}\sin(x) + \frac{3}{2}(\cos(x)\sin(x)+x) \\
\int \cos ^{4}(x)dx &= \frac{\cos ^{3}\sin(x)}{4} + \frac{3}{8}(\cos(x)\sin(x)+x)
\end{align}
$$
$$
\begin{align}
\lim_{ x \to 0 }  \frac{e^{\arcsin(7x + x^{3})}+ \arcsin(5x) - \cos x^{2} +\log (1+x^{4}\tan x^{7})}{\arctan(6x+10^{23}x^{77})+\sin(6x)} & =
\lim_{ x \to 0 }  \frac{e^{\arcsin(7x + x^{3})} - 1+ \arcsin(5x) + 1 - \cos x^{2} +\log (1+x^{4}\tan x^{7})}{\arctan(6x+10^{23}x^{77})+\sin(6x)} \\
 & = \lim_{ x \to 0 }  \frac{x\left[e^{\arcsin(7x + x^{3})} - 1+ \arcsin(5x) + 1 - \cos x^{2} +\log (1+x^{4}\tan x^{7})\right]}{x\left[\arctan(6x+10^{23}x^{77})+\sin(6x)\right]} \\
 & = \lim_{ x \to 0 }  \frac{\frac{e^{\arcsin(7x + x^{3})}-1}{x} + \frac{\arcsin(5x)}{x} + \frac{1 - \cos x^{2}}{x} +\frac{\log (1+x^{4}\tan x^{7})}{x}}{\frac{\arctan(6x+10^{23}x^{77})}{x}+\frac{\sin(6x)}{x}} \\
 & = \lim_{ x \to 0 }  \frac{\frac{e^{\arcsin(7x + x^{3})}-1}{x} + \frac{\arcsin(5x)}{x} + \frac{1 - \cos x^{2}}{x} +\frac{\log (1+x^{4}\tan x^{7})}{x}}{\frac{\arctan(6x+10^{23}x^{77})}{x}+\frac{\sin(6x)}{x}} \\
\end{align}
$$
---
$$
\begin{align}
\lim_{ x \to 0 } \frac{e^{\arcsin(7x+x^{3})} - 1}{\arcsin(7x+x^{3})} \cdot \frac{\arcsin(7x+x^{3})}{7x+x^{3}} \cdot \frac{7x + x^{3}}{x} &=  \\
1 \cdot 1 \cdot 7 & = 7
\end{align}
$$
$$
\begin{align}
\lim_{ x \to 0 } \frac{\arcsin(5x)}{5x} \cdot \frac{5x}{x} &=  \\
1 \cdot 5  & = 5
\end{align}
$$
$$
\begin{align}
\lim_{ x \to 0 } \frac{1 - \cos x^{2}}{x^{4}} \cdot x^{2}  & = \\
\frac{1}{2} \cdot 0  & = 0
\end{align}
$$
$$
\begin{align}
\lim_{ x \to 0 } \frac{\log(1+  x^{4}\tan x^{7})}{x^{4}\tan x^{7}} \cdot \frac{x^{4}\tan x^{7}}{x}  & = \\
1 \cdot 0 & = 0
\end{align}
$$
$$
\begin{align}
\lim_{ x \to 0 } \frac{\arctan(6x+10^{23}x^{77})}{6x+10^{23}x^{77}} \cdot \frac{6x+10^{23}x^{77}}{x} & = \\
1 \cdot 6  & = 6
\end{align}
$$
$$
\begin{align}
\frac{\sin(6x)}{6x} \cdot \frac{6x}{x}  & = \\
1 \cdot 6 = 6
\end{align}
$$
$$
\frac{7 + 5 + 0 + 0}{6 + 6} = 1
$$
---

## Tecnica O-piccolo (di Landau)

Siano $f$ e $g$ definite entrambe almeno in un intervallo comune contenente il punto limite $x_{0} \in \bar{\mathbb{R}}$.

##### Definizione 

Diremo che $f$ è o-piccolo di $g$ per $x \rightarrow x_{0}$ e si scrive $f(x) = o(g(x)) \quad x \rightarrow x_{0}$ se esiste una funzione $\omega (x)$ tale che:
1. $f(x) = g(x)\omega(x)$
2. $\lim_{ x \to x_{0} } \omega(x) = 0$

##### Definizione (quasi equivalente (devo fare più supposizioni))
Se $g(x) \neq 0$ in un intorno di $x_{0}$ (tranne eventualmente in $x_{0}$ stesso) allora:
$f(x) = o(g(x)) \quad x \rightarrow x_{0}$ se $\lim_{ x \to x_{0} } \frac{f(x)}{g(x)} = 0$

Di seguito $x_{0} = 0$
##### Esempio:

Definizione normale:
$$
\underbrace{ x^{3} }_{ f(x) } = o(\underbrace{ x }_{ g(x) }) \qquad x \rightarrow 0
$$
$$
x^{3}=x \cdot \underbrace{ x^{2} }_{ \omega(x) }
$$
Definizione quasi equivalente:
$$
\lim_{ x \to x_{0} } \frac{f(x)}{g(x)} = \lim_{ x \to 0 } \frac{x^{3}}{x} = \lim_{ x \to 0 } x^{2} = 0
$$
$x^{3}$ va molto più velocemente a $0$ che $x$.

##### Esempio:
$$
\arctan x^{3} = o(x^{2}) \qquad x \rightarrow 0
$$
Qui la definizione normale è scomoda perché non ho due polinomi.
Definizione quasi equivalente:
$$
\lim_{ x \to x_{0} } \frac{f(x)}{g(x)} = \lim_{ x \to 0 }  \frac{\arctan x^{3}}{x^{3}} \cdot x = 1 \cdot 0 = 0
$$
Quindi $\omega(x) = \frac{\arctan(x^{3})}{x^{2}}$.

##### Esempio:
$$
\underbrace{ \frac{1}{\sin x} }_{ f(x) } = o\underbrace{ \left( \frac{1}{\arctan ^{2}x} \right) }_{ g(x) } \qquad x \rightarrow 0
$$
Definizione quasi equivalente:
$$
\lim_{ x \to x_{0} } \frac{f(x)}{g(x)} = \lim_{ x \to 0 } \frac{1}{\sin x}\cdot \arctan ^{2}x = \lim_{ x \to 0 } \frac{x}{\sin x}\frac{\arctan ^{2}x}{x^{2}}x = 0
$$

## Algebra degli o-piccoli
Supponiamo:
$$
\begin{align}
f_{1}(x) &= o(g(x)) \qquad x \rightarrow x_{0} \\
&\text{ e}  \\
f_{2}(x)  & = o(g(x)) \qquad x \rightarrow x_{0}
\end{align}
$$
### $f_{1} + f_{2}$
Per definizione:
$$
f_{1}(x) = g(x)\omega_{1}(x) \text{ e } \omega_{1}(x) \rightarrow 0 \qquad x \rightarrow x_{0}
$$
$$
f_{2}(x) = g(x)\omega_{2}(x) \text{ e } \omega_{2}(x) \rightarrow 0 \qquad x \rightarrow x_{0}
$$
Allora:
$$
f_{1}(x) + f_{2}(x) = g(x)\omega_{1}(x) + g(x)\omega_{2}(x) = g(x)(\omega_{1}(x)+\omega_{2}(x))
$$
$$
\omega_{1}(x) + \omega_{2}(x) = \omega(x)
$$
Per ipotesi $\omega_{1}(x) \rightarrow 0$ e $\omega_{2}(x) \rightarrow 0$, dunque $\omega_{1}(x) + \omega_{2}(x) = \omega(x) \rightarrow 0 \qquad x \rightarrow x_{0}$
Dunque:
$$
f_{1}(x) + f_{2}(x) = o(g(x)) \qquad x \rightarrow x_{0}
$$
$$
o(g(x)) + o(g(x)) = o(g(x)) \qquad x \rightarrow x_{0}
$$
### $f_{1} - f_{2}$
Per definizione:
$$
f_{1}(x) = g(x)\omega_{1}(x) \text{ e } \omega_{1}(x) \rightarrow 0 \qquad x \rightarrow x_{0}
$$
$$
f_{2}(x) = g(x)\omega_{2}(x) \text{ e } \omega_{2}(x) \rightarrow 0 \qquad x \rightarrow x_{0}
$$
Allora:
$$
f_{1}(x) - f_{2}(x) = g(x)\omega_{1}(x) - g(x)\omega_{2}(x) = g(x)(\omega_{1}(x)-\omega_{2}(x))
$$
$$
\omega_{1}(x) - \omega_{2}(x) = \omega(x) 
$$
Per ipotesi $\omega_{1}(x) \rightarrow 0$ e $\omega_{2}(x) \rightarrow 0$, dunque $\omega_{1}(x) - \omega_{2}(x) = \omega(x) \rightarrow 0 \qquad x \rightarrow x_{0}$
Dunque:
$$
f_{1}(x) - f_{2}(x) = o(g(x)) \qquad x \rightarrow x_{0}
$$
$$
o(g(x)) - o(g(x)) = o(g(x)) \qquad x \rightarrow x_{0}
$$
### $f_{1} \cdot f_{2}$
Per definizione:
$$
f_{1}(x) = g(x)\omega_{1}(x) \text{ e } \omega_{1}(x) \rightarrow 0 \qquad x \rightarrow x_{0}
$$
$$
f_{2}(x) = g(x)\omega_{2}(x) \text{ e } \omega_{2}(x) \rightarrow 0 \qquad x \rightarrow x_{0}
$$
Allora:
$$
f_{1}(x) \cdot f_{2}(x) = g(x)\omega_{1}(x) \cdot g(x)\omega_{2}(x) = g^{2}(x)(\omega_{1}(x)\omega_{2}(x))
$$
$$
\omega_{1}(x) \cdot \omega_{2}(x) = \omega(x)
$$
Per ipotesi $\omega_{1}(x) \rightarrow 0$ e $\omega_{2}(x) \rightarrow 0$, dunque $\omega_{1}(x) \cdot \omega_{2}(x) = \omega(x) \rightarrow 0 \qquad x \rightarrow x_{0}$
Dunque:
$$
f_{1}(x) \cdot f_{2}(x) = o(g^{2}(x)) \qquad x \rightarrow x_{0}
$$
$$
o(g(x)) \cdot o(g(x)) = o(g^{2}(x)) \qquad x \rightarrow x_{0}
$$

### $cf_{1}$
Per definizione:
$$
f_{1}(x) = g(x)\omega_{1}(x) \text{ e } \omega_{1}(x) \rightarrow 0 \qquad x \rightarrow x_{0}
$$
Allora:
$$
cf_{1}(x)= cg(x)\omega_{1}(x) = g(x)c\omega_{1}(x)
$$
$$
c\omega_{1}(x) = \omega(x)
$$
Per ipotesi $\omega_{1}(x) \rightarrow 0$, dunque $c\omega_{1}(x) = \omega(x) \rightarrow 0 \qquad x \rightarrow x_{0}$
Dunque:
$$
cf_{1}(x) = o(g(x)) \qquad x \rightarrow x_{0}
$$
$$
c \cdot o(g(x)) = o(g(x)) \qquad x \rightarrow x_{0}
$$
### $\frac{f_{1}}{f_{2}}$
Per definizione:
$$
f_{1}(x) = g(x)\omega_{1}(x) \text{ e } \omega_{1}(x) \rightarrow 0 \qquad x \rightarrow x_{0}
$$
$$
f_{2}(x) = g(x)\omega_{2}(x) \text{ e } \omega_{2}(x) \rightarrow 0 \qquad x \rightarrow x_{0}
$$
Allora:
$$
\frac{f_{1}(x)}{f_{2}(x)}= \frac{\cancel{g(x)}\omega_{1}(x)}{\cancel{g(x)}\omega_{2}(x)}  \rightarrow_{x \rightarrow x_{0}} \text{?}
$$
---
## Transitività dell'o-piccolo
Supponiamo $f(x) = o(g(x)), x \rightarrow x_{0}$ e $g(x) = o(h(x)), x \rightarrow x_{0}$.
Ci aspettiamo che $f(x) = o(h(x)) x \rightarrow x_{0}$.

Per ipotesi:
$$
\begin{align}
f(x) &= g(x)\omega_{1}(x) \qquad x \rightarrow x_{0} \\
g(x) &= h(x)\omega_{2}(x) \qquad x \rightarrow x_{0}
\end{align}
$$
$$
f(x) = h(x)\omega_{2}(x)\omega_{1}(x) \qquad x \rightarrow x_{0}
$$
$$
\omega_{2}(x)\omega_{1}(x) = \omega(x) \rightarrow 0 \qquad x \rightarrow x_{0}
$$
Allora:
$$
f(x) = o(h(x))
$$
Dunque:
$$
o(o(g(x))) = o(g(x))
$$
---
$$
f(x) = o(g_{1}(x) + g_{2}(x)) \qquad x \rightarrow x_{0}
$$
1. $f(x) = (g_{1}(x) + g_{2}(x))\omega(x) \qquad x \rightarrow x_{0}$
$$
f(x) = g_{1}(x)\omega(x) + g_{2}(x)\omega(x)
$$

2. $\omega(x) \rightarrow 0 \qquad x \rightarrow x_{0}$

Dunque:
$$
f(x) = o(g_{1}(x) + g_{2}(x))
$$
$$
o(g_{1}(x)+g_{2}(x)) = o(g_{1}(x)) + o(g_{2}(x))
$$
---
$$
f(x) = o(cg(x)) \qquad c \in \mathbb{R} \setminus \{ 0 \}
$$
1. $f(x) = cg(x)\omega(x)$
$$
f(x) = g(x)c\omega(x)
$$
2. $\omega(x) = c\omega(x) \rightarrow 0 \qquad x \rightarrow x_{0}$

Dunque:
$$
f(x) = o(g(x))
$$
$$
o(cg(x)) = o(g(x)) \qquad \forall c \in \mathbb{R} \setminus \{ 0 \}
$$
---

##### Esempio:
$$
\sin x^{2} = o(x) \qquad x \rightarrow 0
$$
Definizione quasi equivalente:
$$
\lim_{ x \to 0 } \frac{\sin x^{2}}{x} = \frac{\sin x^{2}}{x^{2}} \cdot x = 1 \cdot 0 = 0
$$
##### Esempio:
$$
x = o(\sqrt{ x }) \qquad x \rightarrow 0^{+}
$$
Definizione quasi equivalente:
$$
\lim_{ x \to 0^{+} } \frac{x}{\sqrt{ x }} = \lim_{ x \to 0 } \sqrt{ x } = 0
$$
Definizione normale:
$$
x = \sqrt{ x } \cdot \omega(x)
$$
$$
\omega (x) = \sqrt{ x } \rightarrow 0^{+} \qquad x \rightarrow x_{0}
$$

Dunque dai precedenti due esempi, per via della regola transitiva, siccome $\sin x^{2} = o(x) \qquad x \rightarrow 0^{+}$, e $x = o(\sqrt{ x }) \qquad x \rightarrow o^{+}$, allora possiamo affermare che:
$$
\sin x^{2} = o(\sqrt{ x }) \qquad x \rightarrow 0^{+}
$$
Si può verificare anche direttamente:
$$
\lim_{ x \to 0^{+} } \frac{\sin x^{2}}{\sqrt{ x }} \cdot \frac{x\sqrt{ x }}{x \sqrt{ x }} = \frac{\sin x^{2}}{x^{2}} \cdot x \sqrt{ x } = 1 \cdot 0 \cdot 0 = 0
$$

## Sviluppi al P ordine ($x_{0} = 0$)
$\sin x = x + o(x)$
$\tan x = x +  o(x)$
$\cos x = 1 + o(x)$
$e^{x} = 1 + x + o(x)$
$\arctan x = x + o(x)$
$\arcsin x = x + o(x)$
$\cos x = 1 - \frac{x^{2}}{2} + o(x^{2})$
$\log(1+x) = x + o(x)$

---
$$
\begin{align}
\sin x &= x + o(x)  \\
\sin x - x  & = o(x) \\
\end{align}
$$
Definizione quasi equivalente:
$$
\lim_{ x \to 0 } \frac{\sin x - x}{x} = \lim_{ x \to 0 } \frac{\sin x}{x} - 1 = 0
$$
---
$$
\begin{align}
e^{x} &= 1 + x + o(x) \\
e^{x} - 1 - x &= o(x)
\end{align}
$$
Definizione quasi equivalente:
$$
\lim_{ x \to 0 } \frac{e^{x} -1 - x}{x} = 1 - 1 =  0
$$
---
$$
\begin{align}
\cos x &= 1 + o(x) \qquad x \rightarrow 0 \\
\cos x - 1 &= o(x)
\end{align}
$$
Definizione quasi equivalente:
$$
\lim_{ x \to 0 } \frac{\cos x - 1}{x^{2}} \cdot x = 0
$$
---
$$
\begin{align}
\cos x &= 1 - \frac{x^{2}}{2} + o(x^{2}) \\
\cos x - 1 + \frac{x^{2}}{2}  & = o(x^{2})
\end{align}
$$
Definizione quasi equivalente:
$$
\lim_{ x \to 0 } \frac{\cos x - 1 + \frac{x^{2}}{2}}{x^{2}} = -\frac{1 - \cos x}{x^{2}} + \frac{1}{2} = -\frac{1}{2} + \frac{1}{2} = 0
$$
---
$$
\cos x = 1 - \frac{x^{2}}{2}+ o(x^{2}) \implies \cos x = 1 + o(x)
$$
Ma $x^{2} = o(x) \qquad x \rightarrow 0$.
Quindi
$$
\begin{align}
\cos x &= 1 - \frac{o(x)}{2} + o(o(x)) \\
\cos x &= 1 - o(x) + o (x) \\
\cos x &= 1 + o(x)
\end{align}
$$
---
$$
x^{a} = o(x^{b}) \qquad x \rightarrow 0
$$
$$
\lim_{ x \to 0 } \frac{x^{a}}{x^{b}} = 0 \Leftrightarrow a > b
$$
---
##### Esempio:
$$
\lim_{ x \to 0 } \frac{e^{x}-\cos x}{2x + 3\arctan x} = \lim_{ x \to 0 }  \frac{x + o(x)}{5x + o(x)} = \frac{x}{x} \frac{1+\frac{o(x)}{x}}{5+\frac{o(x)}{x}} = \frac{1}{5}
$$
##### Esempio:
$$
\lim_{ x \to 0 } \frac{\sin(2x) + 3\tan x}{\arcsin(7x)+ 2\arctan x} = \frac{2x + o(x) + 3x + o(x)}{7x + o(x) + 2x + o(x)} = \frac{5}{9}
$$
$$
\sin(2x) = 2x + o(2x) = 2x + o(x)
$$
$$
\arcsin(7x) = 7x + o(7x) = 7x + o(x) 
$$
##### Esempio:
$$
x^{2}o(x^{3}) = o(x^{5})
$$
$$
x^{2} x^{3} \omega(x) = x^{5}\omega(x) = o(x^{5})
$$
##### Esempio:
$$
\begin{align}
\sin ^{2} x &= (x + o(x))^{2} \\
\sin ^{2} x  & = x^{2} + (o(x))^{2} + 2xo(x) \\
\sin ^{2} x  & = x^{2} + o(x^{2}) + o(x^{2}) \\
\sin ^{2} x  & = x^{2} + o(x^{2}) \\
\sin ^{2} x - x ^{2} & = o(x^{2})
\end{align}
$$
Definizione quasi equivalente
$$
\lim_{ x \to 0 } \frac{\sin ^{2} x}{x^{2}} - 1 = 0
$$
##### Esempio:
$$
\log(1 + \tan ^{3}(2x)) \qquad x \rightarrow 0
$$
$$
\log(1 + t) = t + o(t) \qquad t \rightarrow 0
$$
Pongo $t = \tan ^{3} (2x)$
Quindi:
$$
\tan ^{3}(2x) + o(\tan ^{3}(2x)) \qquad x \rightarrow 0
$$
$$
\tan (2x) = 2x + o(2x) = 2x + o(x) \qquad x \rightarrow 0
$$
$$
\begin{align}
\tan ^{3} (2x) &= (2x + o(x))^{3} \\
 & = 8x^{3}+(o(x))^{3}+12x^{2}o(x)+6x(o(x))^{2} \\
 & = 8x^{3} + o(x^{3}) + o(x^{3}) + o(x^{3}) \\
 & = 8x^{3} + o(x^{3})
\end{align}
$$

$$
\log(1+\tan ^{3}(2x)) = 8x^{3} + o(x^{3})+ o(8x^{3}+ o(x^{3})) = 8x^{3} +o(x^{3}) + o(x^{3}) + o(o(x^{3})) = 8x^{3} + o(x^{3}) = 0 \qquad x \rightarrow 0
$$
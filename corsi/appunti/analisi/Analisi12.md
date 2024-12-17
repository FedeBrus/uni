## Derivazione

$f: \mathbb{R} \rightarrow \mathbb{R}, x_{0} \in \mathbb{R}, (f: A \rightarrow \mathbb{R}, A \subseteq \mathbb{R}, x_{0} \in A$).
$h \in \mathbb{R} (x_{0}+h \in A\text{ se } h \rightarrow 0$).
### Rapporto incrementale
$$
\frac{f(x_{0} + h) - f(x_{0})}{h} \qquad h \rightarrow 0
$$
### Definizione formale di derivata
Si dice che la funzione $f: \mathbb{R} \rightarrow \mathbb{R}$ è derivabile in $x_{0}$ se il limite $h \rightarrow 0$ del rapporto incrementale esiste ed è finito (ossia è un numero reale).

### Simbologia
$$
\begin{align}
f'(x_{0}) \\ \\
\frac{df}{dx} (x_{0}) \\ \\
f^{(1)}(x_{0}) \\ \\
\dot{f}(x_{0})
\end{align}
$$
### Interpretazione geometrica
![[derivata|1000]]

## Equazione retta tangente al grafico di $f$ in $P = (x_{0}, f(x_{0}))$
$$
y = f(x_{0}) + f'(x_{0})(x - x_{0})
$$
##### Osservazione:
La derivata non è obbligata ad esistere.

##### Esempio:
$$
f(x) = |x|
$$

se $x_{0} = 0$ la derivata di $f$ in $x_{0}$ non esiste
$$
\lim_{ h \to 0 } \frac{f(x_{0} + h) - f(x_{0})}{h} = \lim_{ h \to 0 } \frac{|x_{0}+h|-|x_{0}|}{h} = \lim_{ h \to 0 }  \frac{|h|}{h} =\begin{cases}
1 \text{ se } h > 0 \\
-1 \text{ se } h < 0
\end{cases}
$$
Limiti destro e sinistro esistono ma sono differenti:
$$
\lim_{ h \to 0 } \frac{|h|}{h} = \text{ non esiste}
$$
##### Esempio:
$$
f(x) = \sqrt[3]{ x }, \qquad x_{0} = 0
$$
$$
\lim_{ h \to 0 } \frac{f(x_{0} + h) - f(x_{0})}{h} = \lim_{ h \to 0 } \frac{\sqrt[3]{ x_{0} + h } - \sqrt[3]{ x_{0} }}{h} = \lim_{ h \to 0 } \frac{\sqrt[3]{ h }}{h} = \lim_{ h \to 0 } \frac{1}{h^{\frac{2}{3}}} = +\infty
$$

## Funzione differenziabile
#### Definizione formale
Si dice che la funzione $f$ è differenziabile in $x_{0}$ se esiste un numero $\alpha \in \mathbb{R}$ tale che la funzione $f(x_{0}+h) = f(x_{0}) + \alpha h + o(h), h \rightarrow 0$.

## Teorema
La funzione $f: \mathbb{R} \rightarrow \mathbb{R}$ è differenziabile in $x_{0}$ se e solo se $f$ è derivabile in $x_{0}$. In tal caso $\alpha = f'(x_{0})$.

##### Dim:
(Sufficienza) Supponiamo che $f$ verifichi la condizione di differenziabilità della definizione formale, allora:
$$
\lim_{ h \to 0 } \frac{f(x_{0} + h) - f(x_{0})}{h} = \lim_{ h \to 0 } \frac{\alpha h + o(h)}{h} = \lim_{ h \to 0 } \left( \alpha + \frac{o(h)}{h} \right) = \alpha = f'(x_{0})
$$

(Necessità) Viceversa, sia $f$ derivabile in $x_{0}$:
$$
f(x_{0} + h) - f(x_{0}) - \alpha h = o(h), \qquad h \rightarrow 0
$$
$$
\begin{align}
\lim_{ h \to 0 } \frac{f(x_{0} + h) - f(x_{0}) - f'(x_{0})h}{h} &= 0 \\
\lim_{ h \to 0 } \frac{f(x_{0} + h) - f(x_{0})}{h} - f'(x_{0})  & = 0 \\
\lim_{ h \to 0 } \frac{f(x_{0} + h) - f(x_{0})}{h} = \alpha
\end{align}
$$
### Teorema:
Se $f$ è derivabile in $x_{0}$ allora è continua in $x_{0}$.
#### Dim:
Per dimostrare la continuità di $f$ in $x_{0}$ devo mostrare che:
$$
\lim_{ x \to x_{0} } f(x) = f(x_{0})
$$
Voglio riportare il limite a qualcosa che tende a $0$, pongo $h = x - x_{0}$ se $x \rightarrow x_{0}$ allora $h \rightarrow 0$.
$$
\lim_{ x \to x_{0} } f(x) = \lim_{ h \to 0 } f(x_{0} + h)
$$
ma se $f$ è derivabile per ipotesi, allora per il teorema precedente è anche differenziabile.
$$
\lim_{ h \to 0 } f(x_{0}) + \alpha h + o(h) = f(x_{0})
$$
## Lista derivate elementari:
$f'(k) = 0$
$f'(x^{k}) = kx^{k-1}$
$f'(e^{x}) = e^{x}$
$f'(a^{x}) = a^{x} \log a$
$f'(\log x) = \frac{1}{x}$
$f'(\sin x) = \cos x$
$f'(\cos x) = - \sin x$
$f'(\arcsin x) = \frac{1}{\sqrt{ 1 - x^{2} }}$
$f'(\arccos x) = - \frac{1}{\sqrt{ 1 - x^{2} }}$
$f'(\tan x) = \frac{1}{\cos ^{2}x} = 1 + \tan ^{2}x$
$f'(\arctan x) = \frac{1}{1 + x^{2}}$
$f'(x^{a}) = ax^{a-1}, \qquad a \in \mathbb{R}\setminus \{ 0 \}$

## Proprietà algebriche delle derivate:
$(f \pm g)' = f' \pm g'$
$(cf)' = cf', \qquad c \in \mathbb{R} \setminus \{ 0 \}$
$(fg)' = f'g + fg'$
$\left( \frac{1}{f} \right)' = -\frac{f'}{f^{2}}$
$\left( \frac{f}{g} \right)' = \frac{f'g - fg'}{g^{2}}$
$(f(g))' = f'(g)g'$

##### Esempio:
$$
f(x) = x^{3}
$$
1 modo:
$$
\lim_{ h \to 0 } \frac{f(x + h) - f(x)}{h} = \lim_{ h \to 0 } \frac{x^{3} + 3x^{2}h + 3xh^{2} + h^{3} - x^{3}}{h} = \lim_{ h \to 0 } 3x^{2} + 3xh + h^{3} = 3x^{2}
$$
2 modo:
$$
f(x + h) = (x + h)^{3} = x^{3} + 3x^{2}h + 3xh^{2} + h^{3} = f(x) + \underbrace{ 3x^{2}h }_{ \alpha h } + \underbrace{ 3xh^{2} + h^{3} }_{ o(h) }
$$
$$
\alpha = f'(x) = 3x^{2}
$$
##### Esempio:
$$
f(x) = e^{x}
$$
1 modo:
$$
\lim_{ h \to 0 } \frac{e^{x + h} - e^{x}}{h} = \lim_{ h \to 0 } \frac{e^{x}e^{h} - e^{x}}{h} = \lim_{ h \to 0 } e^{x}\frac{e^{h} - 1}{h} =^{LN} e^{x}
$$
2 modo:
$$
f(x + h) = e^{x+h} = e^{x} e^{h} = e^{x} ( 1 + h + o(h)) = e^{x} + e^{x}h + o(h) = f(x) + e^{x}h + o(h)
$$
$$
\alpha = f'(x) = e^{x}
$$
##### Esempio:
$$
f(x) = \log x, \qquad x > 0
$$
1 modo:
$$
\lim_{ h \to 0 } \frac{\log(x + h) - \log x}{h} = \lim_{ h \to 0 } \frac{ \log \left( 1 +\frac{h}{x} \right)}{h} = \lim_{ h \to 0 } \frac{\log\left( 1 + \frac{h}{x} \right)}{\frac{h}{x} x} =^{LN} \frac{1}{x}
$$
2 modo:
$$
f(x + h) = \log(x + h) = \log\left( x\left( 1 + \frac{h}{x} \right) \right) = \log x + \log\left( 1 + \frac{h}{x} \right) = \log x + \frac{h}{x} + o\left( \frac{h}{x} \right) = \log x + \frac{h}{x} + o(h) = f(x) + \frac{h}{x} + o(h)
$$
$$
\alpha = f'(x) = \frac{1}{x}
$$
##### Esempio:
$$
f(x) = \cos x
$$
1 modo:
$$
	\begin{align}
\lim_{ h \to 0 } \frac{f(x + h) - f(x)}{h} = \lim_{ h \to 0 } \frac{\cos(x + h) - \cos x}{h} =  \lim_{ h \to 0 }  \frac{\cos x\cos h - \sin x \sin h - \cos x}{h} \\ =
\lim_{ h \to 0 }  \frac{\cos x(\cos h - 1)}{h^{2}}h - \frac{\sin x \sin h}{h} =^{LN} \lim_{ h \to 0 } \frac{\cos x}{2}h-\sin x = -\sin x
\end{align}
$$
2 modo:
$$
f(x + h) = \cos(x + h) = \cos x \cos h - \sin x \sin h = \cos x (1 + o(h)) - \sin x(h + o(h)) = \cos x + o(h) - h \sin x + o(h) = \cos x - h \sin x + o(h)
$$
$$
a = f'(x) = - \sin x
$$
### Derivata somma
Date $f(x)$ e $g(x)$, pongo $S(x) = f(x) + g(x)$.

1 modo:
$$
S'(x) = \lim_{ h \to 0 } \frac{S(x + h) - S(x)}{h} = \lim_{ h \to 0 } \frac{f(x + h) + g(x + h) - f(x) - g(x)}{h} = \lim_{ h \to 0 } \frac{f(x + h) - f(x)}{h} + \frac{g(x + h) + g(x)}{h} = f'(x) + g'(x)
$$
2 modo:
$$
S(x + h) = f(x + h) + g(x + h)
$$
$$
f(x + h) = f(x) + f'(x)h + o(h), \qquad h \rightarrow 0
$$
$$
g(x + h) = g(x) + g'(x)h + o(h), \qquad h \rightarrow 0
$$
$$
f(x + h) + g(x + h) = f(x) + g(x) + (f'(x) + g'(x))h + o(h)
$$
$$
\alpha = S'(x) = f'(x) + g'(x)
$$
### Derivata prodotto
Date $f(x)$ e $g(x)$, pongo $P(x) = f(x)g(x)$.

1 modo:
$$
P'(x) = \lim_{ h \to 0 } \frac{P(x + h) - P(x)}{h} = \lim_{ h \to 0 } \frac{f(x+h)g(x+h) - f(x)g(x)}{h}
$$
$$
\lim_{ h \to 0 } \frac{f(x+h)g(x+h)-f(x+h)g(x)+f(x+h)g(x)-f(x)g(x)}{h} = \lim_{ h \to 0 } f(x+h)\frac{g(x+h) - g(x)}{h} + g(x)\frac{f(x+h)-f(x)}{h}
$$
$$
\lim_{ h \to 0 } = \underbrace{ f(x+h) }_{ \rightarrow f(x) \text{ per continuità} }g'(x) + g(x)f'(x) = f(x)g'(x) + g(x)f'(x)
$$
2 modo:
$$
\begin{align}
f(x+h) = f(x) + f'(x)h + o(h) \\
g(x+h) = g(x) + g'(x)h + o(h)
\end{align}
$$
Gli unici termini che contano e che non verranno inghiottiti da $o(h)$ sono i seguenti:
$$
P(x+h) = f(x+h)g(x+h) = f(x)g(x) + (f'(x)g(x) + f(x)g'(x))h + o(h), \qquad h \rightarrow 0
$$
$$
\alpha = P'(x) = f'(x)g(x) + f(x)g'(x)
$$
### Derivata della funzione reciproca
Date $f(x)$, pongo $Q(x) = \frac{1}{f(x)}$.

1 modo:
$$
Q'(x) = \lim_{ h \to 0 } \frac{Q(x +h) - Q(x)}{h} = \lim_{ h \to 0 } \frac{\frac{1}{f(x +h)} - \frac{1}{f(x)}}{h} = \lim_{ h \to 0 } \frac{1}{h} \frac{f(x) - f(x+h)
}{f(x)f(x+h)} = \lim_{ h \to 0 } - \frac{f(x + h) - f(x)}{h} \cdot \frac{1}{f(x)f(x + h)} =- \frac{f'(x)}{\underbrace{ f^{2}(x) }_{ \text{per la continuità} }}
$$

### Derivata del rapporto
$$
R(x) = \frac{f(x)}{g(x)} = f(x) \frac{1}{g(x)}
$$
$$
R'(x) = f'(x) \frac{1}{g(x)} + f(x)\left( \frac{1}{g(x)} \right)' = \frac{f'(x)}{g(x)} + f(x)\left( -\frac{g'(x)}{g^{2}(x)} \right) = \frac{f'(x)g(x)-f(x)g'(x)}{g^{2}(x)}
$$
##### Esempio:
$\tan'(x) = \left( \frac{\sin x}{\cos x} \right)' = \frac{\cos ^{2}x + \sin^{2}x}{\cos ^{2}x} = \frac{1}{\cos ^{2}x} = 1 + \tan ^{2}x$

### Derivata della funzione inversa
Sia $f$ una funzione che ammette inversa $g$.
$$
f(g(x)) = x, \qquad \forall x \text{ di partenza in } g
$$
$$
\begin{align}
[f(g(x))]' &= [x]'  \\
f'(g(x)) g'(x) & = 1 \\
g'(x) &= \frac{1}{f'(g(x))} 
\end{align}
$$

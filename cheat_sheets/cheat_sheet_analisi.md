Equazione di Bernoulli
$(1+x)^{n} \geq 1 + nx, \forall \in \mathbb{N}, \forall x \in \mathbb{R}, x > -1$

Numeri complessi
$\frac{1}{z} = \frac{\bar{z}}{|z|^{2}} = \frac{a-bi}{a^{2}+b^{2}}$
$|z|=\sqrt{ a^{2}+b^{2} } = \sqrt{ \bar{z}z }$
$\forall z \in \mathbb{C}, |z| > 0$
$|z| = 0 \Longleftrightarrow z = 0$
$z = a+bi = \rho(\cos \theta+i\sin \theta) = \rho e^{i\theta}$
$\rho = |z|, \theta = \arctan\left( \frac{b}{a} \right)$
$z = (\rho, \theta), w = (r, \phi)$
$\frac{1}{z} = (\frac{1}{\rho}, -\theta), \bar{z} = (\rho, -\theta)$
$z \cdot w = (\rho r, \theta + \phi), \frac{z}{w}=\left( \frac{\rho}{r}, \theta-\phi \right)$
$\overline{z + w} = \bar{z} + \bar{w}$
$\overline{z \cdot w} = \bar{z} \cdot \bar{w}$
$\overline{z^{w}} = \bar{z}^{\bar{w}}$
$|\bar{z}| = |z|$
$z^{n}= (\rho^{n}, n\theta)$
$\sqrt[n]{ z } = \left( \sqrt[n]{ z }, \frac{\theta}{n} + \frac{2k\pi}{n} \right), k = 0,\dots,n-1$

Polinomi di grado $n$

Se $\alpha \in \mathbb{C}$ è radice, allora si può dividere per $(x-\alpha)$
Due polinomi si possono sempre dividere.
Ogni polinomio di grado $n$ ha al massimo $n$ radici reali.
Ogni polinomio ha esattamente $n$ radici complesse.
Se un polinomio è a coefficienti reali, per ogni sua radice complesse anche la coniugata è radice.

Funzioni
$g(f(a)) = (g \circ f)(a)$
$f: A \rightarrow B$
iniettività: $\forall x,y \in A: f(x) = f(y) \implies x = y$
suriettività: $\forall b \in B, \exists a \in A:b=f(a)$
biettività: sia iniettiva che suriettiva$\implies$invertibile
$f:\mathbb{R}\rightarrow \mathbb{R}$
pari: $\forall x \in \mathbb{R}, f(x) = f(-x)$
dispari: $\forall x \in \mathbb{R}, -f(x) = f(-x)$
periodica: $\exists T>0: f(x+Tn) = f(x), \forall x \in \mathbb{R}, n \in \mathbb{Z}$
Ogni funzione strettamente monotona è iniettiva.
Siano $g, f: \mathbb{R}\rightarrow \mathbb{R}$.
$x > y \implies g(f(x)) > g(f(y))$ se e solo se sono entrambi
strettamente crescenti o decrescenti.
$x > y \implies g(f(x))<g(f(y))$ se e solo se sono una strettamente crescente e una strettamente decrescente.
Se due funzioni sono iniettiva allora la composizione è iniettiva.

Proprietà potenze e logaritmi
$a^{x+y} = a^{x} \cdot a^{y}$
$(a^{x})^{y} = a^{xy}$
$a^{x}b^{x}=(ab)^{x}$
$\ln(xy) = \ln x+\ln y$
$\ln(x^{y})=y\ln x$

Forme indeterminate
$\pm\infty \mp \infty$
$0(\pm \infty)$
$\frac{\pm \infty}{\pm \infty}$
$\frac{\pm \infty}{\mp \infty}$
$\frac{0}{0}$
$0^{0}$
$1^{\pm \infty}$
$(\pm \infty)^{0}$

Teoremi per successioni
Siano $a_{n},b_{n},c_{n}$ successioni.
se $a_{n} \leq c_{n} \leq b_{n}$:
se $a_{n}\rightarrow+\infty \implies b_{n}\rightarrow+\infty$
se $b_{n}\rightarrow-\infty  \implies a_{n} \rightarrow  -\infty$
se $a_{n}\rightarrow l, b_{n}\rightarrow l, l\in \mathbb{R} \implies  c_{n} \rightarrow l$
se $a_{n}\geq 0, \sqrt[n]{ a_{n} }=l > 1 \implies a_{n} \rightarrow +\infty$
se $a_{n}\geq 0, \sqrt[n]{ a_{n} }=l < 1 \implies a_{n} \rightarrow 0$
se $a_{n}>0, \frac{a_{n+1}}{a_{n}} = l > 1 \implies a_{n}\rightarrow+\infty$
se $a_{n}>0, \frac{a_{n+1}}{a_{n}} = l < 1 \implies a_{n}\rightarrow+0$
se $a_{n} > 0, \frac{a_{n+1}}{a_{n}} = l \implies \sqrt[n]{ a_{n} } = l$
se $b_{n}>0, b_{n}\rightarrow+\infty, \frac{a_{n+1}-a_{n}}{b_{n+1}-b_{n}} = \frac{a_{n}}{b_{n}}$

Limiti
Composizione di funzioni continue è continua.
Composizione di funzioni derivabili è derivabile.
$\lim_{ x \to x_{0} } f(x)$ esiste $\Longleftrightarrow \lim_{ x \to x_{0}^{-} }f(x)$ e $\lim_{ x \to x_{0}^{+} }f(x)$ esistono e coincidono.

Limiti notevoli
$\frac{\sin x}{x}= 1, x \rightarrow 0$
$\left( 1+\frac{1}{x} \right)^{x} = e, x \rightarrow\pm \infty$
$\frac{1-\cos x}{x^{2}} = \frac{1}{2}, x \rightarrow 0$
$\frac{e^{x}-1}{x} = 1, x\rightarrow 0$
$\frac{\ln(1+x)}{x}=1,x\rightarrow 0$
$\frac{a^{x}-1}{x}=\log a, x\rightarrow 0$
$\frac{\log_{a}(1+x)}{x} = \frac{1}{\ln a}, x\rightarrow 0$
$\frac{(1+x)^{c}-1}{x} = c, x\rightarrow 0$
$\frac{\tan x}{x} = 1, x \rightarrow 0$
$\frac{\arcsin x}{x} = 1, x \rightarrow 0$
$\frac{\arctan x}{x} = 1, x \rightarrow 0$
$x\log x=0, x\rightarrow 0^{+}$

Sotto successioni
s.s. che non converge $\implies$l'originale non converge. 
due s.s. che convergono a valori diversi $\implies$l'originale non converge.
Se trovo $a_{n}\rightarrow x_{0}, b_{n}\rightarrow x_{0}$ e $f(a_{n})\rightarrow l_{1}, f(b_{n})\rightarrow l_{2}$, $l_{1}\neq l_{2}$, allora $\lim_{ x \to x_{0} }f(x)$ non esiste.

Confronto di infiniti
$\log x < \sqrt{ x } < x^{k} < k^{x} < x! < x^{x}$

Retta tangente al grafico
$y = f(x_{0})+f'(x_{0})(x-x_{0})$

Derivate
$f'(x) = \lim_{ h \to 0 } \frac{f(x+h)-f(x)}{h}$
$x \rightarrow 1$
$|x| \rightarrow sgn(x) = \frac{|x|}{x}$
$x^{a} \rightarrow ax^{a-1}$
$\ln(x), \ln(-x) \rightarrow \frac{1}{x}$
$\log_{a}x \rightarrow \frac{1}{x\ln a}$
$e^{x}\rightarrow e^{x}$
$a^{x}\rightarrow a^{x}\ln a$
$\sqrt{ x } \rightarrow \frac{1}{2\sqrt{ x }}$
$\sin x\rightarrow \cos x$
$\cos x \rightarrow  -\sin x$
$\tan x \rightarrow \frac{1}{\cos ^{2}x}, 1+\tan ^{2}x$
$\arcsin x \rightarrow \frac{1}{\sqrt{ 1-x^{2} }}$
$\arccos \rightarrow  -\frac{1}{\sqrt{ 1-x^{2} }}$
$\arctan \rightarrow \frac{1}{1+x^{2}}$
$\sinh x \rightarrow \cosh x$
$\cosh x \rightarrow \sinh x$
$x^{x}\rightarrow x^{x}(1+\ln x)$

$(fg)' = f'g + fg'$
$\left( \frac{1}{f} \right)' = -\frac{f'}{f^{2}}$
$\left( \frac{f}{g} \right)' = \frac{f'g - fg'}{g^{2}}$
$(f(g))' = f'(g)g'$
$f^{-1}(x) = \frac{1}{f'(g(x))}$

Hopital
Se si ha F.I. $\frac{0}{0}, \frac{\infty}{\infty}$, $\lim_{ x \to x_{0} } \frac{f(x)}{g(x)} = \lim_{ x \to x_{0} } \frac{f'(x)}{g'(x)}, x_{0} \in \bar{\mathbb{R}}$

Taylor
$e^{x} = 1 + x + \frac{x^{2}}{2!} + \frac{x^{3}}{3!} + \frac{x^{4}}{4!} + \dots$
$\sin x = x -\frac{x^{3}}{3!} + \frac{x^{5}}{5!} - \frac{x^{7}}{7!} + \dots$
$\cos x = 1 - \frac{x^{2}}{2!} + \frac{x^{4}}{4!} - \frac{x^{6}}{6!} + \dots$
$\sinh x = \frac{e^{x} - e^{-x}}{2} = x + \frac{x^{3}}{3!} + \frac{x^{5}}{5!} + \frac{x^{7}}{7!} + \dots$
$\cosh x = \frac{e^{x}+e^{-x}}{2} = 1 + \frac{x^{2}}{2!} + \frac{x^{4}}{4!} + \frac{x^{6}}{6!} + \dots$
$\log(1+x) = x-\frac{x^{2}}{2}+\frac{x^{3}}{3}-\frac{x^{4}}{4}+\dots$
$\arctan x = x - \frac{x^{3}}{3} + \frac{x^{5}}{5} - \frac{x^{7}}{7} + \dots$
$(1+x)^{\alpha} = 1 + \alpha x + \frac{\alpha(\alpha-1)}{2!}x^{2} + \frac{\alpha(\alpha-1)(\alpha-2)}{3!}x^{3} + \dots$
Se $\alpha = -1$
$\frac{1}{1+x} = 1 - x + x^{2} - x^{3}+\dots$

Formula di Taylor
$f(x) = \sum_{k=0}^{n} \frac{f^{(k)}(x_{0})}{k!}(x-x_{0})^{k}$

Teorema degli zeri
$f:[a,b]\rightarrow \mathbb{R}$ continua.
Se $f(a)f(b)<0\implies \exists c \in(a,b):f(c)=0$
Variante T.D.Z.
$f:[a,b]\rightarrow \mathbb{R}$ continua. Sia $\lambda \in \mathbb{R}$.
Se $f(a)<\lambda, f(b)>\lambda$, o viceversa.
Allora $\exists c\in(a,b):f(c)=\lambda$.

$f:(a,b)\rightarrow \mathbb{R}$ continua, $\lim_{ x \to  a^{+} }f(x) = -\infty$, $\lim_{ x \to  b^{-} } f(x)=+\infty$, o viceversa, allora $f$ è surgettiva.

Criterio delle derivate successive
$f^{(k)}(x_{0}) \neq 0$.
se $k$ pari e $f^{(k)}(x_{0})>0\implies$ minimo locale
se $k$ pari e $f^{(k)}(x_{0})<0\implies$ minimo locale
se $k$ dispari e $f^{(k)}(x_{0})>0\implies$ flesso tangente crescente 
se $k$ dispari e $f^{(k)}(x_{0})<0\implies$ flesso tangente decrescente

Primo termine non nullo e non costante dello sviluppo di Taylor in un punto indica il comportamento locale della funzione.

Weierstrass
Sia $f: [a, b] \rightarrow \mathbb{R}$ continua, allora $max\{ f(x) | x \in [a, b] \}$ e $min\{ f(x) | x \in [a, b] \}$ esistono sempre.
Punti di massimo sono ai bordi, nei punti stazionari e singolari interni. 

Rolle
Sia $f:[a,b]\rightarrow \mathbb{R}$ continua e derivabile in $(a,b)$.
$f(a) = f(b) \implies \exists c \in(a,b):f'(c)=0$

Cauchy
Sia $f:[a,b]\rightarrow \mathbb{R},g:[a,b]\rightarrow \mathbb{R}$, continue e derivabili in $(a,b)$. Allora $\exists c\in(a,b):(f(b)-f(a))g'(c) = (g(b)-g(a))f'(c)$.

Lagrange
Sia $f:[a,b]\rightarrow \mathbb{R}$ continua e derivabile $(a,b)$.
Allora $\exists c \in (a,b):f(b)-f(a) = f'(c)(b - a)$

Monotonia
$f:[a,b] \rightarrow \mathbb{R}$ continua in $[a,b]$ e derivabile in $(a,b)$.
Se $f$ è cre. $\implies$ $f'(x)\geq 0, \forall x \in (a, b)$
Se $f'(x) \geq 0, \forall x \in(a,b) \implies f$ deb. cre.
Se $f'(x)>0, \forall x \in (a,b) \implies f$ stret. cre.

Supponiamo che $f'(x)\geq 0, \forall x \in (a,b)$, e $f'(x)=0$ sporadicamente, ossia in punti $x$ isolati tra loro.
Allora $f$ è strettamente crescente in $[a,b]$.

Studio di funzione
simmetrie
insieme massimale di definizione
continuità
limiti agli estremi
determinare gli zeri e il segno
determinare l'esistenza della derivata e il suo segno
asintoti
punti di massimo e minimo
convessità e concavità

Discontinuità
1: limiti destro e sinistro reali ma diversi
2: almeno uno dei limiti non esistenti o infiniti
3: limite destro e sinistro reali e coincidenti ma diversi dal valore della funzione nel punto

Non derivabilità
1: punto angoloso, limite destro e sinistro del rapporto incrementale sono diversi e almeno uno è finito.
2: cupside, limite destro e sinistro del rapporto incrementale sono infiniti ma di segno opposto
3: punto tangente verticale, limite destro e sinistro del rapporto incrementale è infinito di segno concorde.

T.D.Z inter aperti
$f:(a,b)\rightarrow \mathbb{R}$ continua, $\lim_{ x \to a^{+} }f(x)=l^{-},\lim_{ x \to b^{-} }f(x)=l^{+}$.
con $l^{-},l^{+}\in \bar{\mathbb{R}}$ e segno opposto. Allora esiste un $c\in(a,b):f(c)=0$

Weierstrass intervalli aperti
$f:(a,b)\rightarrow \mathbb{R}$ continua, $\lim_{ x \to a^{+} }f(x)=l^{-},\lim_{ x \to b^{+} }f(x)=l^{+}$.
$l^{+},l^{-}\in \bar{\mathbb{R}}$. 
Se esiste $x_{0}\in(a,b):f(x_{0})>max\{ l^{+},l^{-} \}\implies \exists max(f)$
Se esiste $x_{0}\in(a,b):f(x_{0})<min\{ l^{+},l^{-} \}\implies \exists min(f)$

Convessità
$f:I\rightarrow \mathbb{R}$, $f''(x)$ esiste $\forall x \in I$
Se $f$ è deb. (o stret.) conv in $I\implies f''(x)\geq 0, \forall x \in I$
Se $f''(x) > 0, \forall x \in I \implies f$ è stret. conv. in $I$
Se $f''(x) \geq 0, \forall x \in I \implies f$ è deb. conv. in $I$

Se $f:I\rightarrow \mathbb{R}$ convessa, allora $f'(x)$ è crescente.

Asintoti
obliqui: $y=mx+n$.
$m = \lim_{ x \to \infty }\frac{f(x)}{x}$
$n = \lim_{ x \to \infty } (f(x)-mx)$

Weierstrass per funzioni periodiche
$f:\mathbb{R}\rightarrow \mathbb{R}$ continua e periodica, allora esistono sempre $max\{ f(x)|x \in \mathbb{R} \}$ e $min\{ f(x)|x \in \mathbb{R} \}$ e vanno cercati in $[0, T]$.

Variante Weierstrass
$f:\mathbb{R}\rightarrow \mathbb{R}$ continua. $f(x_{0})=A \in \mathbb{R}$.
$\lim_{ x \to \pm\infty }f(x)>A\implies \exists min\{ f(x)|x \in \mathbb{R} \}$
$\lim_{ x \to \pm\infty }f(x)<A\implies \exists max\{ f(x)|x \in \mathbb{R} \}$

Proprietà integrali
$\int_{a}^{a}f(x)dx =0$
$\int_{a}^{b}f(x) dx = -\int_{b}^{a}f(x)dx$
$\int_{a}^{b}f(x)dx = \int_{a}^{c}f(x)dx+\int_{c}^{b}f(x)dx$
$\bigg| \int_{a}^{b}f(x)dx \bigg| \leq \int_{a}^{b}|f(x)|dx$
$\int_{c}^{d}f(x)dx = F(d)-F(c)$, $F$ primitiva
$f(x)>g(x) \implies \int_{a}^{b}f(x)dx > \int_{a}^{b}f(x)dx$
$f:[a,b]\rightarrow \mathbb{R}$ continua, allora $\exists c \in[a,b]:\int_{a}^{b}f(x)dx = f(c)(b-a)$

Integrali di funzioni pari/dispari
se $f$ pari: $\int_{-a}^{a}f(x)dx = 2\int_{0}^{a}f(x)dx$
se $f$ dispari: $\int_{-a}^{a}f(x)dx = 0$

Funzione integrale
$F(x)=\int_{u(x)}^{v(x)}f(t)dt$
$F'(x)= f(v(x))v'(x)-f(u(x))u'(x)$

Primitive
$\int 1 dx = x$
$\int e^{x} dx = e^{x}$
$\int a^{x} dx = \frac{a^{x}}{\log a}$
$\int x^{a} dx = \frac{x^{a+1}}{a+1}, a \in \mathbb{R} \setminus \{ -1 \}$
$\int \frac{1}{x} dx = \log |x|$

$\int \cos x dx = \sin x$
$\int \sin x dx = - \cos x$
$\int \tan x dx = -\log |\cos x|$
$\int \cot x dx = -\log|\sin x|$
$\int \cosh(x) dx = \sinh x$
$\int \sinh(x) dx = \cosh x$
$\int \frac{1}{\cos ^{2}x}dx=\tan x$
$\int \frac{1}{\sin ^{2}x}dx = \cot x$

$\int \frac{1}{1+x^{2}}dx = \arctan x$
$\int \frac{1}{a+x^{2}}dx = \frac{1}{a} \arctan\left( \frac{x}{a} \right)$

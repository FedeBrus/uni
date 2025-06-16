## Le funzioni fondamentali dell'analisi

### Potenze
$$
f(x) = x^{n} \quad n \in \mathbb{N} \setminus \{ 0 \}
$$
Il comportamento di queste funzioni dipende dalla potenza $n$.

#### Teorema
Per $n$ pari la funzione $f(x) = x^{n}$  vista come $f: [0, +\infty)\rightarrow [0, + \infty)$ è strettamente crescente, iniettiva, surgettiva, bigettiva, quindi esiste la funzione inversa di $f$, ossia $g: [0, +\infty)\rightarrow[0, +\infty)$, che viene chiamata *radice n-esima* di $x$ e denotata con il simbolo $\sqrt[n]{x}$.
##### Oss:
Poiché $n$ è pari allora $g$ prende in entrata valori positivi e $g$ fornisce in uscita valori positivi.

![[Potenze.png|400]] 
![[Radici.png|400]]

##### Oss:
Tutte le funzioni inverse hanno come grafico il grafico simmetrico rispetto alla bisettrice del piano.
#### Teorema
Per $n$ dispari la funzione $f(x) = x^{n}$  vista come $f: \mathbb{R} \rightarrow \mathbb{R}$ è strettamente crescente, iniettiva, surgettiva, bigettiva e dispari, quindi esiste la funzione inversa di $f$, ossia $g: \mathbb{R}\rightarrow \mathbb{R}$, che viene chiamata *radice n-esima* di $x$ e denotata con il simbolo $\sqrt[n]{x}$.
##### Oss:
Poiché $n$ è dispari allora $g$ prende in entrata valori reali e $g$ fornisce in uscita valori reali.

![[Potenze_dispari.png|400]]
![[Radici_dispari.png|400]]
##### Oss:
1. $x^{n+1}=x^{n}+x\text{ con } x^{0}=1,x^{1}=x$
2. stretta crescenza: $x_{1} > x_{2} \implies x_{1}^{n} > x_{2}^{n}$
3. stretta monotonia => iniettività
4. dimostrare la surgettività $x^{n} = \lambda$ ha un'unica soluzione $\begin{cases} \forall \lambda \in [0, +\infty) &\text{ se n è pari} \\ \forall \lambda \in \mathbb{R} &\text{se n è dispari} \end{cases}$
### Esponenziali
$$
\underbrace{ a \in \mathbb{R}}_{\text{base}} \quad \underbrace{f(x) = a^{x}}_{\text{legge algebrica}}
$$
#### Teorema
Per ogni valore $a > 1$ la funzione $f(x) = a^{x}$  vista come $f: \mathbb{R}\rightarrow (0, + \infty)$ è strettamente crescente, iniettiva, surgettiva, bigettiva quindi esiste la funzione inversa di $f$, ossia $g: (0, +\infty)\rightarrow \mathbb{R}$, che viene chiamata *logaritmo in base  $a$* di $x$ e denotata con il simbolo $\log_{a}{x}$.

##### Oss:
La funzione inversa riprende le stesse proprietà della funzione originale.

Con $a > 1$
![[Esponenziali.png|400]]
![[Logaritmi.png|400]]
Con $0 < a < 1$
![[Esponenziali_minori1.png|400]]
![[Logaritmi_minori1.png|400]]
#### Proprietà
1. $a^{x+y}=a^{x}+a^{y}$
2. $(a^{x})^{y}=a^{xy}$
3. $a^{x}b^{x}=(ab)^{x}$
4. $\ln(xy) = \ln x + \ln y$
5. $\ln(x^{y})=y\ln x$
##### Oss:
$$
\begin{align}
f(x) = e^{x} \\
g(x) = \ln x \\
h(x) = x^{\alpha}
\end{align}
$$
$$
\alpha \in \mathbb{R}, x > 0
$$
$$
\begin{align}
x^{\alpha} &= e^{\alpha \ln x} \\
 & = f \circ g \circ h = f(g(h(x))) \\
 & = f(g(x^{\alpha})) \\
 & = f(\ln(x^{\alpha})) \\
 & = f(\alpha \ln x) \\
 & = e^{\alpha \ln x}
\end{align}
$$

### Trigonometriche
#### Teorema
$f(x) = \sin(x)$, vista come funzione da $f: [-\frac{\pi}{2}, \frac{\pi}{2}] \rightarrow [-1, 1]$ è strettamente crescente, iniettiva, surgettiva, bigettiva e dispari quindi esiste la funzione inversa di $f$, ossia $g:[-1, 1]\rightarrow\left[ -\frac{\pi}{2}, \frac{\pi}{2}\right]$, che viene chiamata *arcoseno* di $x$ e denotata con il simbolo $\arcsin x$ oppure $\sin ^{-1} x$.

![[Seno.png|400]]
![[Arcoseno.png|400]]
#### Teorema
$f(x) = \cos x$, vista come funzione da $f: [0, \pi] \rightarrow [-1, 1]$ è strettamente crescente, iniettiva, surgettiva, bigettiva quindi esiste la funzione inversa di $f$, ossia $g:[-1, 1]\rightarrow\left[ 0, \pi\right]$, che viene chiamata *arcocoseno* di $x$ e denotata con il simbolo $\arccos x$ oppure $\cos ^{-1} x$.

![[Coseno.png|400]]
![[Arcocoseno.png|400]]
##### Interpretazione trigonometrica
Che vuol dire calcolare $\arcsin \lambda$
Che vuol dire calcolare $\arccos \lambda$
#### Teorema
$f(x) = \frac{\sin{x}}{\cos{x}}$, vista come $f: \left( -\frac{\pi}{2}, \frac{\pi}{2} \right) \rightarrow \mathbb{R}$ è strettamente crescente, iniettiva, surgettiva, biettiva, dispari quindi esiste la funzione inversa di $f$, ossia $g:\mathbb{R}\rightarrow\left( -\frac{\pi}{2}, \frac{\pi}{2} \right)$, che viene chiamata *arcotangente* di $x$ e denotata con il simbolo $\arctan x$.

![[Tangente.png|400]]
![[Arcotangente.png|400]]

---
#### Esercizio:
$$
\begin{array}{l}
\arcsin(\sin 1) = 1 \quad \text{vero} \\
\arcsin(\sin 2) = 2 \quad \text{falso} \\
\arcsin(\sin 3) = 3 \quad \text{falso} \\ 
\arcsin(\sin 4) = 4 \quad \text{falso} \\
\arccos(\cos 1) = 1 \quad \text{vero} \\
\arccos(\cos 2) = 2 \quad \text{vero} \\
\arccos(\cos 3) = 3 \quad \text{vero} \\
\arccos(\cos 4) = 4 \quad \text{falso}
\end{array}
$$
Ad esempio, per fare $\arccos(\cos 4)$
$$
\arccos(\cos 4) = 2\pi -4
$$

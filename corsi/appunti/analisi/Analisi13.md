## Derivate di ordine superiore
$$
f: A \rightarrow \mathbb{R}, \qquad A \subseteq \mathbb{R}, \qquad x_{0} \in A
$$
$$
\mathbb{R} \ni f'(x_{0}) = \lim_{ h \to 0 } \frac{f(x_{0} + h) - f(x_{0})}{h}
$$
$f$ è derivabile in $A$ se $f$ è derivabile $\forall x_{0} \in A$.
$$
f': A \ni x \mapsto f'(x) \in \mathbb{R}
$$
Se come funzione la $f'$ è anch'essa derivabile allora definisco la derivata seconda di $f$ come $(f'(x))' = f''(x) = f^{(2)}(x) = \frac{d^{2}f}{dx^{2}}(x)$.
$$
f'' : A \ni x \mapsto f''(x) \in \mathbb{R}
$$
Iterando sotto opportune ipotesi:
$$
f^{(k)}(x) = (f^{(k-1)}(x))', \qquad k \in \mathbb{N} \setminus \{ 0 \}
$$

## Teorema di de L'Hopital
Siano date due funzioni $f, g$ e un $x_{0} \in \bar{\mathbb{R}}$.
Supponiamo di voler calcolare il limite:
$$
\lim_{ x \to x_{0} } \frac{f(x)}{g(x)}
$$
Supponiamo che:
1. Un po' di condizioni per l'esistenza delle formule di cui parliamo
2. Il limite sia una forma indeterminata del tipo $\frac{0}{0}$ o $\frac{\infty}{\infty}$
3. Esiste il limite $\lim_{ x \to x_{0} } \frac{f'(x)}{g'(x)} = l \in \bar{\mathbb{R}}$

Allora:
$$
\lim_{ x \to x_{0} } \frac{f(x)}{g(x)} = l \in \bar{\mathbb{R}}, \qquad (\text{stesso } l)
$$
##### Oss:
L'Hopital non ha senso:
1. Se la forma indeterminata non è del tipo descritto.
2. Se $\lim_{ x \to x_{0} } \frac{f'(x)}{g'(x)}$ non esiste.

##### Operativamente:
- Controllo se il limite è $\frac{0}{0}$ oppure $\frac{\infty}{\infty}$.
- Se sì, allora si calcoli il limite delle derivate $\lim_{ x \to x_{0} } \frac{f'(x)}{g'(x)}$
- Se questo limite non esiste, allora non posso usare de L'Hopital
- Se questo limite esiste e vale $l \in \bar{\mathbb{R}}$ allora il limite originario vale anch'esso $l$.
- Se questo limite è la forma indeterminata $\frac{0}{0}$ oppure $\frac{\infty}{\infty}$, itero la procedura, pur sempre che abbia senso derivare tale funzioni.

##### Esempio:
$$
\cancel{
\lim_{ x \to 0 } \frac{\cos x}{x^{2}} =^{H} \lim_{ x \to 0 } \frac{-\sin x}{2x} =^{LN} -\frac{1}{2}
}
$$
Bisogna controllare che sia una forma indeterminata $\frac{0}{0}$ oppure $\frac{\infty}{\infty}$.
$$
\lim_{ x \to 0 } \frac{\cos x}{x^{2}} = +\infty
$$
##### Esempio:
$$
\lim_{ x \to +\infty } \frac{4x + 3\sin x}{x}
$$
$$
N: 4x + 3 \sin x \geq 4x - 3 \rightarrow +\infty
$$
Per il teorema del segno: $4x + 3\sin x \rightarrow +\infty$
$$
\lim_{ x \to +\infty } \frac{4x + 3\sin x}{x} = \left[ \frac{+\infty}{+\infty} \right]
$$
$$
\lim_{ x \to +\infty } \frac{4x + 3\sin x}{x} =^{H} \lim_{ x \to +\infty } \frac{4 + 3\cos x}{1} = \text{ non esiste}
$$
De L'Hopital non può essere usato.
$$
\lim_{ x \to +\infty } \frac{4x + 3\sin x}{x}= \lim_{ x \to +\infty } \frac{x\left( 4 + \frac{3\sin x}{x} \right)}{x} = 4 
$$
##### Esempio:
$$
\lim_{ x \to +\infty } x \left( \frac{\pi}{2} - \arctan x \right) = \frac{\frac{\pi}{2} - \arctan x}{\frac{1}{x}} = \left[ \frac{0}{0} \right]
$$
$$
\lim_{ x \to +\infty } \frac{\frac{\pi}{2} - \arctan x}{\frac{1}{x}} =^{H} \lim_{ x \to +\infty } \frac{- \frac{1}{1 + x^{2}}}{-\frac{1}{x^{2}}} = \lim_{  x \to +\infty } \frac{x^{2}}{1 + x^{2}} = 1
$$
Si sarebbe potuto risolvere
$$
\arctan x + \arctan \frac{1}{x} = \frac{\pi}{2}, \qquad \text{ se } x > 0
$$
allora:
$$
\frac{\pi}{2} - \arctan x = \arctan \frac{1}{x}
$$
e il limite sarebbe stato:
$$
\lim_{ x \to +\infty } \frac{\arctan\left( \frac{1}{x} \right)}{\frac{1}{x}} =^{CV} \lim_{ y \to 0 } \frac{\arctan y}{y} = 1
$$
##### Esempio:
$$
\lim_{ x \to 1^{-} } \frac{\arccos x}{\sqrt{ 1 - x }} = \left[ \frac{0}{0} \right]
$$
$$
\lim_{ x \to 1^{-} } \frac{\arccos x}{\sqrt{ 1 - x }} =^{H} \lim_{ x \to 1^{-} }  \frac{- \frac{1}{\sqrt{ 1-x^{2} }}}{-\frac{1}{2\sqrt{ 1-x }}} = \lim_{ x \to 1^{-} } \frac{2\sqrt{ 1 - x }}{\sqrt{ 1-x^{2} }} = \lim_{ x \to 1^{-} } \frac{2}{\sqrt{ 1 + x }} = \frac{2}{\sqrt{ 2 }} = \sqrt{ 2 }
$$
##### Esempio:
$$
\lim_{ x \to 0 } \frac{x - \sin x+x^{5}}{x^{3}}
$$
1 modo (SBAGLIATO):
$$
\cancel{
\lim_{ x \to 0 } \frac{x - \sin x+x^{5}}{x^{3}} = \lim_{ x \to 0 } \frac{x \left(  1 - \frac{\sin x}{x} \right) + x^{5}}{x^{3}} = x^{2} = 0
}
$$
Non si fanno i limiti "a pezzi"!

2 modo (SBAGLIATO):
$$
\lim_{ x \to 0 } \frac{x - \sin x+x^{5}}{x^{3}} = \lim_{ x \to 0 } \frac{x - (x + o(x)) +x^{5}}{x^{3}} = \frac{o(x)}{o(x)}
$$
3 modo:
$$
\lim_{ x \to 0 } \frac{x - \sin x+x^{5}}{x^{3}} =^{H} \lim_{ x \to 0 } \frac{1 - \cos x + 5x^{4}}{3x^{2}} =^{H} \lim_{ x \to 0 } \frac{\sin x +20x^{3}}{6x} =^{H} \lim_{ x \to 0 } \frac{\cos x + 60x^{2}}{6} = \frac{1}{6}
$$
## Formula di Taylor (Caso $x_{0} = 0$)
Sia $f$ una funzione definita almeno in un intorno di $x_{0} = 0$ (ma si può fare per ogni punto). Fissiamo un $n \in \mathbb{N}$, sotto opportune ipotesi, esiste un unico polinomio $P_{n}(x)$ tale che:
$$
f(x) = P_{n}(x) + \underbrace{ o(x^{n}) }_{ \text{resto di Peano} }, \qquad x \rightarrow 0
$$
Inoltre $P_{n}(x)$ è dato dalla formula:
$$
P_{n}(x) = f(0) + \frac{f'(0)}{1!}x + \frac{f''(0)}{2!}x^{2} + \frac{f'''(0)}{3!}x^{3} + \dots + \frac{f^{(n)}(0)}{n!}x^{n}=\sum_{k=0}^{n} \frac{f^{(k)}(0)}{k!} x^{k}
$$
##### Oss:
1. $f(x) - P_{n}(x) = o(x^{n}), \qquad x \rightarrow 0$
2. Ipotesi, derivate fino ad ordine $n-1$ definite in un intorno di $x_{0} = 0$, derivata ennesima è sufficiente l'esistenza solo in $x_{0} = 0$.

#### Lemma:
Sia $\phi$ una funzione n-volte derivabile in intorno di $x_{0} = 0$ e tale che:
$$
\phi(0) = \phi'(0) = \phi''(0) = \dots = \phi^{(n)}(0) = 0
$$
Allora $\phi(x) = o(x^{n}), x \rightarrow 0$

#### Dim:
$n = 3$
Con la definizione quasi equivalente di o-piccolo:
$$
\lim_{ x \to 0 }  \frac{\phi(x)}{x^{3}} = \left[ \frac{0}{0} \right]
$$
$$
\lim_{ x \to 0 } \frac{\phi(x)}{x^{3}} =^{H} \lim_{ x \to 0 } \frac{\phi'(x)}{3x^{2}} =^{H} \lim_{ x \to 0 } \frac{\phi''(x)}{6x} =^{H} \lim_{ x \to 0 } \frac{\phi'''(x)}{6} = 0
$$
### Dim formula di Taylor:
$n = 3$
Devo dimostrare che $f(x) - P_{3}(x) = o(x^{3}), \qquad x\rightarrow 0$.

Definisco $\phi(x) = f(x)-P_{3}(x)$, devo verificare le ipotesi del lemma per la funzione $\phi$, ossia:
$$
\phi(0) = \phi'(0) = \phi''(0) = \phi'''(0) = 0
$$
$$
P_{3}(x) = f(0) + f'(0)x + \frac{f''(0)}{2!}x^{2} + \frac{f'''(0)}{3!}x^{3}
$$
In questo esempio bisogna ricordare che le $x = 0$. Infatti non è scritta in maniera esatta.
$$
\begin{align}
\phi(0) = f(0) - P_{3}(0) = f(0) - f(0) &= 0 \\ \\
\phi'(0) = f'(0) - (P_{3}(0))' = f'(0) - \left( f'(0) + f''(0)x + \frac{f'''(0)}{2!}x^{2} \right) = f'(0) - f'(0) &= 0 \\ \\
\phi''(0) = f''(0) - (P_{3}(0))'' = f''(0) - (f''(0) + f'''(0)x) = f''(0) - f''(0) &= 0 \\ \\
\phi'''(0) = f'''(0) - (P_{3}(0))''' = f'''(0) - f'''(0) &= 0
\end{align}
$$
Quindi $\phi(x) = o(x^{3})$ e così ho dimostrato la formula di Taylor fino al terzo grado.

## Formule di Taylor delle funzioni elementari
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

---
### Fatto
$$
f(x) = P_{n}(x) + o(x^{n}), \qquad x \rightarrow 0
$$
Questo polinomio è unico.

---
$$
f(x) = e^{x} \qquad [e^{x}]^{(k)} = e^{x}, \qquad k \in \mathbb{N}
$$
$$
[e^{x}]^{(k)}(0) = e^{x}|_{x = 0} = 1
$$
$$
P_{n}(x) = \sum_{k=0}^{n} \frac{f^{n}(0)}{k!} x^{k} = \sum_{k=0}^{n} \frac{x^{k}}{k!} = 1 + x + \frac{x^{2}}{2!} + \frac{x^{3}}{3!} + \dots 
$$
---
$$
f(x) = \cos x \qquad f'(x) = -\sin x, f''(x) = -\cos x, f'''(x) = \sin x, f''''(x) = \cos x
$$
Fai i conti a casa

---
$$
f(x) = \sin x \qquad f'(x) = \cos x, f''(x) = -\sin x, f'''(x) = -\cos x, f''''(x) = \sin x
$$
Fai i conti a casa

---
$$
f(x) = \log(1 + x) \qquad f'(x) = \frac{1}{1+x} \qquad f''(x) = -\frac{1}{(1+x)^{2}} \qquad f'''(x) = \frac{2}{(1+x)^{3}} \qquad f''''(x) = -\frac{6}{(1+x)^{4}} \qquad f^{(5)}(x) = \frac{24}{(1+x)^{5}} \qquad f^{(6)}(x) = \frac{-120}{(1+x)^{6}}
$$
$$
f^{(k)}(x) = \frac{(-1)^{k+1} (k-1)!}{(1+x)^{k}}
$$
Dimostra a casa per induzione
Fai i conti a casa
$$
f^{(k)}(0) = (-1)^{k+1}(k-1)!
$$
$$
\sum_{k=0}^{n} \frac{f^{(k)}(0)}{k!}x^{k} = \sum_{k=0}^{n} \frac{(-1)^{k+1}(k-1)!}{k!}x^{k} = \sum_{k=0}^{n} \frac{(-1)^{k+1}}{k}x^{k} 
$$
---
Fai tutti gli altri a casa

---
Riprendiamo l'esercizio di prima e proviamo a svolgerlo ora con gli o-piccoli.
$$
\lim_{ x \to 0 } \frac{x - \sin x + x^{5}}{x^{3}}
$$
$$
\frac{x - \sin x + x^{5}}{x^{3}} = \frac{x - \left( x - \frac{x^{3}}{6} + o(x^{3}) \right) + x^{5}}{x^{3}} = \frac{\frac{x^{3}}{6} + o(x^{3})}{x^{3}} = x^{3}\frac{\left( \frac{1}{6} + \frac{o(x^{3})}{x^{3}} \right)}{x^{3}} = \frac{1}{6}
$$
##### Esercizio:
$$
\lim_{ x \to 0 } \frac{x - \sin x + x^{5}}{x^{3} + \log(1 + \arctan ^{11}(\sin x))} = \frac{1}{6}
$$
In questo caso al denominatore conta solo il termine $x^{3}$, perché il resto va come $x^{11} + o(x^{11})$.
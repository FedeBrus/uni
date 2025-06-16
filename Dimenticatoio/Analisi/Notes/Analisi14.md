## Formula di Taylor intorno a $x_{0} \neq 0$
Sia $f$ una funzione $f: \mathbb{R} \rightarrow \mathbb{R}$, sotto opportune ipotesi (tipicamente che la funzione sia derivabile fino all'ordine-1), si ha che esiste un unico polinomio $P_{n}$ di grado $n$, tale che:
$$
f(x_{0} + h) = P_{n}(h) + o(h^{n}) \qquad h \rightarrow 0
$$
In particolare:
$$
\begin{align}
f(x_{0} + h) &= f(x_{0}) + \frac{f'(x_{0})}{1!}h + \frac{f''(x_{0})}{2!}h^{2} + \dots  + \frac{f^{(n)}(x_{0})}{n!}h^{n} + o(h^{n}) \qquad h \rightarrow  0 \\
 & = \sum_{k=0}^{n} \frac{f^{(k)}(x_{0})}{k!}h^{k} + o(h^{n}) \qquad [f^{(0)}(x_{0}) = f(x_{0})]
\end{align}
$$

Scrittura alternativa, pongo $x = x_{0} + h$, quindi $h = x - x_{0}$.
$$
\begin{align}
f(x) &= \sum_{k=0}^{n} \frac{f^{(k)}(x_{0})}{k!}(x-x_{0})^{k} + o((x-x_{0})^{n}) \qquad x \rightarrow  x_{0} \\
 & = f(x_{0}) + \frac{f'(x_{0})}{1!}(x-x_{0}) + \frac{f''(x_{0})}{2!}(x-x_{0})^{2} + \dots  + \frac{f^{(n)}(x_{0})}{n!}(x-x_{0})^{n} + o((x-x_{0})^{n}) \qquad h \rightarrow  0 \\
\end{align}
$$
##### Dim:
$$
g(h) = f(x_{0} + h)
$$
Utilizzando la formula di Taylor in $h = 0$ per la funzione $g$.
$$
g(h) = g(0) + \frac{g'(0)}{1}h + \dots  + \frac{g^{(n)}(0)}{n!}h^{n} + o(h^{n}) \qquad h \rightarrow  0
$$
$$
g(0) = f(x_{0}), g'(h) = f'(x_{0} + h) \implies  g'(0) = f'(x_{0}), g''(h) = f''(x_{0} + h) \implies  g''(0) = f''(x_{0})
$$
Quindi per iterazione $g^{(k)}(0) = f^{(k)}(x_{0})$.

##### Esempio:
$$
f(x) = \arctan(x), \qquad \text{Taylor ordine 3 in } x_{0} = 1
$$
Prima di tutto bisogna calcolare il valore della funzione in $x_{0}$:
$$
\begin{align}
f(1) & = \frac{\pi}{4} \\
f'(x)  & = \frac{1}{1 + x^{2}} \\
f''(x)  & = ((1 + x^{2})^{-1})' = -(1+x^{2})^{-2}(2x) = -\frac{2x}{(1+x^{2})^{2}} \\
f'''(x)  & = \frac{-2(1+x^{2}) - (-2x)(2(1+x^{2})(2x))}{(1+x^{2})^{4}} = \frac{8x^{2}(1+x^{2}) - 2(1+x^{2})^{2}}{(1+x^{2})^{4}} \\
f'(1)  & = \frac{1}{2} \\
f''(1)  & = - \frac{1}{2} \\
f'''(1) & = \frac{1}{2} \\
\arctan(x)  & = \frac{\pi}{4} + \frac{x-1}{2} - \frac{1}{2} \frac{(x - 1)^{2}}{2!} + \frac{1}{2} \frac{(x-1)^{3}}{3!} + o((x-1)^{3}) \qquad x \rightarrow  1
\end{align}
$$

##### Esempio:
$$
f(x) = \cos x \qquad \text{Taylor di oridne 3 in } x_{0} = \frac{\pi}{3}
$$
$$
\begin{align}
f\left( \frac{\pi}{3} \right) &= \frac{1}{2} \\
f'(x) &= -\sin x \\
f''(x) &= - \cos x \\
f'''(x) &= \sin x \\
f'\left( \frac{\pi}{3} \right) &= -\frac{\sqrt{ 3 }}{2} \\
f''\left( \frac{\pi}{3} \right) &= -\frac{1}{2} \\
f'''\left( \frac{\pi}{3} \right) &= \frac{\sqrt{ 3 }}{2} \\
\cos(x) &= \frac{1}{2} - \frac{\sqrt{ 3 }}{2}\left( x-\frac{\pi}{3} \right) - \frac{1}{4}\left( x-\frac{\pi}{3} \right)^{2} + \frac{\sqrt{ 3 }}{12}\left( x-\frac{\pi}{3} \right)^{3} + o\left( \left( x- \frac{\pi}{3} \right)^{3} \right) \qquad x \rightarrow \frac{\pi}{3} \\
\cos\left( \frac{\pi}{3}+ h \right)  & = \cos \frac{\pi}{3}\cos h - \sin \frac{\pi}{3} \sin h  \\
& = \frac{1}{2}\cos h - \frac{\sqrt{ 3 }}{2} \sin h \\
 & = \frac{1}{2} \left(  1 - \frac{h^{2}}{2} + o(h^{3}) \right) - \frac{\sqrt{ 3 }}{2} \left(  h - \frac{h^{3}}{3!} + o(h^{3}) \right) \\
 & = \frac{1}{2} - \frac{\sqrt{ 3 }}{2} h - \frac{1}{4}h^{2} + \frac{\sqrt{ 3 }}{12} h^{3} + o(h^{3}), \qquad h \rightarrow  0
\end{align}
$$
Esiste lo sviluppo al terzo ordine del coseno, non è che non sia possibile, è lo stesso polinomio dello sviluppo al secondo ordine, solo che cambia l'o-piccolo, il coefficiente del termine di grado 3 è semplicemente 0 quindi non si scrive.

##### Esempio:
$$
f(x) = \arctan(\sin x) \qquad \text{Taylor di ordine 3 in } x_{0} = 0
$$
$$
\begin{align}
\arctan t &= t - \frac{t^{3}}{3} + o(t^{3}), \qquad t \rightarrow 0 \\
\arctan(\sin x) &= \sin x - \frac{1}{3} (\sin x)^{3} + o((\sin x)^{3}), \qquad \sin x \rightarrow 0 \\
 & = x - \frac{x^{3}}{3!} +o(x^{3}) -\frac{1}{3}\left( x - \frac{x^{3}}{3!} + o(x^{3}) \right)^{3} + \left(o\left( x - \frac{x^{3}}{3!} + o(x^{3}) \right)^{3}\right), \qquad x \rightarrow 0 \\
\end{align}
$$
$$
\left( x - \frac{x^{3}}{3!} + o(x^{3}) \right)^{3} = \text{?}
$$
In questo caso ogni termine che esce fuori avrà potenza maggiore di $3$, quindi l'unico termine che conta e $x^{3}$, tutto il resto può essere scritto con $o(x^{3})$.
$$
\left( x - \frac{x^{3}}{3!} + o(x^{3}) \right)^{3} = x^{3} + o(x^{3})
$$
L'ultimo termine che è un'o-piccolo diventa dunque $o(x^{3} + o(x^{3})) = o(x^{3}) + o(o(x^{3})) = o(x^{3}) + o(x^{3}) = o(x^{3})$.
$$
x - \frac{x^{3}}{3!} - \frac{x^{3}}{3} + o(x^{3}) = x - \frac{x^{3}}{2} + o(x^{3}), \qquad x\rightarrow 0
$$
$$
f^{(2024)}(0) = 0
$$
Perché è dispari e ogni coefficiente di termine pari è $0$, basta guardare la serie di Taylor della funzione attorno a $x_{0}$, che in questo caso è ben nota poiché $x_{0} = 0$.
## Teorema esistenza degli zeri
Sia $[a,b] \subseteq \mathbb{R}$ intervallo chiuso e limitato e sia $f:[a,b] \rightarrow \mathbb{R}$ continua in tutto l'intervallo.
Supponiamo che $f(a) \cdot f(b) < 0$ (cioè che i segni sono discordi).
Allora $\exists c \in (a, b)$ tale che $f(c) = 0$.

Notare che è di fondamentale importanza la continuità di tale funzione.
Se avessimo una funzione non continua non funzionerebbe:
![[immagine_esempio_dimostrazione]]

Se avessimo ad esempio $f(x) = x^{2} - 2$ che è continua ma $f:[0,2] \rightarrow  \mathbb{Q}$.
$f(a) = -2$ e $f(b) = 2$
Ipotizziamo che esista $c$:
$$
f(c) = c^{2} - 2 = 0 \implies  c = \sqrt{ 2 } \not\in \mathbb{Q}
$$
##### Dim:
$f(a) < 0, f(b) > 0$
![[immagine_esempio_dimostrazione]]
Pongo $c = inf\{x \in [a, b] | f(x) > 0\}$

Claim: $f(c) = 0$

Che vuol dire che $c$ è l'inf?
1. $f(x) \leq 0 \qquad \forall x \leq c$
2. $\forall \varepsilon > 0 \qquad \exists x \in [c, c + \varepsilon]$ per cui $f(x) > 0$

Per assurdo, sia $f(c) > 0$, poiché $f$ è continua, esiste un intervallo centrato in $c$ tale che $f > 0$ per ogni elemento di questo intervallo. Ovvero troverò sempre un intervallo abbastanza piccolo per il quale c'è un po' di spazio tra $c$ e l'asse $x$. Ma questo contraddice il primo punto, poiché esisterebbe $x < c : f(x) > 0$, quindi per forza $f(c) \not> 0$.

Per assurdo, sia $f(c) < 0$, poiché $f$ è continua, esiste un intervallo centrato in $c$ tale che $f < 0$ per ogni elemento di questo intervallo. Ovvero troverò sempre un intervallo abbastanza piccolo per il quale c'è un po' di spazio tra $c$ e l'asse $x$. Ma questo contraddice il secondo punto, poiché esisterebbe $x > c : f(x) < 0$ quindi per forza $f(c) \not< 0$.

Da cui si deduce che $f(c) = 0$.

### Prima variante
Sia $f:[a, b] \rightarrow \mathbb{R}$ continua. Sia $\lambda \in \mathbb{R}$.
Supponiamo che $f(a) < \lambda$ e che $f(b) > \lambda$, o viceversa.
Allora $\exists c \in (a, b)$ tale che $f(c) = \lambda$.

Per dimostrare basta porre $g(x) = f(x - \lambda)$

##### Esempio:
Dimostrare che l'equazione $x^{2}-\sin x^{3} = 2024$ ha almeno una soluzione positiva.
$$
f(x) = x^{2} - \sin x^{3}
$$
Sappiamo che $f$ è continua perché è composizione di funzioni continue.
Bisogna ora trovarsi l'intervallo $[a,b]$ per poter applicare la prima variante del teorema dell'esistenza degli zeri.
Quindi devo trovare $[a, b] | f(a) < 2024, f(b) > 2024$.

Noto che se $a = 0$, allora $f(a) = f(0) = 0 < 2024$.
Noto anche che $\sin x^{3}$ oscilla al massimo tra $1$ e $-1$. Quindi ciò che conta veramente è $x^{2}$.
Prendiamo $b = 50$, allora $f(b) = f(50) \approx 2500 > 2024$.

Dunque $[a,b] = [0, 50]$.
Sappiamo che esiste un punto $c \in (0, 50)$ tale che $f(c) = 2024$. Quindi $c$ è positiva.

##### Esempio:
$$
f(x) = x^{9} + \log(1 + x^{34}) - \sin(x^{258})
$$
Se vediamo $f: \mathbb{R} \rightarrow \mathbb{R}$, è surgettiva?
In pratica dobbiamo vedere se per ogni retta che tiriamo ad ogni altezza di $y$, quindi provando ogni $\lambda$, esiste un punto di intersezione con il grafico.

Voglio dunque applicare la prima variante del teorema esistenza degli zeri. Devo trovare $[a,b]$ in cui $f(a) < \lambda$, $f(b) > \lambda$, con $\lambda \in \mathbb{R}$ prefissato.

Notiamo che $\lim_{ x \to -\infty } f(x) = -\infty$, $\lim_{ x \to +\infty } f(x) = +\infty$

### Fatto:
$f: \mathbb{R} \rightarrow \mathbb{R}$ continua e $\lim_{ x \to  -\infty } f(x) = -\infty$, $\lim_{ x \to +\infty }f(x) = +\infty$ (o viceversa), allora $f$ è surgettiva.
Variante: $f:(0, +\infty) \rightarrow \mathbb{R}$ continua, se $\lim_{ x \to 0^{+} } f(x) = -\infty$ e $\lim_{ x \to +\infty } f(x) = +\infty$, allora $f$ è surgettiva.
Variante: $f:(a, b) \rightarrow \mathbb{R}$ continua, se $\lim_{ x \to a^{+} } f(x) = -\infty$ e $\lim_{ x \to b^{-} } f(x) = +\infty$, allora $f$ è surgettiva.

## Studio locale di funzioni
Obiettivo: caratterizzare il grafico di funzioni nell'intorno di un punto prefissato $x_{0}$.

### Teorema monodromia 1
Sia $f'(x_{0}) > 0$, allora $\exists \delta > 0$ tale che $f(x) > f(x_{0}), \forall x (x_{0}, x_{0}+\delta]$, $f(x) < f(x_{0}), \forall x \in [x_{0} - \delta, x_{0})$.

##### Dim:
$f'(x_{0}) = \lim_{ h \to 0 } \frac{f(x_{0} + h) - f(x_{0})}{h} > 0, \exists \delta > 0 : \forall h \in [-\delta, \delta] \setminus \{ 0 \}, \frac{f(x_{0}+h)-f(x_{0})}{h} > 0$.

2 possibilità: 
1. $h \in (0, \delta] \implies  h > 0, f(x_{0} + h) - f(x_{0}) > 0 \implies f(x_{0}+h) > f(x_{0})$
2. $h \in [-\delta, 0) \implies h < 0, f(x_{0}+h) -f(x_{0}) < 0 \implies  f(x_{0}+h) < f(x_{0})$

In entrambi i casi i segni di numeratore e denominatore del rapporto incrementale sono concordi.

##### Oss:
se $f'(x_{0}) < 0$, la dimostrazione è simmetrica.


Rimane da discutere quando la derivata è nulla ($f'(x_{0}) = 0$):
#### Definizione:
I punti $x$ per cui $f'(x) = 0$ sono detti punti stazionari.

Ci sono 5 possibili configurazioni:

1. ![[tipologia1]]
2. ![[tipologia2]]
3. ![[tipologia3]]
4. ![[tipologia4]]
5. Funzioni che non hanno un intervallo di $x_{0}$ in cui $f$ ha segno definito.


A parte per le funzioni della quinta categoria, dove ogni derivata di qualsiasi ordine sarà $0$.

## Criterio delle derivate successive
Sia $f'(x_{0}) = 0$.
Supponiamo che ci sia $k \in \mathbb{N}, k \geq 2$ per cui:
$$
f^{(1)}(x_{0}) =
f^{(2)}(x_{0}) =
f^{(3)}(x_{0}) = 
\dots  =
f^{(k-1)}(x_{0}) = 0
$$
ma $f^{(k)}(x_{0}) \neq 0$.

Ho 4 possibilità:
1. se $k$ è pari e $f^{(k)}(x_{0}) > 0 \implies$ ho minimo locale
2. se $k$ è pari e $f^{(k)}(x_{0}) < 0 \implies$ ho un massimo locale
3. se $k$ è dispari e $f^{(k)}(x_{0}) > 0 \implies$  ho un flesso tangente orizzontale crescente locale
4. se $k$ è dispari e $f^{(k)}(x_{0}) < 0 \implies$  ho un flesso tangente orizzontale decrescente locale

Se le prime $k-1$ derivate sono tutte nulle ma la k-esima non esiste allora sono nel 5° caso.

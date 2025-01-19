Tipicamente equazioni in cui l'incognita è una funzione e l'equazione mette in correlazione la funzione e alcune delle sue derivate.
Un'equazione differenziale ordinaria è qualcosa del genere:
##### Esempio
$$
u'(t) + [u(t)]^{2} + \sin(u(t)) = 0
$$
Dove l'incognita è la funzione $t \mapsto u(t)$

##### Esempio
$$
u''(t) + u'''(t) + \cot(t)u''''(t) + \sqrt{ u(t) } + t^{6} = 0
$$
### Def
Si dice ordine dell'equazione differenziale ordinaria il massimo ordine di derivazione di $u$.
L'esempio precedente è un'equazione differenziale ordinaria del 4° ordine.

La definizione più astratta di equazione differenziale ordinaria è (non da sapere):
$$
\Phi(u(t), u'(t), u''(t), \dots, u^{(n)}(t), t)  = 0
$$
### Def
Diremo che una equazione differenziale ordinaria è di tipo normale se il termine di derivazione più alto è esplicitato rispetto agli altri, ossia:
$$
u^{(n)}(t) = F(u(n), u'(t), \dots, u^{(n - 1)}(t), t)
$$
##### Esempio
$$
u''(t) = (u'(t))^{2} + \sin(t^{2})
$$
##### Esempio
$$
(u'(t))^{3} + \cos(t) = t^{2} \Longleftrightarrow (u'(t))^{3} =t^{2}-\cos(t) \Longleftrightarrow u'(t) = \sqrt[3]{ t^{2}-\cos(t) }
$$
Questa ad esempio non è normale, perché la derivata di grado massimo non è "isolata". Ma può essere ridotta in forma normale unica.
##### Esempio
$$
(u'(t))^{2} =  u(t) + 77
$$
Siccome non conosciamo il dominio non possiamo essere sicuri che la radice esista.

Siccome la variabile $t$ è sempre quella, d'ora in poi $u(t)$ viene scritta come $u$.

### Def
Una equazione differenziale ordinaria si dice autonoma se la variabile $t$ compare solo come variabile della funzione incognita $u$.
Altrimenti non autonoma.

### Def
Una equazione differenziale si dice lineare se la funzione e le sue derivate compaiono nella equazione differenziale solo al "primo ordine".

##### Esempio
$$
a_{k}(t)u^{(k)}(t)  + a_{k-1}u^{(k-1)}(t) + a_{k-2}u^{(k-2)}(t) + \dots  + a_{1}(t)u'(t) + a_{0}u(t) = \underbrace{ f(t) }_{ \text{termine noto} }
$$
Se il termine noto è nullo l'equazione si dice omogenea.

##### Esempio
$$
u'''(t) + \cos(t^{2})u''(t) + \left( \frac{\arctan(t)}{\cosh(t)} \right) u'(t) + t^{3}u(t) = \sin(t^{5})
$$
EDO di primo ordine lineare ma non omogenea.
##### Esempio
$$
u' + t^{2}u = 42
$$
EDO di primo ordine lineare ma non omogenea.
##### Esempio
$$
u'+t^{2}+u^{2}=42
$$
EDO di primo ordine non lineare.
##### Esempio
$$
u' + \cos(tu) = 42
$$
EDO di primo ordine non lineare.
##### Esempio
$$
u'' + u'u = 0
$$
EDO di secondo ordine non lineare.

### Def
Una equazione differenziale lineare si dice a coefficienti costanti se tutti gli $a$ sono costanti.

Nel corso vedremo 3 grandi classi di EDO.
## Classe 1: equazioni a variabili separabili
Equazione differenziali ordinaria del primo ordine in forma normale.
$$
u'(t) = F(u(t), t)
$$
In cui $F$ è scrivibile come $F(t, u(t)) = f(t)g(u(t))$, quindi:
$$
u'(t) = f(t)g(u(t))
$$
##### Esempio
$$
\begin{align}
u' + t &= ut \\
u' &= ut - t \\
u' &= t(u - 1)
\end{align}
$$
Con $f(t) = t$ e $g(u) = u - 1$.
##### Esempio
$$
u' = t^{2}u^{3}
$$
Con $f(t) = t^{2}$ e $g(u) = u^{3}$.
##### Esempio
$$
u' = u^{4}
$$
Con $f(t) = 1$ e $g(u) = u^{4}$.

#### Oss:
Tutte le EDO di 1° ordine in forma normale e autonome sono automaticamente a variabile separabili. Perché sono $u' = g(u)$.
## Classe 2: 1° ordine lineari
$$
a_{1}(t)u'(t) + a_{0}(t)u(t) = f(t)
$$
Se posso dividere per $a_{1}(t)$, allora:
$$
u'(t) + a(t)u(t) = b(t)
$$
## Classe 3: equazioni differenziali ordinarie di ordine $k$ lineari e a coefficienti costanti
$$
a_{k}u^{(k)}(t) + a_{k-1}u^{(k - 1)}(t) + \dots + a_{0}u(t) = f(t)
$$
$$
\sum_{j=0}^{k} a_{j}u^{(j)}(t) = f(t),\qquad u^{(0)}(t) = u(t), \qquad a_{j} \in \mathbb{R}, j =0, \dots,k
$$
##### Esempio
$$
u' = 2u \implies  u(t) = e^{2t}
$$
Mentre $u(t) = e^{2t} + 10^{23}$ non è soluzione. Mentre $u(t) = 10^{23}e^{2t}$ è soluzione. Quindi $u(t) = ce^{2t}, \forall c \in \mathbb{R}$, che è una famiglia di soluzioni ad 1 parametro.
##### Esempio
$$
u'' = -u
$$
Si hanno come soluzioni $u(t) = \cos(t)$ e $u(t) = \sin(t)$, quindi le soluzioni sono $u(t) = a\cos(t)$ e $u(t) = b\sin(t)$ con $a, b \in \mathbb{R}$ sono ancora soluzioni. Siccome è lineare, allora $u(t) = a\cos(t) + b\sin(t)$ è ancora soluzione, che è una famiglia a due parametri di soluzioni. Il numero di parametri è l'ordine dell'equazione differenziale.
##### Esempio
$$
u' = -u^{2}
$$
$u(t) = \frac{1}{t}$ è soluzione. Ma $u(t) = 2024 \cdot \frac{1}{t}$ non è soluzione. Invece $u(t) = \frac{1}{t-2024}$ è soluzione. Quindi $u(t) = \frac{1}{t + a}, \forall a \in \mathbb{R}$ è una famiglia di soluzioni ad 1 parametro.

### Fatto generale:
Le soluzioni di una equazione differenziale ordinaria sono infinite e dipendono da un numero di parametri tanti quanto è l'ordine dell'equazione differenziale ordinaria.  

## Problema di Cauchy
$$
\begin{cases}
u^{(k)}(t) = F(u^{(k-1)}(t), \dots , u(t), t) \\
u(t_{0}) = u_{0} \\
u'(t_{0}) = u_{1} \\
\dots \\
u^{(k-1)}(t_{0}) = u_{k - 1}
\end{cases}
$$
$u_{0}, u_{1}, \dots , u_{k-1}$ sono dati del problema.
Dunque da infinite soluzioni si passa a una sola soluzione.
##### Esempio
$$
\begin{cases}
u' = 2u \\
u\left( -\frac{1}{2} \right) = 2
\end{cases}
$$
Avevamo trovato che $u(t) = ce^{2t}, \qquad c \in \mathbb{R}$.
Quindi:
$$
\begin{align}
2 &= ce^{2\left(-\frac{1}{2}\right)} \\
2 &= \frac{c}{e} \\
c  &= 2e
\end{align}
$$
La soluzione al problema di Cauchy è $u(t) = 2e \cdot e^{2t} = 2e^{2t + 1}$.
Per verificare:
$u\left( -\frac{1}{2} \right) = 2$, $u' = 4e^{2t + 1} = 2u = 2 \cdot 2e^{2t + 1}$.
##### Esempio
$$
\begin{cases}
u'' +3u'+5u = \sin(t) \\
u(2) = 5 \\
u'(2) = 7
\end{cases}
$$
Questo è un problema di Cauchy.
##### Esempio
$$
\begin{cases}
u'' +3u'+5u = \sin(t) \\
u(2) = 5 \\
u'(3) = 9
\end{cases}
$$
Questo non è un problema di Cauchy, perché deve esserci un solo $t_{0}$.
##### Esempio
$$
\begin{cases}
u'' +3u'+5u = \sin(t) \\
u(2) = 5 \\
u''(2) = 13
\end{cases}
$$
Questo non è un problema di Cauchy, perché deve esserci $u'(t_{0}) = u_{1}$.

### Teorema di esistenza
$$
\begin{cases}
u^{(k)}(t) = F(u^{(k-1)}(t), \dots, u(t), t) \\
u(t_{0}) = u_{0} \\
\dots \\
u^{(k-1)}(t_{0}) = u_{k-1}
\end{cases}
$$
Se $F$ è continua, allora la soluzione esiste sempre, localmente, ossia $u:(a,b)\rightarrow \mathbb{R}, t_{0}\in(a,b)$.
### Teorema di esistenza e unicità
$$
\begin{cases}
u^{(k)}(t) = F(u^{(k-1)}(t), \dots, u(t), t) \\
u(t_{0}) = u_{0} \\
\dots \\
u^{(k-1)}(t_{0}) = u^{k-1}
\end{cases}
$$
Se $F$ è differenziabile, allora la soluzione esiste ed è unica sempre, localmente, ossia $u:(a,b)\rightarrow \mathbb{R}, t_{0}\in(a,b)$.

## Risoluzioni
### Classe 1: equazioni a variabili separabili
$$
u' = \underbrace{ u^{2} }_{ g } \cdot \underbrace{ \cos(t) }_{ f }
$$
Strategia:
	1. Separare
	2. Integrare
	3. Ricavare

##### Esempio
#### Separare
$$
\begin{align}
\frac{du}{dt} &= u^{2}\cos(t) \\
\frac{du}{u^{2}}  &= \cos(t)dt \\
\end{align}
$$
#### Integrare
$$
\begin{align}
\int \frac{du}{u^{2}} &= \int \cos(t) dt \\
-\frac{1}{u} &= \sin(t) + c
\end{align}
$$
#### Ricavare
$$
\begin{align}
\frac{1}{u} &= -\sin(t) + c \\
u &= \frac{1}{c-\sin(t)}
\end{align}
$$
##### Esempio
$$
\begin{cases}
u'(t) = \cos(t) u^{2} \\
u(0) = 3
\end{cases}
$$
#### Determinare $c$
$$
u(0) = \frac{1}{c} = 3 \Longleftrightarrow c = \frac{1}{3}
$$
Soluzione unica è:
$$
u(t) = \frac{1}{\frac{1}{3}-\sin(t)} = \frac{3}{1 - 3\sin(t)}
$$
#### Verifica
$u(0) = \frac{3}{1-0} = 3$ e $u'(t) = 3 \cdot \frac{-1}{(1-3\sin(t))^{2}} \cdot (-3\cos(t)) = \frac{9\cos(t)}{(1-3\sin(t))^{2}} = \cos(t) \cdot \left(\frac{3}{1-3\sin(t)}\right)^{2}$.

#### Studiare la soluzione

### Def
Si dice intervallo massimale di esistenza della soluzione di una equazione differenziale ordinaria l'intervallo più grande in cui la soluzione esiste e che contiene il $t_{0}$ del corrispondente problema di Cauchy.

Quindi, tornando all'esempio:
$$
\begin{align}
1 - 3\sin(t) &\neq 0 \\
\sin(t) \neq \frac{1}{3} \\
t \neq \arcsin\left( \frac{1}{3} \right)
\end{align}
$$
Quindi $t = \arcsin\left( \frac{1}{3} \right) + 2k\pi, k \in \mathbb{Z}$ e $t = \pi - \arcsin\left( \frac{1}{3} \right) + 2k\pi, k \in \mathbb{Z}$.

in ordine:
$$
\begin{align}
&\dots \\
&-\pi - \arcsin\left( \frac{1}{3} \right) \\
&\arcsin\left( \frac{1}{3} \right) \\
&\pi-\arcsin\left( \frac{1}{3} \right) \\
&\arcsin\left( \frac{1}{3} \right) +2\pi \\
&\dots
\end{align}
$$
Quindi l'intervallo massimale è $\left( -\pi -\arcsin\left( \frac{1}{3} \right), \arcsin\left( \frac{1}{3} \right) \right)$.

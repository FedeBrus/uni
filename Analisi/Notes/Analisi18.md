## Teoria dell'integrazione

#### Notazione
Integrali propri
Integrali impropri

Bisogna specificare la zona di integrazione. Nel caso degli integrali propri è un intervallo chiuso e limitato $[a, b], a, b \in \mathbb{R}$.
La funzione integranda deve essere $f: [a, b] \rightarrow \mathbb{R}$, limitata, ovvero $\exists M\in \mathbb{R} : |f(x)| \leq M, \forall x \in [a, b]$.
$$
\int_{a}^b f(x) dx
$$
Per definizione:
$$
\int_{a}^{a} f(x)dx = 0
$$
$$
\int_{b}^{a} f(x)dx = -\int_{a}^{b} f(x)dx
$$
### Significato geometrico
$$
\int_{a}^{b} f(x)dx = \text{A(rettangoloide) con segno}
$$

### Def integrali
3 passi:
1. Caso banale
2. Caso quasi banale
3. Caso generale

#### Caso banale (funzioni costanti)
$$
f(x) = \lambda \in \mathbb{R}, \qquad \forall x \in [a, b]
$$
$$
\int_{a}^{b}f(x)dx = A(R) = \lambda(b - a)
$$
#### Caso quasi banale (funzioni a tratti)
Funzione definite a tratti in $[a,b]$. $a = x_{0} < x_{1} < x_{2} < \dots  < x_{n} = b$.
$$
f(x) = \lambda_{i} \in \mathbb{R}, \qquad \forall x \in [x_{i-1}, x_{i}], \forall i = 1, \dots, n
$$
$$
\int_{a}^{b}f(x)dx = A(R_{1}) + A(R_{2}) + \dots + A(R_{n}) = \lambda_{1}(x_{1} - x_{0}) + \lambda_{2}(x_{2}-x_{1}) + \dots + \lambda_{n}(x_{n} - x_{n - 1}) = \sum _{i = 1}^{n} = \lambda_{i}(x_{i} - x_{i - 1})
$$
#### Caso generale
Considerando una funzione $f(x): [a, b] \rightarrow \mathbb{R}$ limitata. Si fa un'approssimazione da sotto e da sopra con funzioni a tratti.

L'approssimazione dipende dalla suddivisione di $[a, b]$. Per un'approssimazione migliore bisogna prendere una suddivisione infinitesimale di $[a, b]$.
$$
\Psi = \bigg\{ \int_{a}^{b} \psi(x)dx \bigg| \psi(x) \geq f(x), \forall x \in [a, b] \bigg\}
$$
$$
\Phi = \bigg\{ \int_{a}^{b} \phi(x)dx \bigg| \phi(x) \leq f(x), \forall x \in [a, b] \bigg\}
$$
I due insieme sono non vuoti perché $-M \leq f(x) \leq M, \forall x \in [a, b]$ e quindi $y = M \in \Psi$ e $y = -M \in \Phi$, perché $f$ è limitata per ipotesi. Perciò $\Phi, \Psi \neq \emptyset$.

$inf(\Psi)$ e $sup(\Phi)$ sono sicuramente numeri reali perché non vuoti e limitati da $M$ e $-M$.
$$
\begin{align}
inf(\Psi) &= I^{+}(f, [a, b]) \\
sup(\Phi) &= I^{-}(f, [a, b])
\end{align}
$$
Questi vengono chiamati integrali superiori e inferiori rispettivamente.
C'è un teorema che garantisce che l'elemento separatore tra i due integrali è unico.

### Teorema
Per ogni funzione $f:[a,b] \rightarrow  \mathbb{R}$ limitata, gli integrali superiore e inferiore esistono sempre sempre come numeri reali e vale che:
$$
I^{-}(f,[a,b]) \leq I^{+}(f, [a,b])
$$
### Def
La funzione limitata $f:[a,b] \rightarrow \mathbb{R}$ è integrabile secondo Riemann in $[a,b]$, se vale che 
$$
I^{-}(f, [a,b]) = I^{+}(f, [a,b])
$$
Quando questo accade definisco:
$$
\int_{a}^{b} f(x)dx= I^{+}(f, [a, b]) = I^{-}(f, [a,b])
$$
##### Esempio
Funzione limitata ma non integrabile (funzione Dirichlet):
$$
\chi: [0, 1]  \rightarrow \mathbb{R}
$$
$$
\chi(x) = \begin{cases}
1 \text{ se } x \in \mathbb{Q} \cap [0, 1] \\
0 \text{ se } x \notin \mathbb{Q} \cap [0, 1]
\end{cases}
$$
Nell'intervallo $[0, 1]$ ci sono infiniti razionali e infiniti irrazionali.
Questa funzione non è graficabile. Tutte le funzioni che approssimano da sopra stanno sopra $1$ mentre tutte le funzioni che approssimano da sotto stanno sotto $0$. L'integrale inferiore è $1$, mentre l'integrale superiore è $0$.
$$
I^{+}(\chi, [0, 1]) = 1 \neq 0 = I^{-}(\chi, [0, 1])
$$
### Teorema
Si ha che $I^{+}=I^{-}$ nei seguenti casi (con $f$ limitata):
1. $f$ è monotona
2. $f$ è continua in $[a,b]$
3. $f$ è continua a tratti con salti di numero finito

## Proprietà dell'integrale
$$
\int_{a}^{b}f(x)dx + \int_{a}^{b}g(x)dx = \int_{a}^{b} (f(x) + g(x))dx
$$
$$
\forall \lambda \in \mathbb{R}, \int_{a}^{b} \lambda f(x)dx = \lambda \int_{a}^{b}f(x)dx
$$
L'integrazione è lineare sullo spazio lineare delle funzioni integrabili secondo Riemann in $[a, b]$. (Anche la derivata è un'operazione lineare).

$$
\int_{a}^{b}f(x)dx = \int_{a}^{c}f(x)dx + \int_{c}^{b} f(x)dx, \text{ con } a \leq c \leq b
$$
La stessa formula funziona anche con $c$ fuori da $[a, b]$ (il segno si inverte poiché $c > b$), sempre che $f$ sia integrabile in $[a, c]$.
$$
\bigg|\int_{a}^{b}f(x)dx \bigg| \leq \int_{a}^{b}|f(x)|dx
$$

## Criterio di integrabilità
Una funzione $f:[a,b]\rightarrow \mathbb{R}$ è integrabile secondo Riemann in $[a, b]$ se $\forall\varepsilon > 0$ esistono 2 funzioni a tratti $\phi, \psi$ in $[a, b]$, tali che:
1. 
$$
\phi(x) \leq f(x) \leq \psi(x), \qquad \forall x \in [a, b]
$$
2. 
$$
\int_{a}^{b}(\psi(x)-\phi(x))dx < \varepsilon
$$
### Dim (non propriamente)
Divido in $n$-intervalli in modo che ogni intervallo abbia ampiezza $\frac{b-a}{n}$.

$$
\left( \frac{b-a}{n} \right)(f(b)-f(a)) < \varepsilon
$$
Quindi dato un qualsiasi $\varepsilon$ ciò vale con un $n$ sufficientemente piccolo.

##### Esempio
$$
\int_{0}^{2}(2x + 1)dx
$$
##### Esempio
$$
\int_{-2}^{1} |x| dx
$$
##### Esempio
$$
\int_{0}^{2} \sqrt{ 4-x^{2} } dx
$$
$$
\begin{align}
y &= f(x) = \sqrt{ 4-x^{2} } \\
y^{2} & = 4 - x^{2} \\
y^{2} +x^{2} &= 4
\end{align}
$$
che è la circonferenza centrata in $O$ con raggio $r = 2$.

## Calcolo di integrali

### Def
Sia $f:[a,b] \rightarrow \mathbb{R}$ continua. 
Si dice che $F:[a,b]\rightarrow \mathbb{R}$ è primitiva di $f$ in $[a,b]$ se succede:
$$
F'(x) = f(x), \qquad \forall x \in [a, b]
$$

### Tecnica di calcolo
Sia $F$ una qualunque primitiva di $f$ in $[a, b]$, allora per ogni sotto-intervallo $[c, d] \subseteq [a, b]$ sia ha che $\int_{c}^{d}f(x)dx = F(d)-F(c)$.

#### Notazione
$$
F(d) - F(c) = [F(x)]^{d}_{c}
$$
#### Lemma
Siano $F_{1}, F_{2}$ 2 primitive di $f$ in $[a,b]$, allora $F_{1}-F_{2}$ è funzione costante in $[a, b]$. (Se le primitive sono definite in intervalli che "non si toccano", può farsi che la loro differenza sia una costante in un intervallo e un'altra costante in un altro).

### Dim
Pongo $G(x) = F_{1}(x) - F_{2}(x)$, bisogna far vedere che $G(x) = G(a), \forall x \in [a, b]$.
Quindi $G'(x) = F_{1}'(x)-F_{2}'(x), \forall x \in [a, b]$.
Ma allora $G'(x) = f(x) - f(x) = 0, \forall x \in [a, b]$.
Prendo $G(x) - G(a)$ e uso il teorema di Lagrange.
$G(x) - G(a) = G'(c)(x - a) = 0$. Ma allora la funzione è costante e il lemma è stato dimostrato.

#### Passo 2
Sia $f:[a, b] \rightarrow \mathbb{R}$ e si vari l'estremo di integrazione.
$$
\Phi(x) = \int_{a}^{x}f(t)dt
$$
Questa si chiama funzione integrale.
Prendiamo 2 punti arbitrari $c, d \in [a, b]$.
$$
\int_{c}^{d}f(x)dx = \int_{a}^{d}f(x)dx - \int_{a}^{c}f(x)dx = \Phi(d) - \Phi(c) = [\Phi(x)]^{d}_{c}
$$
Così sembrerebbe che $\Phi$ sia una primitiva, dato che risponde al lemma, difatti il suo risultato è un'area, ovvero un valore costante.

### Teorema Media Integrale
Sia $f:[a,b] \rightarrow \mathbb{R}$ continua (ossia integrabile).
Allora $\exists c\in[a,b]$ tale che:
$$
\int_{a}^{b}f(x)dx = f(c)(b-a)
$$
### Dim
Essendo continua in un intervallo chiuso, per Weierstrass, esistono massimo e minimo di $f$ in $[a,b]$.
$$
\begin{align}
M = max\{ f(x) | x \in [a, b] \} \\
m = min\{ f(x) | x \in [a, b] \}
\end{align}
$$
$$
\begin{align}
m(b-a) \leq &\int_{a}^{b}f(x)dx \leq M(b-a) \\
m \leq &\frac{\int_{a}^{b}f(x)dx}{b-a} \leq M
\end{align}
$$
Per la prima variante del teorema dell'esistenza degli zeri $\exists x \in [a, b]$ tale che $f(c) = \lambda = \frac{\int_{a}^{b}f(x)dx}{b - a}$

## Teorema fondamentale del calcolo integrale
La funzione integrale $\Phi$ è primitiva di $f$ in $[a, b]$ ossia $\Phi'(x) = f(x), \forall x \in [a, b]$.

### Dim
Scelgo $x_{0} \in [a, b]$.
Bisogna dimostrare che $\Phi'(x_{0}) = f(x_{0})$.
Il rapporto incrementale di $\Phi$ è:
$$
\frac{\Phi(x_{0}+ h) - \Phi(x_{0})}{h} = \frac{1}{h} \left( \int_{a}^{x_{0}+h}f(x)dx - \int_{a}^{x_{0}}f(x)dx \right) = \frac{1}{h} \left( \int_{a}^{x_{0}+h}f(x)dx + \int_{x_{0}}^{a}f(x)dx \right) = \frac{1}{h} \int_{x_{0}}^{x_{0}+h}f(x)dx
$$
Applico il teorema della media integrale e trovo
$$
\int_{x_{0}}^{x_{0}+h} f(x)dx = f(c(x_{0}, h))h
$$
Ma allora il rapporto incrementale:
$$
\frac{1}{h} f(c(x_{0}, h)) h = f(c(x_{0}, h))
$$
Se $h \rightarrow 0 \implies c(x_{0},h)\rightarrow x_{0}$ 
$$
\lim_{ h \to 0 } \frac{\Phi(x_{0}+h) - \Phi(x_{0})}{h} = \lim_{ h \to 0 } f(c(x_{0}, h)) = f(x_{0}) \text{ per continuità}
$$
ma allora:
$$
\lim_{ h \to 0 } \frac{\Phi(x_{0}+h) - \Phi(x_{0})}{h} = \Phi'(x_{0})
$$
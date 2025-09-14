## Criterio delle derivate successive

### Dim:
$$
f(x_{0}+h) = f(x_{0}) + f'(x_{0})h + \frac{f''(x_{0})}{2!}h^{2}+\dots+\frac{f^{(k)}(x_{0})}{k!}h^{k} + o(h^{k}) \qquad h \rightarrow 0
$$
Con la supposizione che tutte le derivate fino alla $(k-1)$ esima siano nulle.
$$
f(x_{0}+h) = f(x_{0}) + \frac{f^{(k)}(x_{0})}{k!}h^{k} + o(h^{k}) \qquad h \rightarrow 0
$$
$$
\frac{f(x_{0} + h) - f(x_{0})}{h^{k}} = \frac{f^{(k)}(x_{0})}{k!} + \frac{o(h^{k})}{h^{k}} \qquad h \rightarrow 0
$$
$$
\frac{f(x_{0} + h) - f(x_{0})}{h^{k}} = \frac{f^{(k)}(x_{0})}{k!} \qquad h\rightarrow 0
$$

Facciamo 1° e 4° caso.

1° caso:
$k$ è pari e $f^{(k)}(x_{0}) > 0$, guardo il limite:
$$
\lim_{ h \to 0 } \frac{f(x_{0}+h)-f(x_{0})}{h^{k}} = \frac{f^{(k)}(x_{0})}{k!} > 0
$$
Per il teorema della conservazione dei segni, visto che $f^{(k)}(x_{0})>0$, per ipotesi, e $k! > 0$ sicuramente, $\exists \delta > 0 : \frac{f(x_{0}+h)-f(x_{0})}{h^{k}}> 0 \qquad \forall h \in [-\delta, \delta] \setminus \{ 0 \}$

Abbiamo 2 sotto-casi:
1° $h \in (0, \delta] \implies h > 0 \implies h^{k} > 0 \implies f(x_{0} + h) - f(x_{0}) > 0 \Longleftrightarrow f(x_{0}+h) > f(x_{0})$
2° $h \in [-\delta, 0) \implies h < 0 \implies h^{k} > 0 \implies f(x_{0}+h)- f(x_{0}) > 0\Longleftrightarrow f(x_{0}+h) > f(x_{0})$

Visto che $k$ è pari, $h^{k}$ è positivo in entrambi i casi, e per il teorema della conservazione dei segni il numeratore deve essere per forza positivo. 

Mettendo insieme i due sotto-casi, ho che $x_{0}$ è un punto di minimo. Perché andando sia a destra che a sinistra aumenta, con $\delta$ sufficientemente piccolo.
Il 1° caso è dunque giustificato.

4° caso:
$k$ è dispari e $f^{(k)}(x_{0}) < 0$, guardo il limite:
$$
\lim_{ h \to 0 } \frac{f(x_{0}+h)-f(x_{0})}{h^{k}} = \frac{f^{(k)}(x_{0})}{k!} < 0
$$
Per il teorema della conservazione dei segni, visto che $f^{(k)}(x_{0})<0$, per ipotesi, e $k! > 0$ sicuramente, $\exists \delta > 0 : \frac{f(x_{0}+h)-f(x_{0})}{h^{k}}< 0 \qquad \forall h \in [-\delta, \delta] \setminus \{ 0 \}$

Abbiamo 2 sotto-casi:
1° $h \in (0, \delta] \implies h > 0 \implies h^{k} > 0 \implies f(x_{0} + h) - f(x_{0}) < 0 \Longleftrightarrow f(x_{0}+h) < f(x_{0})$
2° $h \in [-\delta, 0) \implies h < 0 \implies h^{k} < 0 \implies f(x_{0}+h)- f(x_{0}) > 0 \Longleftrightarrow f(x_{0}+h) > f(x_{0})$

Mettendo insieme i due sotto-casi, ho che $x_{0}$ è un punto di flesso orizzontale. Perché andando a destra è un po' più piccolo, e andando a sinistra è un po' più grande.
Il 4° caso è giustificato.

X casa:
Completare il 2° e 3° caso a casa.

### A cosa serve il criterio delle derivate successive?
Il comportamento locale della funzione in un punto dipende dal primo termine non nullo e non costante dello sviluppo di Taylor.

##### Esempio:
$$
f(x) = \sin(x^{22}) \qquad x_{0} \rightarrow 0
$$
E' un punto stazionario, perché la sua derivata in $x_{0}$ è $0$.
Utilizziamo lo sviluppo di Taylor:
$$
f(x) = x^{22} + o(x^{22}) \qquad x \rightarrow  0
$$
Localmente è una parabola, il primo termine non nullo e non costante è $x^{22}$. Il punto è un minimo locale.

##### Esempio:
$$
f(x) = \cos(\arctan(x)) \qquad x_{0} \rightarrow 0
$$
E' un punto stazionario, perché la sua derivata in $x_{0}$ è $0$.
$$
f(x) = \cos(x + o(x)) = 1 - \frac{(x + o(x))^{2}}{2} + o((x + o(x))^{2}) = 1 - \frac{x^{2}}{2} + o(x^{2})
$$

Localmente è una parabola, il primo termine non nullo e non costante è $-\frac{x^{2}}{2}$. Il punto è un massimo locale.

##### Esempio:
Dimostrare che l'equazione $x^{5} - \arctan(x^{3}) = 2024$ ha almeno una soluzione.

1° metodo:
Pongo $f(x) = x^{5} - \arctan(x^{3})$

Il dominio massimale è tutta la retta. Essendo composizione di funzioni continue, $f(x)$ è continua. 
Facciamo uso della prima variante del teorema dell'esistenza degli zeri.
Ipotesi: $f(x) : [a, b] \rightarrow \mathbb{R}$, $f(x)$ è continua. $f(a) < 2024$, $f(b) > 2024$.

$a = 0, f(0) = 0 < 2024$
$b = 10, f(10) \approx 10^{5} > 2024$

Applicando la prima variante, esiste almeno un $c \in (0, 10)$ per cui $f(c) = 2024$

2° metodo:
Visto che il dominio è tutto $\mathbb{R}$ e la funzione è continua, si possono osservare i limiti agli infiniti in modo da poter affermare che la funzione è surgettiva, e essendo tale possiamo affermare che esiste una $c$ per cui $f(c) = 2024$.
$$
\lim_{ x \to +\infty } f(x) = +\infty \qquad \lim_{ x \to -\infty } f(x) = -\infty
$$
##### Esempio:
Dimostrare che l'equazione $x^{5} - \arctan(x^{3}) = 0$ ha almeno $3$ soluzioni.
Prima osservazione: $x = 0$ è certamente soluzione.
Poniamo $f(x) = x^{5} - \arctan(x^{3})$. Sappiamo inoltre che è surgettiva.
Cerco $x > 0$ piccolo per cui $f(x) < 0$, uso Taylor in $x_{0} = 0$.
$$
f(x) = x^{5} - x^{3} + o(x^{3}) = -x^{3} + o(x^{3}) 
$$
Dunque abbiamo un comportamento di un flesso orizzontale decrescente. Quindi da qualche parte nei positivi, appena a destra di $0$, la funzione risulta negativa. Essendo continua e essendo il limite all'infinito che va all'infinito, vuol dire che dovrò ripassare per lo $0$. Idem per l'altro verso (notare come bastava considerare la disparità della funzione).

## Weierstrass, Rolle, Cauchy, Lagrange, Monotonia, Hopital, Taylor
Weierstrass $\implies$ Rolle $\implies$ Cauchy $\implies$ Lagrange $\implies$ Monotonia $\implies$ Hopital $\implies$ Taylor
### Def:
Sia $A \subseteq \mathbb{R}, f: A \rightarrow \mathbb{R}$, si dice che $M = max\{ f(x) | x \in A \}$ se:
1. $f(x) \leq M , \forall x \in A$
2. $\exists x_{0} : f(x_{0}) = M$
Inoltre $x_{0}$ viene chiamato "punto di massimo".

Sia $A \subseteq \mathbb{R}, f: A \rightarrow \mathbb{R}$ si dice che $m = min\{ f(x) | x \in A \}$ se:
1. $f(x) \geq m , \forall x \in A$
2. $\exists x_{0} : f(x_{0}) = m$
Inoltre $x_{0}$ viene chiamato "punto di minimo".

## Weierstrass
Sia $f: [a, b] \rightarrow \mathbb{R}$ continua, allora $max\{ f(x) | x \in [a, b] \}$ e $min\{ f(x) | x \in [a, b] \}$ esistono sempre.

##### Esempio:
$f(x) = x^{2}, \qquad x \in (0, 1)$
E' continua, ma l'intervallo non è chiuso.

### Ricerca MAX & MIN
$$
f:[a,b] \rightarrow \mathbb{R} \qquad \text{continua}
$$
Cerco i punti di max e min, ci sono 3 categorie.
1. Punti stazionari interni a $[a, b]$ (ossia i punti in $(a, b)$)
2. Punti singolari interni a $[a, b]$ (ossia i punti $x_{0} \in (a,b)$ per cui $f'(x_{0})$ non esiste)
3. Punti al bordo di $[a, b]$ (ossia $a$ e $b$)

##### Esempio:
$$
f(x) = |x - 2| \qquad x \in [0, 4]
$$
La funzione è continua, quindi per Weierstrass ha un massimo e un minimo.
In questo caso il punto di minimo è un punto singolare interno, perché $f'(2)$ non esiste. (quindi $x = 2$ è cat. 2).
In questo caso i punti di massimo sono punti ai bordi, perché $f(0) = f(4) = 2 = max(f)$ (quindi $x = 0$ e $x = 4$ sono cat. 3).

##### Esempio:
$$
f(x) = |\cos x| \qquad x \in [0, 2\pi]
$$
La funzione è continua, quindi per Weierstrass ha un massimo e un minimo.

$max\{ |\cos x|  | x \in [0, 2\pi]\} = 1$ 
$min\{ |\cos x|  | x \in [0, 2\pi]\} = 0$ 

$x = 0$, $x = 2\pi$ sono di cat. 3.
$x = \pi$ sono di cat. 1.
$x = \frac{\pi}{2}$, $x = \frac{3\pi}{2}$ sono di cat. 2.

### Dim
Vediamo punti di $max$

Per Weierstrass ho $max \implies$ sia $x_{0}$ punto di $max$.
Ho 3 possibilità.
1. Se $x_{0}$ è di bordo $\implies$ cat. 3
2. Se $x_{0} \in (a, b)$ e $f'(x_{0})$ esiste $\implies f'(x_{0}) = 0 \implies$ cat. 1
3. Se $x_{0} \in (a, b)$ e $f'(x_{0})$ non esiste $\implies$ cat. 2

1° modo
Uso monotonia 1. 
Se fosse $f'(x_{0}) > 0 \implies$ un poco a destra di $x_{0}$ trovo $f(x) > f(x_{0}) \qquad (x > x_{0})$. Ma questo è assurdo, perché ciò violerebbe l'ipotesi che $x_{0}$ è punto di massimo.
Se fosse $f'(x_{0}) < 0 \implies$ un poco a sinistra di $x_{0}$ trovo $f(x) > f(x_{0}) \qquad (x < x_{0})$. Ma questo è assurdo, perché ciò violerebbe l'ipotesi che $x_{0}$ è punto di massimo.

Rimane solo che $f'(x_{0}) = 0$.

2° modo
Utilizzando il rapporto incrementale.

##### Esercizio:
$$
f(x) = x - x^{3} \qquad x \in [0, 1]
$$
cat. 1: Interni stazionari: $f'(x) = 1 - 3x^{2} \implies f'(x) = 0 \Longleftrightarrow x = \pm \frac{1}{\sqrt{ 3 }}$
Ma devo prendere solamente quello all'interno dell'intervallo di partenza, ovvero $x = \frac{1}{\sqrt{ 3 }}$.

cat. 2: Interni singolari: $\emptyset$, poiché la funzione della derivata è continua.

cat. 3: Bordo: $x = 0$, $x = 1$.

$f\left( \frac{1}{\sqrt{ 3 }} \right) = \frac{2}{3\sqrt{ 3 }}$
$f(0) = 0$
$f(1) = 0$

Quindi il punto di massimo è $\frac{1}{\sqrt{ 3 }}$ e i punti di minimo sono $0$ e $1$.

## Teorema di Rolle
Sia $f:[a, b] \rightarrow \mathbb{R}$ tale che:
1. $f$ è continua in $[a, b]$
2. $f$ è derivabile in $(a, b)$
3. $f(a) = f(b)$
Allora $\exists c \in (a,b) : f'(c) = 0$
![[GraficoRolle]]

Per (1.) e Weierstrass ho max e min.
Quindi i punti di max e min ricadono nelle 3 categorie.

Il senso è che essendoci per forza max e min, essendo la funzione derivabile in tutto $(a, b)$, si va ad eliminare la possibilità che questi siano di cat. 2.
Dunque se o max o min è di cat. 1, allora la tesi è verificata.
Se fossero entrambi al bordo, allora $a$ e $b$ sarebbero massimo e minimo, ma poiché da (3.) $f(a) = f(b)$, allora $f(a) = f(b) = max = min$, il che vuol dire che $f$ è costante $\implies f'(c) = 0, \forall c \in (a, b)$

## Teorema di Cauchy
Siano $f:[a, b] \rightarrow \mathbb{R}, g:[a, b] \rightarrow \mathbb{R}$
Supponiamo che:
1. $f$ e $g$ sono continue
2. $f$ e $g$ sono derivabili in $(a, b)$

Allora $\exists c\in(a,b) : (f(b) - f(a))g'(c) = (g(b)-g(a))f'(c)$ (Prima tesi).

Inoltre se supponiamo che:
3. $g'(x) \neq 0, \forall x \in (a, b)$
Allora $g(b) \neq g(a)$ e vale che $\frac{f(b)-f(a)}{g(b)-g(a)} = \frac{f'(c)}{g'(c)}$ (Seconda tesi).

### Dim
Sia
$$
\phi(x) = (f(b)-f(a))g(x) - (g(b)-g(a))f(x)
$$
Consideriamo il teorema di Rolle.
Proprietà di $\phi$:
1. $\phi$ è continua in tutto $[a, b]$, perché composizione di funzioni continue per ipotesi.
2. $\phi$ è derivabile all'interno di $(a, b)$ (Siccome sono moltiplicate per numeri, ovvero $(f(b)-f(a))$ e $(g(b)-g(a))$, la derivabilità non viene alterata)
3. $\phi(a) = \phi(b)$ (da dimostrare)

$$
\begin{align}
\phi(a) &= (f(b) - f(a))g(a) - (g(b)-g(a))f(a) \\
 & = f(b)g(a) - f(a)g(a) - g(b)f(a) + g(a)f(a) \\
 & = f(b)g(a) - g(b)f(a) \\
 \\
\phi(b) & = (f(b) - f(a))g(b) - (g(b)-g(a))f(b) \\
 & = f(b)g(b) - f(a)g(b) - g(b)f(b) + g(a)f(b) \\
 & = g(a)f(b) - f(a)g(b) \\
 \\
\end{align}
$$
Dunque la terza proprietà richiesta dal teorema di Rolle è verificata.
Allora applico Rolle, ossia esiste $c \in (a, b)$ tale che $\phi'(c) = 0$.
$$
\phi'(c) = (f(b)-f(a))g'(c) - (g(b)-g(a))f'(c) = 0
$$
Quindi la prima tesi è verificata.

Per la seconda tesi ho che $g'(x) \neq 0,  \forall x \in (a,b) \implies g(b) \neq g(a)$. Perché altrimenti $g$ risponderebbe al teorema di Rolle.
Assumiamo per assurdo che $g(a) = g(b)$, allora applico Rolle: 
$$
\exists c\in(a,b) : g'(c) = 0
$$
Ma questa è una contraddizione con l'ipotesi $g'(x) \neq 0$. Ho la seconda tesi dividendo per $g'(x) \neq 0$ e $(g(b)-g(a)) \neq 0$

### Oss:
$$
f(x) = x^{2}, \qquad g(x) = x^{3} \qquad [a, b] = [-1, 1]
$$
$$
\frac{f(1)-f(-1)}{g(1)-g(-1)} = \frac{f'(c)}{g'(c)} = 0
$$
$$
\frac{1 - 1}{1 + 1} = \frac{0}{2}
$$
Ma questo è un errore, perché per $f'(c) = 0$ allora $2c = 0$ e $c = 0$, ma se calcoliamo $g'(0)$ otteniamo $0$, questo contraddice l'ipotesi di partenza (ovvero che $g'(x) \neq 0, \forall x \in(-1, 1)$).

## Teorema di Lagrange (valor medio)
Sia $f:[a, b] \rightarrow \mathbb{R}$.
Supponiamo che:
1. $f$ è continua in $[a, b]$
2. $f$ è derivabile in $(a, b)$

Allora $\exists c \in(a,b)$ per cui $f(b) - f(a) = f'(c)(b - a)$
$$
\frac{f(b) - f(a)}{b - a} = \text{coefficiente angolare della retta che passa in } (a, f(a)), (b, f(b))
$$
### Dim
$$
\frac{f(a) - f(b)}{b-a} = \frac{f'(c)}{1}
$$
Basta applicare Cauchy.

!!! Guarda video della lezione per vedere un esercizio bastardo
# Analisi17

## Funzioni convesse e concave
Sia $I \subseteq \mathbb{R}$.
3 tipologie:
- tutto $\mathbb{R}$
- Semiretta $(-\infty, a), (-\infty, a], [a, +\infty), (a, +\infty)$
- Intervalli limitati $(a, b), [a, b), (a, b], [a, b]$

### Def convessità
Sia $f: I \rightarrow \mathbb{R}$ con $I$ come nelle 3 tipologie. Diremo che $f$ è convessa in $I$ se comunque si scelgano 2 punti $P, Q$ sul grafico di $f$ allora il segmento $PQ$ è sopra il grafico di $f$ tra $P, Q$. La funzione è strettamente convessa in $I$ se ogni segmento $PQ$ è davvero sopra il grafico di $f$.

### Def concavità
Sia $f: I \rightarrow \mathbb{R}$ con $I$ come nelle 3 tipologie. Diremo che $f$ è concava in $I$ se comunque si scelgano 2 punti $P, Q$ sul grafico di $f$, allora il segmento $PQ$ è sotto il grafico di $f$ tra $P, Q$. La funzione è strettamente concava in $I$ se ogni segmento $PQ$ è davvero sotto il grafico di $f$.

### Def punto di flesso
Sia $f: I \rightarrow \mathbb{R}$ un punto $x_{0} \in I$ è detto di flesso se $f$ è concava in un intervallo a sinistra di $x_{0}$ e convessa in un intervallo a destra di $x_{0}$ (o viceversa).

## Teorema (convessità, concavità vs derivata seconda)
Sia $f: I \rightarrow \mathbb{R}$ con $I$ come nelle 3 tipologie.
Supponiamo che $f''(x)$ esiste $\forall x \in I$. (Attenzione agli intervalli aperti, dove bisogna fare derivata destra e sinistra con il limite destro o sinistro del rapporto incrementale).
Allora:
1. // Se $f$ è strettamente convessa in $I$ $\implies f''(x) > 0, \forall x \in I$. //
2. Se $f$ è convessa in $I$ $\implies f''(x) \geq 0, \forall x \in I$
3. Se $f''(x) > 0, \forall x \in I \implies f$ è strettamente convessa in $I$.
4. Se $f''(x) \geq 0, \forall x \in I \implies f$ è convessa in $I$.

##### Esempio:
$f(x) = x^{4}, \qquad f:\mathbb{R}\rightarrow \mathbb{R}$
$f''(x) = 12x^{2}$
$f''(0) = 0$

Ma allora la proposizione (1.) è sbagliata.
Allora:
1. Se $f$ è strettamente convessa in $I$ $\implies f''(x) \geq 0, \forall x \in I$.
2. Se $f$ è convessa in $I$ $\implies f''(x) \geq 0, \forall x \in I$
3. Se $f''(x) > 0, \forall x \in I \implies f$ è strettamente convessa in $I$.
4. Se $f''(x) \geq 0, \forall x \in I \implies f$ è convessa in $I$.

#### Oss:
Sia $f''(x_{0}) = 0$, allora non possiamo affermare che $x_{0}$ è punto di flesso (come nell'esempio precedente). Per vedere il comportamento bisogna sviluppare con Taylor e guardare le derivate successive.

## Proprietà delle funzioni convesse
Sia $f: I \rightarrow \mathbb{R}$ convessa.
Allora:
1. $f'(x)$ è crescente (la tangente nei diversi punti ha pendenza sempre più grande, con stretta convessità allora c'è stretta crescenza).
2. $f(x)$ sta sopra a tutte le tangenti del grafico (intuitivo a livello geometrico, con stretta convessità la tangente tocca il grafico in un solo punto).

##### Esercizio:
Se $f$ è convessa, quante soluzioni al massimo può avere l'equazione $f(x) = 0$.
Risposta: infinite, si consideri la figura:
Se $f$ fosse strettamente convessa, allora avrebbe al massimo 2 soluzioni.

Supponiamo per assurdo che $f(x) = 0$ abbia 3 soluzioni ($x_{1} < x_{2} < x_{3}$).
Ma quindi $f(x_{1}) = f(x_{2}) = f(x_{3})$.
Se prendo $P = (x_{1}, f(x_{1})), Q = (x_{3}, f(x_{3}))$.
Allora $PQ$ deve stare strettamente sopra il grafico, ma ciò è impossibile perché passa sicuramente per $(x_{2}, f(x_{2}))$.

### Def analitica/algebrica di convessità
Sia $f:I\rightarrow \mathbb{R}$ con $I$ come nelle 3 tipologie, è convessa se $\forall x \in I, \forall y \in I$ e $\forall \lambda \in [0,1]$, vale che $f(\lambda x+ (1-\lambda)y) \leq \lambda f(x)+ (1- \lambda)f(y)$.
$S = \{ \lambda x + (1-\lambda)y, \forall \lambda \in [0, 1] \}$
se $\lambda = 0$, il punto è $y$.
se $\lambda = 1$, il punto è x.
$S$ serve a parametrizzare il segmento che ha come estremi i punti $x$ e $y$.

## Asintoti
Abbiamo 3 categorie di asintoti.
1. Verticali
2. Orizzontali
3. Obliqui

### Asintoti orizzontali
Una retta $y = a, a \in \mathbb{R}$ si dice un'asintoto orizzontale per $f$ per $x \rightarrow  +\infty$ ($x \rightarrow -\infty$) se $\lim_{ x \to +\infty } f(x) = a$ ($\lim_{ x \to -\infty } f(x) = a$)

### Oss:
Gli asintoti orizzontali non esistono sempre, ma se esistono sono al massimo 2.

### Asintoti verticali
Una retta $x = a, a \in \mathbb{R}$ si dice un'asintoto verticale per $f$ se accade almeno una delle seguenti 4 condizioni:
- $\lim_{ x \to a^{+} } f(x) = +\infty$
- $\lim_{ x \to a^{+} } f(x) = -\infty$
- $\lim_{ x \to a^{-} } f(x) = +\infty$
- $\lim_{ x \to a^{-} } f(x) = -\infty$

### Oss:
Gli asintoti verticali non esistono sempre, possono esserci infiniti (ad esempio $\tan x$).

##### Esempio:
$$f(x) = \frac{x}{x + 1}$$
Non ha simmetrie.
Dominio massimale di definizione è $\mathbb{R} \setminus \{ -1 \}$.
La funzione è continua laddove definita.
$\lim_{ x \to +\infty } f(x) = 1$
$\lim_{ x \to -\infty } f(x) = 1$
Dunque $y = 1$ è asintoto orizzontale per $x \rightarrow \pm \infty$.
$\lim_{ x \to  -1^{+} } f(x) = \left[ -\frac{1}{0^{+}} \right] = -\infty$
$\lim_{ x \to  -1^{-} } f(x) = \left[ -\frac{1}{0^{-}} \right] = +\infty$
Dunque $x = -1$ è asintoto verticale.
$f(x) > 0 \Longleftrightarrow x < -1 \lor x > 0$
$f'(x) = \frac{1}{(x+1)^{2}}$
Non è derivabile in $x = -1$, $f'(x) > 0, \forall x \in \mathbb{R} \setminus \{ -1 \}$.
La funzione è strettamente crescente laddove definita.
$f''(x) = -\frac{2}{(x+1)^{3}}$
$f''(x)$ non si annulla mai.
$f''(x) > 0 \Longleftrightarrow x < -1$
$f''(x) < 0 \Longleftrightarrow x > -1$
Dunque la funzione è convessa prima di $-1$ e concava dopo $-1$.

Per determinare la posizione del grafico rispetto all'asintoto orizzontale, abbiamo due possibilità.
Prima: risolvere le equazioni $f(x) = 1, f(x) > 1, f(x) < 1$.
Seconda: studiare le zone di monotonia di $f$.

### Asintoti obliqui
Una retta $y = mx + n$ è un asintoto obliquo di $f$ per $x \rightarrow -\infty$ se $\lim_{ x \to -\infty }(f(x)-mx-n)=0$, invece è asintoto obliquo di $f$ per $x \rightarrow +\infty$ se $\lim_{ x \to +\infty }(f(x)-mx-n) = 0$.

Operativamente calcolo $m$ e $n$ (per il secondo caso, la stessa cosa ma con il limite che va a $-\infty$).
$$
m = \lim_{ x \to +\infty } \frac{f(x)}{x}, \qquad n = \lim_{ x \to +\infty } (f(x)-mx)
$$
### Dim
$$
\frac{f(x)}{x} = \frac{f(x)-mx-n}{x} + \frac{mx+n}{x} = \left[ \frac{0}{x} + m + \frac{n}{x} \right]\rightarrow  m \qquad x\rightarrow+\infty 
$$
Perché il numeratore tende a $0$ per ipotesi e il denominatore a $+\infty$ quindi il primo termine si annulla. Il secondo termine tende a $m$ con $x \rightarrow +\infty$.

Ipotizzando che $m$ e $n$ si calcolino così, allora ho che:
$$
\lim_{ x \to +\infty } f(x) - mx - n = \lim_{ x \to +\infty } n - n = 0
$$
Quindi $mx + n$ è asintoto.

## Varianti di Weierstrass

##### Esempio
$$
max\{ \log(7+3\sin ^{3}x)+\sin(7x) | x \in \mathbb{R} \} = \text{ ?}
$$
$$
f(x) = \log(7+3\sin ^{3}x) + \sin(7x)
$$
E' definita in tutto $\mathbb{R}$ ed è continua.
Qui non si può usare nessuno dei teoremi di Weierstrass visti finora.
Notiamo però che la funzione è periodica di periodo minimo $T = 2\pi$.

### Teorema
Se $f:\mathbb{R}\rightarrow \mathbb{R}$ è continua e periodica, allora esistono sempre $max$ e $min$.
$$
max\{ f(x) | x \in \mathbb{R} \}, \qquad min\{ f(x) | x \in \mathbb{R} \}
$$
Questi coincidono con
$$
max\{ f(x) | x \in [0, T] \}, \qquad min\{ f(x) | x \in [0, T] \}
$$
### Oss:
In questo caso i punti di massimo e di minimo saranno infiniti nella funzione originale.

### Teorema
Sia $f: \mathbb{R} \rightarrow \mathbb{R}$ continua.
Supponiamo che $f(0) = A, A \in \mathbb{R}$.
Se $\lim_{ x \to +\infty } f(x) > A$ e $\lim_{ x \to -\infty }>A$.
Allora $\exists min\{ f(x) | x \in \mathbb{R} \}$ per continuità.

Supponiamo che $f(0) = B, B \in \mathbb{R}$.
Se $\lim_{ x \to +\infty } f(x) < B$ e $\lim_{ x \to -\infty }<B$.
Allora $\exists max\{ f(x) | x \in \mathbb{R} \}$ per continuità.

Usiamo $0$ perché solitamente è facile calcolare la funzione in $0$.
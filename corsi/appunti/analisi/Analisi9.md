## Limiti di funzioni
$$
f : \mathbb{R} \rightarrow \mathbb{R} \qquad (f : A \rightarrow \mathbb{R}, A \subseteq \mathbb{R})
$$
Vediamo cosa vuol dire:
$$
\lim_{ x \to x_{0} } f(x) \qquad x_{0}\in \bar{\mathbb{R}}
$$
Ho 3 possibilità:
$$
\lim_{ x \to +\infty } f(x) \qquad \lim_{ n \to -\infty } f(x) \qquad \lim_{ x \to x_{0}} f(x) \qquad x_{0} \in \mathbb{R}
$$
Se abbiamo un'insieme di partenza $A \subseteq \mathbb{R}$, non è detto che $x_{0} \in A$.

### Caso 1
Iniziamo guardando $\lim_{ x \to +\infty } f(x)$:
1. $l \in \mathbb{R}$
2. $+\infty$
3. $-\infty$
4. non esiste
 Il caso 4 sussiste quando non valgono 1, 2, e 3.

Il caso 2, si caratterizza dicendo che $\forall M \in \mathbb{R}, \exists k \in \mathbb{R} : f(x) \geq M, \forall x \geq k$.
![[immagine1]]
Il caso 3, si caratterizza dicendo che $\forall m \in \mathbb{R}, \exists k \in \mathbb{R}:f(x)\leq m, \forall x \geq k$.
![[immagine2]]
Nel caso 1, $\forall \varepsilon > 0, \exists k \in \mathbb{R} : l - \varepsilon \leq f(x) \leq l + \varepsilon, \forall x \geq k$.
![[immagine3]]

Il caso 1 ha 2 varianti:
$$
\lim_{ x \to +\infty } l^{+} \qquad
\lim_{ x \to +\infty } l^{-}
$$
Nel primo caso la caratterizzazione cambia con $l \leq f(x) \leq l + \varepsilon$.
Nel secondo caso la caratterizzazione cambia con $l - \varepsilon \leq f(x) \leq l$.

### Caso 2
Ora, guardando $\lim_{ x \to -\infty } f(x)$:
1. $l \in \mathbb{R}$
2. $+\infty$
3. $-\infty$
4. non esiste

Il caso 4 sussiste quando non valgono 1, 2, e 3.

Il caso 2, si caratterizza dicendo che $\forall M \in \mathbb{R}, \exists k \in \mathbb{R} : f(x) \geq M, \forall x \leq k$.
![[immagine4]]
Il caso 3, si caratterizza dicendo che $\forall m \in \mathbb{R}, \exists k \in \mathbb{R}:f(x)\leq m, \forall x \leq k$.
![[immagine5]]
Nel caso 1, $\forall \varepsilon > 0, \exists k \in \mathbb{R} : l - \varepsilon \leq f(x) \leq l + \varepsilon, \forall x \leq k$.
![[immagine6]]
Il caso 1 ha 2 varianti:
$$
\lim_{ x \to -\infty } f(x) = l^{+} \qquad
\lim_{ x \to -\infty } f(x) = l^{-}
$$
Nel primo caso la caratterizzazione cambia con $l \leq f(x) \leq l + \varepsilon$.
Nel secondo caso la caratterizzazione cambia con $l - \varepsilon \leq f(x) \leq l$.

### Caso 3
Ora, guardando $\lim_{ x \to x_{0} } f(x)$:
1. $l \in \mathbb{R}$
2. $+\infty$
3. $-\infty$
4. non esiste

Il caso 4 sussiste quando non valgono 1, 2, e 3.

Il caso 2, si caratterizza dicendo che $\forall M \in \mathbb{R}, \exists \delta > 0 \in \mathbb{R} : f(x) \geq M, \forall x \in [x_{0}-\delta, x_{0} + \delta] \setminus \{ x_{0} \}$.
![[immagine7]]

Il caso 3, si caratterizza dicendo che $\forall m \in \mathbb{R}, \exists \delta > 0 \in \mathbb{R} : f(x) \geq m, \forall x \in [x_{0}-\delta, x_{0} + \delta] \setminus \{ x_{0} \}$.
![[immagine8]]

Nel caso 4, $\forall \varepsilon > 0, \exists \delta > 0 : l - \varepsilon \leq f(x) \leq l + \varepsilon, \forall x \in [x_{0}-\delta, x_{0}+\delta] \setminus \{ 0 \}$
![[immagine9]]

Per i casi 2, 3 e 4 esistono 2 varianti (i limiti destro e sinistro):
$$
\lim_{ x \to x_{0}^{+} } f(x)
\qquad
\lim_{ x \to x_{0}^{-} } f(x)
$$
Per queste varianti l'insieme di $x$ diventa rispettivamente $(x_{0}, x + \delta]$ e $[x_{0}-\delta, x_{0})$.

Il caso 4 ha inoltre altre 2 varianti:
$$
\lim_{ x \to x_{0} } f(x) = l^{+} 
\qquad
\lim_{ x \to x_{0} } f(x) = l^{-} 
$$
Nel primo caso la caratterizzazione cambia con $l \leq f(x) \leq l + \varepsilon$.
Nel secondo caso la caratterizzazione cambia con $l - \varepsilon \leq f(x) \leq l$.

### Strumenti per i limiti di funzioni

1. Valgono gli stessi teoremi algebrici dei limiti di successioni per i limiti di funzioni.

2. I teoremi del confronto a 2 e a 3 valgono anche per i limiti di funzione.

Il teorema di radice e rapporto **non** funzionano per i limiti di funzione.

3. Continuità di funzione.

4. Cambio delle variabile.

5. Lista dei limiti notevoli.

6. Confronto tra ordini di infiniti. 

### Continuità
Una funzione $f : A \rightarrow B, A \subseteq \mathbb{R}, x_{0} \in A$, è detta *continua* in $x_{0}$ se vale che $\lim_{ x \to x_{0} } f(x) = f(x_{0})$.
Diremo che $f$ è continua in $A$ se è continua in ogni punto di $A$, ossia se $\forall y \in A, \lim_{ x \to y } f(x) = f(y)$.

Per le funzioni continue vale che $\lim f(x) = f(\lim x)$.
#### Lista funzioni continue:
Tutte le funzioni elementari laddove definite.
- potenze
- polinomi
- radici 
- esponenziali
- logaritmi
- trigonometriche
- $\dots$

Le composizioni di funzioni continue sono anch'esse funzioni continue.

##### Esempio:
$$
\lim_{ x \to 0 } \frac{\cos(\sin x) + 2^{\sin x}}{\log(3+x^{2})}
$$
$$
\lim_{ x \to x_{0} } f(x) = f\left(\lim_{ x \to x_{0}} x \right)
$$
$$
\lim_{ x \to 0 } \frac{\cos(\sin x) + 2^{\sin x}}{\log(3+x^{2})} = \frac{2}{\log(3)}
$$
##### Esempio:
$$
\lim_{ x \to 0 } \frac{1}{x}
$$
In questo caso il limite non esiste.

### Limiti non esistenti
Il limite $\lim_{ x \to x_{0} } f(x)$ esiste $\Longleftrightarrow$ $\lim_{ x \to x_{0}^{-} } f(x)$ e $\lim_{ x \to x_{0}^{+} } f(x)$ esistono entrambi e coincidono.

### Lista limiti notevoli
#### Progenitori 
$$
\begin{align}
\lim_{ x \to 0 } \frac{\sin x}{x} = 1 \\ \\
\lim_{ x \to +\infty } \left( 1+\frac{1}{x} \right)^{x}  = e \\ \\
\end{align}
$$
#### Genitori
$$
\begin{align}
\lim_{ x \to 0 } \frac{1-\cos x}{x^{2}} = \frac{1}{2} \\ \\
\lim_{ x \to 0 } \frac{e^{x}-1}{x} = 1 \\ \\
\lim_{ x \to 0 } \frac{\log(1+x)}{x} = 1 \\ \\
\lim_{ x \to -\infty } \left( 1+\frac{1}{x} \right)^{x} = e
\end{align}
$$
#### Figli
$$
\begin{align}
\lim_{ x \to 0 } \frac{\tan x}{x} = 1 \\ \\
\lim_{ x \to 0 } \frac{\arctan x}{x} = 1 \\ \\
\lim_{ x \to 0 } \frac{\arcsin x}{x} = 1 \\ \\
\lim_{ x \to 0 } \frac{a^{x}-1}{x} = \log a \\ \\
\lim_{ x \to 0^{+} } x\log x = 0 
\end{align}
$$
### Cambio della variabile
##### Esempio:
$$
\lim_{ x \to 0 } \frac{\sin(x^{2})}{x^{2}}
$$
Pongo $y = x^{2}$, quando $x \rightarrow 0$ allora anche $y \rightarrow 0$, quindi cambio la variabile:
$$
\lim_{ x \to 0 } \frac{\sin(x^{2})}{x^{2}} = \lim_{ y \to 0 } \frac{\sin y}{y} = 1
$$
##### Esempio:
$$
\lim_{ x \to 0 } \frac{e^{\sin x} - 1}{\sin x}
$$
Pongo $y = \sin x$, quando $x \rightarrow 0$ allora anche $y \rightarrow 0$, quindi cambio la variabile:
$$
\lim_{ x \to 0 } \frac{e^{\sin x} - 1}{\sin x} = \lim_{ y \to 0 } \frac{e^{y}-1}{y} = 1
$$
##### Esempio:
$$
\lim_{ x \to \pi } \frac{\log(1+\sin x)}{\sin x}
$$
Pongo $y = \sin x$, quando $x \rightarrow \pi$ allora $y \rightarrow 0$, quindi cambio la variabile:
$$
\lim_{ x \to \pi } \frac{\log(1+\sin x)}{\sin x} = \lim_{ y \to 0 } \frac{\log(1+y)}{y} = 1
$$
### Dimostrazione di alcuni limiti notevoli

$$
\lim_{ x \to 0 } \frac{1-\cos x}{x^{2}} = \frac{1}{2}
$$
$$
\begin{align}
\lim_{ x \to 0 } \left (\frac{1-\cos x}{x^{2}} \cdot \frac{1+\cos x}{1+\cos x} \right)  & = \frac{1 -\cos ^{2}x}{x^{2}} \cdot \frac{1}{1+\cos x}  \\
 & = \frac{\sin ^{2}x}{x^{2}} \cdot \frac{1}{1+\cos x}  \\
 & = 1^{2} \cdot \frac{1}{2}  \\
 & = \frac{1}{2}
\end{align}
$$
---
$$
\lim_{ x \to 0 } \frac{\tan x}{x} = 1
$$
$$
\begin{align}
\lim_{ x \to 0 } \frac{\tan x}{x} & = \lim_{ x \to 0 } \frac{\sin x}{\cos x} \cdot \frac{1}{x} \\
& = 1 \cdot \lim_{ x \to 0 } \frac{1}{\cos x} = 1
\end{align}
$$
---
$$
\lim_{ x \to 0 } \frac{\arctan x}{x} = 1
$$
Pongo $y = \arctan x$, quando $x \rightarrow 0$ allora anche $y \rightarrow 0$.

$$
\begin{align}
\lim_{ x \to 0 } \frac{\arctan x}{x} &= \lim_{ y \to 0 } \frac{y}{\tan y} \\
 & = \lim_{ y \to 0 } \frac{y}{\sin y} \cdot \cos y \\
 & = \lim_{ y \to 0 } \frac{1}{\frac{\sin y}{y}} \cdot \cos y \\
 & = 1 \cdot 1 = 1
\end{align}
$$
---
$$
\lim_{ x \to 0 } \frac{\arcsin x}{x} = 1
$$
Pongo $y = \arcsin x$, quando $x \rightarrow 0$ allora $y \rightarrow 0$.
$$
\begin{align}
\lim_{ x \to 0 } \frac{\arcsin x}{x} &= \lim_{ y \to 0 } \frac{y}{\sin y} \\
 & = \lim_{ y \to 0 } \frac{1}{\frac{\sin y}{y}} = 1
\end{align}
$$
---
$$
\lim_{ x \to -\infty } \left( 1+\frac{1}{x} \right)^{x} = e
$$
Pongo $y = -x$, quando $x \rightarrow -\infty$ allora $y \rightarrow +\infty$.
$$
\begin{align}
\lim_{ x \to -\infty } \left( 1+\frac{1}{x} \right)^{x} & = \lim_{ y \to +\infty } \left( 1-\frac{1}{y} \right)^{-y}  \\
 & = \lim_{ y \to +\infty } \left( \frac{y - 1}{y} \right)^{-y} \\
 & = \lim_{ y \to +\infty } \left( \frac{y}{y-1} \right)^{y}  \\
 & = \lim_{ y \to +\infty } \left( \frac{y-1+1}{y-1} \right)^{y} \\
 & = \lim_{ y \to +\infty } \left( 1 + \frac{1}{y-1} \right)^{y} \\
\end{align}
$$
Pongo $t = y - 1$, quando $y \rightarrow +\infty$ allora anche $t \rightarrow +\infty$.
$$
\begin{align}
\lim_{ y \to +\infty } \left( 1 + \frac{1}{y-1} \right)^{y} &= \lim_{ t \to +\infty } \left( 1+\frac{1}{t} \right)^{t+1} \\
 & = \lim_{ t \to +\infty } \left( 1+\frac{1}{t} \right)^{t}\left( 1+\frac{1}{t} \right) \\
 & = e \cdot 1 = e
\end{align}
$$
---
$$
\lim_{ x \to 0 } \frac{\log(1+x)}{x} = 1
$$
$$
\begin{align}
\lim_{ x \to 0 } \frac{\log(1+x)}{x} & = \frac{1}{x} \log(1+x) \\
 & = \log(1+x)^{\frac{1}{x}} \\
\end{align}
$$
Pongo $y = \frac{1}{x}$, quando $x \rightarrow 0$ ho due limiti per $y$, $y \rightarrow +\infty$ e $y \rightarrow -\infty$.
$$
\begin{align}
\lim_{ y \to +\infty } \log\left( 1+\frac{1}{y} \right)^{y}  & = \log e = 1 \\ \\
\lim_{ y \to -\infty } \log\left( 1+\frac{1}{y} \right)^{y}  & = \log e = 1 
\end{align}
$$
I due limiti esistono e coincidono, quindi possiamo affermare che:
$$
\lim_{ x \to 0 } \frac{\log(1+x)}{x} = 1
$$
---
$$
\lim_{ x \to 0 } \frac{e^{x}-1}{x} = 1
$$
Pongo $y = e^{x}-1$, quando $x \rightarrow 0$ allora anche $y \rightarrow 0$.
$$
\lim_{ x \to 0 } \frac{e^{x}-1}{x} = \lim_{ y \to 0 } \frac{1}{\frac{\log(1+y)}{y}} = 1
$$
---
$$
\lim_{ x \to 0 } \frac{a^{x} - 1}{x} = 1
$$
$$
\lim_{ x \to 0 } \frac{a^{x} - 1}{x} = \lim_{ x \to 0 } \frac{e^{x\log(a)} - 1}{x} = \lim_{ x \to 0 } \frac{e^{x\log(a)} - 1}{x\log a} \cdot \log a
$$
Pongo $y = x\log a$, quando $x \rightarrow 0$ allora anche $y \rightarrow 0$.
$$
\lim_{ x \to 0 } \frac{a^{x} - 1}{x} = \lim_{ y \to 0 } \frac{e^{y} - 1}{y} \cdot \log a = 1 \cdot \log a = \log a
$$
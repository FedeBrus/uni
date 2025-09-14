## Successioni regolari
Le successioni *regolari* sono tutte le successioni per le quali:
$$
\lim_{ n \to +\infty }  a_{n} = l \in \bar{\mathbb{R}}
$$
## Monotonia delle successioni
Sia: 
$$
b : \mathbb{N} \rightarrow \mathbb{R}
$$
$b$ sarà strettamente decrescente se $b_{n} > b_{n + 1}$
$b$ sarà decrescente se $b_{n} \geq b_{n + 1}$
$b$ sarà strettamente crescente se $b_{n} < b_{n+1}$
$b$ sarà crescente se $b_{n} \leq b_{n+1}$

## Criteri di convergenza

- Criterio della radice
- Criterio del rapporto
- Criterio rapporto $\implies$ radice
- L'Hopital per successioni

### Criterio della radice
Supponiamo di avere $a_{n}$ per cui $a_{n} \geq 0$ almeno definitivamente, supponiamo che esista il limite:
$$
\lim_{ n \to +\infty } \sqrt[n]{ a_{n} } = l \in \bar{\mathbb{R}}
$$
Allora:
- se $l>1$ allora $a_{n} \rightarrow +\infty$.
- se $l < 1$ allora $a_{n} \rightarrow 0$.
- se $l = 1$  allora non posso affermare nulla sul comportamento di $a_{n}$.

##### Operativamente:
Provo a fare il limite di $\sqrt[n]{ a_{n} }$.

### Criterio del rapporto
Supponiamo di avere $a_{n}$ per cui $a_{n} > 0$ almeno definitivamente, supponiamo che esista il limite:
$$
\lim_{ n \to +\infty }  \frac{a_{n+1}}{a_{n}} = l \in \bar{\mathbb{R}}
$$
Allora:
- se $l>1$ allora $a_{n} \rightarrow +\infty$.
- se $l < 1$ allora $a_{n} \rightarrow 0$.
- se $l = 1$  allora non posso affermare nulla sul comportamento di $a_{n}$.
##### Operativamente:
Provo a fare il limite di $\frac{a_{n+1}}{a_{n}}$.

### Criterio rapporto $\implies$ radice
Supponiamo di avere $a_{n}$ per cui $a_{n}>0$ almeno definitivamente, supponiamo che esista il limite:
$$
\lim_{ n \to +\infty }  \frac{a_{n+1}}{a_{n}} = l \in \bar{\mathbb{R}}
$$
Allora:
$$
\lim_{ n \to +\infty } \sqrt[n]{ a_{n} } = l \in \bar{\mathbb{R}}
$$
--- 
### Criterio di de L'Hopital per le successioni
Supponiamo di avere due successioni $a_{n}$ e $b_{n}$, e supponiamo che $b_{n}$ sia strettamente crescente con $b_{n} > 0$ e $\lim_{ n \to +\infty } b_{n} = +\infty$, allora:
$$
\lim_{ n \to +\infty } \frac{a_{n+1} - a_{n}}{b_{n+1}-b_{n}} = \lim_{ n \to +\infty } \frac{a_{n}}{b_{n}}
$$


### Dimostrazione criterio della radice
Supponiamo che $\sqrt[n]{ a_{n} } \rightarrow l > 1$ e supponiamo che $l \in \mathbb{R}$.

![[dimostrazione_teorema_radice1]]

Per il teorema della permanenza del segno ho che almeno definitivamente:
$$
\sqrt[n]{ a_{n} } \geq \frac{1+l}{2}
$$
Eseguo la potenza n-esima:
$$
a_{n} \geq \left( \frac{1+l}{2} \right)^{n}
$$
Sappiamo che $\frac{1+l}{2}$ è sicuramente positivo dato che $l > 1$.
Quindi poiché $\left( \frac{1+l}{2} \right)^{n} \rightarrow +\infty$, per il teorema del confronto a due si ha che $a_{n} \rightarrow +\infty$

Supponiamo che $\sqrt[n]{ a_{n} } \rightarrow l < 1$ e supponiamo che $l \in \mathbb{R}$.

![[dimostrazione_teorema_radice2]]

Per il teorema della permanenza del segno ho che almeno definitivamente:
$$
0 \leq \sqrt[n]{ a_{n} } \leq \frac{1+l}{2}
$$
Eseguo la potenza n-esima:
$$
0 \leq a_{n} \leq \left( \frac{1+l}{2} \right)^{n}
$$
Sappiamo che $\frac{1+l}{2} \leq 1$ sicuramente dato che $l < 1$.
Quindi poiché $\left( \frac{1+l}{2} \right)^{n} \rightarrow 0$, per il teorema del confronto a tre si ha che $a_{n} \rightarrow 0$

##### Esempio:
$$
\lim_{ n \to +\infty } \frac{2^{n}}{n^{2}} = \left[ \frac{+\infty}{+\infty} \right]
$$
Applichiamo il criterio del rapporto con $a_{n} = \frac{2^{n}}{n^{2}}$.
$$
\frac{a_{n+1}}{a_{n}} = \frac{\frac{2^{n+1}}{(n+1)^{2}}}{\frac{2^{n}}{n^{2}}} = \frac{2^{n} \cdot 2}{(n+1)^{2}} \cdot \frac{n^{2}}{2^{n}} = 2 \cdot \frac{1}{\left( \frac{n+1}{n} \right)^{2}} = 2 \cdot \frac{1}{\left( 1 + \frac{1}{n} \right)^{2}} = 2 = l > 1
$$
Siccome $l > 1$, $a_{n} \rightarrow +\infty$

##### Esempio:
$$
\lim_{ n \to +\infty } \frac{a^{n}}{n^{b}}
$$
Applichiamo il criterio del rapporto con $c_{n} = \frac{a^{n}}{n^{b}}$.
$$
\frac{\frac{a \cdot a^{n}}{(n+1)^{b}}}{\frac{a^{n}}{n^{b}}} = \frac{a \cdot a^{n}}{(n+1)^{b}} \cdot \frac{n^{b}}{a^{n}} = a \cdot \frac{1}{\left( 1 + \frac{1}{n} \right)^{b}} = a = l
$$
Quindi se $a > 1$ allora $c_{n} \rightarrow +\infty$.
Invece se $a < 1$ allora $c_{n} \rightarrow 0$.

In generale: (bagaglio)
$$
\lim_{ n \to +\infty } \frac{a^{n}}{n^{b}} = +\infty \qquad \text{con } a > 1 \qquad \text{e} \qquad b > 0
$$
Quindi l'esponenziale *batte* SEMPRE la potenza.

##### Esempio:
$$
\lim_{ n \to +\infty }  \frac{37^{n}}{n!} = \left[ \frac{+\infty}{+\infty} \right]
$$
Applichiamo il criterio del rapporto con $a_{n} = \frac{37^{n}}{n!}$
$$
\frac{37^{n+1}}{(n+1)!} \cdot \frac{n!}{37^{n}} = \frac{37}{(n+1)n!} \cdot \frac{n!}{1} = \frac{37}{n+1}=0 = l < 1
$$
Quindi siccome $l < 1$ allora sappiamo che $a_{n} \rightarrow 0$.

In generale: (bagaglio)
$$
\lim_{ n \to +\infty } \frac{a^{n}}{n!} = 0 \qquad \text{con } a > 1 
$$
Quindi il fattoriale *batte* SEMPRE l'esponenziale.

### Fatto: (atto di fede)
Ogni successione monotona è regolare. 

In particolare, se crescente allora:
$$
\lim_{ n \to +\infty } a_{n} = \sup \{ a_{n} | n \in \mathbb{N} \}
$$
se decrescente allora:
$$
\lim_{ n \to +\infty } a_{n} = \inf \{ a_{n} | n \in \mathbb{N} \}
$$


Consideriamo due successioni $e_{n}=\left( 1+\frac{1}{n} \right)^{n}$ e $E_{n}=\left( 1+\frac{1}{n} \right)^{n+1}$.

##### Fatto 1:
$1 < e_{n} < E_{n}$

##### Fatto 2:
$e_{n}$ è strettamente crescente.

##### Fatto 3:
$E_{n}$ è strettamente decrescente

##### Dimostrazione del fatto 1:
$$
E_{n} = \left( 1 + \frac{1}{n} \right)^{n+1} = \left( 1+\frac{1}{n} \right) ^{n} \left( 1+\frac{1}{n} \right) = e_{n}\left( 1+\frac{1}{n} \right)
$$
Dato che $\left( 1 + \frac{1}{n} \right) > 1$ sempre allora si ha che:
$$
E_{n} = e_{n}\left( 1 + \frac{1}{n} \right) > e_{n}
$$
##### Dimostrazione del fatto 2:
Dobbiamo dimostrare che $e_{n}$ è strettamente crescente.
$$
e_{n-1} < e_{n} \Longleftrightarrow \frac{e_{n}}{e_{n-1}} > 1
$$
$$
\begin{align}
\frac{e_{n}}{e_{n-1}} &= \frac{\left( 1+\frac{1}{n} \right)^{n}}{\left( 1+\frac{1}{n-1} \right)^{n-1}} \\ \\
 & = \frac{\left( 1+\frac{1}{n} \right)^{n}}{\left( \frac{n}{n-1} \right)^{n-1}} \\ \\
 & = \left( 1 + \frac{1}{n} \right)^{n}\left(\frac{n-1}{n}\right)^{n-1} \\ \\
 & = \frac{\left( 1+\frac{1}{n} \right)^{n}\left( 1 - \frac{1}{n} \right)^{n}}{\left( 1-\frac{1}{n} \right)} \\ \\
 & = \frac{\left( 1-\frac{1}{n^{2}} \right)^{n}}{\left( 1-\frac{1}{n} \right)}
\end{align}
$$
Applicando la disuguaglianza di Bernoulli con $x = - \frac{1}{n^{2}} \geq 1$, si ha che:
$$
\begin{align}
\left( 1-\frac{1}{n^{2}} \right)^{n} & \geq 1 + n\left( -\frac{1}{n^{2}} \right) \\ \\
\left( 1-\frac{1}{n^{2}} \right)^{n}  &  \geq 1 - \frac{1}{n}
\end{align}
$$
Dunque, almeno definitivamente:
$$
\frac{e_{n}}{e_{n-1}} = \frac{\left( 1 - \frac{1}{n^{2}} \right)^{n}}{\left( 1-\frac{1}{n} \right)} > 1
$$
##### Dimostrazione fatto 3:
$$
E_{n} < E_{n-1} \Longleftrightarrow \frac{E_{n-1}}{E_{n}} > 1
$$
$$
\begin{align}
\frac{E_{n-1}}{E_{n}} & = \frac{\left( 1+\frac{1}{n-1} \right)^{n-1+1}}{\left( 1+\frac{1}{n} \right)^{n+1}}  \\ \\
 & = \frac{\left( 1+\frac{1}{n-1} \right)^{n}}{\left( 1+\frac{1}{n} \right)^{n+1}} \\ \\
 & = \frac{\left( \frac{n}{n-1} \right)^{n}}{\left(\frac{n+1}{n}\right)^{n+1}} \\ \\
 & = \frac{\left( \frac{n}{n-1} \right)^{n}\left( \frac{n}{n+1} \right)^{n}}{\frac{n+1}{n}} \\ \\
 & = \frac{\left( \frac{n^{2}}{n^{2}-1} \right)^{n}}{\frac{n+1}{n}} \\ \\
 & = \frac{\left( 1 + \frac{1}{n^{2}-1} \right)^{n}}{1+ \frac{1}{n}}
\end{align}
$$
Applicando la disuguaglianza di Bernoulli:
$$
\frac{\left( 1+\frac{1}{n^{2}-1} \right)^{n}}{1+\frac{1}{n}} > \frac{1 + \frac{n}{n^{2}-1}}{1+ \frac{1}{n}} > \frac{1 + \frac{n}{n^{2}}}{1+ \frac{1}{n}} = \frac{1 + \frac{1}{n}}{1+ \frac{1}{n}} = 1
$$
Questo perché $\frac{n}{n^{2}-1} > \frac{n}{n^{2}}$.

Quindi si ha che:
$$
\lim_{ n \to +\infty } e_{n} = \sup \{ e_{n} \} \leq \inf \{ E_{n} \} = \lim_{ n \to +\infty } E_{n}
$$
Sia ha che $\sup \{ e_{n} \}$ sta "tutto a sinistra" si $\inf{E_{n}}$.
Per l'assioma di continuità si sa che $\exists c \in \mathbb{R}$ tra i due limiti.
Non dimostreremo l'unicità di $c$.
In verità la diseguaglianza è una vera e propria uguaglianza, ovvero:
$$
\sup \{ e_{n} \} = \inf \{ E_{n} \} = e := \lim_{ n \to +\infty } \left( 1+\frac{1}{n} \right)^{n}
$$
#### Fatto:
- Supponiamo che $a_{n} \rightarrow +\infty$  oppure $a_{n} \rightarrow -\infty$.

Allora: 
$$
\lim_{ n \to +\infty } \left( 1+\frac{1}{a_{n}} \right)^{a_{n}} = e
$$
- Supponiamo che $a_{n} \rightarrow 0$ (infinitesimale).

Allora:
$$
\lim_{ n \to +\infty } (1 + a_{n})^{1/a_{n}} = e
$$
- $\forall x \in \mathbb{R}$ vale che $\lim_{ n \to +\infty }\left( 1 + \frac{x}{n} \right)^{n} = e^{x}$
## Terminologia
Sia $P_{n}$ una proprietà che dipende da un parametro $n$.

- Diremo che al proprietà $P_{n}$ è vera (/falsa) "frequentemente" se è vera (/falsa) per infiniti valori di $n \in \mathbb{N}$.
- Diremo che $P_{n}$ è vera (/falsa) "definitivamente" se è vera da un certo punto in poi, ossia, se $\exists n_{0} \in \mathbb{N} : P_{n}\text{ è vera (/falsa) } \forall n \geq n_{0}$

##### Esempi:
1. $P_{n}$ sia $n^{2} - 2024 \geq 0$ è definitivamente vera e dunque anche frequentemente vera, perché ho infiniti $n$ per i quali $P_{n}$ è vera.
2. $P_{n}$ sia $5^{n}-10^{81} \leq 0$ è definitivamente falsa e dunque anche frequentemente falsa, perché ho infiniti $n$ per i quali $P_{n}$ è falsa.
3. $P_{n}$ sia $(-2)^{n}\geq 8$ è frequentemente falsa, per tutti gli $n$ dispari, invece è vera frequentemente, per $n \geq 4$ pari.

## Successioni
##### Definizione rigida:
Una successione è una funzione $a : \mathbb{N} \longrightarrow \mathbb{R}$, in genere al simbolo $a(n) \in \mathbb{R}$ si preferisce il simbolo $a_{n}$ (oppure: $(a_{n}), (a_{n})_{n \in \mathbb{N}}$)
$$
\mathbb{N} \ni n \longmapsto a_{n} \in \mathbb{R}
$$
##### Esempi:
1. $a_{n} = 2n - 7$
2. $b_{n} = \frac{n^{2}+ 185}{n^{4}+1}$
3. $c_{n} = \sqrt{\frac{n^{3} + 36}{\log(n^{2}+1)} }$

#### Definizione meno rigida:
Si definisce una successione come una funzione che sia "vera" almeno definitivamente, ossia permettiamo un numero finito di "problemi".

##### Oss:
$$
a_{n} = \frac{1}{n}
$$
Questa non è una successione perché abbiamo ammesso $0$ nei naturali. Per questo utilizzeremo la definizione meno rigida.
$$
b_{n} = \sqrt{ n-7 }
$$
Anche qui si creano problemi. Non soddisfa la definizione rigida.
##### Esempi:
$$
a_{n} = \frac{1}{n+5}
$$
Conforme alla definizione rigida.
$$
b_{n} = \frac{1}{n-7}
$$
Non conforme alla definizione rigida. Conforme a quella non rigida con $n \geq 8$
$$
c_{n} = \sqrt{ n-2024 }
$$
Non conforme alla definizione rigida. Conforme a quella non rigida con $n \geq 2024$
$$
d_{n} = \sqrt{ 2024 - n }
$$
Non conforme ad alcuna delle due.

## Definizione di limite
Sia $a_{n}$ una successione, sono possibile 4 tipi di comportamenti:
1. $\lim_{ n \to +\infty } a_{n} = l \in \mathbb{R}$ oppure $a_{n} \rightarrow l, n \rightarrow + \infty$ (converge a $l$)
2. $\lim_{ n \to +\infty } a_{n} = +\infty$ oppure $a_{n} \rightarrow +\infty, n \rightarrow + \infty$ (diverge positivamente)
3. $\lim_{ n \to +\infty } a_{n} = -\infty$ oppure $a_{n} \rightarrow -\infty, n \rightarrow+\infty$ (diverge negativamente)
4. $a_{n}$ non ha limite, ossia $\lim_{ n \to +\infty } a_{n}$ non esiste

##### Esempi:
Esempio di 4: $a_{n} = (-1)^{n}$
Esempio di 4: $b_{n} = \sin n$

#### Caratterizzazioni
##### Def 4:
Nessuna delle def 1, 2, 3
##### Def 2
Si dice che $a_{n} \rightarrow +\infty$ se $\forall M\in \mathbb{R} \quad a_{n} \geq M$ definitivamente (da un certo indice $n$ in poi).

##### Def 3:
Si dice che $a_{n} \rightarrow -\infty$ se $\forall  m \in \mathbb{R} \quad a_{n} \leq m$ definitivamente.

##### Def 1:
Si dice che $a_{n} \rightarrow l$ se $\forall \varepsilon > 0$ si ha che $l - \varepsilon \leq a_{n} \leq l + \varepsilon$ definitivamente.
Quindi $|a_{n} - l| \leq \varepsilon$.
$a_{n} = l^{+}$ vuol dire che definitivamente $l \leq a_{n} \leq l +\varepsilon$
$a_{n} = l^{-}$ vuol dire che definitivamente $l -\varepsilon\leq a_{n} \leq l$

##### Leggende metropolitane:
1. Se $a_{n} \rightarrow +\infty$ allora $a_{n}$ è definitivamente crescente? FALSO!
$a_{n} = 2, 1, 4, 3, 6, 5, 8, 7$

2. Se $a_{n} \rightarrow 0$ allora $a_{n} \rightarrow 0^{+}$ oppure $a_{n} \rightarrow 0^{-}$? FALSO!
$a_{n} = \frac{(-1)^{n}}{n}$, in questo caso si arriva a $0$ oscillando tra i positivi e i negativi.

3. Se $a_{n} \rightarrow 0^{+}$ allora $a_{n}$ decresce definitivamente? FALSO!
$a_{n} = \frac{1}{2}, 1, \frac{1}{4}, \frac{1}{3}, \frac{1}{6}, \frac{1}{5}, \frac{1}{8}, \frac{1}{7}$ 


#### Teorema di unicità:
Una successione $a_{n}$ ha sempre solo uno dei comportamenti 1, 2, 3, 4.
Se $a_{n}$ ha comportamento 1:
$$
\lim_{ n \to +\infty } a_{n} = l \in \mathbb{R}
$$
allora il limite è unico.
##### Dim:
Supponiamo per assurdo che $a_{n}$ tende sia a $l_{1} \in \mathbb{R}$ che e a $l_{2} \in \mathbb{R}$.
Supponiamo che $l_{1}<l_{2}$

![[contraddizione]]
Il fatto che i termini della successione $a_{n}$ siano definitivamente dentro entrambi gli intervalli è una contraddizione.
Quindi se una successione converge ad un numero reale $l$, allora $l$ è unico.

#### Teoremi della permanenza del segno:
- se $a_{n} \rightarrow +\infty$, allora ho definitivamente che $a_{n} > 0$ oppure $a_{n} \geq 2024$.
- se $a_{n} \rightarrow l > 0$, allora ho definitivamente che $a_{n} > 0$. Se prendo $\varepsilon$ sufficientemente piccolo creo un intervallo interamente nei positivi.
- se $a_{n} \rightarrow 2024$, allora ho definitivamente che $a_{n} < 2025$. 

##### Esempi:
1)
$$
a_{n} = n^{2}
$$
intuitivamente, $a_{n} \rightarrow +\infty$.
Lo dimostro usando la caratterizzazione, ossia $\forall M \in \mathbb{R}$, $\exists n_{0} \in \mathbb{N} : a_{n} \geq M, \forall n \geq n_{0}$
- se $M \leq 0 \implies a_{n} \geq M$ SEMPRE!
- se $M>0$, voglio che $a_{n} \geq M$, ossia $n^{2} \geq M \Longleftrightarrow n_{0}^{2}=M+1 \implies n_{0} = \sqrt{ M + 1 } + 1$.

2)
$$
a_{n} = \sqrt{ n }
$$
intuitivamente, $a_{n} \rightarrow +\infty$
Lo dimostro usando la caratterizzazione, ossia $\forall M \in \mathbb{R}$, $\exists n_{0}\in \mathbb{N}:a_{n}\geq M,\forall n\geq n_{0}$
- se $M \leq 0 \implies a_{n} > M$ SEMPRE!
- se $M > 0$, voglio che $a_{n} \geq M$, ossia $\sqrt{ n } \geq M \Longleftrightarrow \sqrt{ n_{0} } = M + 1 \implies n_{0} = (M + 1)^{2} + 1$
3)
$$
a_{n} = \lim_{ n \to +\infty } \frac{1}{n+4} = 0^{+}
$$
$\forall \varepsilon > 0$ ho che $0<a_{n}\leq\varepsilon$ definitivamente.
Fissato $\varepsilon > 0$, devo verificare che $\frac{1}{n+4} \leq \varepsilon \implies n+4 \geq \frac{1}{\varepsilon} \implies n \geq \frac{1}{\varepsilon} - 4$
Quindi $n_{0} = \frac{1}{\varepsilon}-4$
## Retta reale estesa
$$
\bar{\mathbb{R}} = \mathbb{R} \cup \{ +\infty \} \cup \{ -\infty \}
$$
### Operazioni algebriche nella retta estesa
$$
\begin{align}
2024 + (+\infty) = +\infty \\
2024 + (-\infty) = -\infty \\
+\infty + (+\infty) = +\infty \\
-\infty + (-\infty) = -\infty \\
2024(+\infty) = +\infty \\
-2024(+\infty) = -\infty \\
2024(-\infty) = -\infty \\
-2024(-\infty) = +\infty \\
+\infty(+\infty) = +\infty \\
-\infty(-\infty) = +\infty \\
+\infty(-\infty) = -\infty
\end{align}
$$
Non tutte le operazioni sono permesse.
7 casi in cui non possiamo ammettere l'operazione.
$$
\begin{array}{l}
+\infty + (-\infty) \\
0 (\pm \infty) \\
\frac{\pm\infty}{\pm \infty} \\
\frac{0}{0} \\
0^{0} \\
1^{\pm \infty} \\
(\pm \infty)^{0}
\end{array}
$$

#### Teoremi algebrici:
Siano $a_{n}$ e $b_{n}$ 2 successioni.
Supponiamo che $a_{n} \rightarrow l_{1} \in \bar{\mathbb{R}}$ e $b_{n} \rightarrow l_{2} \in \bar{\mathbb{R}}$.
Allora valgono (rispettando le 7 forme indeterminate):
1. $a_{n}+b_{n} \rightarrow l_{1}+l_{2} \in \bar{\mathbb{R}}$,  $a_{n} - b_{n} \rightarrow l_{1}-l_{2} \in \bar{\mathbb{R}}$
2. $a_{n}b_{n} \rightarrow l_{1}l_{2} \in \bar{\mathbb{R}}$, $\frac{a_{n}}{b_{n}} \rightarrow \frac{l_{1}}{l_{2}} \in \bar{\mathbb{R}}$
3. $a_{n}^{b_{n}} \rightarrow l_{1}^{l_{2}} \in \bar{\mathbb{R}}$
4. $ca_{n} \rightarrow cl_{1} \in \bar{\mathbb{R}}, c \in \mathbb{R}\setminus \{ 0 \}$

Se il risultato finisce nelle forme indeterminate non è che non diverga, non converga etc..., ma semplicemente non è determinabile il suo comportamento.

##### Fatti importanti:
$$
\begin{array}{l}
\lim_{ n \to +\infty } n^{a} = +\infty \text{ se } a > 0 \\
\lim_{ n \to +\infty } n^{a} = 0^{+} \text{ se } a < 0
\end{array}
$$
#### Teorema del confronto a 2:
Siano $a_{n}$ e $b_{n}$ 2 successioni.
Supponiamo che $a_{n} \leq b_{n}$ definitivamente.
Allora:
- se $a_{n} \rightarrow +\infty \implies b_{n} \rightarrow +\infty$
- se $b_{n} \rightarrow -\infty \implies a_{n} \rightarrow -\infty$

#### Teorema di confronto a 3 o teorema del carabiniere:
Supponiamo che $a_{n} \leq c_{n} \leq b_{n}$ definitivamente.
Supponiamo che $a_{n} \rightarrow l \in \mathbb{R}$ e che $b_{n} \rightarrow l \in \mathbb{R}$ (stesso limite *reale*).
Ne concludiamo che $c_{n} \rightarrow l \in \mathbb{R}$.

##### Esempi:
1)
$$
\lim_{ n \to +\infty } n^{2}+2n = +\infty
$$
Uso i teoremi algebrici. $+\infty + (+\infty) = +\infty$

2)
$$
\lim_{ n \to +\infty } n^{2}-2n = +\infty
$$
Uso i teoremi algebrici. $+\infty+(-\infty)$ è una forma indeterminata, quindi non è verificabile. Devo manipolarlo.
$$
\lim_{ n \to +\infty } n(n-2) = +\infty
$$
Usando i teoremi algebrici. $+\infty(+\infty) = +\infty$

3)
$$
\lim_{ n \to +\infty } 3n^{2}-7n^{3} = \text{ ?}
$$
Usando i teoremi algebrici viene fuori una forma indeterminata, allora cerco di manipolarlo algebricamente.
$$
\lim_{ n \to +\infty } n^{3}\left( \frac{3}{n}-7 \right) = +\infty (-7 ) = -\infty
$$
4)
$$
\lim_{ n \to +\infty } (n^{2}-\sin(n)) = \text{?}
$$
$$
\lim_{ n \to +\infty } n^{2}\left( 1-\frac{\sin(n)}{n^{2}} \right) = \text{?}
$$

$$
0 \leq \frac{|\sin(n)|}{n^{2}} \leq \frac{1}{n^{2}}
$$
Per il teorema dei carabinieri, siccome $\frac{1}{n^{2}}$ converge a $0$, allora anche $\frac{|\sin(n)|}{n^{2}}$ converge a $0$.
$$
0 \leq\frac{sin(n)}{n^{2}} \leq \frac{|\sin(n)|}{n^{2}}
$$
Dunque anche $\frac{\sin(n)}{n^{2}} \rightarrow 0$, allora il limite originale:
$$
\lim_{ n \to +\infty } n^{2}\left( 1 - \frac{\sin n}{n} \right) = +\infty(1) = +\infty
$$
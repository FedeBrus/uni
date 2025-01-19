## Integrazione impropria

L'integrazione standard richiede:
1. Zona di integrazione limitata
2. Funzioni limitate

##### Esempio
$$
\int_{5}^{+\infty} \frac{1}{x^{2}}dx
$$
Funzione limitata nella zona di integrazione ma la zona di integrazione non è limitata.
$$
\int_{0}^{1} \frac{1}{\sqrt{ x }} dx
$$
La zona di integrazione è limitata ma la funzione non è limitata nella zona di integrazione.

$$
\int_{0}^{+\infty}  \frac{1}{x^{3}} dx
$$
La zona di integrazione non è limitata e la funzione non è limitata nella zona di integrazione.

## Integrazione impropria mono-problema
2 tipi di mono-problemi

1. Zona di integrazione non limitata ma funzione ivi limitata
2. Zona di integrazione limitata ma funzione ivi non limitata

### Categoria 1
$$
\int_{-\infty}^{a} f(x)dx \qquad \int_{a}^{+\infty}f(x) dx
$$
Nel caso la zona di integrazione sia $(-\infty, \infty)$ bisogna spezzarlo in due semirette.
$$
\int_{a}^{+\infty} f(x)dx = \lim_{ A \to +\infty } \underbrace{ \int_{a}^{A} f(x)dx }_{ \text{integrazione standard} }
$$
Analogamente
$$
\int_{-\infty}^{a}f(x)dx = \lim_{ A \to -\infty } \underbrace{ \int_{A}^{a}f(x)dx }_{ \text{integrazione standard} }
$$
### Categoria 2
$$
\int_{a}^{b}f(x)dx
$$
Con $f$ non limitata in uno solo degli estremi. Nel seguente caso $a$.
$$
\int_{a}^{b}f(x)dx = \lim_{ \varepsilon \to  0^{+} } \int_{a+\varepsilon}^{b} f(x)dx
$$
Ora nel caso di funzione non limitata in $b$.
$$
\int_{a}^{b}f(x)dx = \lim_{ \varepsilon \to  0^{+} } \int_{a}^{b-\varepsilon}f(x)dx
$$
Per calcolare gli integrali mono-problema si usano i limiti e abbiamo i soliti 4 casi:
1. Il limite è reale
2. Il limite è $+\infty$ (l'integrale diverge positivamente)
3. Il limite è $-\infty$ (l'integrale diverge negativamente)
4. Il limite non esiste

## Integrazione impropria pluri-problema
Con un integrale proprio generale si procede nel modo seguente:
1. Si spezza l'integrale in mono-problemi
2. Si studia ciascun integrale
3. Si uniscono i risultati e si usa l'algebra di $\bar{\mathbb{R}}$

##### Esempio
$$
\int_{0}^{+\infty} \frac{1}{x^{3}}dx
$$
Spezziamo l'integrale in un punto arbitrario
$$
\int_{0}^{10^{23}} \frac{1}{x^{3}}dx + \int_{10^{23}}^{+\infty} \frac{1}{x^{3}} dx
$$
##### Esempio
$$
\int_{-\infty}^{+\infty} e^{-x^{2}}dx = \int_{-\infty}^{0}e^{-x^{2}}dx + \int_{0}^{+\infty}e^{-x^{2}}dx
$$
Non è integrabile.
##### Esempio
$$
\int_{-2}^{2} \frac{1}{x} dx
$$
Va spezzato in due mono-problemi
$$
\int_{-2}^{0} \frac{1}{x} dx + \int_{0}^{2} \frac{1}{x} dx
$$
##### Esempio
$$
\int_{-\infty}^{+\infty} \frac{1}{x^{4} - 1} dx
$$
Sono 6 integrali:
Facendo il grafico della funzione diventa chiaro come spezzare l'integrale.
$$
\int_{-\infty}^{-2} + \int_{-2}^{-1} + \int_{-1}^{0} +\int_{0}^{1} + \int_{1}^{2} + \int_{2}^{+\infty}
$$

##### Esempio
$$
\int_{2}^{+\infty} \frac{1}{x^{2}} dx = \lim_{ A \to +\infty } \int_{2}^{A}\left( \frac{1}{x^{2}} \right) dx = \lim_{ A \to +\infty } \left[ -\frac{1}{x} \right]_{2}^{A} = \lim_{ A \to +\infty } \left[ -\frac{1}{A} +\frac{1}{2} \right] = \frac{1}{2}
$$
##### Esempio 
$$
\int_{0}^{+\infty} e^{-2x} dx = \lim_{ A \to +\infty } \int_{0}^{A} e^{-2x} dx = \lim_{ A \to +\infty } \left[ -\frac{1}{2} e^{-2x}\right]_{0}^{A} = \lim_{ A \to +\infty } \left[ -\frac{1}{2}e^{-2A} + \frac{1}{2} \right] = \frac{1}{2} 
$$
##### Esempio 
$$
\int_{0}^{+\infty} \frac{1}{x^{2} + 1} dx = \lim_{ A \to +\infty } \int_{0}^{A} \frac{1}{x^{2}+ 1} dx = \lim_{ A \to +\infty } [\arctan(x)]_{0}^{A} = \lim_{ A \to +\infty } [\arctan(A) - 0] = \frac{\pi}{2} 
$$
##### Esempio 
$$
\int_{0}^{1} \frac{1}{x^{2}} dx = \lim_{ \varepsilon \to  0^{+}} \int_{\varepsilon}^{1} \frac{1}{x^{2}} dx = \lim_{ \varepsilon \to  0^{+} } \left[ -\frac{1}{x} \right]^{1}_{\varepsilon} = \lim_{ \varepsilon \to 0^{+} } \left[ -1 + \frac{1}{\varepsilon} \right] = +\infty 
$$
##### Esempio 
$$
\int_{0}^{5} \frac{1}{\sqrt{ x }} dx = \lim_{ \varepsilon \to  0^{+}}  \int_{0}^{5} \frac{1}{\sqrt{ x }} dx = \lim_{ \varepsilon \to 0^{+} } [2\sqrt{ x }]_{0} ^{5} = \lim_{ \varepsilon \to  0^{+}}  (2\sqrt{ 5 } - 2\sqrt{ \varepsilon }) = 2\sqrt{ 5 }
$$
##### Esempio
Sia $a > 0$.
$$
\int_{a}^{+\infty} \frac{1}{x}dx = \lim_{ A \to \infty } \int_{a}^{A} \frac{1}{x} dx = \lim_{ A \to  +\infty}   [\log|x|]_{a}^{A} = \lim_{  A \to +\infty } (\log A - \log a) = +\infty
$$
$$
\int_{0}^{a} \frac{1}{x} dx = \lim_{ \varepsilon \to  0^{+}}  \int_{\varepsilon} ^{a} \frac{1}{x} dx = \lim_{ \varepsilon \to  0^{+} } [\log|x|]_{\varepsilon}^{a} = \lim_{ \varepsilon \to  0^{+} }  (\log a - \log\varepsilon) = +\infty
$$
##### Esempio
Sia $a > 0$ e $\alpha \neq 1$.
$$
\int_{a}^{+\infty} \frac{1}{x^{\alpha}} dx = \lim_{ A \to  +\infty } \int_{a}^{A} \frac{1}{x^{\alpha}} dx =  \lim_{ A \to + \infty }  \left[ \frac{x^{-\alpha + 1}}{-\alpha + 1} \right]_{a}^{A} = \lim_{ x \to +\infty } \left[ \frac{1}{-\alpha + 1} \left( \frac{1}{A^{\alpha - 1}} - \frac{1}{a^{\alpha - 1}} \right) \right]
$$
Quindi se $\alpha - 1> 0 \implies \alpha > 1$ allora il risultato è $\frac{1}{\alpha - 1} \frac{1}{a^{\alpha - 1}}$.
Se $\alpha - 1 < 0 \implies  \alpha < 1$ allora il risultato è $+\infty$

Dunque
$$
\int_{a}^{+\infty}  \frac{1}{x^{\alpha}} dx = \begin{cases}
\frac{1}{\alpha - 1} \frac{1}{a^{\alpha - 1}} \qquad \text{se } \alpha > 1 \\
+\infty  \qquad \text{se } \alpha \leq 1 
\end{cases}
$$
##### Esempio
Sia $a > 0$
$$
\int_{0}^{a} = \frac{1}{x^{\alpha}}dx = \lim_{ \varepsilon \to  0^{+} } \int_{\varepsilon}^{a} \frac{1}{x^{\alpha}} dx = \lim_{ \varepsilon \to  0^{+} }  \left[  \frac{x^{-\alpha + 1}}{-\alpha + 1} \right]_{\varepsilon}^{a} = \lim_{ \varepsilon \to 0^{+} } \left[ \frac{1}{1-\alpha} \left( \frac{1}{a^{\alpha - 1}} - \frac{1}{\varepsilon^{-\alpha - 1}}\right) \right]
$$
Quindi se $\alpha - 1 > 0 \implies \alpha > 1$ allora il risultato è $+\infty$.
Se $\alpha -1 < 0 \implies \alpha < 1$ allora il risultato è $\frac{1}{1-\alpha} \frac{1}{a^{\alpha-1}}$

Dunque
$$
\int_{0}^{a} \frac{1}{x^{\alpha}} dx = \begin{cases}
+\infty \qquad\text{se } \alpha \geq 1 \\
\frac{1}{1-\alpha} \frac{1}{a^{\alpha - 1}} \qquad \text{se } \alpha < 1
\end{cases}
$$

##### Esempio
$$
\int_{0}^{+\infty}  \frac{1}{x^{2} + 1} dx = \frac{\pi}{2}
$$
$$
\int_{-\infty}^{+\infty}  \frac{1}{x^{2} + 1}dx = \text{?}
$$
Essendo pari basta considerare 2 volte il primo integrale. Quindi il risultato è $\pi$.

In generale:
$$
\int_{a}^{b} f(x)dx \underbrace{ = }_{ \text{se }f \text{ è pari}}  \int_{-b}^{-a} f(x)dx = - \int_{-a}^{-b}f(x)dx
$$
$$
\int_{a}^{b} f(x)dx \underbrace{ = }_{ \text{se } f \text{ è dispari} } \int_{-a}^{-b} f(x) dx
$$
Se $f$ è dispari e limitata:
$$
\int_{-A}^{A} f(x)dx = 0
$$
Se $f$ è pari e limitata:
$$
\int_{-A}^{A} f(x) dx = 2 \int_{0} ^{A} f(x) dx 
$$
##### Esempio
$$
\int_{0}^{\frac{\pi}{2}} \cos ^{2}(x) dx = C
$$
$$
\int_{0}^{\frac{\pi}{2}} \sin ^{2}(x) dx = S
$$
$$
C + S = \int_{0}^{\frac{\pi}{2}} \cos ^{2}(x) dx + \int_{0}^{\frac{\pi}{2}} \sin ^{2}(x) dx = \int_{0}^{\frac{\pi}{2}} \cos ^{2}(x) + \sin ^{2}(x) dx = \int_{0}^{\frac{\pi}{2}} 1 dx = \frac{\pi}{2}
$$
Per motivi geometrici $C = S$. Quindi $C = \frac{C + S}{2} = \frac{\pi}{4}$.

---
A. Integranda $f(x) \geq 0$
	1. Teoremi di confronto
	2. Teoremi di confronto asintotici

B. Integranda segno non definito
	1. Assoluta integrabilità
	2. Trucco integrazione per parti

### Integranda $f(x) \geq 0$
Fatto generale:
Se $f\geq 0$, allora l'integrale improprio o converge a $l > 0$ o diverge positivamente.

#### Criterio del confronto
Supponiamo che $0 \leq f(x) \leq g(x), \forall x \in I$ dove $I$ è la zona di integrazione
Allora valgono le seguenti affermazioni, nel caso di integrali mono-problema.
- Se $\int_{I} g(x)dx < +\infty  \implies \int_{I}f(x)dx < +\infty$
- Se $\int_{I} f(x)dx = +\infty  \implies  \int_{I}g(x)dx = +\infty$

#### Criterio del confronto asintotico
Consideriamo sempre integrali impropri mono-problema.
$$
\int_{I} f(x)dx \qquad \int_{I} g(x)dx
$$
Supponiamo che $f(x) \geq 0$ in $I$ e $g(x)>0$ in $I$.
Supponiamo anche $\lim_{ x \to  x_{0}} \frac{f(x)}{g(x)} = l \neq 0, +\infty$ allora i due integrali hanno lo stesso comportamento. Tutti e due convergono o divergono positivamente.

Caso limite 1, $l = 0$
$$
\lim_{ x \to x_{0} } \frac{f(x)}{g(x)} = 0
$$
Ricordiamo che $f\geq 0$ e $g > 0$, allora $\frac{f(x)}{g(x)} < 1$ in un opportuno intorno di $x_{0}$.
Quindi $f(x) < g(x)$ in un determinato intorno di $x_{0}$.
Quindi se $\int_{I}g(x)dx < +\infty \implies \int_{I}f(x)dx < +\infty$.
Se $\int_{I}g(x)dx = +\infty$ allora non so dire nulla su $\int_{I}f(x)dx$.

Caso limite 2, $l = +\infty$

Allora $\frac{f(x)}{g(x)} > 1$  in un opportuno intorno di $x_{0}$.
Quindi $f(x) > g(x)$ in un determinato intorno di $x_{0}$.
Quindi se $\int_{I}g(x)dx = +\infty \implies \int_{I}f(x)dx = +\infty$.
Se $\int_{I}g(x)dx < +\infty$ allora non so dire nulla su $\int_{I}f(x)dx$.

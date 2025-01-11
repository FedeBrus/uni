## Integrazione di funzioni razionali
$$
\frac{P(x)}{Q(x)} = \text{funzione razionale}
$$
4 passaggi:

1. Divisione
2. Fattorizzazione
3. Sistema lineare algebrico
4. Integrazione

### Divisione
Questo avviene quando il grado del polinomio al numeratore è maggiore del grado del polinomio al denominatore.
$$
deg(P) \geq deg(Q)
$$
$$
\frac{P(x)}{Q(x)} = \frac{Q(x)A(x) + R(x)}{Q(x)} = \underbrace{ A(x) }_{ immediato } + \frac{R(x)}{Q(x)}
$$
Mentre $\frac{R(x)}{Q(x)}$ è una nuova funzione razionale, dove $deg(R(x)) < deg(Q(x))$.

### Fattorizzazione
Fattorizzo $Q(x)$.
Per il teorema fondamentale dell'algebra, $Q(x)$ si fattorizza in prodotti di grado $1$ e $2$ a seconda delle radici reali o complesse (coniugate), con eventuali molteplicità.

##### Esempio
$$
\int \frac{x^{3}+3}{x^{2}+1} dx 
$$
$deg(x^{3}+3) = 3, deg(x^{2} + 1) = 2$.

$$
\begin{align}
\int \left(x + \frac{3-x}{x^{2} + 1} \right) dx &= \frac{x^{2}}{2} +3\int \frac{1}{x^{2} + 1} - \int \frac{x}{x^{2} + 1} dx \\
 &  = \frac{x^{2}}{2} + 3\arctan(x) -\frac{1}{2}\log(x^{2} + 1) \\
 &  = \frac{x^{2}}{2}+3\arctan(x) +\log\left( \frac{1}{\sqrt{ x^{2}+1 }} \right)
\end{align}
$$
##### Esempio
$$
\begin{align}
x^{4} - 1 &= (x^{2} - 1)(x^{2} + 1) = (x^{2} + 1)(x + 1)(x - 1) \\
x^{3}-1 &= (x - 1)(x^{2}+x + 1)  \\
\end{align}
$$
### Sistema lineare

##### Caso semplice:
Nella decomposizione del polinomio al denominatore si hanno solo radici reali e/o complesse con molteplicità $1$.

Caso 1: Radici reali -> Numeratore costante
Caso 2: Radici complesse -> Numeratore polinomio di primo grado

##### Esempio
$$
\frac{2x + 5}{x^{2} - 1} = \frac{2x + 5}{(x - 1)(x + 1)} = \frac{A}{x - 1} + \frac{B}{x + 1} = \frac{A(x + 1) + B(x - 1)}{(x + 1)(x -1)} = \frac{(A + B)x + A - B}{(x + 1)(x - 1)}
$$
$$
\begin{cases}
A + B = 2 \\
A - B = 5
\end{cases}
\qquad
\begin{cases}
B = 2 - \frac{7}{2} = -\frac{3}{2} \\
A = \frac{7}{2}
\end{cases}
$$
Dunque
$$
\int \frac{2x + 5}{x^{2} - 1} dx = \frac{7}{2} \int \frac{1}{x- 1} dx - \frac{3}{2}\int \frac{1}{x+1} dx = \frac{7}{2}\log |x - 1| - \frac{3}{2} \log |x + 1| = \log\left( \sqrt{ \frac{|x-1|^{7}}{|x + 1|^{3}} } \right)
$$

##### Esempio
$$
\int \frac{3x^{3}+5x-2}{x^{4} - 1} dx = \int \frac{3x^{3}+5x-2}{(x-1)(x + 1)(x^{2} + 1)}dx
$$
$$
\frac{3x^{3}+5x-2}{(x-1)(x + 1)(x^{2} + 1)} = \frac{Ax + B}{x^{2} + 1}  + \frac{C}{x + 1} + \frac{D}{x - 1} = \frac{(Ax + B)(x^{2} - 1) + C(x^{2} + 1)(x - 1) +D(x^{2} + 1)(x+1)}{(x^{2} + 1)(x + 1)(x - 1)}
$$
$$
= \frac{Ax^{3}-Ax+Bx^{2}-B +Cx^{3}-Cx^{2}+Cx-C + Dx^{3}+Dx^{2}+Dx+D}{(x^{2}+1)(x + 1)(x - 1)} = \frac{(A + C + D)x^{3}+ (B - C + D)x^{2}+(-A+C+D)x +(-B-C+D)}{(x^{2}+1)(x+1)(x-1)}
$$
$$
\begin{cases}
A + C + D = 3 \\
B - C + D = 0 \\
- A + C + D = 5 \\
- B - C + D = -2
\end{cases}
\qquad
\begin{cases}
A + C + D = 3 \\
B - C + D = 0 \\
A = -1 \\
- B - C + D = -2
\end{cases}
\qquad
\begin{cases}
A + C + D = 3 \\
B - C + D = 0 \\
A = -1 \\
B = 1
\end{cases}
\qquad
\begin{cases}
C + D = 4 \\
- C + D = -1 \\
A = -1 \\
B = 1
\end{cases}
\qquad
\begin{cases}
C + D = 4 \\
D = \frac{3}{2} \\
A = -1 \\
B = 1
\end{cases}
\qquad
\begin{cases}
C = \frac{5}{2} \\
D = \frac{3}{2} \\
A = -1 \\
B = 1
\end{cases}
$$
$$
\begin{align}
\int \frac{3x^{3}+5x-2}{x^{4} - 1} dx &= \int \frac{-x + 1}{x^{2} + 1} dx + \frac{5}{2} \int \frac{1}{x + 1} dx +\frac{3}{2} \int \frac{1}{x- 1} \\
 & = \int \frac{1}{x^{2} + 1}dx - \frac{1}{2} \int \frac{2x}{x^{2} + 1}dx +\frac{5}{2}\int \frac{1}{x + 1}dx + \frac{3}{2} \int \frac{1}{x - 1}dx \\
 & = \arctan(x) - \frac{1}{2}\log(x^{2}+ 1) + \frac{5}{2}\log |x + 1| + \frac{3}{2}\log|x - 1| \\
\end{align}
$$
##### Esempio
$$
\int \frac{x}{(x + 1)^{2}(x - 2)} dx
$$
$$
\begin{align}
\frac{x}{(x + 1)^{2}(x - 2)} &= \frac{A}{x+1}+\frac{B}{x - 2}+ \frac{d}{dx}\frac{C}{x+1} \\
 & = \frac{A}{x+1} + \frac{B}{x-2} - \frac{C}{(x+1)^{2}}  \\
 & = \frac{A(x+1)(x -2) + B(x+1)^{2} - C(x - 2)}{(x+1)^{2}(x-2)} \\
 & = \frac{(A + B)x^{2} + (-A + 2B -C)x + (-2A + B + 2C)}{(x+1)^{2}(x-2)} \\
\end{align}
$$
$$
\begin{cases}
A + B = 0 \\
-A + 2B -C = 1 \\
-2A + B + 2C = 0
\end{cases}
\qquad
\begin{cases}
A = -B \\
3B - C = 1 \\
3B + 2C = 0
\end{cases}
\qquad
\begin{cases}
A = -B \\
3B - C = 1 \\
C = -\frac{1}{3}
\end{cases}
\begin{cases}
A = -\frac{2}{9} \\
B = \frac{2}{9} \\
C =-\frac{1}{3}
\end{cases}
$$
$$
\begin{align}
\int \frac{x}{(x + 1)^{2}(x - 2)} dx &= -\frac{2}{9} \int \frac{1}{x + 1} dx + \frac{2}{9} \int \frac{1}{x-2}dx -\frac{1}{3(x+ 1)} \\
 & = -\frac{2}{9} \log |x + 1| + \frac{2}{9} \log |x - 2| - \frac{1}{3(x+ 1)} \\
 & = \log\left( \sqrt[9]{\left(\frac{x-2}{x+1} \right)^{2}  } \right) - \frac{1}{3(x+1)}
\end{align}
$$
##### Esempio
$$
\int \frac{7x^{2}+5}{(x^{2} + 1)^{2}(x - 2)^{3}(x+5)}dx
$$
$$
\frac{7x^{2}+5}{(x^{2} + 1)^{2}(x - 2)^{3}(x+5)} = \frac{Ax + B}{x^{2} + 1} + \frac{C}{x - 2} + \frac{D}{x+5} + \frac{d}{dx} \underbrace{ \frac{Ex^{3}+Fx^{2}+Gx+H}{(x^{2}+1)(x-2)^{2}} }_{ \text{siccome deg(Den) = 4, bisogna avere deg(Num) = 4 - 1} }
$$
##### Esempio
$$
\int \frac{x^{5} + 1}{x^{4}+x^{3}} dx
$$
Passo 1:
Divisione
$$
\int (x-1)dx + \int \frac{x^{3}+1}{x^{4}+x^{3}} dx = \frac{x^{2}}{2} - x + \int\frac{x^{3}+1}{x^{4}+x^{3}}dx
$$
Passo 2:
Fattorizzazione
$$
\int \frac{x^{3}+1}{x^{4}+x^{3}}dx = \int \frac{x^{3}+1}{x^{3}(x + 1)}dx
$$
Passo 3:
$$
\begin{align}
\int \frac{x^{3}+1}{x^{3}(x + 1)}dx &= \frac{A}{x} + \frac{B}{x+1} + \frac{d}{dx} \frac{Cx + D}{x^{2}}  \\
 & = \frac{A}{x} + \frac{B}{x+ 1} + \frac{Cx^{2} - 2x(Cx + D)}{x^{4}} \\
 & = \frac{A}{x} + \frac{B}{x+1} + \frac{Cx - 2(Cx + D)}{x^{3}} \\
 & = \frac{Ax^{2}(x+1) + Bx^{3} + (-Cx-2D)(x + 1)}{x^{3}(x+1)} \\
 & = \frac{(A + B)x^{3} + (A - C) x^{2} +(-C-2D)x + (-2D)}{x^{3}(x+1)}
\end{align}
$$
$$
\begin{cases}
A + B = 1 \\
A - C = 0 \\
-C -2D = 0 \\
-2D = 1
\end{cases}
\qquad
\begin{cases}
B = 0 \\
A = 1 \\
C = 1 \\
D = -\frac{1}{2}
\end{cases}
$$
$$
\begin{align}
\int \frac{x^{5} + 1}{x^{4}+x^{3}} dx  &= \frac{x^{2}}{2} - x + \int\frac{x^{3}+1}{x^{4}+x^{3}}dx  \\
 & = \frac{x^{2}}{2} - x + \int \frac{1}{x} dx + \int \frac{d}{dx} \frac{\left(  x - \frac{1}{2}\right)}{x^{2}} dx \\
 & = \frac{x^{2}}{2} - x + \log|x| + \frac{x-\frac{1}{2}}{x^{2}}
\end{align}
$$
### Oss
Alla fine del processo 1, 2, 3 vengono sempre 3 tipi di integrali
1. Termini del tipo $\frac{A}{x - \alpha}$ -> $A \log|x - \alpha|$
2. Termini del tipo $\frac{d}{dx}(\text{robaccia})$ -> $\text{robaccia}$
3. Termini del tipo $\frac{Ax + B}{\underbrace{ ax^{2}+bx+c }_{ \Delta < 0 }}$
##### Esempio
$$
\begin{align}
\int \frac{3x + 5}{x^{2}+2} dx &= \frac{3}{2} \int \frac{2x}{x^{2}+2} + 5 \int \frac{1}{x^{2}+ 2} dx  \\
 & = \frac{3}{2}\log(x^{2}+2) + 5 \int \frac{1}{\left( \frac{x^{2}}{\sqrt{ 2 }} \right)^{2}+1}dx  \\
 & = \frac{3}{2} \log(x^{2}+2) + \frac{5\sqrt{ 2 }}{2} \int \frac{1}{\left( \frac{x}{\sqrt{ 2 }}^{2} \right) + 1} \frac{dx}{\sqrt{ 2 }} \\
 & = \frac{3}{2}\log(x^{2}+2) +\frac{5\sqrt{ 2 }}{2} \arctan\left( \frac{x}{\sqrt{ 2 }} \right)
\end{align}
$$

In generale:
$$
\int \frac{Ax+B}{x^{2}+C} dx = \frac{A}{2} \log(x^{2}+C) + \frac{B}{\sqrt{ C }} \arctan\left( \frac{x}{\sqrt{ C }} \right), \text{ se } C > 0
$$
Se $C \leq 0$ allora si torna alla fattorizzazione del denominatore.

##### Esempio
$$
\int \frac{1}{x^{2}+2x+2}dx = \int \frac{1}{x^{2}+2x +1 +1} dx = \int \frac{1}{(x+1)^{2} + 1}dx
$$
Pongo $y = x + 1 \implies dy = dx$
$$
\int \frac{1}{y^{2} + 1}dy = \arctan(y) = \arctan(x+1)
$$
##### Esempio
$$
\int \frac{2x + 5}{x^{2}+2x+2} dx = \int \frac{2x + 2 + 3}{x^{2}+2x+2} dx = \int \frac{2x+ 2}{x^{2}+2x+2} dx + 3 \arctan(x+1) = \log|x^{2}+2x+2| + 3\arctan(x+1)
$$
In generale:
$$
\int \frac{f'(x)}{f(x)} dx = \log|f(x)|
$$
##### Esempio
$$
\int \tan(x) dx = \int \frac{\sin(x)}{\cos(x)} dx = - \int -\frac{\sin(x)}{\cos(x)} dx = - \log | \cos(x) |
$$
##### Esempio
$$
\begin{align}
\int \frac{5x + 2}{x^{2}+2x+2} dx & = \int \frac{5x + 5 - 3}{x^{2}+2x+2} dx \\
 & = \frac{5}{2}\int \frac{2x+2}{x^{2}+2x+2}dx - 3 \arctan(x+1)  \\
 & = \frac{5}{2} \log |x^{2}+2x+2| - 3 \arctan(x+1)
\end{align}
$$
##### Esempio
$$
\begin{align}
\int \frac{1}{\cos(x)} dx  & = \int \frac{\cos(x)}{\cos ^{2}(x)} dx \\
 & = \int \frac{\cos(x)}{1 - \sin ^{2}(x)} dx
\end{align}
$$
Pongo $y = \sin(x) \implies dy = \cos(x) dx$
$$
\begin{align}
\int \frac{-1}{y^{2}-1} dy
\end{align}
$$
$$
\frac{-1}{y^{2} - 1} = \frac{A}{y-1} + \frac{B}{y+1} = \frac{A(y+1)+B(y-1)}{(y-1)(y+1)} = \frac{(A+B)y+(A-B)}{(y-1)(y+1)}
$$
$$
\begin{cases}
A + B = 0 \\
A - B = 1
\end{cases}
\qquad
\begin{cases}
B = -\frac{1}{2} \\
A = \frac{1}{2}
\end{cases}
$$

$$
\begin{align}
\int \frac{1}{2y-2}dy -\int \frac{1}{2y+2} &= \frac{1}{2}\log|y-1|-\frac{1}{2}\log|y+1| \\
 & = \log \sqrt{ \left| \frac{y-1}{y+1} \right| } \\
 & = \log \sqrt{ \left| \frac{\sin x-1}{\sin x+1} \right| }
\end{align}
$$
---
## Sostituzioni razionalizzanti
- Funzioni razionali di esponenziali
- Radici ennesime di cose di grado $1$
- Radici quadrate di cose di grado $2$
- Trigonometriche
- ...

##### Esempio
$$
\int \frac{e^{2x}}{e^{x}+1}dx
$$
Metodo 1:
Pongo $y = e^{x}\implies dy = e^{x}dx$ 
$$
\int \frac{e^{2x}}{e^{x}+1}dx = \int \frac{y}{y + 1} dy = \int \frac{y+1-1}{y +1} dy = \int dy - \int \frac{1}{y+1}dy = y + \log|y+1| = e^{x}+\log(e^{x}+1)
$$
Metodo 2:
Pongo $y = e^{x}+1 \implies dy = e^{x}dx$
$$
\int \frac{e^{2x}}{e^{x}+1}dx = \int \frac{y - 1}{y} dy = \int dy - \int \frac{1}{y}dy = y - \log |y| = e^{x} + 1 - \log(e^{x} + 1)
$$
##### Esempio 2
$$
\int \frac{1}{1+e^{2x}} dx
$$
Metodo 1:
Pongo $y = e^{x} \implies  dy = e^{x}dx$
$$
\int \frac{1}{1+e^{2x}} dx = \int \frac{e^{x}e^{-x}}{1+e^{2x}} dx = \int \frac{1}{y} \frac{1}{1 + y^{2}} dy = \int \frac{1}{y(1+ y^{2})} dy
$$
$$
\frac{Ay + B}{y^{2} + 1} + \frac{C}{y} = \frac{Ay^{2}+By+Cy^{2} +C}{y(y^{2} + 1)} =\frac{(A+C)y^{2} + By + C}{y(y^{2} + 1)}
$$
$$
\begin{cases}
A + C = 0 \\
B = 0 \\
C = 1
\end{cases}
\qquad
\begin{cases}
A = -1 \\
B = 0 \\
C = 1
\end{cases}
$$
$$
\int \frac{1}{y(y^{2} + 1)} dy = \int -\frac{y}{y^{2} + 1} dy + \int \frac{1}{y} dy = \log |y| - \frac{1}{2} \log (y^{2} + 1) = x - \log (\sqrt{ 1+e^{2x} }) = \log\left( \frac{e^{x}}{\sqrt{ 1+e^{2x} }} \right)
$$
Metodo 2:
Pongo $y = 1 + e^{2x} \implies  dy = 2e^{2x}dx$
$$
\int \frac{1}{1+e^{2x}}dx = \int \frac{1}{2e^{2x}} \frac{2e^{2x}}{1+e^{2x}} dx = \int \frac{1}{2(y - 1)} \frac{1}{y} dy = \frac{1}{2} \int \frac{1}{y(y - 1)} dy
$$
$$
\frac{A}{y} + \frac{B}{y - 1} = -\frac{1}{y} + \frac{1}{y - 1}
$$
$$
\frac{1}{2} \int \frac{1}{y(y - 1)} dy = \frac{1}{2} \left( \int -\frac{1}{y} dy + \int \frac{1}{y - 1} dy \right) =-\frac{1}{2} \log|y| + \frac{1}{2}\log|y - 1| = 
$$
##### Esempio
$$
\int \frac{8^{x}}{3 + 4^{x}} = \int \frac{2^{3x}}{3 + 2^{2x}} dx
$$
Pongo $y = 2^{x} \implies dy = 2^{x}\log 2dx$
$$
 \int \frac{2^{3x}}{3 + 2^{2x}} dx = \int \frac{2^{2x}2^{x}}{3+ 2^{2x}}dx = \frac{1}{\log 2} \int \frac{y^{2}}{3+y^{2}} dy = \frac{1}{\log 2} \int dy - \frac{3}{\log 2} \int \frac{1}{3 + y^{2}} dy
$$
$$
\frac{1}{\log 2} y - \frac{1}{\log 2} \int \frac{1}{1 + \left( \frac{y}{\sqrt{ 3 }} \right)^{2}} dy = \frac{1}{\log 2}y - \frac{\sqrt{ 3 }}{\log 2} \arctan \left( \frac{y}{\sqrt{ 3 }} \right) = \frac{1}{\log 2} \left( y - \sqrt{ 3 }\arctan\left( \frac{y}{\sqrt{ 3 }} \right) \right) = \frac{1}{\log 2} \left( 2^{x} - \sqrt{ 3 }\arctan\left( \frac{2^{x}}{\sqrt{ 3 }} \right) \right)
$$
##### Esempio
$$
\int \frac{5 + \sqrt{ x }}{x + 2} dx
$$
Pongo $y = \sqrt{ x } \implies dy = \frac{dx}{2\sqrt{ x }}$
$$
\int \frac{5 + \sqrt{ x }}{x + 2} \frac{2\sqrt{ x }}{2\sqrt{ x }} dx = 2\int\frac{5y + y^{2}}{y^{2} +  2} dy =  2 \int dy + 2 \int \frac{5y - 2}{y^{2} + 2} dy = 2\sqrt{ x } + 5\log(x + 2) -2\sqrt{ 2 } \arctan\left( \sqrt{ \frac{x}{2} } \right)
$$
Oppure considero $x = y^{2}$
Quindi:
$$
dx = 2ydy
$$
##### Esempio
$$
\int \frac{5 + \sqrt{ x }}{\sqrt[3]{ x } + 2}dx
$$
Regola generale: se sono presenti $\sqrt[a]{ x }, \sqrt[b]{ x }, \sqrt[c]{ x }, \dots$, fare il minimo comune multiplo delle radici.
Pongo $y = \sqrt[6]{ x }\implies dy= \frac{1}{6\sqrt[6]{ x^{5} }}dx$.
Allora $x = y^{6} \implies dx =6y^{5}dy$.
$$
\int \frac{5+y^{3}}{y^{2}+2}6y^{5}dy = 6 \int \frac{y^{8} + 5y^{5}}{y^{2} + 2} dy
$$
##### Esempio
$$
\int \sqrt{ \frac{x+3}{x+2} } dx
$$
Pongo $y = \sqrt{ \frac{x+3}{x + 2} } \Longleftrightarrow y^{2} = \frac{x+3}{x+2} \Longleftrightarrow (x+2)y^{2} = x+3 \Longleftrightarrow x(y^{2}-1) = 3-2y^{2} \Longleftrightarrow x = \frac{3-2y^{2}}{y^{2}-1}$
Dunque $dx = \left( \frac{3-2y^{2}}{y^{2} - 1} \right)'dy$
$$
\int \sqrt{ \frac{x+3}{x+2} } dx = \int y \left( \frac{3-2y^{2}}{y^{2}-1} \right)' dy = y \left( \frac{3-2y^{2}}{y^{2} - 1}\right) - \int \frac{3-2y^{2}}{y^{2} - 1} dy
$$
Integrali di tipo
$$
\int \sqrt{ \frac{ax + b}{cx+d} } dx 
$$
Si risolvono così.

##### Esempio
$$
\int (\sqrt{ x^{2}+3x+5 })dx
$$
Pongo $y + x = \sqrt{ x^{2} + 3x +5 }$, dunque $y^{2} + 2xy +x^{2} = x^{2} + 3x + 5$, quindi $x(3-2y) = y^{2} - 5 \Longleftrightarrow x = \frac{y^{2}-5}{3-2y} \implies  dx = \left( \frac{y^{2}-5}{3- 2y} \right)'dy$

Infine:
$$
\int (\sqrt{ x^{2}+3x+5 }) dx = \int \underbrace{ \left( y + \frac{y^{2} -5}{3-2y} \right) }_{ F }\underbrace{ \left( \underbrace{ \frac{y^{2}-5}{3-2y} }_{ G } \right)' }_{ g } dy = \text{ si continua per parti}
$$



Immaginando di aver avuto $\sqrt{ 3x^{2} + 5 }$.
$y + \sqrt{ 3 }x = \sqrt{ 3x^{2} + 5 } \Leftrightarrow y^{2} + 2\sqrt{ 3 }yx + 3x^{2} = 3x^{2} +5$

Integrali di tipo
$$
\int (\sqrt{ ax^{2}+bx+c }) dx
$$
Si risolvono così. 
Ponendo $y + \sqrt{ a }x = \sqrt{ ax^{2}+bx+x }$, con $a$ positivo.
$$
\int \sqrt{ 4-x^{2} } dx
$$
$4-x^{2} = (2-x)(2+x)$
$y(2+x) = \sqrt{ 4-x^{2} }$
$y^{2}(2+x)^{2} = (2+x)(2-x)$
$y^{2}(2+x)=(2-x) \Leftrightarrow x(y^{2} + 1) = 2 - 2y^{2} \Leftrightarrow  x = \frac{2-2y^{2}}{1+y^{2}} \implies dx = \left( \frac{2-2y^{2}}{1+y^{2}} \right)'dy$

#### Punto della situazione:
1. Se $a>0$ e il $\Delta \geq 0$ ho 2 metodi
2. Se $a>0$ e il $\Delta < 0$ $y + \sqrt{ a }x = f(x)$
3. Se $a < 0$ e il $\Delta\geq 0$ $(y(x-\text{radice}))$
4. Se $a < 0$ e il $\Delta < 0$ niente da fare, la funzione non ha senso nei reali

##### Esempio
$$
\int \sqrt{ x^{2} + 1 } dx
$$
o fare $y + x = \sqrt{ x^{2} + 1 }$, oppure considerando che $\cosh ^{2}x-\sinh ^{2}x = 1$, $\cosh x= \frac{e^{x}+e^{-x}}{2}$ e $\sinh x = \frac{e^{x}-e^{-x}}{2}$.
Pongo $x = \sinh(y) \implies 1+x^{2} = 1 +\sinh ^{2}(y) = \cosh ^{2}(x)$, allora $\sqrt{ 1+x^{2} } = \sqrt{ \cosh ^{2}(y) } = \cosh(y)$.
$dx = \cosh y dy$
$$
\int \cosh ^{2}(y) dy
$$
O sviluppo il coseno iperbolico e risolvo con gli esponenziali, oppure integrare per parti con grande ritorno.
$$
\int \cosh ^{2}(y) dy = \int \cosh (y) \cosh(y) dy = \sinh(y) \cosh(y) - \int \sinh(y)\sinh(y) dy =\sinh(y)\cosh(y)dy + y - \int \cosh ^{2}y dy
$$
$$
\int \cosh ^{2}(y) dy = \frac{1}{2}\left(\sinh(y) \cosh(y) + y \right)
$$
$\sinh(y)$ è bigettiva da $\mathbb{R} \rightarrow \mathbb{R}$ e la sua inversa è il settore seno-iperbolico $y = settsinh(x)$.

### Formule parametriche per seno e coseno
$t = \tan\left( \frac{x}{2} \right)$, $\sin(x) = \frac{2t}{1 + t^{2}}$, $\cos(x) = \frac{1- t^{2}}{1+t^{2}}$.
$$
\int \frac{3 + \sin(x)}{5+\cos(x)}dx
$$
Pongo $y = \tan\left( \frac{x}{2} \right)$.
$dy = \frac{1}{2}\left( 1+\tan ^{2}\left( \frac{x}{2} \right) \right)dx = \frac{1}{2}(1+y^{2})dx \implies dx =\frac{dy}{\frac{1}{2}(1+y^{2})}$ 
$$
2\int \frac{3+\frac{2y}{1+y^{2}}}{5+ \frac{1-y^{2}}{1+y^{2}}} \frac{dy}{1+y^{2}} = 2 \int \frac{3 + 3y^{2} + 2y}{5+5y^{2}+1-y^{2}} \frac{dy}{1+y^{2}}
$$
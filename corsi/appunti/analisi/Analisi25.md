Equazioni differenziali ordinari lineari omogenee e non omogenee.
$$
f(t) = e^{\alpha t}
$$
In questo caso abbiamo visto che $\bar{u}(t) = \lambda e^{\alpha t}$ se $\alpha$ non è radice del polinomio caratteristico, altrimenti se $\alpha$ è radice di molteplicità $m \in \mathbb{N}$ allora $\bar{u}(t) = \lambda t^{m}e^{\alpha t}$.

##### Esempio
$$
u''-3u' -4u = \sin(t)
$$
La soluzione omogenea è $u_{om}(t) = c_{1}e^{-t}+c_{2}e^{4t}$. La soluzione particolare sarà della forma $\bar{u}(t)=\lambda \sin t+\mu \cos(t)$, $\lambda,\mu \in \mathbb{R}$.
$$
\begin{align}
\bar{u}'(t) &= \lambda \cos(t) - \mu \sin(t) \\
\bar{u}''(t) &= -\lambda \sin(t) - \mu \cos(t) \\
\end{align}
$$
Quindi:
$$
u''-3u'-4u = -\lambda \sin(t) - \mu \cos(t) - 3\lambda \cos(t) + 3\mu \sin(t) - 4\lambda \sin(t) -4\mu \cos(t) = \sin(t)
$$
$$
\begin{cases}
-5\lambda+3\mu = 1 \\
-3\lambda - 5\mu = 0
\end{cases}\rightarrow
\begin{cases}
-25\lambda+15\mu = 5 \\
-9\lambda - 15 \mu = 0
\end{cases}\rightarrow
\begin{cases}
\lambda = -\frac{5}{34} \\
\mu = \frac{3}{34}
\end{cases}
$$
La soluzione generale $u(t) = u_{om}(t) - \frac{5}{34}\sin(t)+ \frac{3}{34}\cos(t)$.
### Regola generale:
Se il termine noto è del tipo $f(t) = \sin(\alpha t)$ o $f(t) = \cos(\alpha t)$ o combinazione lineare dei due, allora la soluzione particolare dell'equazione differenziale ordinaria lineare non omogenea va cercata della stessa forma, ovvero $\bar{u}(t) = \lambda \sin(\alpha t) + \mu \cos(\alpha t)$. Questo vale se $\alpha$ non è parte immaginaria delle radici complesse coniugate del polinomio caratteristico dell'equazione omogenea associata. Altrimenti se $\alpha$ è parte immaginaria delle radici complesse coniugate con molteplicità $m\in \mathbb{N}$ allora si cerca la soluzione particolare $\bar{u}(t) = \lambda t^{m}\sin(\alpha t) + \mu t^{m}\cos(\alpha t)$.

##### Esempio
$$
u'' + u = \sin(t)
$$
Il polinomio caratteristico è $x^{2} + 1 = 0 \Longleftrightarrow x = \pm i$, dunque normalmente le basi sarebbe stata $(e^{at}\cos(bt), e^{at}\sin(bt))$ ma in questo caso la parte reale è $0$ dunque la base è $(\cos(t), \sin(t))$. Quindi $u_{om}(t) = c_{1}\cos(t) + c_{2}\sin(t)$. In questo caso $\alpha = 1 = a$. Quindi dobbiamo cercare la soluzione particolare dell'equazione non omogenea della forma $\bar{u}(t) = \lambda t\cos(t) + \mu t\sin(t)$.
$$
\begin{align}
\bar{u}(t) &= \lambda t\cos(t) + \mu t \sin(t) \\
\bar{u}(t)' &= \lambda \cos(t) -\lambda t\sin(t) + \mu \sin(t) + \mu t\cos(t) \\
\bar{u}(t)'' &= -\lambda \sin (t) - \lambda \sin(t) - \lambda t \cos(t)+\mu \cos(t)+\mu \cos(t) - \mu t\sin(t)
\end{align}
$$
$$
-2\lambda \sin(t) + 2\mu \cos(t) = 1\sin(t) + 0\cos(t) \implies \lambda = -\frac{1}{2}, \mu = 0
$$
$$
u(t) = c_{1}\cos(t) + c_{2}\sin(t) - \frac{1}{2}t\cos(t) = \left( c_{1}-\frac{t}{2} \right) \cos(t) + c_{2} \sin(t)
$$
##### Esempio
$$
u''-3u'-4u = t^{2}
$$
Ora vogliamo cercare una soluzione particolare della forma $\bar{u}(t) = at^{2}+bt+c$, $a,b,c \in \mathbb{R}$.
$$
\begin{align}
\bar{u}(t) &= at^{2} + bt + c \\
\bar{u}(t)'  & = 2at + b \\
\bar{u}(t)'' & = 2a
\end{align}
$$
$$
u''-3u'-4u = 2a - 6at - 3b -4at^{2}-4bt-4c = t^{2}
$$
$$
\begin{cases}
-4a = 1 \\
-6a - 4b = 0 \\
2a -3b - 4c = 0
\end{cases}
\rightarrow
\begin{cases}
a = -\frac{1}{4} \\
b = \frac{3}{8} \\
c = -\frac{13}{32}
\end{cases}
$$
Dunque la soluzione del problema è $u(t) = c_{1}e^{-t} + c_{2}e^{4t} -\frac{1}{4}t^{2}+\frac{3}{8}t-\frac{13}{32}$
### Regola generale:
Se il termine noto è un polinomio in $t$, allora la soluzione particolare dell'equazione non-omogenea è come un polinomio completo in $t$ dello stesso grado del termine noto. Questo funziona soltanto se la base dell'equazione omogenea associata non contiene già il termine noto. Questo può accadere se $x = 0$ è radice del polinomio caratteristico. Se $x = 0$ è radice di molteplicità $m$ allora la soluzione particolare è un polinomio completo dello stesso grado del termine noto, moltiplicato per $t^{m}$.
##### Esercizio
$$
u^{(4)} + 9 u'' = t^{3} -3
$$
Il polinomio caratteristico è $x^{4}+9x^{2} = 0 \Longleftrightarrow x^{2}(x^{2} + 9) = 0$. Le radici sono $x = 0$ con molteplicità $2$ e $x = \pm 3i$.
Perciò la base è $(\cos(3t), \sin(3t), 1, t)$. Quindi $\bar{u}(t) = at^{5}+bt^{4}+ct^{3}+dt^{2} = t^{2}(at^{3}+bt^{2}+ct+d)$.
$$
\begin{align}
\bar{u}' &= 5at^{4} + 4bt^{3} + 3ct^{2} + 2dt \\
\bar{u}'' &= 20at^{3} + 12bt^{2} + 6ct + 2d \\
\bar{u}''' &= 60at^{2} + 24bt + 6c \\
\bar{u}^{(4)} &= 120at + 24b
\end{align}
$$
L'equazione iniziale diventa:
$$
120at + 24b + 9(20at^{3}+12bt^{2}+6ct+2d) = t^{3}-3
$$
$$
\begin{cases}
180a = 1 \\
b = 0 \\
120a+54c = 0 \\
18d=-3
\end{cases}\rightarrow
\begin{cases}
a = \frac{1}{180} \\
b = 0 \\
c = -\frac{1}{81} \\
d = -\frac{1}{6}
\end{cases}
$$
Quindi la soluzione è $u(t) = \lambda \cos(3t)+\mu \sin(t)+\nu + \xi t - \frac{1}{180}t^{5}-\frac{1}{81}t^{3}-\frac{1}{6}t^{2}$.
## Metodo di Lagrange (Lagrangia) della variazione delle costanti
##### Esempio
$$
u'' -3u'-4u =t
$$
Dobbiamo cercare $\bar{u}(t) = at + b$
$$
\begin{align}
\bar{u}'(t) &= a \\
\bar{u}''(t) &= 0
\end{align}
$$
L'equazione di partenza diventa:
$$
-3a-4at-4b = t
$$
I coefficienti sono $a = -\frac{1}{4}$ e $b = \frac{3}{16}$. Quindi $\bar{u}(t) = -\frac{1}{4}t + \frac{3}{16}$ e $u_{om}(t) = ae^{-t} + be^{4t}$

Con il metodo di Lagrange si prende la soluzione dell'equazione omogenea associata e ne vario le costanti, cioè prendo come soluzione della non omogenea $\bar{u}(t) = a(t)e^{-t}+b(t)e^{4t}$.
$$
\begin{align}
\bar{u}(t) &= a(t)e^{-t}+b(t)e^{4t} \\
\bar{u}'(t) &= a'(t)e^{-t} -a(t)e^{-t} + b'(t)e^{4t} + 4b(t)e^{4t}
\end{align}
$$
1° vincolo:
Si prendono i termini aventi le derivate di $a'(t)$ e $b'(t)$ e li si pone a $0$.
$a'(t)e^{-t} + b'(t)e^{4t} = 0$
$$
\begin{align}
\bar{u}(t) &= a(t)e^{-t}+b(t)e^{4t} \\
\bar{u}'(t) &=  -a(t)e^{-t} +  4b(t)e^{4t} \\
\bar{u}''(t) &= -a'(t)e^{-t} + a(t)e^{-t} +4b'(t)e^{4t} + 16b(t)e^{4t}
\end{align}
$$
Ora si sostituisce all'equazione originale:
$$
\underbrace{ -a'(t)e^{-t} + a(t)e^{-t} +4b'(t)e^{4t} + 16b(t)e^{4t} }_{ u'' }  \underbrace{ +3a(t)e^{-t}  - 12b(t)e^{4t} }_{ -3u' } \underbrace{ -4a(t)e^{-t}-4b(t)e^{4t} }_{ -4u } = t
$$
Deve venire sempre che i termini aventi $a(t)$ e $b(t)$ si annullano. Rimaniamo con:
$$
-a'(t)e^{-t} + 4b'(t)e^{4t} = t
$$
Ora abbiamo questo sistema
$$
\begin{cases}
a'(t)e^{-t} + b'(t)e^{4t} = 0 \\
-a'(t)e^{-t} + 4b'(t)e^{4t} = t
\end{cases}\rightarrow
\begin{cases}
b'(t) = -a'(t)e^{-5t} \\
5b'(t)e^{4t} = t
\end{cases}\rightarrow
\begin{cases} 
a'(t) = -\frac{1}{5}te^{t} \\
b'(t) = \frac{1}{5}te^{-4t}
\end{cases}
$$
$$
\begin{align}
a'(t) &= -\frac{1}{5}te^{t} \\
\int a'(t) dt &= -\frac{1}{5}\int te^{t} dt \\
a(t) &= -\frac{1}{5}te^{t}+\frac{1}{5}e^{t}  \\
a(t) &= -\frac{1}{5}(t + 1)e^{t}
\end{align}
$$
$$
\begin{align}
b'(t) &= \frac{1}{5}te^{-4t} \\
\int b'(t)dt & = \frac{1}{5} \int te^{-4t} dt \\
b(t) & = \frac{1}{5}t\left( -\frac{1}{4}e^{-4t} \right) - \frac{1}{5} \int-\frac{1}{4}e^{-4t} dt \\
b(t) &= -\frac{1}{20}te^{-4t} + \frac{1}{20} \int e^{-4t}dt  \\
b(t) &= -\frac{1}{20}te^{-4t} - \frac{1}{80} e^{-4t} \\
b(t)  & = -\frac{1}{20} e^{-4t} \left( t + \frac{1}{4} \right)
\end{align}
$$
$$
\begin{align}
\bar{u}(t) &= a(t) e^{-t} + b(t) e^{4t}  \\
 & = -\frac{1}{5} (t + 1) e^{t} e^{-t} - \frac{1}{20}\left( t + \frac{1}{4} \right) e^{-4t} e^{4t}  \\
 & = -\frac{1}{5}t - \frac{1}{20}t + \frac{1}{5} -\frac{1}{80} \\
 & = -\frac{5}{20}t + \frac{15}{80} \\
 & = -\frac{1}{4}t + \frac{3}{16}
\end{align}
$$
## Equazioni differenziali di primo ordine lineari
Ad esempio:
$$
u'(t) + a(t)u(t) = b(t)
$$
2 Metodi:
1. Fattore integrante
2. Omogenea + tentativo particolare

### Fattore integrante
Considero una primitiva $A(t)$ della funzione $a(t)$, ossia $A'(t) = a(t)$.
Moltiplico l'equazione per $e^{A(t)}$, chiamato fattore integrante.
$$
\begin{align}
e^{ A(t) } u'(t) + a(t)u(t)e^{A(t)} &= b(t)e^{ A(t) } \\
e^{ A(t) } u'(t) + A'(t)u(t)e^{A(t)} &= b(t)e^{ A(t) } \\
(u(t)e^{A(t)})' &= b(t)e^{A(t)}  \\
\int (u(t)e^{ A(t) })' dt & = \int b(t)e^{A(t)}dt \\
u(t)e^{ A(t) } &= \int b(t)e^{ A(t) } dt + c \\
u(t)  & = e^{-A(t)} \int b(t) e^{A(t)} dt + ce^{-A(t)}
\end{align}
$$
Metodo 2:
La soluzione è:
$$
u(t) = u_{om}(t) + \bar{u}(t)
$$
L'equazione omogenea associata è:
$$
\begin{align}
u' + a(t)u &= 0 \\
u' = -a(t)u
\end{align}
$$
$$
\begin{align}
\frac{du}{u} &= -a(t)dt \\
\log |u| &= - \int a(t) dt \\
\log |u| & = -A(t) + c \\
|u|  & = e^{-A(t) + c} \\
|u|  & = ce^{-A(t)} \\
u & = \pm Ce^{-A(t)}
\end{align}
$$
Ora cerchiamo $\bar{u}(t)$
$$
\begin{align}
\bar{u}(t) &= c(t)e^{-A(t)} \\
\bar{u}'(t)  & = c'(t)e^{-A(t)} + c(t)(-a(t))e^{-A(t)}
\end{align}
$$
L'equazione originale è:
$$
\begin{align}
c'(t) e^{-A(t)} - a(t)c(t)e^{ -A(t)} + a(t)c(t) e^{-A(t)} &= b(t) \\
c'(t) &= b(t)e^{A(t)} \\
c(t) &= \int b(t) e^{A(t)} dt
\end{align}
$$
Quindi $\bar{u}(t) = e^{-A(t)} \int b(t)e^{A(t)}dt$
Quindi si ritrova la formula generale.
##### Esempio
$$
u' + 2tu = t^{3}
$$
$a(t) = 2t$ e $b(t) = t^{3}$. Dunque $A(t) = t^{2}$.
Allora:
$$
\begin{align}
u(t) &= ce^{-t^{2}} + e^{-t^{2}} \int t^{3}e^{t^{2}} dt \\
 & = ce^{-t^{2}}+e^{ -t^{2} } \int t^{2} \cdot te^{ t^{2} } dt \\
 & = ce^{-t^{2}}+e^{ -t^{2} } \left( \frac{1}{2} t^{2}e^{ t^{2} } - \frac{1}{2} \int 2te^{t^{2}} \right)  \\
 & = ce^{-t^{2}}+e^{ -t^{2} } \left( \frac{1}{2} t^{2}e^{ t^{2} } - \frac{1}{2} e^{ t^{2} } \right) \\
 & = ce^{-t^{2}}+ \left( \frac{1}{2} t^{2} - \frac{1}{2}  \right) \\
 & = ce^{-t^{2}}+ \frac{1}{2} \left( t^{2} - 1  \right) \\
\end{align}
$$

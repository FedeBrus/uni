##### Esempio
$$
\begin{cases}
u' = u^{2}t^{3} \\
u(0) = 7
\end{cases}
$$
1) Separare
$$
\frac{du}{dt} = u^{2}t^{3} \implies \frac{du}{u^{2}} = t^{3}dt \implies  \int \frac{du}{u^{2}} = \int t^{3}dt
$$
2) Integrare
$$
\int \frac{du}{u^{2}} = \int t^{3}dt \implies  -\frac{1}{u} = \frac{t^{4}}{4} +c
$$
3) Ricavare
$$
u(t) = \frac{1}{-\frac{t^{4}}{4}+c} = \frac{4}{c - t^{4}}
$$
4) Determinare $c$
$$
7 = \frac{4}{c} \implies  c = \frac{4}{7}
$$
5) Soluzione del problema: 
$$
u(t) = \frac{28}{4 - 7t^{4}}
$$
6) Verifica:
$u(0) = 7$ e $u'(t) = 28 \left(\frac{-1}{(4-7t^{4})^{2}} \right) \left( -(28t^{3}) \right) = \underbrace{ \frac{(28)^{2}}{(4-7t^{4})^{3}} }_{ u^{2} } \cdot t^{3}$.
7) Studiare la soluzione
$$
u(t) = \frac{28}{4-7t^{4}}
$$
definita per $4-7t^{4} \neq 0$, ovvero quando $t = \pm \sqrt[4]{ \frac{4}{7} }$
$$
\begin{align}
&\dots  \\
&-\sqrt[4]{ \frac{4}{7} }  \\
&\dots \\
&\sqrt[4]{ \frac{4}{7} } \\
&\dots 
\end{align}
$$
Intervallo massimale di esistenza: $t \in \left(-\sqrt[4]{ \frac{4}{7} }, \sqrt[4]{ \frac{4}{7} } \right)$.
### Def
Si dice lifespan della soluzione del futuro l'estremo superiore dell'intervallo massimale di esistenza.
(Si dice lifespan della soluzione del passato l'estremo inferiore dell'intervallo massimale di esistenza)

Nel caso dell'esempio precedente $T = \sqrt[4]{ \frac{4}{7} }$.

Se l'intervallo massimale di esistenza è semiretta $(a, +\infty)$, allora $T = +\infty$ e si dice che la soluzione esiste globalmente nel futuro.
Se invece lifespan $T<+\infty$, allora la soluzione "muore" al tempo $T$.

1) Se $\lim_{ t \to T^{-} } u(t) = \pm \infty$, si dice che la soluzione ha un blow-up.

Nel caso dell'esempio: $\lim_{ t \to \sqrt[4]{ \frac{4}{7} }^{-} } u(t) = +\infty$
2) La soluzione non ha blow-up, e quindi "esce dal dominio di definizione" del secondo membro dell'equazione differenziale. Si dice che la soluzione ha un break-down. Tipicamente succede che $\lim_{ t \to T^{-} } u'(t) = \pm \infty$.

##### Esempio
$$
\begin{cases}
u' = \frac{u^{2}}{1+t^{2}} \\
u(0) = 7
\end{cases}
$$
Il membro di destra è sempre definito. Quindi sicuramente non abbiamo situazione di break-down.
1) Separare
$$
\frac{du}{dt} = \frac{u^{2}}{t^{2} + 1} \implies \frac{du}{u^{2}} = \frac{dt}{t^{2} + 1}
$$
2) Integrare
$$
\int \frac{du}{u^{2}} = \int \frac{dt}{t^{2} + 1} \implies -\frac{1}{u} = \arctan(t) + c
$$
3) Ricavare
$$
u(t) = \frac{1}{c-\arctan(x)}
$$
4) Determinare $c$
$$
u(0) = 7 = \frac{1}{c} \implies  c = \frac{1}{7}
$$
5) Soluzione del problema
$$
u(t) = \frac{7}{1-7\arctan(t)}
$$
6) Verifica
$u(0) = \frac{7}{1} = 7$  x CASA

7) Studiare la soluzione
$$
u(t) = \frac{7}{1-7\arctan(t)}
$$
definita per $1-7\arctan(t) \neq 0 \Longleftrightarrow \arctan(t)\neq \frac{1}{7} \Longleftrightarrow  t \neq \tan\left( \frac{1}{7} \right)$
$$
\begin{align}
&\dots  \\
&\tan\left( \frac{1}{7} \right) \\
&\dots
\end{align}
$$
Intervallo massimale di esistenza: $t \in \left(-\infty, \tan\left( \frac{1}{7} \right) \right)$. Il lifespan è $T=\tan\left( \frac{1}{7} \right)$.
$$
\lim_{ t \to \tan\left( \frac{1}{7} \right)^{-} } u(t) = +\infty
$$
Quindi abbiamo un blow-up a più infinito.
##### Esempio
$$
\begin{cases}
u' = \frac{u^{2}}{1+t^{2}} \\
u(0) = \frac{1}{7}
\end{cases}
$$
$$
u(t) = \frac{1}{c - \arctan(t)}
$$
$$
u(0) = \frac{1}{7} = \frac{1}{c} \implies  c = 7
$$
La soluzione è $u(t) = \frac{1}{7-\arctan(t)}$. Definita quando $7 - \arctan(t) \neq 0$. Ma $7-\arctan(t) > 7 - \frac{\pi}{2} > 0$, quindi il denominatore è sempre positivo e non si annulla mai. L'intervallo massimo di esistenza è $\mathbb{R}$.

##### Esempio
$$
\begin{cases}
u' = \frac{u^{2}}{1+t^{2}} \\
u(0) = \alpha
\end{cases}
$$
Soluzione generale: $u(t) = \frac{1}{c-\arctan(t)}$.
$$
u(0) = \alpha = \frac{1}{c} \implies c = \frac{1}{\alpha}
$$
Soluzione unica: $\frac{\alpha}{1-\alpha\arctan(t)}$, definita se $1-\alpha \arctan(t) \neq 0 \Longleftrightarrow \arctan(t) \neq \frac{1}{\alpha}$, quindi $\frac{1}{\alpha} \in \left(-\frac{\pi}{2}, \frac{\pi}{2}\right)$, dunque $\alpha > \frac{2}{\pi}, \alpha < -\frac{2}{2}$.
##### Esempio
$$
\begin{cases}
u' = \frac{u^{2}}{1+t^{2}} \\
u(0) = 0
\end{cases}
$$
In questo caso non si riesce a trovare $c$. Ma per il teorema ci deve essere una soluzione, essa è $u(t) = 0, \forall t \in \mathbb{R}$.

## Classe 2: equazioni differenziali ordinarie lineari omogenee
$$
a_{n}(t)u^{(n)}(t) + a_{n-1}(t)u^{(n-1)}(t) + \dots +a_{1}(t)u'(t) + a_{0}(t)u(t) = 0
$$
$$
\sum_{j=0}^{n} a_{j}(t)u^{(j)}(t) = 0
$$
### Teorema
L'insieme delle soluzioni di una equazione differenziale ordinaria lineare e omogenea di grado $n$ forma uno spazio vettoriale di dimensione $n$.

Detta $u_{1}(t), u_{2}(t), \dots, u_{n}(t)$ una qualunque base dello spazio vettoriale, la soluzione generale si scrive:
$$
u(t) = a_{1}u_{1}(t) + a_{2}u_{2}(t) + \dots + a_{n}u_{n}(t)
$$
con $a_{j} \in \mathbb{R}, j = 1,\dots,n$

Operativamente bisogna cercare una base.
#### Dim
Devo dimostrare che lo spazio soluzione è lineare di dim $n$.

Siano $u, v$ soluzioni di un'equazione differenziale ordinaria lineare omogenea. Sia $w = v + u$.
Allora $w^{(j)} = v^{(j)}+ u^{(j)}$ con $j = 0,\dots,n$.
$$
\sum_{j=0}^{n}  a_{j}w^{(j)}(t) = \sum_{j=0}^{n} (v^{(j)}+u^{(j)}) = \sum_{j=0}^{n} a_{j}v^{(j)}(t) + \sum_{j=0}^{n} a_{j}u^{(j)}(t) = 0
$$
Sia $v$ soluzione di un'equazione differenziale ordinaria lineare omogenea. Sia $w = \lambda v$, con $\lambda \in \mathbb{R}$.
Allora $w^{(j)} = \lambda v^{(j)}$, con $j = 0,\dots,n$.
$$
\sum_{j=0}^{n} a_{j}w^{(j)}(t) = \sum_{j=0}^{n} a_{j}\lambda v^{(j)}(t) = \lambda \sum_{j=0}^{n} a_{j}v^{(j)}(t) = \lambda \cdot 0 = 0
$$
Manca da dimostrare la dimensione $n$. Basta trovare una base di dimensione $n$.
$$
\begin{cases}
\sum_{j=0}^{n} a_{j}(t)u^{(j)}(t) = 0 \\
u(t_{0}) = \alpha_{1} \\
u'(t_{0}) = \alpha_{2} \\
\dots \\
u^{(n-1)}(t_{0}) = \alpha_{n}
\end{cases}
$$
Considero $n$ problemi di Cauchy dove il j-esimo problema ha $\alpha_{1} = 0, \alpha_{2} = 0, \dots, \alpha_{j} = 1, \dots, \alpha_{n}=0, \qquad j = 1, \dots, n$
Allora ottengo $n$ soluzioni del problema di Cauchy dell'equazione differenziale ordinaria lineare omogenea $u_{j}(t), \qquad j = 1,\dots ,n$.
Claim: $\{u_{1}(t),u_{2}(t), \dots, u_{n}(t)\}$ è base dell spazio delle soluzioni.
Per dimostrare devo fare due controlli:

Genero tutto lo spazio:
Se considero il problema di Cauchy generico con $a_{j} \in \mathbb{R}, \qquad j = 1,\dots ,n$.
Allora $u(t) = a_{1}u_{1}(t)+ a_{2}u_{2}(t) + \dots +a_{n}u_{n}(t)$.

Verifico che siano linearmente indipendenti:
Se $u(t) = 0 = a_{1}u_{1}(t)+\dots+a_{n}u_{n}(t) \Longleftrightarrow a_{1} = a_{2} = \dots =a_{n} = 0$
Per dimostrare che $a_{j} = 0$, sfrutto il fatto che $u_{j}(t)$ è soluzione del problema di Cauchy quando $u^{(i)}(t) = 0$ con $i \neq j$. In questo caso si ha che $u_{j}(t) = a_{j}(t)u^{(j)}(t)$.
Quindi imponendo le stesse condizioni si ha che $u(t) = 0 = a_{j}u_{j} = a_{j}$.

#### Fatto generale
$$
\sum_{j=0}^{n} a_{j}(t) u^{(j)}(t) = 0
$$
L'intervallo massimale di esistenza è determinato dia domini di definizione di $a_{j}(t)$.

Operativamente bisogna trovare una base, che è un processo algoritmico nel caso $a_{j}(t) = a_{j} \in \mathbb{R}, \qquad \forall t \in \mathbb{R}$.

### Caso 1: equazione differenziale ordinaria lineare omogenea di 2° ordine
$$
au'' + bu'+ cu = 0
$$
Il suo polinomio caratteristico è $ax^{2}+bx+c = 0$.
1) $\Delta > 0$
Allora il polinomio caratteristico ha due radici reali distinte $\lambda, \mu$. Allora la base $u_{1}(t) = e^{\lambda t}, u_{2}(t) = e^{\mu t}$. Allora la soluzione generale è $u(t) = c_{1}e^{\lambda t}+c_{2}e^{\mu t}$, con $c_{1},c_{2} \in \mathbb{R}$.
2) $\Delta = 0$
Allora il polinomio caratteristico ha una radice reale con molteplicità $2$ $\lambda$. Allora la base $u_{1}(t) = e^{\lambda t}, u_{2}(t) = te^{\lambda t}$. Allora la soluzione generale è $u(t) = c_{1}e^{\lambda t}+c_{2}te^{\lambda t}$, con $c_{1},c_{2} \in \mathbb{R}$.
3) $\Delta < 0$
Allora il polinomio caratteristico ha due radici complesse tra loro coniugate $\alpha \pm i\beta$. Allora la base $u_{1}(t) = e^{\alpha t}\cos(\beta t), u_{2}(t) = e^{\alpha t}\sin(\beta t)$. Allora la soluzione generale è $u(t) = c_{1}e^{\alpha t}\cos(\beta t) + c_{2}e^{\alpha t}\sin(\beta t)$.

### Caso 2: caso generico
$$
\sum_{j=0}^{n} a_{j}u^{(j)}(t) = 0
$$
Il polinomio caratteristico è $\sum_{j=0}^{n} a_{j}x^{j} = 0$. Una volta trovate le radici:

Per ogni radice reale $\lambda$ di molteplicità $1$, ho come elemento di base associato: $e^{\lambda t}$.
Per ogni radice reale $\mu$ di molteplicità $m$, ho come elementi di base associati: $e^{\mu t}, te^{\mu t},\dots,t^{m - 1}e^{\mu t}$.
Per ogni coppia di radici complesse coniugate $\alpha \pm i\beta$ di molteplicità $1$, ho come elementi di base associati: $e^{\alpha t}\cos(\beta t), e^{\alpha t}\sin(\beta t)$.
Per ogni coppia di radici complesse coniugate $\alpha \pm i\beta$ di molteplicità $l$, ho come elementi di base associati: $e^{\alpha t}\cos(\beta t), e^{\alpha t}\sin(\beta t), te^{\alpha t}\cos(\beta t), te^{\alpha t}\sin(\beta t), \dots , t^{l - 1}e^{\alpha t}\cos(\beta t), t^{l - 1}e^{\alpha t}\sin(\beta t)$.

L'idea è che $1 + m + 2 + 2l = n$.
##### Esempio
$$
u''-4'u-5u = 0
$$
Polinomio caratteristico: $x^{2}-4x-5 = 0 \Longleftrightarrow (x-5)(x+1) = 0$. Due radici reali distinte quindi $(e^{5t},e^{-t})$ è base e la soluzione generale è: $u(t) = c_{1}e^{5t}+ c_{2}e^{-t}$.
##### Esempio
$$
u''-4'u+4u = 0
$$
Polinomio caratteristico: $x^{2}-4x+4 = 0 \Longleftrightarrow (x-2)^{2} = 0$. Una radice reale con molteplicità 2 quindi $(e^{2t},te^{2t})$ è base e la soluzione generale è: $u(t) = c_{1}e^{2t}+ c_{2}te^{2t}$.
##### Esempio
$$
u''+10u'+29u = 0
$$
Polinomio caratteristico: $x^{2}+10x+29 = 0 \Longleftrightarrow (x-(-5\pm2i)) = 0$. Due radici complesse coniugate quindi $(e^{-5t}\cos(2t),e^{-5t}\sin(2t))$ è base e la soluzione generale è: $u(t) = c_{1}e^{-5t}\cos(2t)+ c_{2}e^{-5t}\sin(2t)$.
##### Esempio
$$
u'' + 4u' = 0
$$
Polinomio caratteristico: $x^{2}+4x = 0 \Longleftrightarrow x(x-4) = 0$. Due radici reali distinte quindi $(1, e^{-4t})$ è base e la soluzione generale è: $u(t) = c_{1}+ c_{2}e^{-4t}$.
##### Esempio
$$
u^{(4)} + 9u'' = 0
$$
Polinomio caratteristico: $x^{4}+9x^{2} = 0 \Longleftrightarrow x^{2}(x^{2}+9) = 0 \Longleftrightarrow x^{2}(x-(\pm3i)) = 0$. 
La base è $(1, t, \cos(3t), \sin(3t))$ e la soluzione generale $u(t) = c_{1} + c_{2}t + c_{3}\cos(3t) + c_{4}\sin(3t)$.

## Risoluzioni equazioni differenziali ordinari lineari generiche
$$
\sum_{j=0}^{n} a_{j}(t)u^{(j)}(t) = f(t)
$$
#### Fatto Generale
Supponiamo che $u(t)$ e $v(t)$ siano due soluzioni dell'equazione. Allora la differenza $u(t)-v(t)$ è soluzione dell'equazione omogenea associata.
Sia $w(t) = u(t)-v(t) \implies w^{(j)}(t) = u^{(j)}(t)-v^{(j)}(t)$.
Allora:
$$
\sum_{j=0}^{n} a_{j}(t)w^{(j)}(t) = \sum_{j=0}^{n} a_{j}(t)u^{(j)}(t)-\sum_{j=0}^{n} a_{j}(t)v^{(j)}(t) = f(t)-f(t) = 0
$$
#### Conseguenza
Soluzioni dell'equazione non omogenea sono una soluzione della equazione omogenea associata più una qualunque soluzione della non omogenea
$$
u(t) = c_{1}u_{1}(t) + c_{2}u_{2}(t) + \dots +c_{n}u_{n}(t) + \bar{u}(t)
$$
##### Esempio
$$
u'' - 3u' -4u = e^{2t}
$$
Passo 1:
Polinomio caratteristico dell'equazione omogenea associata: $x^{2}-3x+4 = 0 = (x-4)(x+1)$
Dunque una base delle soluzioni è $(e^{4t}, e^{-t})$. Dunque $u_{om}(t) = c_{1}e^{4t}+c_{2}e^{-t}$.

Passo 2:
Consideriamo $\bar{u}(t) = \lambda e^{2t}$ e imponiamo che $\bar{u}(t)$ sia soluzione.
Allora:
$$
\begin{align}
\bar{u}'(t) &= 2\lambda e^{2t} \\
\bar{u}''(t) &= 4\lambda e^{2t}
\end{align}
$$
Sostituendo $u(t)$ con $\bar{u}(t)$ nell'equazione originale:
$$
\begin{align}
4\lambda e^{2t}-6\lambda e^{2t}-4\lambda e^{2t} &= e^{2t} \\
-6\lambda &= 1 \\
\lambda &= -\frac{1}{6}
\end{align}
$$
Allora per il fatto generale possiamo dire che $u(t) = u_{om}(t)-\frac{1}{6}e^{2t}$.
##### Esempio
$$
u'' - 3u' -4u = e^{-7t}
$$
Passo 1:
Polinomio caratteristico dell'equazione omogenea associata: $x^{2}-3x+4 = 0 = (x-4)(x+1)$
Dunque una base delle soluzioni è $(e^{4t}, e^{-t})$. Dunque $u_{om}(t) = c_{1}e^{4t}+c_{2}e^{-t}$.

Passo 2:
Consideriamo $\bar{u}(t) = \lambda e^{-7t}$ e imponiamo che $\bar{u}(t)$ sia soluzione.
Allora:
$$
\begin{align}
\bar{u}'(t) &= -7\lambda e^{-7t} \\
\bar{u}''(t) &= 49\lambda e^{-7t}
\end{align}
$$
Sostituendo $u(t)$ con $\bar{u}(t)$ nell'equazione originale:
$$
\begin{align}
4\lambda e^{-7t}-6\lambda e^{-7t}-4\lambda e^{-7t} &= e^{-7t} \\
66\lambda &= 1 \\
\lambda &= \frac{1}{66}
\end{align}
$$
Allora per il fatto generale possiamo dire che $u(t) = u_{om}(t)+\frac{1}{66}e^{-7t}$.
##### Esempio
$$
u'' - 3u' -4u = e^{4t}
$$
Passo 1:
Polinomio caratteristico dell'equazione omogenea associata: $x^{2}-3x+4 = 0 = (x-4)(x+1)$
Dunque una base delle soluzioni è $(e^{4t}, e^{-t})$. Dunque $u_{om}(t) = c_{1}e^{4t}+c_{2}e^{-t}$.

Passo 2:
Consideriamo $\bar{u}(t) = \lambda e^{-4t}$ e imponiamo che $\bar{u}(t)$ sia soluzione.
Allora:
$$
\begin{align}
\bar{u}'(t) &= 4\lambda e^{4t} \\
\bar{u}''(t) &= 16\lambda e^{4t}
\end{align}
$$
Sostituendo $u(t)$ con $\bar{u}(t)$ nell'equazione originale:
$$
\cancel{
\begin{align}
16\lambda e^{4t}-12\lambda e^{4t}-4\lambda e^{4t} &= e^{4t} \\
0 &= 1
\end{align}
}
$$
Se il termine forzante è già una soluzione dell'equazione omogenea associata, allora il procedimento non funziona.
In questo caso si può usare $\bar{u}(t) = \lambda te^{4t}$.
$$
\begin{align}
\bar{u}'(t) &= \lambda e^{4t} + 4\lambda t e^{4t} \\
\bar{u}''(t) &= 8\lambda e^{4t} + 16\lambda te^{4t}
\end{align}
$$
Sostituendo $u(t)$ con $\bar{u}(t)$ nell'equazione originale:
$$
\begin{align}
8\lambda e^{4t} + 16\lambda te^{4t} -3\lambda e^{4t} - 12\lambda te^{4t} -4\lambda te^{4t} &= e^{4t} \\
5\lambda &= 1 \\
\lambda &= \frac{1}{5}
\end{align}
$$
Tutti i termini $\lambda t$ si devono annullare, altrimenti si ha sbagliato.
La soluzione dell'equazione originale è $u(t) = u_{om}(t) + \frac{te^{4t}}{5}$.

Se la radice il cui elemento associato della base uguale all'elemento forzante avesse molteplicità $m$, allora bisogna considerare $\bar{u}(t) = \lambda t^{m}f(t)$.
Questo metodo funziona solo per $f(t)$ che sono $\sin(t)$,$\cos(t)$,$e^{t}$ sommate o meno tra di loro.
Ad esempio: se si avesse $e^{t}+\sin(t)$ bisognerebbe trovare due soluzioni isolate con uno dei termini e l'altro annullato e sommarle alla fine.

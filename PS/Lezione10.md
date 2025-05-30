## Definizione Funzione di distribuzione assolutamente continua
Data una $F$ diremo che è assolutamente continua se esiste una funzione $f:\mathbb{R} \rightarrow \mathcal{B}(\mathbb{R})$ tale che:
- $f$ è non negativa su $\mathbb{R}$
- $\int_{-\infty}^{x}f(t)dt=F(x), \forall x \in \mathbb{R}$ (Integrale di Riemann)
$f$ è detta densità.

Sia data una funzione di distribuzione assolutamente continua $F_{1}(x)$:
![[10_1]]
Allora:
$$
P((a,b]) = F(b) - F(a)
$$
Una sua funzione di densità è la seguente:
![[10_2]]
dove:
$$
\begin{align}
P((a, b]) &= F(b) - F(a) \\
 & = \int_{-\infty}^{b}f(t)dt - \int_{-\infty}^{a}f(t)dt \\
 & = \int_{a}^{b} f(t)dt
\end{align}
$$
Se si fosse cambiato il valore di un singoletto all'interno di $(a, b]$ l'area sottesa al grafico sarebbe rimasta invariata e di conseguenza anche la probabilità. Ad ogni funzione di distribuzione appartiene una classe di funzioni di densità perché sono modificabili in un numero numerabili di punti. Quindi formano una classe di equivalenza.
### Definizione Funzione di distribuzione discrete
Se $F$ è discreta allora esiste una funzione $p$, detta funzione di probabilità tale che:
- $p$ è non negativa su $\mathbb{R}$
- $F(x) = \sum_{z : z \leq x} p(z) = \sum_{z\in R: z \leq x} p(z)$

![[10_3]]

Indichiamo con $R$ il supporto della funzione di distribuzione discreta:
$$
R = \{ z : p(z) > 0 \}
$$
Si può anche interpretare come tutti i punti di discontinuità di $F$.
Alla fine $p(x)$ rappresenta l'ampiezza del salto della funzione nel punto $x$.

![[10_4]]
## Variabili Aleatorie (Variabile Casuale)
### Definzione variabile aleatoria reale
Una variabile aleatoria reale è una funzione $y=X(\omega)$ tale che $\{ \omega \in \Omega:X(\omega) \leq x \} \in \mathcal{A}, \forall x \in \mathbb{R}$, ovvero che l'antimmagine di $(-\infty, x]$ sia un evento della tribù di partenza per ogni $x$.

Quindi bisogna prendere ogni boreliano e controllare che la sua antimmagine sia un evento. Non si può fare il controllo al contrario perché potrebbero esserci boreliani "scoperti".
In altre parole: per poter parlare della probabilità che una variabile aleatoria assuma certi valori, questi valori devono corrispondere a eventi a cui possiamo assegnare una probabilità.
![[10_5|60%]]
Dunque in base alla scelta delle tribù degli spazi si ha o meno una variabile aleatoria.

Inoltre ci si può ricavare la nozione di funzione di probabilità indotta da $X$:
$$
P_{X}(A) = P_{X}((a, b])= P(A^{-1}) = P(\{ \omega \in \Omega : X (\omega) \in(a,b] \}), \forall A \in \mathcal{B}(\mathbb{R})
$$
$A^{-1}$ è sicuramente un evento in $\mathcal{A}$ per definizione e sicuramente avrà una probabilità definita in $\Omega$.
In $\mathbb{R}$ ogni intervallo $(a, b]=(-\infty,b] \setminus (-\infty, a]$, perciò:
$$
P((a,b]) = F(b) - F(a) = P((-\infty, b]) - P((-\infty, a])
$$
$$
F_{X}(x) = P_{X}((-\infty, x]) = P_{X}(A) = P(A^{-1}) = P(\{ \omega \in  \Omega : X(\omega) \leq x \})
$$

#### Esempio
Lancio di due D6.
$\Omega=\{ (i, j):i,j = 1,\dots,6 \}$.
$\mathcal{A} = \mathcal{P(\Omega)}$
$P((i,j)) = \frac{1}{36}, \forall i,j = 1,\dots,6$

Consideriamo lo spazio probabilizzabile $(\mathbb{R}, \mathcal{B}(\mathbb{R}))$ e lo vogliamo rendere probabilizzato tramite una variabile aleatoria.
$$
X(\omega) = \omega_{1}- \omega_{2}, \qquad \omega = (\omega_{1}, \omega_{2})
$$
$$
\begin{align}
P_{X}(\{ \pi \}) &= P(\emptyset) = 0 \\
\end{align}
$$
Quindi la variabile aleatoria ha indotto una funzione di probabilità $P_{X}$ sullo spazio $(\mathbb{R}, \mathcal{B}(\mathbb{R}))$.

Consideriamo $B = \{ 3 \} \cup \{ \pi \} \cup \{ (-18.5, 0) \}$. 
$$
\begin{align}
P_{X}(B) &= P_{X}(\{ 3 \}) + P_{X}(\{ \pi \}) + P_{X}((-18.5,0)) \\
 &= F_{X}(3)-F_{X}(3^{-})+F_{X}(\{ \pi \})-F_{X}(\{ \pi^{-} \})+F_{X}(0^{-})-F_{X}(-18.5)  \\
&= \frac{28}{36}-\frac{25}{36}+\frac{28}{36}-\frac{28}{36}+\frac{15}{36}-0 \\
&=\frac{1}{2}
\end{align}
$$
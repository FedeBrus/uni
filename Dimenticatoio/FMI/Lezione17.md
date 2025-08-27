### Ripasso Teorema fondamentale RSA
Sia $n > 0$, sia $c > 0$ tale che $(c, \phi(n)) = 1$ e sia $d > 0$ tale che $d\in[c]_{\phi(n)}^{-1}$. Allora $P_{c}: (\mathbb{Z} \big/_{n\mathbb{Z}})^{*} \rightarrow (\mathbb{Z} \big/_{n\mathbb{Z}})^{*}$ $P_{c}(\alpha) = \alpha^{c}$ è invertibile e l'inversa è $P_{d}$.

### Corollario 13.8
Sia $n > 0$. Sia $a, c \in \mathbb{Z}$ tali che $c > 0, (c, \phi(n))=1, (a,n)=1$. Consideriamo la seguente congruenza con potenza:
$$
x^{c} \equiv a\ (\text{mod}\ n), x \in \mathbb{Z}
$$
Sia inoltre $S$ l'insieme delle soluzioni della precedente congruenza, ovvero $S := \{ x \in \mathbb{Z} | x^{c} \equiv a\ (\text{mod}\ n) \}$.
Allora $\exists d > 0$ tale che $d \in [c]_{\phi(n)}^{-1}$ e $S = [a^{d}]_{n} = \{ a^{d}+kn \in \mathbb{Z} | k \in \mathbb{Z} \} \subset \mathbb{Z}$.

### Dimostrazione
Poiché $(a,n)=1$, $[a]_{n} \in (\mathbb{Z} \big/_{n\mathbb{Z}})^{*}$.
Poiché $(c,\phi(n))=1$, $[c]_{\phi(n)} \in (\mathbb{Z} \big/_{n\mathbb{Z}})^{*}$, ovvero $\exists[c]_{\phi(n)}^{-1} \ni d, d > 0$. (L'esistenza di un rappresentante $d > 0$ di $[c]_{\phi(n)}^{-1}$ è assicurata dal fatto che $\phi(n) \geq 1$).

Osserviamo che: $x \in \mathbb{Z}, x^{c} \equiv a\ (\text{mod}\ n) \Longleftrightarrow [x^{c}]_{n} = [a]_{n} \Longleftrightarrow [x]_{n}^{c} = [a]_{n}$.

Sia $x \in \mathbb{Z}$ tale che $[x]_{n}^{c} = [a]_{n}$.
Siccome $c \geq 1$:
$$
\begin{align}
[x]_{n}[x]_{n}^{c - 1} = [x]_{n}^{c} = [a]_{n} &\implies [x]_{n} [x]_{n}^{c - 1} [a]_{n}^{-1} = [a]_{n} [a]_{n}^{-1} = [1]_{n} \\
 & \implies [x]_{n}([x]_{n}^{c-1}[a]_{n}^{-1}) = [1]_{n} \\
 & \implies [x]_{n} \in (\mathbb{Z} \big/_{n\mathbb{Z}})^{*}
\end{align}
$$
Quindi le uniche soluzioni sono quelle invertibili, ma allora per il teorema fondamentale la soluzione è unica.
Poiché se $x \in S$ la sua classe è invertibile, l'unica classe soluzione ha la seguente forma, grazie al teorema fondamentale della crittografia RSA:
$$
[x]_{n} = P_{d}([a]_{n}) = [a]_{n}^{d} = [a^{d}]_{n} \subset \mathbb{Z}
$$
$d$ si può portare dentro perché $d > 0$.

#### Esercizio (Appello 18/06/2015)
Determinare le soluzioni della seguente congruenza con potenze:
$$
x^{11} \equiv 35\ (\text{mod}\ 38) \Longleftrightarrow [x]_{38}^{11} = [35]_{38}
$$
Trovare inoltre la minima soluzione positiva.
#### Soluzione
Sia $S$ l'insieme delle soluzioni della congruenza.

1° passo (applicabilità del metodo RSA):
Dobbiamo verificare le seguenti due proprietà:
1) $(35, 38) = 1$
2) $(11, \phi(38)) = 1$

Vale: $35 = 5 \cdot 7$, $38 = 2 \cdot 19$, non ci sono primi comuni quindi $(35, 38) = 1$. Inoltre $\phi(38) = \phi(2 \cdot 19) = \phi(2)\phi(19) = (2 - 1)(19 - 1) = 1 \cdot 18 = 18$.
Segue che $11$ è primo e $11 \not{|}\ 18 = \phi(38) \implies (11, \phi(38)) = 1$. Poiché entrambe le condizioni sono verificate si può applicare il metodo RSA ottenendo:
$$
S = [35^{d}]_{38} \subset \mathbb{Z}, d > 0, d \in [11]_{18}^{-1}
$$
2° passo (calcolo della chiave di decodifica e quindi di $S$):
Applichiamo l'algoritmo di Euclide a $\phi(38)=18$ e $11$ completo di sostituzione a ritroso:
$$
\begin{align}
18 &= 11 + 7 \\
11 &= 7 + 4 \\
7 &= 4 + 3 \\
4 &= 3 + 1 \\
3 &= 3 \cdot 1 +0
\end{align}
$$
$$
\begin{align}
1 &= 4 -3 \\
  &= 4 - (7 - 4) \\
 & = 2 \cdot 4 - 7 \\
 & = 2 (11 - 7)  - 7 \\
 & = 2 \cdot 11 - 3 \cdot 7 \\
 & = 2 \cdot 11 - 3 (18 - 11) \\
 & = 5 \cdot 11 - 3 \cdot 18
\end{align}
$$
Quindi $1 = 5 \cdot 11 + (-3) \cdot 18 \implies [1]_{18} = [5]_{18}[11]_{18}$. (All'esame fai i passaggi).
Dunque $[11]_{18}^{-1}=[5]_{18}$.
Poniamo $d:=5$ e quindi $S = [35^{5}]_{38} \subset \mathbb{Z}$. Calcolo del rappresentante canonico:
$$
[35^{5}]_{38} = [35]^{5}_{38} = [-3]^{5}_{38} = [(-3)^{5}]_{38} = [-243]_{38} = [-(6 \cdot 38 + 15)]_{38} = [-6 \cdot 38 - 15]_{38} = [-15]_{38} = [23]_{38}
$$
Dunque:
$$
S = [23]_{38} = \{ 23 + 38k \in \mathbb{Z} | k \in \mathbb{Z} \}
$$

#### Esempio (Appello 21/06/2016)
Risolvere:
$$
x^{9} \equiv 49\ (\text{mod}\ 60)
$$
Si determini inoltre la massima soluzione negativa.
#### Soluzione
Sia $S$ l'insieme delle soluzioni della precedente congruenza.

1° passo:
Verifichiamo che valgono $(49, 60) = 1$ e $(9, \phi(60)) = 1$.
Valgono: $49 = 7^{2}, 60 = 2^{2}\cdot 3 \cdot 5 \implies (49, 60) = 1$. $\phi(60) = \phi(2^{2})\phi(3)\phi(5) = 2 \cdot 2  \cdot 4 = 16$ ma $9 = 3^{2}$ e $16 = 2^{4}$ perciò $(9, \phi(60)) = 1$.
Dunque si può applicare RSA, ottenendo $S = [49^{d}]_{60} \subset \mathbb{Z}$, dove $d > 0$ e $d \in [9]^{-1}_{16}$.

2° passo:
Applichiamo Euclide a $\phi(60)=16$ e $9$. Si ottiene $1 = 4 \cdot 16 + (-7) \cdot 9 \implies [1]_{16} = [-7]_{16}[9]_{16}$.
Perciò $[9]^{-1}_{16} = [-7]_{16} = [9]_{16}$

Dunque:
$$
S = [49^{9}]_{60}
$$
Utilizziamo l'orbita, che avrà al massimo $\phi(60)$ passaggi, ma potrebbe essere anche più piccola.
$$
\begin{align}
k \in N^{*} &\qquad \text{rappresentante di } [49^{k}]_{60} \\
1 & \qquad 49^{1} = 49 \\
2 & \qquad 49^{2} = 2401 = 40 \cdot 60 + 1 = [1]_{60}
\end{align}
$$
Dunque questa orbita è molto piccola.
Da prima risulta che $[49]_{60}^{2}=[1]_{60}$.
Infine:
$$
[49^{9}]_{60} = [49]^{9}_{60} = [49]^{2 \cdot 4 + 1}_{60} = [49]_{60}^{2 \cdot 4} \cdot [49]_{60} = ([49]_{60}^{2})^{4} \cdot [49]_{60} = [1]_{60}^{4} \cdot [49]_{60} = [1^{4}]_{60} = [49]_{60} = [49]_{60}
$$
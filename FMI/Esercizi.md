### 1)
Si dimostri per induzione su $n \in \mathbb{N}$ che $\forall n\geq 1$ vale:
$$
\sum_{k=0}^{n} 4k \cdot 3^{k} = 3+3^{n+1} \cdot (2n - 1)\qquad(\star)
$$
#### Svolgimento
Procediamo per induzion su $n \in \mathbb{N}, n \geq 1$:
#### Passo base ($n = 1$)
Verifichiamo che $(\star)$ + vera per $n = 1$.
$$
\begin{align}
4 \cdot 3 &=  3+3^{2} (2-1) \\
12 &= 3 + 9 (1) \\
12 &= 12
\end{align}
$$
#### Passo induttivo ($n \implies n + 1$)
Supponiamo che $(\star)$ sia vera per un certo $n \in \mathbb{N}, n \geq 1$. Dobbiamo dimostrare che $(\star)$ è vera per $n + 1$, cioè che vale:
$$
\sum_{k=0}^{n+1} 4k \cdot 3^{k} = 3 + 3^{n+2}(2(n+1)-  1) \qquad (\star \star)
$$
Il membro di sinsitra di $(\star \star)$ è:
$$
\begin{align}
\sum_{k=0}^{n+1} 4k \cdot 3^{k} &= \left( \sum_{k=0}^{n} 4k \cdot 3^{k} \right)+ 4(n+1)  \cdot 3^{n+1} \\
 & = 3 + 3^{n+1}\cdot (2n - 1) + 4 (n + 1) \cdot 3^{n+1} \\
 & = 3 + 3^{n+1} \left(  2n - 1 +4n +4 \right)  \\
 & = 3 + 3^{n+1} \left( 6n +3 \right)  \\
 & = 3 + 3^{n+2} \left(  2n +1 \right)  \\
 & = 3 + 3^{n+2} \left( 2(n+1) - 1 \right) 
\end{align}
$$
Quindi $(\star \star)$ è verificata e questo conclude il passo induttivo. Grazie al principio di induzione, possiamo concludere che $(\star)$ è vera $\forall n \in \mathbb{N}, n+1$.

### 2
Si determinino le soluzioni del seguente sistema:
$$
\begin{cases}
x \equiv 36\ (\text{mod}\ 126) \\
x \equiv -13\ (\text{mod}\ 91)
\end{cases}
$$
Si dimostri inoltre che tutte le soluzioni del sistema sono divisibili per $117$.

#### Svolgimento
Sia $S \subset \mathbb{Z}$ l'insieme delle soluzioni del sistema.

#### Passo 1 (Compatibilità)
Vediamo se $S \neq \emptyset$. Per il teorema cinese del resto, $S \neq \emptyset \Longleftrightarrow (126, 91) | 36-(-13)$.
Osserviamo che: $36 - (-13) = 49 = 7^{2}$.
Inoltre $126 = 2 \cdot 3^{2} \cdot 7$ e $91 = 7 \cdot 13$, dunque $(126, 91) = 7$ e chiaramente $7$ divide $49$. Perciò $S \neq \emptyset$.

Vale la seguente scrittura:
$$
36 - (-13) = 49 = 7 \cdot ((126, 91)) \qquad (1.)
$$
#### Passo 2 (Calcolo di una soluzione particolare)
Applichiamo l'algoritmo di Euclide alla coppia $(126, 91)$.
$$
\begin{align}
126 &= 91 + 35 \\
91 &= 2 \cdot 35 + 21 \\
35  &= 21 + 14 \\
21 & = 14 + 7 \\
14 & = 2 \cdot 7 + 0
\end{align}
$$
$$
\begin{align}
7  &=  21 - 14 \\
 & = 21 - (35 - 21) \\
 & = 2 \cdot 21 - 35 \\
 & = 2 (91 - 2 \cdot 35) - 35  \\
 & = 2 \cdot 91 -5 \cdot 35 \\
 & = 2 \cdot 91 - 5 (126 - 91) \\
 & = 7 \cdot 91 - 5 \cdot 126
\end{align}
$$
Quindi abbiamo trovato che:
$$
(126, 91) = 7 = 7 \cdot 91 - 5 \cdot 126 \qquad (2.)
$$
Sostituendo $(2.)$ in $(1.)$ troviamo che:
$$
\begin{align}
36 - (-13) &= 7(7 \cdot 91 - 5 \cdot 126 ) \\
36 - (-13) &= 49 \cdot 91 - 35 \cdot 126 \\
36 +35 \cdot 126 &= -13 +49\cdot 91 \\
4446  &= 4446 =: x_{0}
\end{align}
$$
Allora $x_{0}$ è una soluzione particolare del sistema, cioè $x_{0} \in S$.
#### Passo 3 (Calcolo di $S$)
Per il teorema cinese del resto vale che $S = [4446]_{[126, 91]} \subset \mathbb{Z}$.
Calcoliamo:
$$
[126, 91] = \frac{126 \cdot 91}{(126, 91)} = 2 \cdot 3^{2} \frac{\cdot 7 \cdot 7 \cdot 13}{7} = 2 \cdot 3^{2} \cdot 7 \cdot 13 = 1638
$$
Quindi:
$$
S = [4446]_{1638} = [4446 - 2\cdot 1638]_{1638} = [1170]_{1638} = \{ 1170 + 1638k : k \in \mathbb{Z} \} \subset \mathbb{Z}
$$
#### Domanda aggiuntiva
Dobbiamo dimostrare che $\forall x \in S, [x]_{117} = [0]_{117}$.
Grazie al passo 3, $\forall x \in S, \exists k \in \mathbb{Z}$ tale che $x = 1170 + 1638k$.
Osserviamo che $1170 = 10 \cdot 117$ e $1638 = 14 \cdot 117$.
Quindi:
$$
\begin{align}
[x]_{117} &= [1170 + 1638k]_{117}  \\
 & = [117 \cdot 10 + 117 \cdot 14k]_{117}  \\
 & = [117 \cdot 10]_{117} + [117 \cdot 14k]_{117}  \\
 & = [0]_{117} + [0 \cdot 14k]_{117} \\
 & = [0]_{117} + [0]_{117} \\
 & = [0]_{117}
\end{align}
$$
Questo conclude l'esercizio.

## Appello Luglio 2024
### 2
Si determinino tutte le soluzioni di:
$$
x^{11}\equiv 16\ (\text{mod}\ 65)
$$
Si dimostri inoltre che dividendo ogni soluzione per $13$ si ottiene $9$ come resto.
#### Svolgimento
Sia $S\subset \mathbb{Z}$ l'insieme delle soluzioni della congruenza.

#### Passo 1 (Applicabilità del metodo RSA)
Sappiamo che $S\neq \emptyset$ se e solo se valgono:
$$
\begin{align}
(65, 16) &= 1 \qquad (1.) \\
(\phi(65), 11) 6= 1 \qquad (2.)
\end{align}
$$
Fattorizzando troviamo che:
$$
\begin{align}
65 &= 5 \cdot 13 \\
16 &= 2^{4}
\end{align}
$$
Dunque $(65, 16) = 1$.
Inoltre:
$$
\begin{align}
11 \text{ e' primo} \\
\phi(65) = \phi(5 \cdot 13) = \phi(5)\phi(13) = 4 \cdot 12 = 48 = 2^{4} \cdot 3
\end{align}
$$
$11$ non divide $48$ perciò $(\phi(65), 11) = 1$.
Perciò possiamo applicare il metodo RSA, che ci dice che:
$$
S = [16^{d}]_{65} \subset \mathbb{Z}
$$
dove $d > 0, d \in \mathbb{Z}$ e $d \in [11]^{-1}_{\phi(65)=48}$.
#### Passo 2 (Calcolo di $S$)
Calcoliamo $d$ applicando l'algoritmo di Euclide alla $11, 48$.
$$
\begin{align}
48  &= 4 \cdot 11 + 4 \\
11  &= 2 \cdot 4 + 3 \\
4 & = 3 + 1 \\
3 & = 3 \cdot 1 + 0
\end{align}
$$
$$
\begin{align}
1 & = 4 - 3 \\
 & = 4 - (11 - 2 \cdot 4) \\
 & = 3 \cdot 4 - 11 \\
 & = 3 (48 - 4 \cdot 11) - 11 \\
 & = 3 \cdot 48 - 13 \cdot 11
\end{align}
$$
Cioè: $1 = 3 \cdot 48 - 13 \cdot 11$. Passando alle classi di resto modulo $48$:
$$
\begin{align}
[1]_{48} &= [3 \cdot 48 - 13 \cdot 11]_{48} \\
[1]_{48} &= [0]_{48} + [-13 \cdot 11]_{48} \\
[1]_{48} &= [-13]_{48} [11]_{48} \\
\end{align}
$$
Dunque  $[-13]_{48} = [11]_{48}^{-1}$.
Siccome ci serve un rappresentante positivo di $[11]^{-1}_{48}$ scegliamo $d = -13 + 48 = 35$. Mettendo insieme i pezzi abbiamo ottenuto che:
$$
S  = [16^{35}]_{65} = \{ 16^{35} + 65k : k \in \mathbb{Z} \}
$$
Calcoliamo esplicitamente $[16^{35}]_{65}$.
Osserviamo che
- $16^{2} = 265 = 3 \cdot 65 + 1 \equiv 61 \equiv -4\ (\text{mod}\ 65)$.
- $16^{3} = 16 \cdot 16^{2} \equiv -16 \cdot 4 \equiv -64 \equiv 1\ (\text{mod}\ 65)$

Poiché $35 = 3 \cdot 11 + 2$, vale
$$
[16^{35}]_{65} = [16^{3 \cdot 11 + 2}]_{65} = [16^{3 \cdot 11} \cdot 16^{2}]_{65} = [(16^{3})^{11}]_{65} [16^{2}]_{65} = [16^{3}]^{11}_{65}[16^{2}]_{65} = [1]^{11}_{65} [61]_{65} = [61]_{65}
$$
Dunque
$$
S = [61]_{65} = \{ 61 + 65k : k \in \mathbb{Z} \} 
$$
#### Domanda aggiuntiva
Dobbiamo mostrare che $\forall x \in S$ vale
$$
[x]_{13} = [9]_{13}
$$
Sappiamo che ogni $x \in S$ si scrive come $x = 61 + 65k$ per un certo $k \in \mathbb{Z}$.
$$
\begin{align}
[61 + 65k]_{13} &= [61]_{13}[65k]_{13} \\
  &= [4 \cdot 13 + 9]_{13} + [5k \cdot 13]_{13} \\
  &= [9]_{13}
\end{align}
$$
Questo conclude l'esercizio.
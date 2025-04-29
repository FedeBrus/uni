## Crittografia RSA
### Lemma 13.4
Dati $\alpha, \beta \in \left(\mathbb{Z} \big/_{n\mathbb{Z}} \right)^{*}$, valgono:
- $\alpha \beta \in \left(\mathbb{Z} \big/_{n\mathbb{Z}} \right)^{*}$ e $(\alpha \beta)^{-1} = \alpha^{-1}\beta^{-1} = \beta^{-1}\alpha^{-1}$
- $\alpha^{-1} \in \left(\mathbb{Z} \big/_{n\mathbb{Z}} \right)^{*}$ e $(\alpha^{-1})^{-1} = \alpha$

### Dimostrazione
$(\alpha \beta)(\beta^{-1}\alpha^{-1}) = \alpha(\beta \beta^{-1})\alpha^{-1} = (\alpha [1]_{n})\alpha^{-1} = \alpha \alpha^{-1} = [1]_{n}$.
$\alpha \in \left(\mathbb{Z} \big/_{n\mathbb{Z}} \right)^{*} \Longleftrightarrow \exists a^{-1} \in \mathbb{Z} \big/_{n\mathbb{Z}}$ tale che $\alpha(\alpha^{-1}) = [1]_{n} \implies a^{-1} \in \left(\mathbb{Z} \big/_{n\mathbb{Z}} \right)^{*}$ e $\alpha = (\alpha^{-1})^{-1}$.

### * Teorema 13.5 (Teorema di Fermat-Eulero)
Sia $n > 0$. Per ogni $\alpha \in (\mathbb{Z} \big/ _n \mathbb{Z})^{*}$, vale:
$$
\alpha^{\phi(n)} = [1]_{n} \text{ in } \left( \mathbb{Z} \big/_{n\mathbb{Z}} \right)^{*}
$$
Equivalentemente, per ogni $a \in \mathbb{Z}$ tale che $(a, n) = 1$ (quindi $[a]_{n} \in \left( \mathbb{Z} \big/_{n\mathbb{Z}} \right)^{*}$, $[a]_{n}^{\phi(n)} = [a^{\phi(n)}]_{n}= [1]_{n}$):
$$
a^{\phi(n)} \equiv 1\ (\text{mod}\ n) \text{ su } \mathbb{Z}
$$
### Dimostrazione
Sia $\alpha \in (\mathbb{Z} \big/_{n\mathbb{Z}})^{*}$. Consideriamo:
$$
\begin{align}
L_{\alpha} : (\mathbb{Z} \big/_{n\mathbb{Z}})^{*} &\rightarrow (\mathbb{Z} \big/_{n\mathbb{Z}})^{*} \\
L_{\alpha} : \beta &\mapsto \alpha \beta
\end{align}
$$
ovvero $L_{\alpha}(\beta):=\alpha \beta, \forall \beta \in (\mathbb{Z} \big/ _{n\mathbb{Z}})^{*}$. Con il lemma precedente proviamo che $L_{\alpha}$ è iniettiva.
Siano $\beta_{1}, \beta_{2} \in (\mathbb{Z} \big/ _{n\mathbb{Z}})*$ tale che $L_{\alpha}(\beta_{1}) = L_{\alpha}(\beta_{2})$.
$L_{\alpha}(\beta_{1}) = \alpha \beta_{1}$ e $L_{\alpha}(\beta_{2})=\alpha \beta_{2}$. Siccome $L_{\alpha}$ è ben definita allora: $\beta_{1} = \beta_{1}[1]_{n} = (\alpha^{-1}\alpha)\beta_{1} = \alpha \beta_{1} =L_{\alpha}(\beta_{1}) = L_{\alpha}(\beta_{2})=\alpha \beta_{2}=(\alpha^{-1}\alpha)\beta_{2}=[1]_{n}\beta_{2}=\beta_{2} \implies \beta_{1} = \beta_{2}$.

Si ha che $\left| (\mathbb{Z} \big/ _{n \mathbb{Z}})^{*} \right| = \left| L_{\alpha} (\mathbb{Z} \big/ _{n\mathbb{Z}})^{*} \right|$ per via del lemma dei cassetti.
Siccome è un insieme finito, $L_{\alpha}$ è anche surgettiva, perciò essendo anche iniettiva è una bigezione.

Segue che $L_{\alpha}$ è una permutazione di $(\mathbb{Z} \big/ _{n\mathbb{Z}})^{*}$. Dunque se $(\mathbb{Z} \big/ _{n\mathbb{Z}})^{*}=\{ \beta_{1}, \beta_{2}, \dots, \beta_{k} \}$ con $k = \phi(n)$, allora $\{ \alpha \beta_{1}, \alpha \beta_{2}, \dots, \alpha \beta_{k} \} = \{ \beta_{1}, \beta_{2}, \dots, \beta_{k} \}$.
Poiché sono gli stessi elementi eventualmente permutatu di $\mathbb{Z} \big/_{n\mathbb{Z}}$ e $(\mathbb{Z} \big/ _{n\mathbb{Z}})^{*}$ ha un prodotto associativo e commutativo, vale:
$$
\beta_{1} \beta_{2}\dots \beta_{k} =\alpha \beta_{1} \alpha \beta_{2}\dots \alpha \beta_{k} = \alpha^{k} \beta_{1} \beta_{2} \dots \beta_{k}
$$
Definiamo $\gamma:= \beta_{1}\beta_{2}\dots \beta_{k} \in (\mathbb{Z} \big/ _n\mathbb{Z})^{*}$ grazie al lemma 13.4.
Dunque $\gamma = \alpha^{k}\gamma \implies [1]_{n} = \gamma \gamma^{-1} = \alpha^{k}(\gamma \gamma^{-1})=\alpha^{k}[1]_{n}=\alpha^{k} \implies \alpha^{k}=[1]_{n}$ e quindi $\alpha^{\phi(n)} = [1]_{n}$.

### Corollario 13.6 (Piccolo teorema di Fermat)
Sia $p$ un numero primo e sia $a \in \mathbb{Z}$ tale che $p \not{|}\ a$ ovvero $(a, p) = 1$. Allora vale:
$$
a^{\phi(p)} = a^{p - 1} \equiv 1\ (\text{mod}\ p)
$$
### Dimostrazione
Basta applicare il precedente risultato con $n = p$ e ricordarsi che $\phi(p)=p-1$.

#### Esempio
Sia $p = 29, a = 2$. Siccome $29 \not{|}\ 2 \implies 2^{29-1} \equiv 1\ (\text{mod}\ 29)$. $2^{28}-1 = 268435455$ e difatti $(2^{28}-1) = 29 \cdot 9256395$.

### * Teorema 13.7 (Prop 13.11) (Teorema fondamentale della crittografia RSA)
Siano $n>0$ e $c > 0$ tali che $(c, \phi(n))=1$ (o equivalentemente vuol dire che $[c]_{\phi(n)}$ è invertibile in $\mathbb{Z} \big / _{\phi(n) \mathbb{Z}}$). Sia inoltre $d > 0$ tali che $d \in [c]_{\phi(n)}^{-1}$. Allora l'applicazione $P_{c}: \left( \mathbb{Z} \big/_{n\mathbb{Z}} \right)^{*} \rightarrow \left( \mathbb{Z} \big/_{n\mathbb{Z}} \right)^{*}$ definita ponendo:
$$
P_{c}(\alpha) := \alpha^{c}, \forall \alpha \in \left( \mathbb{Z} \big/_{n\mathbb{Z}} \right) ^{*}
$$
è un'applicazione invertibile e $P_{c}^{-1} = P_{d}$.
### Dimostrazione
Bisogna far vedere che:
$$
(P_{d} \circ P_{c}) = id_{\left( \mathbb{Z} \big/_{n\mathbb{Z}} \right) ^{*}} \text{ e } (P_{c} \circ P_{d}) = id_{\left( \mathbb{Z} \big/_{n\mathbb{Z}} \right) ^{*}}
$$
Vale:
$$
\forall a \in \left( \mathbb{Z} \big/_{n\mathbb{Z}} \right) ^{*}, P_{d}(P_{c}(\alpha)) = P_{d}(\alpha^{c}) = (\alpha^{c})^{d} = \alpha^{cd}
$$
Poiché $d \in [c]_{\phi(n)}^{-1}$, vale:
$$
[d]_{\phi(n)} [c]_{\phi(n)} = [1]_{\phi(n)} \Longleftrightarrow [dc]_{\phi(n)} = [1]_{\phi(n)} \Longleftrightarrow dc \equiv 1\ (\text{mod}\ \phi(n)) \Longleftrightarrow dc = 1 + k\phi(n), k \in \mathbb{Z}
$$
Ma allora:
$$
dc - 1 = k\phi(n) \geq 0
$$
Poiché $d > 0$ e $c > 0$ allora $dc \geq 1$ e $dc - 1 \geq 0$. Ma quindi $k$ non potrebbe essere negativo, perché $\phi(n)$ è sempre positivo. Dunque $k \geq 0$.
Tornando al passaggio precedente:
$$
\alpha^{cd} = \alpha^{1+k\phi(n)} = \alpha \cdot \alpha^{\phi(n)k} = \alpha(\alpha^{\phi(n)})^{k}
$$
Questo passaggio si può fare perché $k \geq 0$ e per Fermat-Eulero:
$$
\alpha ([1]_{n})^{k} = \alpha[1^{k}]_{n} = \alpha [1]_{n} = \alpha
$$
La dimostrazione per $P_{c}(P_{d}(\beta))$ è analoga, poiché gli esponenti $d$ e $c$ possono essere scambiati per la commutività.
### Crittografia RSA a chiave pubblica
Supponiamo che $A$ voglia comunicare con $B$ in modo confidenziale mediante RSA.
$B$ rende pubblici $n > 0$ e $c > 0$. $n$ è il modulo e $c$ la chiava di modifica.
$A$ dovrà usare come alfabeto $\left( \mathbb{Z} \big/_{n\mathbb{Z}} \right) ^{*}$. Supponiamo che il messaggio sia $\alpha$ pescata dall'alfabeto. Esegue un precalcolo e invia $\alpha^{c}=\beta$ che sta sempre nell'alfabeto. Ora $B$ conosce $n$ e $c$ e deve calcolare la chiave di decodifica $d>0, d\in[c]_{\phi(n)}^{-1}$. Per calcolare $[c]_{\phi(n)}^{-1}$ bisogna applicare Euclide tra $c$ e $\phi(n)$ con sistuzione a ritroso, ottenendo $xc + y\phi(n) = 1 \implies [x]_{\phi(n)}[c]_{\phi(n)} = [1]_{\phi(n)}$. Ora basta prendere $d \in [x]_{\phi(n)}$. Osserviamo la procedura e guardiamo veramente i conti che devono essere fatti.
Bisogna fattorizzare $n$ per computare $\phi(n)$.
Non bisogna sviscerare l'alfabeto, solamente gli elementi che ci servono e bisogna stare attenti che danno informazioni sulla $\phi(n)$, in quanto deve essere coprima con gli elementi dell'alfabeto. Ma la fattorizzazione è computazionalmente pesante ed è lì che sta la sicurezza. Di solito $n = pq$ con $p$ e $q$ primi molto grandi.
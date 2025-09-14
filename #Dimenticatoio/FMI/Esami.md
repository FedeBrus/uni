Determinare le soluzioni di $x^{33}\equiv 2\ (\text{mod}\ 55)$.
SVOLGIMENTO: Sia $S \subset \mathbb{Z}$ l'insieme delle soluzioni della congruenza.

PASSO 1: Compatabilità.
Grazie a un corollario del teorema fondamentale della crittografia RSA sappiamo che $S\neq \emptyset$ se e solo se valgono le seguenti:
1) $(33, \phi(55))$
2) $(2, 55)$
Calcoliamo $\phi(55)$: scomponendo in fattori troviamo che $55=5\cdot 11$. Grazie alla moltiplicatività della $\phi$ di Eulero sui coprimi, vale che:
$$
\phi(55) = \phi(5\cdot 11)=\phi(5) \phi(11) = (5-1)(11-1) = 40
$$
Calcoliamo $(33,40)$: scomponendo in fattori primi troviamo che $33=3\cdot 11$ e che $40=2 \cdot 2 \cdot 2 \cdot 2 \cdot 5$, dunque $(33,40)=1$ e la (1) è verificata.
Calcoliamo $(2,55)$: $2$ è primo e $55=5 \cdot 11$, dunque $(2,55)=1$ e la (2) è verificata.

Di conseguenza, grazie al corollario precedentemente menzionato $S\neq \emptyset$, più precisamente esiste $d>0, d\in[33]^{-1}_{\phi(55)}=[33]^{-1}_{40}$, tale che $S=[2^{d}]_{55}$.

PASSO 2: Calcolo di $S$.
Determiniamo $d$ applicando l'algoritmo di Euclide con sostituzione a ritroso dei resti alla coppia $(33,\phi(55)=40)$.
$$
\begin{array}{c|c|c}
40=33+7 & 7 = 40 -33\\
33=4 \cdot 7 + 5 & 5=33 -4 \cdot 7 \\
7=5+2 & 2=7-5\\
5=2 \cdot 2 +1 & 1= 5- 2 \cdot 2 & 5-2(7-5)=3 \cdot 5- 2 \cdot 7 = 3(33-4 \cdot 7)-2 \cdot 7 =3 \cdot 33- 14 \cdot 7=3 \cdot 33 - 14 (40 - 33) = 17 \cdot 33 - 14 \cdot 40\\
\cancel{2=2 \cdot 1 + 0}
\end{array}
$$
Quindi $1 = 17 \cdot 33 - 14 \cdot 40$. Passando alle classi di resto modulo $40$. Vale che: 
$$
\begin{align}
[1]_{40} & = [17 \cdot 33 - 14 \cdot 40]_{40} \\
 & = [17]_{40}[33]_{40} - [14]_{40}[40]_{40} \\
 & = [17]_{40}[33]_{40} - [14]_{40}[0]_{40} \\
 & = [17]_{40}[33]_{40} - [0]_{40} \\
 & = [17]_{40}[33]_{40} \\
\end{align}
$$
Pertanto $17 \in[33]_{40}^{-1}$.
Poniamo $d:=17$ e otteniamo che $S:=[2^{17}]_{55}$.

PASSO 3: Calcolo delle orbite.
Per determinare il rappresentante canonico di $[2^{17}]_{55}$, calcoliamo qualche potenza di $2$ modulo $55$.
$$
\begin{array}{c|c} 
k & [2^{k}]_{55} \\
\hline
1 & [2]_{55} \\
2 & [2^{2}]_{55} = [4]_{55} \\
3 & [2^{3}]_{55} = [8]_{55} \\
4 & [2^{4}]_{55} = [16]_{55} \\
5 & [2^{5}]_{55} = [32]_{55} \\
6 & [2^{6}]_{55} = [64]_{55} = [64 - 55]_{55} = [9]_{55} \\
\end{array}
$$
Dunque $[2^{4}]_{55}=[16]_{55}$. Scrivendo $17=4 \cdot 4 + 1$ si ha che:
$$
[2^{17}]_{55} = [2^{(4\cdot 4+1)}]_{55} =[2^{4}]^{4}_{55}[2]_{55} = [16]_{55}^{4}[2]_{55} = [36]^{2}_{55}[2]_{55} = [31]_{55}[2]_{55}= [62]_{55}= [7]_{55}
$$
In conclusione:
$$
S = [7]_{55} = \{7+55k \in \mathbb{Z}|k\in \mathbb{Z}\} \subset \mathbb{Z}
$$
DOMANDA FINALE:
Ogni soluzione $x \in S$ è della forma $7+55k$ per qualche $k \in \mathbb{Z}$. Dobbiamo cercare un $k \in \mathbb{Z}$ per il quale:
$$
7+55(k-1) \leq 0<7+55k
$$
Osserviamo che posto $k:= 0$ vale ceh $7+55(k-1)=-48\leq 0$ e che $7+55k=7>0$. Dunque la soluzione cercata è $7\in S$.

---

Si dica quale tra $d_{1}=(2,2,2,2,4,4,5,5,8)$ e $d_{2}=(1,2,3,3,3,4,5,5,5,10,10,10)$ è lo score di un grafo.

Cominciamo con il vettore $d_{2}$. Se esistesse un grafo $G_{2}$ con score $d_{2}$, questo avrebbe un numero dispari di vertici di grado dispari, ma ciò contraddirebbe il lemma delle strette di mano, perciò $d_{2}$ non può essere lo score di un grafo.
Non avendo trovato ostruzioni all'esistenza di un grafo di score $d_{1}$, procediamo applicando il teorema dello score (possiamo farlo perché $8 \leq 9-1=8$).
$$
\begin{array}{c|c|c} 
d_{1} & (2,2,2,2,4,4,5,5,8)  & 8\leq 9-1, 9-8=1 \\
\hline
d_{1}' & (1,1,1,1,3,3,4,4) & 4\leq 8 - 1, 8-4=4 \\
\hline
d_{1}'' & (1,1,1,0,2,2,3) & 3\leq 7-1, 7-3 = 4 \\
 & (0,1,1,1,2,2,3) \\
\hline
d'''_{1} & (0,1,1,0,1,1) & \text{Tutte le entrate } \leq 2 \implies \text{STOP} \\
 & (0,0,1,1,1,1)
\end{array}
$$
Grazie al teorema dello score sappiamo che $d_{1}$ è lo score di un grafo $\Longleftrightarrow$ $d'_{1}$ è lo score di un grafo $\Longleftrightarrow$ $d''_{1}$ è lo score di un grafo $\Longleftrightarrow$ $d'''_{1}$ è lo score di un grafo.
Osserviamo che $d'''_{1}$ è lo score del seguente grafo $G'''_{1}$:
```tikz
\usepackage{tikz-cd} 
\begin{document} 
\begin{tikzcd}
0 & 0 & 1 & 1 & 1 & 1 \arrow[no head, from=1-3, to=1-4] \arrow[no head, from=1-5, to=1-6]
\end{tikzcd} 
\end{document} 
```
Quindi possiamo concludere che $d_{1}$ è lo score di un grafo. Costruiamo un grafo $G_{1}$ con score $d_{1}$ guardando gli scarti tra le entrate dei vettori ottenuti col teorema dello score:
$$
\begin{align}
d_{1} &= (2,2,2,2,4,4,5,5,8) \\
d_{1}' & =(1,1,1,1,3,3,4,4) \\
d_{1}'' & = (0,1,1,1,2,2,3) \\
d_{1}''' & = (0,0,1,1,1,1)
\end{align}
$$
```tikz
\usepackage{tikz-cd} 
\begin{document} 
\begin{tikzcd}
&& 5 \\ \\ 2 & 2 & 4 & 4 & 2 & 2 \\ \\ && 5 && 8 \arrow[no head, from=1-3, to=3-2] \arrow[no head, from=1-3, to=3-3] \arrow[no head, from=1-3, to=3-4] \arrow[no head, from=3-3, to=3-4] 
\arrow[no head, from=3-3, to=5-5] \arrow[no head, from=3-5, to=3-6] \arrow[no head, from=5-3, to=3-1] \arrow[no head, from=5-3, to=3-3] 
\arrow[no head, from=5-3, to=3-4] 
\arrow[no head, from=5-5, to=3-1] 
\arrow[no head, from=5-5, to=3-2] 
\arrow[no head, from=5-5, to=3-4] 
\arrow[no head, from=5-5, to=3-5] 
\arrow[no head, from=5-5, to=3-6]
\arrow[no head, from=5-5, to=5-3]
\arrow[bend left=20, no head, from=5-3, to=1-3] 
\arrow[bend right=20, no head, from=5-5, to=1-3]
\end{tikzcd} 
\end{document} 
```
Può esser un albero?
La risposta è no, perché se esistessse una albero $T_{1}$ con score $d_{1}$ questo avrebbe $9\geq 2$ vertici. Ogni albero con un numero di vertici maggiore di $2$ deve avere almeno $2$ foglie, ma $d_{1}$ non ha alcuna entrata $=1$ e dunque $T_{1}$ non ha alcuna foglia, ma ciò è assurdo.
Può essere sconnesso?
La risposta è no, infatti $d_{1}$ soddisfa la condizione di forzatura alla connessione, difatti $8+2=10\geq 8=9-1$, ciò implica che ogni grafo con score $d_{1}$ è connesso.
Può essere hamiltoniano?
La risposta è no. Supponiamo per assurdo che esista un grafo hamiltoniano $H_{1}$ di score $d_{1}$. Allora questo conterrebbe un ciclo hamiltoniano, i cui vertici possiamo disporre come vertici di un poligono regolare. 
Osserviamo che ciascuno di questi vertici ha grado $2$. Sia $S:=\{ v \in V(H_{1})|deg_{H_{1}}(v) = 2 \}$. Sia $T:=V(H_{1})\setminus S$.
Consideriamo la sequenza di gradi residui $\hat{d}_{1}:=(2,2,3,3,6)$. Deve allora esistere un grafo $\hat{G}_{1}$ con score $\hat{d}_{1}$, ovvero la sequenza $\hat{d}_{1}$ deve essere grafica su $T$. Osserviamo che $6 \geq 5-1$ e grazie all'ostruzione $1$ un tale grafo non può esistere. 

---

Si dimostri per induzione che:
$$
\sum_{k=1}^{n} \frac{1}{k(k+1)} = \frac{n}{n+1},\qquad \forall n \geq 1
$$
SVOLGIMENTO: Procediamo per induzione su $n\geq 1$.
$n = 1$ (base dell'induzione).
Dobbiamo verificare che $\sum_{k=1}^{1} \frac{1}{k(k+1)}= \frac{1}{1+1}$.
Vale che:
$$
\begin{align}
\sum_{k=1}^{1} \frac{1}{k(k+1)}=\frac{1}{1+1} &\Longleftrightarrow  \frac{1}{1(1+1)} = \frac{1}{2} \\
 & \Longleftrightarrow \frac{1}{2} = \frac{1}{2}
\end{align}
$$
L'ultima uguaglianza della catena di equivalenze è banalmente verificata, dunque $\sum_{k=1}^{n} \frac{1}{k(k+1)}=\frac{1}{1+1}$ è verificata.
La base dell'induzione è stata verificata.

$n\geq 1, n \implies n+1$ (passo induttivo):
Supponiamo che $\sum_{k=1}^{n} \frac{1}{k(k+1)}=\frac{n}{n+1}$ sia vera per qualche $n \geq 1$ (ipotesi induttiva). Dobbiamo dimostrare che $\sum_{k=1}^{n+1} \frac{1}{k(k+1)}=\frac{n+1}{n+1+1}$ sia vera.
Vale che:
$$
\begin{align}
\sum_{k=1}^{n+1}  \frac{1}{k(k+1)} = \frac{n+1}{n+1+1} &\Longleftrightarrow \sum_{k=1}^{n} \frac{1}{k(k+1)} + \frac{1}{(n+1)(n+1+1)} = \frac{n+1}{n+2} \\
 & \Longleftrightarrow \frac{n}{n+1} + \frac{1}{(n+1)(n+2)} = \frac{n+1}{n+2} \\
 & \Longleftrightarrow \frac{n(n+2) +1}{(n+1)(n+2)} = \frac{(n+1)^{2}}{(n+1)(n+2)} \\
 & \Longleftrightarrow n^{2} + 2n +1 = n^{2}+2n+1
\end{align}
$$
L'ultima ugaglianza della catena di equivalenze è banalmente verificata, dunque $\sum_{k=1}^{n+1} \frac{1}{k(k+1)} = \frac{n+1}{n+1+1}$ è verificata. Il passo induttivo è stato svolto.
Grazie al principio di induzione sappiamo che $\sum_{k=1}^{n} \frac{1}{k(k+1)}=\frac{n}{n+1}$ per ogni $n\geq 1$.

---
Determinare le soluzioni di:
$$
\begin{cases}
x \equiv 28\ (\text{mod}\ 45) \\
x \equiv 46\ (\text{mod}\ 18)
\end{cases}
$$
SVOLGIMENTO: Sia $S \subset \mathbb{Z}$ l'insieme delle soluzioni del sistema.
PASSO 1: COMPATIBILITÀ
Grazie al teorema cinese del resto sappiamo che $S\neq \emptyset$ se e solo se $(45,18)|46-28$.
Calcoliamo $(45,18)$.
Scomponendo in fattori primi troviamo che $45=3 \cdot 3 \cdot 5$ e che $18 = 2 \cdot 3 \cdot 3$, dunque $(45,18)=3^{2} =9$.
Osserviamo che $46-28=18=2 \cdot 9$. Dunque $(45,18)|46-28$ è verificata, dunque il teorema cinese del resto ci assicura che $S\neq \emptyset$, più precisamente $S=[x_{0}]_{[45,18]}\subset \mathbb{Z}$  dove $x_{0}\in S$ è una soluzione particolare del sistema.
In particolare vale che $46-28=2(45,18)$. (1)

PASSO 2: CALCOLO DI UNA SOLUZIONE PARTICOALRE
Determiniamo $x_{0}\in S$ una soluzione particolare.
Iniziamo applicando l'algoritmo di Euclide con sostituzione a ritroso dei resti alla coppia $(45,18)$:
$$
\begin{array}{c|c|c}
45 = 2 \cdot 18 +9  & 9 = 45-2 \cdot 18\\
\cancel{18 = 2 \cdot 9 + 0} & 
\end{array}
$$
Dunque $(45,18)= 45-2 \cdot 18$. (2)
Grazie a (1) e $(2)$ vale che:ù
$$
46-28 = 2(45-2 \cdot 18) \Longleftrightarrow 46-28 =2 \cdot 45-4 \cdot 18
$$
Ricaviamo una soluzione particolare a partire dall'uguaglianza precedente:
$$
46 +4 \cdot 18 = 28+2 \cdot 45 \Longleftrightarrow 118=118
$$
Pertanto $118 \in S$ è una soluzione particolare del sistema, infatti vale che $118 \equiv 46\ (\text{mod}\ 18)$ e che $118 \equiv 28\ (\text{mod}\ 45)$.
PASSO 3: CALCOLO DI $S$
Grazie al teorema cinese del resto sappiamo che $S = [118]_{[45,18]}$.
Ma $[45,18]=\frac{45 \cdot 18}{(45,18)}=\frac{810}{9}=90$.
Pertanto $S=[118]_{90}=[118-90]_{90}=[28]_{90}$.

DOMANDA FINALE: Osserviamo che esiste una soluzione $x \in S$ divisbile per $16$ se e solo se il seguente sistema è compatibile:
$$
\begin{cases}
x \equiv 28\ (\text{mod}\ 90) \\
x \equiv 0\ (\text{mod}\ 16)
\end{cases}
$$
Grazie al teorema cinese del resto sappiamo che il sistema è compatibile se e solo se $(90, 16)|28-0$.
Calcoliamo $(90,16)$.
Scomponendo in fattori primi troviamo che $90=2 \cdot 3 \cdot 3 \cdot 5$ e che $16 = 2 \cdot 2 \cdot 2 \cdot 2$, dunque $(90,16)=2$.
Poiché $28 -0 = 28= 14 \cdot 2$ vale che $(90,16)|28-0$, perciò il sistema è compatibile e esiste una soluzione $x \in S$ divisibile per $16$.

--- 

Si dica quale tra $d_{1}=(1,1,1,2,4,4,4,5,5,7)$ e $d_{2} = (0,1,1,2,2,2,2,6,8)$ è lo score di un grafo.

Cominciamo con $d_{2}$. Osserviamo che $d_{2}$ ha un entrata di grado massimo, ovvero $8=9-1$. Pertanto se esistesse un grafo $G_{2}$ con score $d_{2}$ quest'ultimo avrebbe un vertice che è adiacente a tutti gli altri, di conseguenza qualsiasi altro vertice è adiacente a questo e di conseguenza deve avere un grado maggiore o uguale a $1$. Notiamo che $d_{2}$ ha un entrata di grado $0 < 1$ e ciò non è possibile e dunque $G_{2}$ dovrebbe avere un vertice di grado $0$, che è assurdo (Ostruzione 2).
Non avendo trovato ostruzioni all'esistenza di un grafo con score $d_{1}$, applichiamo il teorema dello score (possiamo farlo perché $7 \leq 10 -1=9$).
$$
\begin{array}{c|c|c}
d_{1} & (1,1,1,2,4,4,4,5,5,7) & 7 \leq 10-1, 10-7=3 \\
\hline
d_{1}' & (1,1,0,1,3,3,3,4,4) & 4 \leq 9-1, 9-4=5 \\
 & (0,1,1,1,3,3,3,4,4) &  \\
\hline 
d_{1}'' & (0,1,1,1,2,2,2,3) & 3 \leq 8-1, 8-3=5 \\
\hline
d_{1}''' & (0,1,1,1,1,1,1)  & \text{componenti} \leq 2 \implies \text{STOP}
\end{array}
$$
Grazie al teorema dello score sappiamo che $d_{1}$ è lo score di un grafo $\Longleftrightarrow$ $d_{1}'$ è lo score di un grafo $\Longleftrightarrow$ $d''_{1}$ è lo score di un grafo $\Longleftrightarrow$ $d'''_{1}$ è lo score di un grafo.
Osserviamo che il seguente grafo $G'''_{1}$ ha score $d'''_{1}$:
```tikz
\usepackage{tikz-cd} 
\begin{document} 
\begin{tikzcd}
0 & 1 & 1 & 1 & 1 & 1 & 1 \arrow[no head, from=1-3, to=1-2] \arrow[no head, from=1-5, to=1-4] \arrow[no head, from=1-7, to=1-6]
\end{tikzcd} 
\end{document} 
```
Segue che $d_{1}$ è lo score di un grafo. Costruiamo il grafo $G_{1}$ di score $d_{1}$ guardando gli scarti tra le entrate dei vettori ottenuti col teorema dello score:
$$
\begin{align}
d_{1} &=(1,1,1,2,4,4,4,5,5,7) \\
d_{1}'&=(0,1,1,1,3,3,3,4,4) \\
d_{1}'' & = (0,1,1,1,2,2,2,3) \\
d_{1}''' & = (0,1,1,1,1,1,1)
\end{align}
$$
Il grafo $G_{1}$ è un grafo sconnesso di score $d_{1}$. Le sue componenti connesse sono infatti $G[\{ v_{2},v_{3} \}]$ e $G[\{ v_{1},v_{4},v_{5},v_{6},v_{7},v_{8},v_{9}, v_{10} \}]$.
Sia $C_{1}$ il seguente grafo.
```tikz
\usepackage{tikz-cd} 
\begin{document} 
\begin{tikzcd}
&&&&& 5 \\ \\ 7 & 1 & 4 & 1 & 4 & 1 & 4 & 2 \\ \\ &&&&& 5 \arrow[no head, from=1-6, to=3-3] \arrow[no head, from=1-6, to=3-5] \arrow[no head, from=1-6, to=3-7] \arrow[no head, from=3-1, to=1-6] \arrow[no head, from=3-1, to=3-2] \arrow[bend left=10, no head, from=3-1, to=3-3] \arrow[bend right=10, no head, from=3-1, to=3-5] \arrow[bend right=10, no head, from=3-1, to=3-8] \arrow[no head, from=3-1, to=5-6] \arrow[no head, from=3-3, to=3-4] \arrow[no head, from=3-5, to=3-6] \arrow[bend right=10, no head, from=3-7, to=3-1] \arrow[no head, from=3-7, to=3-8] \arrow[bend right=10, no head, from=5-6, to=1-6] \arrow[no head, from=5-6, to=3-3] \arrow[no head, from=5-6, to=3-5] \arrow[no head, from=5-6, to=3-7]
\end{tikzcd} 
\end{document} 
```
$C_{1}$ è connesso e ha score $d_{1}$, dunque la ripsosta è sì.
Ogni grafo con score $d_{1}$ ha sicuramente 3 foglie in quanto sono presenti 3 entrate di grado 1. Allora nessun grafo di score $d_{1}$ può essere 2-connesso e di conseguenza nessun grafo di score $d_{1}$ può essere hamiltoniano.

---

Si dimostri per induzione:
$$
\sum_{k=0}^{n} \frac{5^{k}}{4^{k}}= \frac{5^{n+1}}{4^{n}} - 4, \qquad \forall n\geq 1
$$
SVOLGIMENTO: Procediamo per induzione su $n\geq 1$.
$n = 1$ (base dell'induzione).
Dobbiamo dimostrare che $\sum_{k=0}^{1} \frac{5^{k}}{4^{k}}=\frac{5^{1+1}}{4^{1}}-4$.
Vale che:
$$
\sum_{k=0}^{1} \frac{5^{k}}{4^{k}} = \frac{5^{1+1}}{4^{1}}-4 \Longleftrightarrow \frac{5^{0}}{4^{0}}+\frac{5^{1}}{4^{1}}= \frac{25}{4} -4 \Longleftrightarrow 1 + \frac{5}{4} = \frac{25 -16}{4} \Longleftrightarrow \frac{9}{4} = \frac{9}{4}
$$
L'ultima ugaglianza nella catenda di equivalenze è banalmente verificata, dunque $\sum_{k=0}^{n} \frac{5^{k}}{4^{k}}= \frac{5^{n+1}}{4^{n}}-4$ è verificata.
La base dell'induzione è verificata.

$n \geq 1, n \implies n+1$ (passo induttivo).
Supponiamo che $\sum_{k=0}^{n} \frac{5^{k}}{4^{k}}= \frac{5^{n+1}}{4^{n}}-4$ sia vera per qualche $n\geq 1$. Dobbiamo verificare che $\sum_{k=0}^{n+1} \frac{5^{k}}{4^{k}}=\frac{5^{n+1+1}}{4^{n+1}}-4$.
Vale che:
$$
\begin{align}
\sum_{k=0}^{n+1} \frac{5^{k}}{4^{k}} = \frac{5^{n+1+1}}{4^{n+1}} - 4 &\Longleftrightarrow  \sum_{k=0}^{n} \frac{5^{k}}{4^{k}} + \frac{5^{n+1}}{4^{n+1}} = \frac{5^{n+2}}{4^{n+1}}-4 \\
 & \Longleftrightarrow \frac{5^{n+1}}{4^{n}} - 4 +\frac{5^{n+1}}{4^{n+1}} = \frac{5^{n+2} - 4^{n+2}}{4^{n+1}} \\
 & \Longleftrightarrow \frac{4 \cdot 5^{n+1}-4^{n+2}+5^{n+1}}{4^{n+1}} = \frac{5^{n+2}-4^{n+2}}{4^{n+1}} \\
 & \Longleftrightarrow 5 \cdot 5^{n+1} -4^{n+2} = 5^{n+2} - 4^{n+2} \\
 & \Longleftrightarrow 5^{n+2} -4^{n+2} = 5^{n+2}- 4^{n+2}
\end{align}
$$
L'ultima ugaglianza della catena di equivalenze è banalmente verificata, dunque $\sum_{k=0}^{n+1} \frac{5^{k}}{4^{k}}=\frac{5^{n+1+1}}{4^{n+1}}-4$ è verificata.
Il passo induttivo è stato complteato.
Grazie al principio di induzione sappiamo che $\sum_{k=0}^{n} \frac{5^{k}}{4^{k}}= \frac{5^{n+1}}{4^{n}}-4$ è verificata per ogni $n\geq 1$.

---
Si determinino le soluzioni di:
$$
\begin{cases}
x \equiv -20\ (\text{mod}\ 180) \\
x \equiv 40\ (\text{mod}\ 66)
\end{cases}
$$
SVOLGIMENTO: Sia $S\subset \mathbb{Z}$ l'insieme delle soluzioni del sistema di congruenze.
PASSO 1: COMPATIBILITÀ
Grazie al teorema cinese del resto sappiamo che $S\neq \emptyset$ se e solo se $(180,66)|40 - (-20)$.
Determiniamo $(180,66)$. Scomponendo in fattori primi troviamo che $180 = 2 \cdot 2 \cdot 3 \cdot 3 \cdot 5$ e che $66 = 2 \cdot 3 \cdot 11$, dunque $(180,66)=2\cdot 3 = 6$.
Osserviamo che $40-(-20)=60= 10 \cdot 6  = 10 \cdot(180,66)$, dunque vale che $(180,66)|40-(-20)$. Chiamiamo (1) l'uguaglianza $40 - (-20) = 10 \cdot (180,66)$.
Allora il teorema cinese del resto ci assicura che $S\neq \emptyset$, più precisamente $S=[x_{0}]_{[180,66]} \subset \mathbb{Z}$, dove $x_{0}\in S$ è una soluzione particolare del sistema.

PASSO 2: DETERMINAZIONE DI UNA SOLUZIONE PARTICOLARE
Determiniamo $x_{0} \in S$ una soluzione particolare del sistema.
Iniziamo applicando l'algoritmo di Eulcide con sostituzione a ritroso dei resti alla coppia $(180,66)$:
$$
\begin{array}{c|c|c}
180 = 2 \cdot 66 + 48  &  48 = 180 - 2\cdot 66 \\
66 = 48 + 18  &  18 = 66 - 48\\
48 = 2 \cdot 18 + 12  & 12 = 48 - 2 \cdot 18\\
18 = 12 + 6  & 6 = 18 -12 &  6= 3 \cdot18 - 48= 3\cdot 66 -  4 \cdot 48 = 11 \cdot 66 - 4 \cdot 180\\
\cancel{12 = 2 \cdot 6 + 0}
\end{array}
$$
Abbiamo trovato che $(180,66)=11 \cdot 66- 4 \cdot 180$ (2).
Grazie a (1) e (2) abbiamo che:
$$
40 - (-20) = 10 \cdot (180,66) \Longleftrightarrow 40-(-20) = 10(11 \cdot 66 - 4 \cdot 180) \Longleftrightarrow 40-(-20) = 110 \cdot 66 - 40 \cdot 180
$$
Dunque $40 - (-20) = 110 \cdot 66 - 40 \cdot 180$.
Ricaviamo una soluzione particolare dall'uguagliana precedente:
$$
40-(-20) = 110 \cdot 66 - 40 \cdot 180 \Longleftrightarrow 40 -110 \cdot 66 = -20 -40 \cdot 180 \Longleftrightarrow -7220 = -7220
$$
Pertanto $-7220 \in S$ è una soluzione particolare del sistema.
PASSO 3: CALCOLO DI $S$
Grazie al teorema cinese del resto sappiamo che $S = [-7220]_{[180,66]} \subset \mathbb{Z}$.
Ma $[180,66]= \frac{180 \cdot 66}{(180,66)}=\frac{11880}{6}=1980$.
Dunque abbiamo che $S = [-7220]_{1980}=[-7220 + 4 \cdot 1980]=[700]_{1980} \subset \mathbb{Z}$.

DOMANDA FINALE:
Osserviamo che ogni soluzione $x \in S$ è della forma $700 + 1980k$ con $k \in \mathbb{Z}$.
Passiamo alle classi di resto modulo $99$:
$$
\begin{align}
[x]_{99}  &= [700 + 1980k]_{99} \\
 & = [700]_{99} + [0]_{99}[k]_{99} \\
 & = [7]_{99} + [0]_{99} \\
 & = [7]_{99}
\end{align}
$$
Segue che per ogni $x \in S$ vale che $[x]_{99}=[7]_{99}$, ovvero $x$ è divisibile dà resto $7$ se divisa per $99$.

---
Si risolva $x^{23} \equiv 37\ (\text{mod}\ 76)$.

SVOLGIMENTO: Sia $S\subset \mathbb{Z}$ l'insieme delle soluzioni della congruenza.
PASSO 1: COMPATIBILTÀ
Grazie a un corllario del teorema fondamentale della crittografia RSA sappiamo che $S\neq \emptyset$ se e solo se valgono le seguenti:
1) $(23, \phi(76))=1$
2) $(37, 76)= 1$
Calcoliamo $(37,76)$.
Scomponendo in fattori primi troviamo che $76 = 2 \cdot 2 \cdot 19$ e $37$ è primo, perciò $(37,76)=1$ e (1) è verificata.
Calcoliamo $\phi(76)$.
Grazie alla moltiplicatività della $\phi$ di Eulero sui coprimi vale che:
$$
\phi(76) = \phi(2^{2})\phi(19) = (2^{2}-2)\phi(19-1) = 36
$$
Scomponendo in fattori otteniamo che $36 = 2 \cdot 2 \cdot 3 \cdot 3$ e $23$ è primo, perciò $(36, 23)=1$ e (2) è verificata
Grazie al corollario menzionato sappiamo che $S\neq \emptyset$, più precisamente $\exists d>0, d\in[23]_{\phi(76)}=[23]_{36}\subset \mathbb{Z}$ per cui $S=[37^{d}]_{76} \subset \mathbb{Z}$.

PASSO 2: DETERMINAZIONE DI $d$
Determiniamo $d>0, d\in[23]_{36}$. Inanzitutto applichiamo l'algoritmo di Euclide con sostituzione a ritroso dei resti alla coppia $(36, 23)$.
$$
\begin{array}{c|c|c}
36 = 23 + 13  & 13 = 36 - 13\\
23 = 13 + 10  & 10 = 23 - 13\\
13 = 10 + 3  & 3 = 13 - 10\\
10 = 3 \cdot 3 + 1 & 1 = 10 - 3 \cdot 3  & 1 = 4 \cdot 10-3 \cdot 13 = 4 \cdot 23 -7 \cdot 13 = 11 \cdot 23 - 7 \cdot 36\\
\cancel{3 = 3 \cdot 1 + 0}
\end{array}
$$
Quindi $1 = 11 \cdot 23 - 7 \cdot 36$, passiamo alle classi di resto modulo $36$:
$$
\begin{align}
[1]_{36} &= [11 \cdot 23 + (-7) \cdot 36]_{36} \\
 & = [11]_{36} [23]_{36} + [0]_{36} \\
 & = [11]_{36} [23]_{36} 
\end{align}
$$
Dunque $[1]_{36} = [11]_{36}[23]_{36}$, pertanto $11 \in[23]_{36}^{-1}$.
Ponendo $d:=11$ si ha che $S = [37^{11}]_{76}$.

PASSO 3: CALCOLO DELLE ORBITE
Per determinare il rappresentante canonico di $[37^{11}]_{76}$ calcoliamo qualche potenza di $37$ modulo $76$:
$$
\begin{array}{c|c} 
k & [37^{k}]_{76} \\
\hline
1 & [37]_{76} \\
2 & [37^{2}]_{76} = [1369 - 18 \cdot 36]_{76} = [1]_{76}
\end{array}
$$
Osserviamo che $11 = 5 \cdot 2 + 1$. Dunque:
$$
[37^{(5 \cdot 2)+1}]_{76}= [37^{2}]^{5}_{76} [37]_{76} = [1]_{76}^{5} [37]_{76} = [1^{5}]_{76} [37]_{76} = [1]_{76} [37]_{76} = [37]_{76}
$$
Perciò $S=[37]_{76}=\{ 37 + 76k \in \mathbb{Z} | k \in \mathbb{Z} \} \subset \mathbb{Z}$

DOMANDA FINALE:
Osserviamo che ogni $x \in S$ soluzione è della forma $x = 37 + 76k$ per qualche $k \in \mathbb{Z}$.
Dunque dobbiamo determinare $k\in \mathbb{Z}$ per cui:
$$
37+76k < 0 \leq 37 + 24(k+1)
$$
Osserviamo che ponendo $k:=-1$ vale che:
- $37 - 76(-1)=37 -76= -39 < 0$
- $37 -76(0)=37\geq 0$
Dunque la soluzione cercata è $-39 \in S$.

---
Quali dei seguenti è lo score di un grafo?
$d_{1} = (3,4,4,4,6,7,7,7,10,12,12,12,12)$ e $d_{2} = (1,1,1,1,1,1,1,1,2,2,2,4,6)$

SVOLGIMENTO:
Cominciamo da $d_{1}$. Osserviamo che se esistesse un grafo $G_{1}$ con score $d_{1}$ quest'ultimo avrebbe $4$ vertici di grado massimo, ciascuno adiacente a tutti gli altri vertici di $G_{1}$. Ciò comporta che il grado minimo dei vertici di $G_{1}$ deve essere $\geq 4$, ma $d_{1}$ presenta una componente di grado $3$, il che è assurdo (Ostruzione 2 vista a lezione).
Non avendo trovato ostruzioni all'esistenza di un grafo avente score $d_{2}$, procediamo applicando il teorema dello score (possiamo perché $6\leq 13 -1 = 12$).
$$
\begin{array}{c|c|c}
d_{2}  &  (1,1,1,1,1,1,1,1,2,2,2,4,6)  & 6 \leq 13-1, 13-6 = 7 \\
\hline
d_{2}' & (1,1,1,1,1,1,0,0,1,1,1,3)  & 3 \leq 12-1, 12 - 3 = 9 \\
 & (0,0,1,1,1,1,1,1,1,1,1,3) &  \\
\hline
d_{2}''  & (0,0,1,1,1,1,1,1,0,0,0) & \text{componenti} \leq 2 \implies\text{STOP} \\
 & (0,0,0,0,0,1,1,1,1,1,1)
\end{array}
$$
Grazie al teorema dello score $d_{2}$ è lo score di un grafo $\Longleftrightarrow$ $d'_{2}$ è lo score di un grafo $\Longleftrightarrow$ $d_{2}''$ è lo score di un grafo.
Osserviamo che il seguente grafo $G''2$ ha come score $d_{2}''$:
```tikz
\usepackage{tikz-cd} 
\begin{document} 
\begin{tikzcd}
0 & 0 & 0 & 0 & 0 & 1 & 1 & 1 & 1 & 1 & 1 \arrow[no head, from=1-6, to=1-7] \arrow[no head, from=1-8, to=1-9] \arrow[no head, from=1-10, to=1-11]
\end{tikzcd} 
\end{document} 
```
Dunque $d_{2}$ è lo score di un grafo. Costruiamo un grafo $G_{2}$ avente score $d_{2}$ guardando gli scarti tra le entrate dei vettori ottenuti col teorema dello score.
$$
\begin{align}
d_{2} = &(1,1,1,1,1,1,1,1,2,2,2,4,6) \\
d_{2}' = &(0,0,1,1,1,1,1,1,1,1,1,3) \\
d_{2}'' = &(0,0,0,0,0,1,1,1,1,1,1)
\end{align}
$$
```tikz
\usepackage{tikz-cd} 
\begin{document} 
\begin{tikzcd}
&& 6 \\ && 4 \\ 1 & 2 & 2 & 2 & 1 & 1 & 1 & 1 & 1 & 1 & 1 \arrow[no head, from=1-3, to=3-2] \arrow[bend left=18, no head, from=1-3, to=3-3] \arrow[no head, from=1-3, to=3-4] \arrow[no head, from=2-3, to=1-3] \arrow[no head, from=3-1, to=1-3] \arrow[no head, from=3-2, to=2-3] \arrow[no head, from=3-3, to=2-3] \arrow[no head, from=3-4, to=2-3] \arrow[no head, from=3-5, to=1-3] \arrow[no head, from=3-6, to=3-7] \arrow[no head, from=3-8, to=3-9] \arrow[no head, from=3-10, to=3-11]
\end{tikzcd} 
\end{document} 
```
La risposta è no, perché un grafo hamiltoniano è un grafo 2-connesso e un grafo 2-connesso non può contenere foglie, ma $d_{2}$ presenta almeno un'entrata di grado 1.
Osserviamo che $d_{2}$ ha $n=13$ componenti e che:
$$
\frac{1}{2} \sum_{i=1}^{n} (d_{2})_{i} = \frac{8\cdot 1 + 3 \cdot 2+ 4+6}{2} = 12 = 13-1
$$
Dunque $d_{2}$ soddisfa la formula di Eulero. Costruiamo un albero con il metodo visto a lezione:

Osserviamo che se $G$ è un grafo che è un 3-ciclo, allora $G$ ha score $(2,2,2)$. Pertanto, esiste un grafo con score $d_{2}$ che ha un 3-ciclo come componente connessa se e soltanto se il vettore $\tilde{d}_{2}=(1,1,1,1,1,1,1,1,4,6)$ è lo score di un grafo.

---

Si dimostri per induzione che $\forall n\geq 0$:
$$
\sum_{k=0}^{n} 4k3^{k} = 3+3^{n+1}(2n-1)
$$
SVOLGIMENTO: Procediamo per induzione su $n \geq 0$:
$n = 0$ (base dell'induzione).
Dobbiamo provare che $\sum_{k=0}^{0} 4k 3^{k} = 3 + 3^{1+0}(2 \cdot 0-1)$.
Vale che:
$$
\sum_{k=0}^{0} 4k 3^{k} = 3+ 3^{1+0}(2\cdot 0-1) \Longleftrightarrow 4 \cdot 0 \cdot 3^{0} = 3 + 3(-1) \Longleftrightarrow 0 = 0
$$
L'ultima ugaglianza della catena di equivalenze è banalmente verificata, dunque vale ceh $\sum_{k=0}^{0} 4k3^{k}=3+3^{1+0}(2 \cdot 0 -1)$, ovvero la base dell'induzione è verificata.

$n \geq 0, n \implies n+1$ (passo induttivo).
Supponiamo che $\sum_{k=0}^{n} 4k 3 ^{k}= 3+3^{n+1}(2n-1)$ sia vera per qualche $n\geq 0$ (ipotesi induttiva). Dobbiamo dimostrare che $\sum_{k=0}^{n+1}4k3^{k}=3+3^{n+1+1}(2(n+1)-1)$.
Vale che:
$$
\begin{align}
\sum_{k=0}^{n+1}4k3^{k}=3+3^{n+1+1}(2(n+1)-1) &\Longleftrightarrow \sum_{k=0}^{n} 4k 3 ^{k} + 4(n+1)3^{n+1} = 3+3^{n+2}(2n+1) \\
 & \Longleftrightarrow 3 + 3^{n+1} (2n-1) +4(n+1)3^{n+1} = 3 + 3^{n+2}(2n+1) \\
 & \Longleftrightarrow 3^{n+1}(2n-1+4n+4) = 3^{n+2}(2n+1) \\
 & \Longleftrightarrow 3^{n+1}(3(2n +1)) = 3^{n+2}(2n+1) \\
 & \Longleftrightarrow 3^{n+2}(2n+1)= 3^{n+2}(2n+1)
\end{align}
$$
L'ultima ugaglianza della catena di equivalenze è banalmente verificata, dunque $\sum_{k=0}^{n+1} 4k 3^{k}= 3+3^{n+1+1}(2(n+1)-1)$ è verificata.
Il passo induttivo è stato completato.
Grazie al teorema del principio di induzione sappiamo che $\sum_{k=0}^{n} 4k3^{k} = 3+3^{n+1}(2n-1)$ è vera $\forall n\geq 0$.

---
Si determinino tutte le soluzioni di:
$$
\begin{cases}
x \equiv -62\ (\text{mod}\ 162) \\
x \equiv -20\ (\text{mod}\ 114)
\end{cases}
$$
Inoltre si dica se esiste una soluzione divisibile per $57$.

SVOLGIMENTO: Sia $S \subset \mathbb{Z}$ l'insieme delle soluzioni del sistema.
PASSO 1: COMPATIBILITÀ
Grazie al teorema cinese del resto sappiamo che $S\neq \emptyset$ se e solo se vale che $(162,114)|-20 - (-62)$.
Determiniamo $(162,114)$.
Scomponendo in fattori primi troviamo che $162 = 2 \cdot 3^{4}$ e che $114=2 \cdot 3 \cdot 19$, dunque $(162,114)=2 \cdot 3 = 6$.
Osserviamo che $-20-(-62)=42 = 7 \cdot 6 =7(162,114) \implies -20 -(-62)= 7(162,114)$ (1).
Dunque $(162,114)|-20-(-62)$ è verificata e per il teorema cinese del resto $S\neq \emptyset$, più precisamente $S=[x_{0}]_{[162,114]}$ dove $x_{0}\in S$ è una soluzione particolare del sistema.

PASSO 2: CALCOLO DI UNA SOLUZIONE PARTIOCLARE DEL SISTEMA
Determiniamo $x_{0} \in S$ soluzione particolare del sistema.
Applichiamo l'algoritmo di Euclide con sostituzione a ritroso dei resti alla coppia $(162,114)$:
$$
\begin{array}{c|c|c}
162 = 114 + 48  & 48 = 162 - 114\\
114 = 2 \cdot 48 + 18  &  18 = 114 - 2 \cdot 48\\
48 = 2 \cdot 18 + 12  &  12 = 48 -2 \cdot 18\\
18 = 12 + 6  & 6 = 18 - 12  &  6 = 3 \cdot 18 - 48 =3 \cdot 114 - 7 \cdot 48= 10\cdot 114-7 \cdot 162\\
\cancel{12 = 2 \cdot 6 + 0}
\end{array}
$$
Dunque $6 = 10 \cdot 114 - 7 \cdot 162 \implies (162, 114) = 10 \cdot 114 - 7 \cdot 162$. (2)
Dalla (1) e dalla (2) si ottiene che:
$$
-20-(-62) = 7 \cdot (10 \cdot 114 - 7 \cdot 162) \Longleftrightarrow -20 -(-62) = 70 \cdot 114 - 49 \cdot 162
$$
Ricaviamo una soluzione a partire dall'uguaglianza precedente:
$$
-20 - (-62) = 70 \cdot 114 - 49 \cdot 162 \Longleftrightarrow -20-70 \cdot 114 = -62-49 \cdot 162 \Longleftrightarrow -8000 = -8000
$$
Pertanto $-8000$ è soluzione e quindi $-8000 \in S$.
PASSO 3: CALCOLO DI $S$
Grazie al teorema cinese del resto sappiamo che $S = [-8000]_{[114,162]}\subset \mathbb{Z}$. Ma $[114,162]=\frac{162 \cdot 114}{(162,114)}=3078$.
Dunque $S = [-8000]_{3078}=[-8000 + 3 \cdot 3078]_{3078}=[1234]_{3078} = \{ 1234+3078k \in \mathbb{Z}|k\in \mathbb{Z} \}\subset \mathbb{Z}$.

DOMANDA FINALE
Osserviamo che se esiste una soluzione $x \in S$ divisibile per $57$ se e solo se il seguente sistema è compatibile:
$$
\begin{cases}
x \equiv 1234\ (\text{mod}\ 3078) \\
x \equiv 0\ (\text{mod}\ 57)
\end{cases}
$$
Grazie al teorema cinese del resto il sistema è compatibile se e solo se $(3078,57)|1234-0$.
Scomponendo in fattori primi otteniamo che $3078 = 2 \cdot 3 \cdot 3 \cdot 3 \cdot 3 \cdot 19$ e $57 = 3 \cdot 19$, dunque $(3078,57)=57$.
Osserviamo che $57 \not{|}\ 1234-0$, dunque una tale soluzione non può esistere.

---
Si determinino tutte le soluzioni della congruenza $x^{59} \equiv 22\ (\text{mod}\ 63)$. Dire se esiste una soluzione positiva che divisa per $64$ da come resto $1$.

SVOLGIMENTO: Sia $S\subset \mathbb{Z}$ l'insieme delle soluzioni della congruenza.
PASSO 1: COMPATIBILITÀ
Grazie a un corollario del teorema fondamentale della crittografia RSA sappiamo che $S\neq \emptyset$ se e solo se valgono le seguenti:
1) $(59, \phi(63))=1$
2) $(22, 63)=1$
Scomponendo in fattori primi troviamo che $63=3^{2} \cdot 7$ e $22 = 2 \cdot 11$, dunque $(22,63)=1$ e la (2) è verificata.
Calcoliamo $\phi(63)$: grazie alla moltiplicatività della $\phi$ di Eulero sui coprimi vale che:
$$
\phi(63) = \phi(3^{2}\cdot 7) = \phi(3^{2}) \phi(7) = (3^{2}-3)(7-1) = 6 ^{2} =36
$$
Scomponendo in fattori primi troviamo che $\phi(63)=36=3^{2} \cdot 2^{2}$ e $59$ è primo, dunque $(59, \phi(63))=(59, 36)=1$ e la (1) è verificata.
Dunque grazie al corollario menzionato prima $S\neq \emptyset$, più precisamente $\exists d>0, d\in[59]_{\phi(63)}^{-1} = [23]_{36}^{-1}$ per cui $S=[22^{d}]_{63} \subset \mathbb{Z}$.

PASSO 2: DETERMINAZIONE DI $d$
Iniziamo applicando l'algoritmo di Euclide con sostituzione a ritroso dei resti alla coppia $(59, 36)$:
$$
\begin{array}{c|c|c}
36=23 + 13  & 13 = 36 - 23\\
23 = 13 +10  &  10 = 23 - 13\\
13 = 10 + 3  & 3 = 13 - 10\\
10 = 3 \cdot 3 + 1 & 1 = 10 - 3 \cdot 3  & 1 = 4 \cdot 10 - 3 \cdot 13 = 4 \cdot 23 -7 \cdot 13 = 11 \cdot 23 - 7 \cdot 36  \\
\cancel{3 = 3 \cdot 1 + 0}
\end{array}
$$
Da cui $1 = 11 \cdot 23-7 \cdot 36$, passando alle classi di resto modulo $36$ si ha che:
$$
\begin{align}
[1]_{36} &= [11 \cdot 23 - 7 \cdot 36]_{36} \\
 & = [11]_{36} [23]_{36} + [-7]_{36}[36]_{36} \\
 & = [11]_{36} [23]_{36} + [0]_{36} \\
 & = [11]_{36} [23]_{36}
\end{align}
$$
Dunque $11 \in [23]_{36}^{-1}$.
Ponendo $d:= 11$ abbiamo che $S=[22^{11}]_{63} \subset \mathbb{Z}$.

PASSO 3: CALCOLO DELLE ORBITE
Calcoliamo un rappresentante canonico di $[22^{11}]_{63}$ calcolando prima alcune potenze di $22$ modulo $63$:
$$
\begin{array}{c|c}
k & [22^{k}]_{63} \\
\hline
1 & [22]_{63} \\
\hline
2 & [22^{2}]_{63} = [484]_{63} = [43]_{63} \\
\hline
3 & [22^{3}]_{63} = [22^{2}]_{63} [22]_{63} = [43 \cdot 22]_{63} = [1]_{63}
\end{array}
$$
Abbiamo trovato che $[22^{3}]_{63}=[1]_{63}$. Osserviamo che $11 = 3 \cdot 3 + 2$, dunque:
$$
[22^{11}]_{63}  = [22^{3 \cdot 3 + 2}]_{63} = [22^{3}]^{3}_{63} [22^{2}]_{63}=[1]_{63}^{3} [43]_{63} = [43]_{63}
$$
Perciò $S = [43]_{63} = \{ 43 + 63k \in \mathbb{Z}|k \in \mathbb{Z} \}\subset \mathbb{Z}$.

DOMANDA FINALE:
Consideriamo il seguente sistema
$$
\begin{cases}
x\equiv 43\ (\text{mod}\ 63) \\
x\equiv 1\ (\text{mod}\ 64)
\end{cases}
$$
Grazie al teorema cinese del resto sappiamo che il sistema è compatibile se e solo se $(63,64)|43-1$. Ma $(63,64)=1$ perciò il sistema è sicuramente compatibile.
Mostriamo che esiste una soluzione positiva. Ogni soluzione del sistema è della forma $x = 1 + 64k$ per qualche $k \in \mathbb{Z}$. Inolter $x \equiv 43\ (\text{mod}\ 63) \implies 1+ 64k\equiv 43\ (\text{mod}\ 63) \implies [64]_{63}[k]_{63}=[42]_{63}\implies[k]_{63}=[42]_{63}$.
Poniamo $k:=42$. Segue allora che $1+64 \cdot 42=2689$ è una soluzione del sistema, segue che $2689 \in S$ e $2689\equiv 1\ (\text{mod}\ 64)$.

---
$d_{1}=(2,2,2,2,3,3,3,3,4,4), d_{2}=(1,1,1,1,3,3,5,7,7,8,9)$
Cominciamo da $d_{2}$. Sia $k = 11$.
Sia $L:=|\{ i \in \{ 1,\dots, k-2 \}|(d_{2})_{i} \geq 2 \}|$. Osserviamo che $L=5 < 6 = 8+9-11 = (d_{2})_{k}+(d_{2})_{k-1}-k$. Dunque per si presenta l'ostruzione 3 vista a lezione e di conseguenza $d_{2}$ non può essere lo score di un grafo.
Non avendo trovato ostruzioni all'esistenza di un grafo con score $d_{1}$ procediamo applicando il teorema dello score (possiamo farlo perché $4\leq 10-1$).
$$
\begin{array}{c|c|c}
d_{1} & (2,2,2,2,3,3,3,3,4,4)  & 4 \leq 10-1, 10 - 4 = 6 \\
\hline
d_{1}'  & (2,2,2,2,3,2,2,2,3)  &  3 \leq 9-1, 9 - 3 = 6 \\
 & (2,2,2,2,2,2,2,3,3)  &  \\
\hline
d_{1}''  & (2,2,2,2,2,1,1,2)  & \text{componenti} \leq 2 \implies \text{STOP} \\
 & (1,1,2,2,2,2,2,2)  & 
\end{array}
$$
Grazie al teorema dello score $d_{1}$ è lo score di un grafo $\Longleftrightarrow$ $d_{1}'$ è lo score di un grafo $\Longleftrightarrow$ $d_{1}''$ è lo score di un grafo.
Osserviamo che il seguente grafo $G''_{1}$ ha come score $d_{1}''$:
Dunque $d_{1}$ è lo score di un grafo. Costruiamo un grafo $G_{1}$ con score $d_{1}$ guardando lo scarto tra le entrate dei vettori ottenuti col teorema dello score.
$$
\begin{align}
d_{1} = &(2,2,2,2,3,3,3,3,4,4) \\
d_{1}' =  &(2,2,2,2,2,2,2,3,3) \\
d_{1}'' =  &(1,1,2,2,2,2,2,2) \\
\end{align}
$$
---
$d_{1} = (0,0,1,2,2,2,3,3,4,5,6,10,10), d_{2} = (2,2,2,2,3,4,4,4,4,5)$

Cominciamo da $d_{1}$. Osserviamo che $d_{1}$ è lo score di un grafo se e solo se $\tilde{d}_{1}=(1,2,2,2,3,3,4,5,6,10,10)$ è lo score di un grafo. Ma $\tilde{d}_{1}$ contiene due entrate di grado massimo, ciò significa che se esistesse un grafo $\tilde{G}_{1}$ con score $\tilde{d}_{1}$ allora questo avrebbe due vertici ciascuno dei quali adaicenti a tutti gli altri, pertanto il grado minimo dei vertici di $\tilde{G}_{1}$ è $2$, ma $\tilde{d}_{1}$ ha un'entrata di grado $1 < 2$, il che ostruisce l'esistenza di un grafo $\tilde{G}_{1}$ con score $\tilde{d}_{1}$ e di conseguenza ostruiscie l'esistenza di un grafo con score $d_{1}$.

Non avendo trovato ostruzioni all'esistenza di un grafo con score $d_{2}$ procediamo applicandl il teorema dello score (possiamo perché $5 \leq 10-1=9$).
$$
\begin{array}{c|c|c}
d_{1}  & (2,2,2,2,3,4,4,4,4,5)  & 5 \leq 10 -1, 10-5 = 5 \\
\hline
d_{1}'  &  (2,2,2,2,2,3,3,3,3)  & 3 \leq 9-1, 9 - 3 = 6 \\
\hline
d_{1}'' & (2,2,2,2,2,2,2,2)  & \text{componenti} \leq 2 \implies \text{STOP}
\end{array}
$$
Grazie al teorema dello score $d_{1}$ è lo score di un grafo $\Longleftrightarrow$ $d_{1}'$ è lo score diun grafo $\Longleftrightarrow$ $d_{1}''$ è lo score di un grafo.
Osserviamo che il seguente grafo $G_{1}''$ ha come score $d''_{1}$:

Dunque $d_{1}$ è lo score di un grafo.
Costruiamo un grafo $G_{1}$ con score $d_{1}$ guardando lo scarto tra le entrate dei vettori ottenuti con il teorema dello score:

Non può esser albero perché non può esistere un albero con $10\geq 2$ vertici e $0 < 2$ foglie.
Può essere hamiltoniano perché il grafo appena costruito è hamiltoniano.
Può essere sconnesso, infatti è possibile isolare il 3-ciclo con score $(2,2,2)$, difatti $(2,3,4,4,4,4,5)$ è di per sé grafico e un suo grafo è il seguente:
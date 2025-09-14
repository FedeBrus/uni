## 06/07/2009
$$
\begin{align}
d_{1} &= (1,1,1,1,2,2,2,3,3,4,5,6,7,8,9,9,9,9,11) \\
d_{2} &= (1,1,1,1,1,1,1,1,1,1,2,4,6)
\end{align}
$$
1) Esiste uno di tipo foresta? 
2) Esiste uno che sia connesso?
3) Esiste uno che contenga un 3-ciclo?

Verifichiamo in brutta le ostruzioni. In $d_{1}$ possiamo utilizzare il lemma delle strette di mano e quindi non può esistere un grafo con score $d_{1}$. Notiamo che nessuna ostruzione è verificata su $d_{2}$.
$$
\begin{array}{c|c|c}
d_{2} & (1,1,1,1,1,1,1,1,1,1,2,4,6) & d_{n}=6 \leq n-1 = 13-1 = 12 \\
d_{2}' & (1,1,1,1,1,1,0,0,0,0,1,3) = &  \\
 & (0,0,0,0,1,1,1,1,1,1,1,3) & d_{n} = 3 \leq n - 1 = 12 - 1 = 11 \\
d_{2}'' & (0,0,0,0,1,1,1,1,0,0,0) = &  \\
 & (0,0,0,0,0,0,0,1,1,1,1) & 
\end{array}
$$
$d_{2}''$ è sicuramente lo score del grafo $G''_{2}$ della forma:
[disegno]

Dunque, grazie al teorema dello score anche $d_{2}$ è lo score di un grafo.
Costruisco un grafo con lo score $d_{2}$ utilizzando il teorema dello score con costruzione a ritroso.
$$
\begin{align}
d_{2} &= (1,1,1,1,1,1,1,1,1,1,2,4,6) \\
d_{2}' &= (0,0,0,0,1,1,1,1,1,1,1,3) \\
d_{2}'' &= (0,0,0,0,0,0,0,1,1,1,1)
\end{align}
$$
[costruzione]
La ripsosta alla terza domanda è sì, infatti il grafo $G_{2}$ appena costruito possiede il 3-ciclo $(v_{9}, v_{4}, v_{5}, v_{9})$.
Alterando il processo di costruzione a ritroso è possibile modificare i passi dove si possono fare delle scelte e ottenere dunque una foresta.

Utilizziamo il lemma della forzatura alla sconnessione.
Vale che:
$$
\begin{align}
\frac{10 \cdot 1 + 2 + 4+ 6}{2} &< 13-1 \\
11 < 12
\end{align}
$$
Grazie al lemma di forzatura alla sconnessione sappiamo che ogni grado con score $d_{2}$ è sconnesso.

## Appello 14/02/2018
$$
\begin{align}
d_{1} &= (3,4,4,5,5,5,5,5) \\
d_{2} &= (2,3,3,3,3,4,5,7,7,7,12,12,12)
\end{align}
$$
1) albero
2) hamilton
3) 2-connesso
4) sconnesso
$$
\begin{array}{c|c|c}
d_{1}  & (3,4,4,5,5,5,5,5)  & n = 8, d_{n} = 5 \leq 8 - 1 \\
d_{1}'  & (3,4,3,4,4,4,4) = &  \\
 & (3,3,4,4,4,4,4) & \\
d_{1}''  & (3,3,3,3,3,3) &  \\
d_{1}''' & (3,3,2,2,2) =  &  \\
 & (2,2,2,3,3) &  \\
d_{1}'''' & (2,1,1,2)  =&  \\
 & (1,1,2,2) & 
\end{array}
$$
Il vettore $d_{2}''''$ è lo score del grafo $G_{1}''''$ seguente:
[disegno]

Dunque grazie al teorema dello score anche $d_{1}$ è lo score di un grafo.
$$
\begin{align}
&(3,4,4,5,5,5,5,5) \\
&(3,3,4,4,4,4,4) \\
&(3,3,3,3,3,3) \\
&(2,2,2,3,3) \\
&(1,1,2,2)
\end{align}
$$
[costruzione]
La risposta alla domanda 2 è sì, infatti il grafo che ho costruito sopra è hamiltoniano, in quanto $(v_{1},v_{2},v_{6},v_{5},v_{4},v_{3},v_{7}v,v_{8},v_{1})$. Quindi è anche 2-connesso.
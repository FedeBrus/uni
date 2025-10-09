Un linguaggio di interrogazione (query language) per il modello relazionale è un linguaggio specializzato per manipolare (tipicamente estrarre) dati di una base di dati relazionale
Tali linguaggi possono essere distinti in:
- Procedurali: ogni interrogazione descrive passo a passo cosa fare per ottenere la risposta desiderata 
- Dichiarativi: l'interrogazione descrive il risultato desiderato, senza però descrivere cosa deve essere fatto per ottenere la risposta
L’Algebra Relazionale (AR) è un linguaggio procedurale

L'algebra relazionale server per:
- Fornire della fondmamenta teoriche per le operazioni sui dati.
- Ottimizzazre le query.
- Portabilità tra sistemi di database.
- Compresnsione degli algoritmi di esecuzione.

In AR, input e output di ogni interrogazione sono relazioni (nel senso del modello relazionale). Il risultato di un’operazione è una nuova relazione, che viene generata a partire da una o più relazioni in input.
Questa proprietà rende l’AR un'algebra chiusa.
Una sequenza di operazioni di AR forma un'espressione di AR.

### Operazioni
- Operazioni unarie
	- SELECT $\sigma$
	- PROJECT $\pi$
	- RENAME $\rho$
- Operazioni insiemistiche
	- Unione $\cup$
	- Intersezione $\cap$
	- Differenza $-$
	- Prodotto cartesiano $\times$
- Operazioni binarie
	- Join $\Join$
	- Divisione $\div$
- Altre operazioni
	- Outer joins, Outer union
	- Funzioni aggregate (SUM, COUNT, AVG, MIN, MAX)

### Selezione
L'operatore di selezione $\sigma$ permette di selezionare un sottoinsieme delle tuple di una relazione, applicando a ciascuna di esse una formula booleana $\phi$.
$$
\sigma_{\phi}(r(R)) = \{ t | t \in r(R), \phi(t) = \text{true} \}
$$
$F$ si compone di predicate connessi da AND $\wedge$, OR $\lor$ e NOT $\neg$.
Ogni predicato è del tipo $A \theta c$ o $A\theta B$ dove:
- $A, B$ sono attributi di $R$
- $c \in dom(A)$ è una costante
- $\theta$ è un operatore di confronto, $\theta \in \{ =, \neq, <, >, \leq, \geq \}$

La selezione di una relazione $R$ produce una relazione $S$ avente lo stesso schema di $R$.

La selezione è "commutativa" con altre selezioni, ovvero l'ordine in cui più successioni vengono eseguite non conta.
Una sequenza di selezioni può essere sostituita da una singola operazione con congiunzione delle condizioni.
Il numero di tuple prodotte dalla selezione è minore o uguale al numero di tuple dell'istanza della relazione $R$ in input.

### Proiezione
L'operatore proiezione $\pi$ è ortogonale alla selezione, in quanto permette di selezionare un sottoinsieme $Y$ degli attributi di una relazione.
$$
\pi_{Y}(r(R)) = \{ t[Y] | t \in r(R) \}
$$
La proiezione rimuove le tuple duplicate, perché il risultato della proiezione deve essere una relazione. Una relazione è un insieme e un insieme non ha duplicati.
La proiezione non è "commutativa" con altre proiezioni, ovvero l'ordine in cui più proiezioni vengono eseguite conta.
Il numero di tuple prodotte dalla proiezione è minore o uguale al numero di tuple dell'istanza della relazione $R$ in input. Se l'insieme di attributi include una chiave di $R$, allora il numero di tuple sarà sempre uguale a quello di $R$.

### Operatori insiemistici
Sono ovvi. Le relazioni in input $R$ e $S$ devono essere compatibili, ovvero devono avere lo stesso numero $n$ di attributi e gli attributi devono avere lo stesso dominio o domini compatibili.

Nella sottrazione, per convenzione, se i nomi degli attributi sono diversi in $R$ in $S$, l'output utilizza i nomi di $R$.
### Ridenominazione
L'operatore di ridenominazione ha la seguente forma:
$$
\rho(R(F_{1}, \dots ,F_{n}), E)
$$
dove:
- $E$ è una qualunque espressione in algebra relazionale
- $R$ è una nuova relazione che ha le stesse tuple di $E$ ma con alcuni attributi rinominati.
- $(F_{1},\dots,F_{n})$ è la lista di ridenominazione e contiene espressione della forma:
	- $\text{vecchionome} \rightarrow\text{nuovonome}$ o $\text{posizione}\rightarrow\text{nuovonome}$

Se il nome degli attributi non viene modificato, si può omettere la lista di ridenominazione.

### Join
L'operazioen di join di due relazione $R$ e $S$ ($R \Join_{\theta} S$) può essere definita in termini di selezione applicata al prodotto cartesiano, ovvero:
$$
R \Join_{\theta} S = \sigma_{\theta}(R \times S)
$$
L'operazione di join è commutativa e associativa.
La cardinalità della relazione ottenuta una theta-join sarà minore o uguale alla cardinalità del prodotto cartesiano delle due relazioni.

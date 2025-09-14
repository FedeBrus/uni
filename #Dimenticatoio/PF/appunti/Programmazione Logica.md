Nella gran parte dei linguaggi logici gli assiomi vengono scritti con le Horn clauses. Una horn clause consiste di una testa o termine conseguente H, e un corpo costituito da termini Bi.
```prolog
H :- B1, B2, B3.
```
La semantica è che se tutti i Bi sono veri, allora si può dedurre che anche H è vero.

L'interprete Prolog viene eseguito nel contesto di un database di clauses che si assumono essere vere. Ogni clause è composta da un term che può essere:
- Una costante
- Una variabile
- Una struttura

### Costanti
Una costante può essere un numero o un atomo. Un atomo è un identifier con iniziale minuscola, una sequenza di segni di punteggiatura o una stringa tra virgolette.

### Variabili
La variabile è un identifier con iniziale maiuscola. Le variabili possono essere inizializzate con valori arbitrari a runtime grazie all'unificazione.

### Strutture
- predicati logici
- strutture dati

Le strutture consistono di un atomo, detto funtore, e una lista di argomenti.

### Clauses
Le clauses in un database Prolog possono esser classificate come:
- fatti
- regole
Entrambi finiscono con il punto.
Un fatto è una Horn clause senza un lato destro.
```prolog
rainy(rochester).
```
Una regola ha un lato destro:
```prolog
snowy(X) :- rainy(X), cold(X).
```
### Goal o Query
Il goal è il predicato che vogliamo provare di essere vero.
Può essere visto come una clause senza lato sinistro.
Per fare una query si usa ?-
```prolog
rainy(seattle).
rainy(rochester).
?- rainy(X).
```
Perché ci vengano date tutte le soluzioni dobbiamo digitare ; per passare alla soluzione successiva.

### Risoluzione
Il principio di risoluzione dice che se C1 e C2 sono horn clauses e la testa di C1 matcha uno dei termini del corpo di C2, allora possiamo sostituire il termine in C2 con il corpo di C1.

### Unificazione
L'unificazione è una feature chiave in Prolog.
Due termini si unificano se:
- sono identici
- possono essere resi identici sostituendo le variabili

L'idea è quella di unificare il goal con la testa della regola.

Le regole dell'unficazione sono le seguenti:
- Una costante si unfica solo con se stessa.
- Due strutture si unificano se e solo se hanno lo stesso funtore e lo stesso numero di argomenti e gli argometni corrispettivi si unificano a loro volta.
- Una variabile si unifica con qualsiasi cosa.
	- Se l'altra cosa ha un valore, allora la variabile si dice instanziata
	- Se l'altra cosa ha una variabile non instanziata allora le due variabili sono associate in modo tale che se alcuna riceve un valore in seguito esso sarà condiviso da entrambe.

### Uguaglianza
A=B se e solo se A e B possono essere unificate.

### Ground e NonGround
Un goal dove non sono presenti variabile si dice essere ground, mentre uno dove sono presenti variabile è detto nonground.
Quando si risolvono nonground goals, l'interprete unificherà e instanzierà le variabili libere con termini tali per cui il predicato ground generato vale.

## Espressioni vs Comandi

### Le espressioni

Le espressioni sono unità sintattiche che producono un valore o non terminano.
Sono di solito composta da una singola entità (una variabile, una costante) oppure un operatore che opera su operandi che sono a loro volta espressioni.

Le espressioni possono essere valutate in due modi:
- eager: vengono valutati tutti gli operandi e poi viene applicata l'operazione ai valori.
- lazy: gli operandi sono valutati solo quando necessario.

In ML viene utilizzata la eager evaluation, tranne per alcuni costrutti: 'andalso', 'orelse', 'if-then-else'.
### I comandi
I comandi sono entità sintattiche la cui valutazione non necessariamente produce un valore ma servono a modificare lo stato.
### Side effect
Un side effect è un cambiamento allo stato del sistema al di fuori dal contesto locale.
### Data Type
Insieme di valori omogenei e operazioni definite su di essi.
Avere tipi forti aiutano la semantica del programma.
## Tipi
- int
- real
- bool
- char
- string
- unit: (), unico valore di unit, utilizzando per le espressioni che non ritornano un valore
#### Interi:
Possono essere decimali o esademicali, positivi o negativi:
e.g.: 3, ~3, 0x3, ~0x3
#### Reali:
Si scrivono come gli interi seguiti da '.' e un numero di cifre, si può utilizzare anche la notazione scientifica con 'e' o 'E'.
e.g.: ~123.0, 3e~3, 3.14e12
#### Booleani:
Valori booleani di vero o falso.
e.g.: true, false
#### Caratteri:
Caratteri singoli.
e.g.: #"a"
#### Stringhe:
Stringhe di caratteri, possono contenere caratteri speciali come '\n', '\t', '\\', '\"', '\xyz' dove 'xyz' è un numero decimale a 3 cifre, codice ASCII del carattere desiderato.
e.g.: "foo"
## Operatori
### Operatori aritmetici
Gli operatori aritmetici sono:
- +, somma
- -, sottrazione
- ~, negativo
- /, divisione tra reali
- div, divisione tra interi
- mod, resto di divisione tra interi
### Operatori stringhe
Gli operatori per stringhe sono:
- ^, concatenazione
### Operatori di confronto
Gli operatori di confronto sono:
- =, uguaglianza
- <, minore
- >, maggiore
- <=, minore o uguale
- >=, maggiore o uguale
- <>, diverso
Gli operatori = e <> non sono permessi con i reali.
Gli operatori di confronto funzionano anche su stringhe e caratteri adottando l'ordine lessicografico.
### Operatori logici
Gli operatori logici sono:
- not, negazione
- andalso, congiunzione
- orelse, disgiunzione

### Operatore ternario
L'operatore ternario segue questa sintassi:
if <p> then <expr1> else <expr2>
L'espressione else è richiesta.
<p> deve essere valutabile a bool e <expr1>, <expr2> devono essere valutabili allo stesso tipo.
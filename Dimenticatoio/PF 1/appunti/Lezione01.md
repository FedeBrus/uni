## Caratteristiche di ML e programmazione funzionale

ML è un linguaggio di programmazione funzionale, dove la computazione 
si basa sulla definizione e applicazione di funzioni. La ricorsione è
preferita all'iterazione, abbondante uso di pattern-matching. Non esistono
side-effects. Strong typing e polimorfismo.
## Espressioni vs Comandi
### Le espressioni
Le espressioni sono entità sintattiche che producono un valore o non terminano.
Sono di solito composte da una singola entità (una variabile, una costante) oppure un operatore che opera su operandi che sono a loro volta espressioni.
#### Eager vs Lazy evaluation
Le espressioni possono essere valutate in due modi:
- eager: vengono valutati tutti gli operandi e poi viene applicata l'operazione ai valori.
- lazy: gli operandi sono valutati solo quando necessario.

In ML viene utilizzata la eager evaluation, tranne per alcuni costrutti logici: 'andalso', 'orelse', 'if-then-else'.
La lazy evaluation viene chiamata anche 'short-circuit evaluation'.
### I comandi 
I comandi sono entità sintattiche la cui valutazione non necessariamente produce un valore ma servono a modificare lo stato.
### Side effect
Un side effect è un cambiamento allo stato del sistema al di fuori dal contesto locale di computazione.
### Data Type
Insieme di valori omogenei e operazioni definite su di essi.
Avere tipi forti aiuta la semantica del programma.
I tipi aiutano con la semantica (conceptual level), aiutano per la correttezza del codice con un type checker (program level) e permettono certe ottimizzazioni (implementation level).

Il sistema di tipi di un lingaggio definisce:
- I tipi prefefiniti
- Il meccanismo per definire nuovi tipi
- I meccanismi di controllo (equivalenza, compatibilità e inferenza)
- Checking dinamico e statico (type checking policy)
### Scalar vs Composite types
Tipi semplici o scalari: tipi i cui valori non sono una composizione di valori.
Tipi composti: ottenuti tramite la combinazione di altri tipi tramite appositi costruttori
### Type checking statico e dinamico
Il type-checking statico avviene a compile-time mentre il type-checking dinamico avviene a runtime.

Il type-checking statico è più efficiente a runtime e assicura la correttezza del
programma prima che questo esegua, però è più complesso, allunga i tempi di compialzione e permette meno flessibilità.

Il type-checking dinamico è meno efficiente e l'errore può essere scoperto a runtime (un bug può rimanere non scoperto per molto tempo)
### Fortemente tipizzato vs debolmente tipizzato
I linguaggi fortemente tipizzati riducono al minimo o addirittura proibiscono la conversione implicita dei tipi. I linguaggi debolmente tipizzati fanno abbondante uso di coerzione e conversioni implicite.

Informalmente indica quanto il linguaggio è flessibile con i tipi e quanto la conversione implicita dei tipi è permessa.

Un linguaggio che è type-safe è un linguaggio che cattura tutti gli errori di tipi.
Le misure di type safety assicurano che il codice non performi operazioni invalide sugli oggetti.
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
- div, divisione tra interi (rounding down)
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
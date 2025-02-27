### Le espressioni

Le espressioni sono unità sintattiche che producono un valore o non terminano.
Sono di solito composta da una singola entità (una variabile, una costante) oppure un operatore che opera su operandi che a loro volte sono espressioni.

Le espressioni possono essere valutate in due modi:
- eager: valutare tutti gli operandi e poi viene applicata l'operazione.
- lazy: gli operandi sono applicati solo quando necessari.

### I comandi

I comandi sono entità sintattiche la cui valutazione non necessariamente produce un valore ma servono a cambiare lo stato.

### Side effect
Un side effect è un cambiamento nel sistema al di fuori dal contesto locale.

### Data Type
Insieme di valori e operazioni definite su di esso.

Avere forti tipi aiutano la semantica del programma.

### Tipi
int
real
bool
char
string
unit: (), unico valore di unit, utilizzando per le espressioni che non ritornano un valore

Interi:
3, ~3, 0x3, ~0x3

Reali:
interi con .0, si può utilizzare anche la notazione scientifica con eN

Booleani:
true, false

Caratteri:
#"a"

Stringhe:
"foo"
## Equivalenza tra tipi
L'equivalenza tra tipi può essere di due tipi:
- Per nome
- Per struttura

Nell'equivalenza per nome, due tipi sono uguali se hanno lo stesso nome.

Esiste un'equivalenza per nome debole, dove si possono creare alias equivalenti ma con nome diversi.

Nell'equivalenza per struttura, due tipi sono uguali se la loro struttura interna è uguale. L'equivalenza strutturale è la minima relazione di equivalenza per la quale:
- un tipo è equivalente a se stesso
- un tipo definito tramite un'espressione è equivalente a tale espressione
- due tipi costruiti utilizzando lo stesso costruttore applicato a tipi equivalenti, sono equivalenti.

Se nella struttura cambia l'ordine o le label dei tipi composti, non è detto che i tipi siano equivalenti, ma dipende da linguaggio a linguaggio.
## Compatibilità tra tipi
Un tipo è compatibile con un altro se può essere usato in contesti dove ci si aspetterebbe l'ultimo.

La compatibilità è transitiva e riflessiva, ma non simmetrica, quindi non è una relazione di equivalenza.

Ogni linguaggio definisce regole di comptaibilità più o meno restrittive.

Un tipo T può essere compatibile con S se (dipende molto dal linguaggio):
- T e S sono equivalenti
- T è subset di S
- Tutte le operazioni di S possono essere performate su T
- I valori di T possono essere fatti corrispondere a valori di S
- C'è una naturale corrisponendza tra i due tipi
## Conversione tra tipi
Se un tipo è compatibile con un altro si mettono in atto sistemi di conversione.

La conversione può essere:
- Implicita (Coerzione)
- Esplicita (e.g. cast)
## Errori di tipi
In ML, il primo argomento di una funzione aritmetica polimorfa (e.g. +) detta il tipo degli altri parametri.

L'operatore ^ funziona solo tra tipi stringa.

L'operatore / funziona solo tra tipi float.

## Operatori di conversione
Interi -> Reali
- real, converte un intero in un reale

Reali -> Interi
- floor, approssima per difetto
- ceil, approssima per eccesso
- round, approssima all'intero più vicino
- trunc, tronca il numero

Nota: se round viene usato con X.5, il numero viene arrotondato al numero pari più vicino. 

Caratteri -> Interi
- ord, restituisce il valore ascii

Interi -> Caratteri
- chr, restituisce il carattere dato il valore ascii (funziona tra 0 a 255)

Caratteri -> Stringhe
- str, restituisce una stringa contenente il solo carattere

## Nomi o identificatori
Sequenze di caratteri utilizzati per denotare qualcosa.
Il binding è l'operazione che lega un nome a l'oggetto che denota.
### Environment
L'environment è l'insieme di associazioni tra nomi e oggetti denotabili che esiste a runtime in un specifico punto del programma in uno specifico momento dell'esecuzione.
### Dichiarazione
Il meccanismo che crea un associazione nell'environment.

## Tuple
Le tuple sono un'insieme ordinato, dalla lunghezza fissa di valori eterogenei.

Si può accedere agli elementi delle tuple con "#n(x, y, z)" con 1 based indexing. 
## Liste
Le liste sono insiemi ordinati dalla lunghezza variabile di valori omogenei.

@ concatenazione tra liste
:: concatenazione tra elemento e lista
hd prelievo del primo elemento
tl lista con primo elemento rimosso
explode trasforma una stringa in una lista di caratteri
implode trasforma una lista di caratteri in una stringa

## Funzioni
Possono essere create a mo di lambda calculus:
val increment = fn n => n+1;

o più tradizionalmente:
fun increment n = n + 1;

In ML c'è un forte utilizzo della type inference.
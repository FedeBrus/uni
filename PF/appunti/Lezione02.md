## Equivalenza tra tipi

Due tipi T e S sono equivalenti se ogni oggetto di tipo T è anche di tipo S, e viceversa.

Ci sono due regole per l'equivalenza tra tipi
- Per nome (non serve conoscere la definizione del tipo)
- Per struttura (serve conoscere la definizione del tipo)

Nell'equivalenza per nome, due tipi sono uguali se hanno lo stesso nome.

Esiste un'equivalenza per nome debole, dove si possono creare alias equivalenti ma con nome diversi (alias).

Nell'equivalenza per struttura, due tipi sono uguali se la loro struttura interna è uguale. L'equivalenza strutturale è la minima relazione di equivalenza per la quale:

- un tipo è equivalente a se stesso
- un tipo definito tramite un'espressione è equivalente a tale espressione
- due tipi costruiti utilizzando lo stesso costruttore applicato a tipi equivalenti, sono equivalenti.

Se nella struttura cambia l'ordine o le label dei tipi che compongono i tipi, non è detto che i tipi siano equivalenti, ma dipende da linguaggio a linguaggio.

In ML vige l'equivalenza strutturale tranne per i tipi definiti con 'datatype'

## Compatibilità tra tipi

Un tipo T è compatibile con un altro S se ogni istanza di T può essere usato in contesti dove ce ne si aspetterebbe una di S.

Viene usata spesso per verificare la corretteza di assegnamenti o passaggio di parametri. Nel primo caso la parte destra deve essere compatibile con la sinistra. Nel secondo caso il parametro attuale deve essere compatibile con il parametro formale.

La compatibilità è transitiva e riflessiva, ma non simmetrica, quindi non è una relazione di equivalenza.

Ogni linguaggio definisce regole di comptaibilità più o meno restrittive.

Un tipo T può essere compatibile con S se (dipende molto dal linguaggio):
- T e S sono equivalenti
- T è subset di S
- Tutte le operazioni di S possono essere performate su T
- C'è una naturale corrisponendza tra i due tipi
- I valori di T possono essere fatti corrispondere a valori di S

## Conversione tra tipi

Se un tipo T è compatibile con un altro S, si mettono in atto sistemi di conversione.

La conversione può essere:
- Implicita (Coercion)
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

Il nome e l'oggetto denotato non sono la stessa cosa. Un singolo oggetto puà essere denotato da più nomi e un nome può riferirsi a più oggetti in tempi e punti diversi del programma.

Un oggetto denotabile è un oggetto a cui si può assocciare un nome.
Nomi definiti dall'utente sono le variabili, i parametri formali, le procedure i tipi definiti dall'utente, i moduli, le costanti definite dall'utente, le eccezioni etc...

I nomi definiti dal linguaggio sono i tipi primitivi, le operazioni primitive, le costanti predefinite.

Il binding è l'operazione che lega un nome a l'oggetto che denota.

### Environment

Non tutte le associazioni tra nomi e offetti denotabili rimangono fissate.

L'environment è l'insieme di associazioni tra nomi e oggetti denotabili che esiste a runtime in un specifico punto del programma in uno specifico momento dell'esecuzione.

### Dichiarazione

Il meccanismo che crea un associazione nell'environment.

In ML l'environment è modificabile tramite le val-declarations.
Il tipo viene inferito dal linguaggio. Infine una ridichiarazione con lo stesso nome maschera la variabile precedente, che continua ad esistere ma non è più accessibile.
Le variabili sono immutabili.

## Tuple

Le tuple sono un'insieme ordinato, dalla lunghezza fissa di valori eterogenei.
Si può accedere agli elementi delle tuple con "#n(x, y, z)" con 1 based indexing. 

## Liste
Le liste sono insiemi ordinati dalla lunghezza variabile di valori omogenei.

@ concatenazione tra liste
:: concatenazione tra elemento e lista (right associative)
hd prelievo del primo elemento
tl lista con primo elemento rimosso
explode trasforma una stringa in una lista di caratteri
implode trasforma una lista di caratteri in una stringa

nil è sinonimo di []
implode su nil ritorna una stringa vuota e viceversa con explode.

## Funzioni

Possono essere create a mo di lambda calculus:
val increment = fn n => n+1;

o più tradizionalmente:
fun increment n = n + 1;

In ML c'è un forte utilizzo della type inference.

## Type inference in ML 
Se un espressione passata come parametro di una funzione è di tipo noto, allora il parametro deve essere di quel tipo.
Se l'espressione risultante da una funzione è di tipo noto, la funzione ritorna quel tipo.
Se non c'è modo per determinare il tipo degli argomenti di una funzione overloadata (tipo +), allora viene usato il tipo di default (quasi sempre integer)
Se non c'è alcun modo per determinare i tipi dei parametri e non vengono usati operatori allora si usa il generico 'a.
Se non c'è alcun modo per determinare il tipo di due parametri e non c'è alcuna relazione tra questi, allora si usano i generici 'a e 'b.


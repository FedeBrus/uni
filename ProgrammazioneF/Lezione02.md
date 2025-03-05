## Equivalenza tra tipi
L'equivalenza tra tipi può essere di due tipi:
- Per nome
- Per struttura

Nell'equivalenza per nome, due tipi sono uguali se hanno lo stesso nome.

Esiste un'equivalenza per nome debole, dove si possono creare alias equivalenti ma con nome diversi.

Nell'equivalenza per struttura, due tipi sono uguali se la loro struttura interna è uguale.

## Compatibilità tra tipi
Un tipo è compatibile con un altro se può essere usato in contesti dove ci si aspetterebbe l'ultimo.

La compatibilità è transitiva e riflessiva, ma non simmetrica, quindi non è una relazione di equivalenza.

Ogni linguaggio definisce regole di comptaibilità più o meno restrittive.

## Conversione tra tipi
Se un tipo è compatibile con un altro si mettono in atto sistemi di conversione.

La conversione può essere:
- Implicita
- Esplicita (e.g. cast)

### Coercizione (implicito)
3 possibilità per convertire i tipi.
- No codice
- Codice di controllo
- Codice di conversione

### Cast
Simile alla coercizione ma esplicita.

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
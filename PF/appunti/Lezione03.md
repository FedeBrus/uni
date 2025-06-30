## Blocco
Un blocco è una sezione di un programma che contiene le dichiarazioni locali a quella regione.

L'environment di un blocco può essere suddiviso nell'environment locale (variabili locali e parametri formali), evnironment non locale (associazioni ereditate da blocchi che contengono il blocco corrrente) e environment globale (associazioni comuni a tutti i blocchi del programma)
## Cosa definisce un ambiente?
- Regole di visibilità
- Regole di scope
- Regole per il passaggio di parametri
- Policy di binding

Regola di visibilità:
Una dichiarazione locale in un blocco è visibile in quel blocco e tutti i blocchi annidati, a meno che questi non contengano una ridichiarazione che la mascheri.

Un riferimento non locale in un blocco può essere risolto con:
- scope statico: le associazioni non locali vengono risolte in base a dove è contenuto il blocco corrente.
- scope dinamico: le associazioni vengono risolte in base a da dove è stato eseguito il blocco corrente.

Nello scoping statico si risolvono le variabili sintatticamente, ovvero si guarda dove è testualmente contenuto il blocco, nello scoping dinamico si guarda nel blocco più recentemente attivato che non è ancora stato chiuso.

L'astrazione del controllo si ottiene tramite sottoprogrammi che scambiano informazioni con il resto del programma tramite parametri, valori di ritorno e variabili non-locali.

Tre classi principali di parametri:
- input
- output
- input/output

Passaggio di parametri:
- Chiamata per valore
Viene passata una r-value che verrà assegnata al parametro formale, che verrà trattato come variabile locale. Una volta terminata la procedura il parametro formale verrà distrutto. (->)

- Chiamata per riferimento
Viene passato un riferimento (l-value) e il parametro formale sarà un alias del parametro attuale. Una modifica al parametro formale viene dunque apportata anche a quello attuale. Al termine della procedura l'alias viene distrutto. (<->)

- Chiamata per costante
Viene passato un valore read-only. (->)

- Chiamata per risultato
Il parametro attuale è un l-value o un espressione che viene valutata in un l-value. Non c'è nessun legame tra parametro attuale e formale. Quando la procedura termina, il valore del parametro formale viene assegnato a l-value di quello attuale.
Il parametro formale è write-only (<-)

- Chiamata per valore-risultato
Il parametro attuale deve essere una l-value, il valore viene copiato in entrata alla funzione e in uscita.

- Chiamata per nome
In questo caso una chiamata a funzione è la stessa cosa di eseguire il corpo della funzione sostituendo i parametri attuali a quelli formali (macro expansion). Per evitare errori (ad esempio quando viene dichiarata una variabile locale con lo stesso nome del parametro attuale (una sostituzione letterale produrebbe un risultato indensiderato)), il parametro formale, viene risolto ad ogni suo utilizzo nell'ambiente del chiamante e non quello della chiamata.
La coppia che viene passata, formata da espressione e ambiente di valutazione viene chiamata closure.

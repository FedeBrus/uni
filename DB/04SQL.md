SQL (Structured Query Lnaguage) è un linguaggio specializzato per la gestione di basi di dati relazionali. È utilizzato per la creazione, la modifica e l'interrogazione dei dati.
Standardizzato e ampiamente utilizzato nell'ambito della gestione dei dati.

### Struttura base di una query
```mysql
SELECT [DISTINCT] targetList
FROM  relationList
[WHERE qualification];
```
Dove relationList è una lista di nomi di relazioni.
Dove targetList è una lista di attributi che appartengono a relazioni nella relationList.
Dove qualification è condizione sugli elementi di targetList.

DISTINCT è una chiave opzionale per indicare che i duplicati devono essere eliminati dal risultato dell'interrogazione. Nota bene che garantire ciò è un'operazione molto costosa.

#### Strategia concettuale di valutazione
- Si calcola il prodotto cartesiano delle tabelle nella relationList
- Si scartano le tuple che non soddisfano le qualifications
- Si cancellano le colonne degli attributi che non appartengono alla targetList
- Se è presente la chiave DISTINCT, si eliminano i duplicati

##### Esempio
```sql
SELECT s.sid, b.name, b.color
FROM sailors s, reserves r, boats b
WHERE s.sid = r.sid and r.bid = b.bid;
```

### Operatori
Le qualificazioni usano operatori di confronto tra i quali:
- Operatori aritmetici: =, <, >, >=, <=, <>
- BETWEEN verifica se un valore è compreso in un intervallo.
- IN verifica se un valore è compreso in una lista
- LIKE confronto fra stringhe con caratteri jolly, in particolare % rappresenta un numero indefinito di caratteri e _ invece rappresenta un qualsiasi carattere.
- IS \[NOT\] NULL verifica se un valore è (o non è) NULL, scrivere una cosa del tipo 'WHERE x = NULL' è sbagliato.
### Operatori di aggregazione
COUNT(\*) ritorna il numero di tuple restituite da una query.
COUNT(\[DISTINCT\] A) ritorna il numero di valori (unici) di A.
SUM(\[DISTINCT\] A) ritorna la somma dei valori (unici) di A.
AVG(\[DISTINCT\] A) ritorna la media dei valori (unici) di A.
MAX(A) ritorna il valore più alto nella colonna A.
MIN(A) ritorna il valore più basso nella colonna A.

Questi operatori permettono di aggregare dati usando funzioni aritmetiche, andando oltre gli oepratori dell'algebra relazionale.

### Struttura estesa
Talvola è necessario applicare operazioni di aggregazione non a tutte le tuple di una relazione, ma a gruppi di tuple raggruppate in base a un certo criterio.

```sql
SELECT [DISTINCT] selectList
FROM fromList
WHERE qualification
GROUP BY groupingList
HAVING groupQualification
```

Dove selectList è composta da una lista di nomi di colonne e una lista di termini della forma agg-op(nomeColonna).
Ogni colonna che compare nella lista di nomi di colonne senza operatori di aggregazione deve apparire anche nella groupingList.
Le espressioni che compaiono nella groupQualification devono sempre avere un solo valore per gruppo, overo provengono dalla groupingList o sono della forma agg-o(nomeColonna).
Se nella query non compare il GROUP BY, l'intera tabella viene considerata come un singolo gruppo.

### Ordine logico della valutazione
1. Costruzione del prodotto cartesiano delle relazioni indicate nel FROM
2. Applicazione delle qualificazioni della WHERE
3. Eliminazione delle colonne non desiderate (che non compaiono nella selectList, nella groupingList e nelle groupQualifications)
4. Riordino della relazione in base al GROUP BY, in modo da identificare i gruppi
5. Applicazione delle groupQualifications presenti nella clausola HAVING
6. Generazione delle righe di risposta per ogni gruppo rimanente

### Query annidate
Una query annidata è una query (detta interna) che comapre in un'altra query (detta esterna).
Ad esempio:
```sql
SELECT s1.name
FROM Sailors s1
WHERE s1.rating = (
		SELECT MAX(s2.rating)
		FROM Sailors s2
	);
```
Una query annidata può restituire un singolo valore, come nell'esempio precedente, o un insieme di valori tra i quali vogliamo verificare se vale una certa condizione (normalmente espressa con gli oepratori IN, EXISTS, ANY o ALL), come nell'esempio che segue:
```sql
SELECT s.name, s.rating
FROM Sailors s
WHERE s.sid IN (
		SELECT DISTINCT r.sid
		FROM Reserves r
	);
```

Una query annidata si dice:
- Indipendente: quando può essere eseguita in modo autonomo, senza fare riferimento a nessuna colonnna o valore della query esterna.
- Correlata: quando la query interna fa riferimento a una o più colonne della query esterna. Questo significa che la subquery deve essere rieseguita per ogni riga elaborata dalla query esterna.
Differenze principali tra i due tipi sono:
- Esecuzione: una subquery indipendente viene eseguita una sola volta, e il suo risultato viene utilizzato dalla query esterna, mentre una subquery correlata deve essere rieseguita per ogni riga elaborata dalla query esterna.
- Indipendenza: le subquery indipendenti possono essere eseguite anche da sole, mentre le query correlate non hanno senso al di fuori della query esterna.
### Operatori insiemistici
Servono per effettuare operazioni insiemistiche tra due o più insiemi (compatibili) di tuple generate da altrettante query.
Essi sono:
- UNION (UNION ALL): fa l’unione di due insiemi di tuple. UNION elimina gli eventuali duplicati, mentre UNION ALL no
- INTERSECT: restituisce solo le tuple comuni a due insiemi di tuple
- EXCEPT: restituisce le tuple del primo insieme a patto che non compaiono nel secondo insieme (set difference)

Le sub query possono essere annidati in diversi punti di un’interrogazione SQL:  
- Nella clausola FROM: serve a costruire una tabella temporanea su cui eseguire il resto della query
- Nella clausola WHERE: serve a calcolare al volo un singolo valore su cui operare un confronto o un insieme di valori da confrontare con un valore già disponibile
- Nella clausola HAVING (vedi prossime slide): serve a calcolare un valore per filtrare i gruppi che devono essere restituiti (simile al WHERE, ma si opera su gruppi e non su righe)
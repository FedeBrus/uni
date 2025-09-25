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

Se possibile è meglio filtrare prima perché risparmi in tempo di computazioen xD
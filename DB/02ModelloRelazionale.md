Si basa sul concetto matematico di relazione.
### Relazione
Informalmente può essere vista come una tabella con un insieme di valori su ogni riga.
Ci sono due livelli che definiscono una relazione:
- Lo schema della relazione (livello intensionale)
- Istanze della relazione (livello estensionale)
Il numero di attributi definisce il grado o arietà della relazione.
Il numero di entrate definisce la cardinalità della relazionale.
Un'istanza di uno schema di relazione è un insieme di tuple o record, ognuna delle quali ha lo stesso numero di campi dello schema della relazione.
Essendo un insieme, non possono esserci duplicati e l'ordine delle tuple non conta.

Lo stato di una relazione è un sottoinsiemi del prodotto cartesiano dei domini dei suoi attributi.
Data una relazione $R(A_{1},\dots,A_{n})$ uno specifico stato di $R$ è definito come segue:
$$
r(R) \subset dom(A_{1}) \times \dots \times dom(A_{n})
$$
Ovvero:
$$
r(R) = \{ t_{1},\dots,t_{m} \}
$$
dove ogni $t_{i}$ è una tupla $\forall i\in \{ 1,\dots,m \}$.
$$
t_{i}= \langle v_{1}, \dots,v_{k} \rangle
$$
dove ogni $v_{i}$ è un elemento di $dom(A_{i})$ $\forall i\in \{ 1,\dots,k \}$.
### Chiave
Ogni riga di una relazione ha un campo (o un insieme di campi) il cui valore (o i cui valori) identificano unicamente quella riga in quella tabella. Tale campo o insiemi di campi viene detta chiave della relazione.
Nel caso una chiave sia un'unione di campi viene detta chiave composta.
### Chiave surrogata (o artificiale)
Talvolta si usano valori convenzionali progressivamente generati per identificare una riga di una tabella.
### Authority
Un'authority è un ente che garantisce l'unicità di un dato, che può essere utilizzato come chiave. Ad esempio si può pensare al codice fiscale, l'Agenzia delle Entrate è un authority.
#### Terminologia
|                Informale                | Formale                |
| :-------------------------------------: | ---------------------- |
|                 Tabella                 | Relazione              |
|          Intestazione colonna           | Attributo              |
| Tutti i possibili valori di una colonna | Dominio                |
|           Riga della tabella            | Tupla                  |
|        Definizione della tabella        | Schema della relazione |
|            Tabella popolata             | Stato della relazione  |
### Vincoli
I vincoli determinano quali stati di una relazione in una base di dati relazionale sono ammissibili e quali non lo sono.
I principali vincoli sono di tre tipi:
- Vincoli impliciti: dipendono dal data model stesso (ad esempio il modello relazionale non ammette liste come valore di alcun attributo).
- Vincoli basati sull schema (o espliciti):  sono definiti nello schema usando gli strumenti forniti dal modello.
- Vincoli applicativi (o semantici): si tratta di vincoli che vanno al di là del potere espressivo del modello e devono essere imposti a livello di programma applicativo.

### Vincoli di integrità relazionale
Un vincolo è definito come una condizione che deve valere affinché lo stato di una relazione sia valido.
I principali tipi di vincoli espliciti che possono essere espressi nel modello relazionale sono:
- Vincolo di dominio
- Vincolo di chiave
- Vincolo di integrità delle entità
- Vincolo di integrità referenziale
### Superchiave
La superchiave di una relazione $R$ è un insieme $\{ S_{k} \}$ tale che non esistono due tuple di $r(R)$ in cui gli attributi $\{ S_{k} \}$ hanno lo stesso valore, ovvero se $t_{i}$ e $t_{j}$ sono tuple distinte di $r(R)$, allora $t_{i}[S_{k}]\neq t_{j}[S_{k}], \forall i\neq j$. Questa condizione deve essere rispettata in ogni stato valido di $R$.
### Superchiave minimale
Una chiave è una superchiave minimale, ovvero una superchiave tale che la rimozione di qualsiasi attributo $S_{k}$ produrrebbe un insieme di attributi che non è più una superchiave di $R$. La superchiave minimale è anche detta chiave candidata.
Una chiave (superchiave minimale) è sempre una superchiave, ma non viceversa.
### Chiave primaria
Se una relazione ha più di una chiave candidata, una viene scelta come chiave primaria.
In generale, viene scelta la chiave candidata più piccola (sia in numero di attributi che tipo di dato). Quando non è possibile, possono intervenire fattori soggettivi o addirittura arbitrari.
I valori della chiave primaria sono usati per identificare in modo univoco ogni tupla della relazione, ovvero identificano univocamente la tupla.
### Vincolo di chiave
Ogni relazione deve avere una chiave primaria.
### Vincolo di integrità di un'entità (entity integrity)
Nessuno degli attributi che compongono la chiave primaria $PK$ di una relazione $R$ può avere valore NULL in alcuna tupla di $r(R)$, ovvero $t[PK]\neq\text{NULL}, \forall t\in r(R)$, se $PK$ è formata da più attributi, allora il valore NULL non è ammesso per nessunodegli attributi che la compongono.
Questo vincolo può essere imposto su altri attributi non chiave, nel caso si ritenga necessario, ma ogni chiave primaria deve rispettarlo.
### Vincolo di integrità referenziale
A differenza degli altri vincoli, un vincolo di integrità referenziale coinvolge due relazioni:
- una relazione referenziante $R_{1}$
- una relazione referenziata $R_{2}$
In $R_{1}$ c'è un insieme di attributi $FK$ (chiamati chiave esterna / foreign key) che fanno riferimento agli attributi della chiave primaria $PK$ di $R_{2}$.
Una tupla $t_{1}$ in $R_{1}$ si dice che referenzia una tupla $t_{2}$ in $R_{2}$ se $t_{1}[FK]=t_{2}[PK]$.
### Chiave esterna
Una chiave esterna collega due relazioni.
I valori degli attributi della chiave esterna $FK$ della relazione referenziante $R_{1}$ possono essere:
- Uno dei valori del corrispondente attributo (o una delle combinazione di valori di tutti gli attributi) della chiave primaria $PK$ in $R_{2}$.
- Assumere il valore NULL.
Se NULL, ovviamente la $FK$ in $R_{1}$ non deve far parte degli attributi della propria chiave primaria.
La $FK$ può fare riferimento alla stessa relazione di appartenenza della $PK$ (ad esempio una relazione che descrive i dipendenti e il rapporto "essere superiore di").
Inoltre gli attributi appartenenti alla $FK$ non necessariamente hanno lo stesso nome dei corrispondenti attributi appartenenti alla $PK$.
### Valore NULL
Il valore NULL nel modello relazionale ha significato ambiguo, può indicare l'inesistenza dell'informazione o il fatto che non la si conosce.
### Schema di un database relazionale
A differenza degli altri vincoli, i vincoli di integrità referenziale coinvolgono più di una relazione, per cui non basta considerare lo schemadi una singola relazione.
Uno schemda di un database relazionale è un insieme $S=\langle \{ R_{1},\dots ,R_{n} \}, \text{IC} \rangle$, dove $R_{1},\dots,R_{n}$ sono i singoli schemi di relazione che appartengono alla base di dati e IC è un insieme di vincoli di integrità.
### Stato di una base di dati relazionale
Uno stato di una base di dati relazionale con schema $S$ è un insieme di stati delle relazioni $\{ r_{1}, \dots, r_{m} \}$ tali che ogni $r_{i}$ è uno stato di $R_{i}$ e tale che $r_{i}$ soddisfi i vincoli di integrità relazionale in IC.
Uno stato di una base di dati relazionale viene talvolta chiamato un'istantanea (snapshot) o istanza (instance) della base di dati.
Uno stato di base di dati che non rispetti i vincoli in IC è uno stato non valido.
Dunqeu lo stato della base di dati è l'unione di tutti i singoli stati delle relazioni che compongono la base di dati.
Ogni volta che la base di dati è modificata, si passa in un nuovo stato. Le principali operazioni per cambiare lo stato di una base di dati sono:
- INSERT
- DELETE
- MODIFY
Queste operazioni non devono portare alla violazione di alcun vincolo di integrità, ovvero non devono creare un stato non valido.
Garantire questa condizione richiede di propagare automaticamente gli aggiornamenti.
### Operazioni di preservazione dei vincoli
- RESTRICT: rifiuto dell'operazione.
- CASCADE: cancellazione di tutte le tuple che referenziavano la chiave primaria della tupla cancellata o modificata.
- SET NULL: assegnamento di valore NULL alla chiave esterna delle tuple che referenziavano la chiave primaria della tupla cancellata o modificata.
- SET DEFAULT: assegnamento di un valore di default alle chiavi esterne che referenziavano la chiave primaria della tupla cancellata o modificata.
Le opzioni SET NULL e SET DEFAULT non sono disponibili se la chiave esterna include attributi che sono anche chiave primaria della tabella referenziante.
Nel caso del SET DEFAULT, se il valore di default non è presente come PK nella tabella referenziata, l'operazione viene rifiutata.
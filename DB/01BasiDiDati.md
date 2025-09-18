### Base di dati
Raccolta organizzata di dati, gestito da un DBMS.
### Database Managment System (DBMS)
Pacchetto software progettato per gestire basi di dati informatizzate.
### Database Sysetem
Insieme costituito dal software del DMBS insieme ai dati memorizzatinella base di dati.
Un DMBS deve garantire:
- memorizzazioen
- robustezza
- concorrenza
	- isolazione
	- atomicità
Un DBMS fornisce dei linguaggi specializzati per la gestione dei dati:
- Data definition language (DDL): definire lo schema dei dati.
- Data manipulation language (DML): modificare e estrarre i dati.
- Data control language (DCL): permessi e autorizzazione sui dati.
- Transaction control language (TCL): gestire le transazioni.
### Basi di dati relazionali
Ted Codd introduce una visione logica dei dati, indipendente dalla struttura fisica e le interrogazioni vengono espresse attraverso un linguaggio di alto livello che opera sul modello logico e non fisico. Si crea così un livello di indipendenza tra programmi e dati.
### Indipendenza Logica dei Dati
La capacità di modificare lo schema logico del database senza dover alterare lo schema estreno o le applicazioni che utilizzano il database.
### Indipendenza Fisica dei Dati
La capacità di modificare lo schema fisico del database senza influenzare lo schema logico o le applicazioni.
### Schema Logico
Modello che rappresenta i dati nei termini del modello proprio del DBMS.
### Schema Fisico
Fornisce dettagli su come le relazioni descritte dallo schema logico sono memorizzate su memoria secondaria. 
### Schema Esterno
Permette di creare una o più viste specifiche per velocizzare, facilitare, autorizzare l'accesso a insiemi di dati a specifici utenti o gruppi di utenti.
### Condivisione dei dati e transizione multi-utente
Permette a gruppi di utenti di leggere e scrivere contemporaneamente (concurrent users) sulla stessa base di dati.
Il controllo della concorrenza nel DBMS garantisce che ogni transazione sia eseguita correttamente o annullata.
Il sottosistema di recovery assicura che ogni transazione correttamente completata sia memorizzata in modo permanente nella base di dati.
### OLTP (Online Transaction Processing)
Ha come finalità quella di gestire e facilitare le transazioni quotidiane di un'azienda.
- Alta frequenza di transazioni con operazioni brevi e semplici.
- Data Integrity e coerenza.
- Schema di database normalizzato per minimizzare la ridondanza.
- Risposta rapida alle query per garantire l'eddicienza delle operazioni.
### OLAP (Online Analytical Processing)
Ha come finalità quella di supportare l'analisi complessa dei dati per il business intelligence e il reporting.
- Bassa frequenza di operazioni, ma con query complesse e di lunga durata.
- Ottimizzato per query ad-hoc e analisi multidimensionali.
- Schema di database denormalizzato per migliorare la performance delle query.
- Aggregazione e storicizzazione dei dati per analisi tendenziali e strategiche.
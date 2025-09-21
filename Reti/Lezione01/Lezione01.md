### Protocollo
Un protocollo definisce il formato e l'ordine dei messaggi scambiati tra due o più entità comunicanti, nonché le azioni intraprese durante la trasmissione e/o la ricezione di un messaggio o altro evento.
Internet e le reti informatiche in generale fanno ampio uso dei protocolli. Protocolli diversi vengono utilizzati per svolgere compiti di comunicazione diversi.
### Host o end-system
In riferimento a Internet, un end-system (o host) è un dispositivo che si trova ai margini della rete e che utilizza i servizi di comunicazione offerti dall’infrastruttura di rete, senza occuparsi di instradare i pacchetti altrui.
È un punto terminale della comunicazione in Internet e può essere un client o un server (o entrambi).
Le reti dove vivono gli end-system vengono dette reti di accesso.
### Bit
Unità minima di informazione. Viaggia da un sistema terminale a un altro, passando per una serie di coppie trasmittente-ricevente.
### Mezzo fisico
Strumento che permette il passaggio di bit tra trasmittente e ricevente.
#### Mezzi guidati
I segnali si propagano in un mezzo fisico: fibra ottica, filo di rame o cavo coassiale.
#### Mezzi a onda libera
I segnali si propagano nell'atmosfera, o nello spazio esterno.
## Come trasmettere i dati
### Commutazione di circuito
Nelle reti a commutazione di circuito, le risorse necessarie lungo un percorso per garantire la comunicazione tra i sistemi terminali sono riservate per tutta la durata della sessione di comunicazione. Nelle reti a commutazione di pacchetto, queste risorse non sono riservate; i messaggi di una sessione utilizzano le risorse su richiesta e, di conseguenza, potrebbero dover attendere (cioè mettersi in coda) per accedere a un collegamento di comunicazione. La rete deve stabilire una connessione tra il mittente e il destinatario. Si tratta di una connessione autentica per la quale gli switch sul percorso tra il mittente e il destinatario mantengono lo stato di connessione per quella connessione. Quando la rete stabilisce il circuito, riserva anche una velocità di trasmissione costante nei collegamenti della rete per tutta la durata della connessione. Poiché una determinata velocità di trasmissione è stata riservata per questa connessione tra mittente e destinatario, il mittente può trasferire i dati al destinatario a una velocità costante garantita.
#### Multiplexing nella commutazione di circuito
Un circuito in un collegamento viene implementato con il multiplexing a divisione di frequenza (FDM) o il multiplexing a divisione di tempo (TDM). Con l'FDM, lo spettro di frequenza di un collegamento viene suddiviso tra le connessioni stabilite attraverso il collegamento. Nello specifico, il collegamento dedica una banda di frequenza a ciascuna connessione per tutta la durata della connessione. Per un collegamento TDM, il tempo è suddiviso in frame di durata fissa e ogni frame è suddiviso in un numero fisso di slot temporali. Quando la rete stabilisce una connessione attraverso un collegamento, la rete dedica uno slot temporale in ogni frame a questa connessione.
### Commutazione di pacchetto
In un applicazione di rete, i sistemi terminali si scambiano messaggi tra di loro.
Per inviare un messaggio da un sistema terminale mittente a un sistema finale destinatario,
l'origine suddivide i messaggi lunghi in blocchi di dati più piccoli noti come pacchetti.
Tra l'origine e la destinazione, ogni pacchetto viaggia attraverso collegamenti di comunicazione e commutatori di pacchetti. I pacchetti vengono trasmessi su ciascun collegamento di comunicazione a una velocità pari alla velocità di trasmissione massima del collegamento. Quindi, se un sistema finale mittente o uno switch di pacchetti 
sta inviando un pacchetto di L bit su un collegamento con velocità di trasmissione R bit/sec, il 
tempo necessario per trasmettere il pacchetto è L/R secondi.
#### Store and forward
Chi inoltra un pacchetto deve riceverlo per intero prima di cominciare a trasmettere sul collegamento in uscita.
#### Ritardi di accodamento e perdita di pacchetti.
Ogni commutatore di pacchetti ha più collegamenti ad esso collegati. Per ogni collegamento collegato, il commutatore di pacchetti ha un buffer di uscita che memorizza i pacchetti che sta per inviare a quel collegamento. Se un pacchetto in arrivo deve essere trasmesso su un collegamento ma trova il collegamento occupato dalla trasmissione di un altro pacchetto, il pacchetto in arrivo deve attendere nel buffer di uscita. Pertanto, oltre ai ritardi di memorizzazione e inoltro, i pacchetti subiscono ritardi di accodamento nel buffer di uscita. Questi ritardi sono variabili e dipendono dal livello di congestione della rete. Poiché lo spazio del buffer è limitato, un pacchetto in arrivo potrebbe trovare il buffer completamente pieno di altri pacchetti in attesa di trasmissione. In questo caso, si verificherà una perdita di pacchetti.
##### Implicazioni dimensione di un pacchetto
[Applet](https://media.pearsoncmg.com/aw/ecs_kurose_compnetwork_7/cw/content/interactiveanimations/message-segmentation/index.html)
### Il nucleo della rete 
Internet è la rete delle reti e possiede una struttura fondamentalmente gerarchica.
- ISP1, grandi ente che comunicano solamente tra loro come peer, tramite connessioni molto magliate.
- ISP2, Si può connettere solo ad alcuni ISP di livello 1 e possibilmente ad altri ISP2. Gli ISP2 pagano gli ISP1 per poter usufruire della loro infrastruttura.
- ISP3. dette reti di ultimo salto, le più vicine ai sistemi terminali. Sono clienti degli ISP di livello più alto che li collegano all'intera rete.
Multi-Homed/Single-Homed, in base ai collegamenti contruattuali di un determinato ISP di livello più alto.
Altre zone chiamate IXP, Internet exchange points, che sono delle strutture con dei rack nei quali vengono effettuati i collegamenti tra ISP.
Alcuni content provider, come Google, collegano i propri server direttamente negli IXP, potendo così connettersi velocemente a una vasta gamma di ISP offrendo il servizio più velocemente.
![[StrutturaInternet.png]]
### Ritardi
Ci sono diversi tipi di ritardo:
#### Ritardo di elaborazione 
Il tempo necessario per esaminare l'intestazione del pacchetto e determinare dove indirizzarlo fa parte del ritardo di elaborazione. Il ritardo di elaborazione può includere anche altri fattori, come il tempo necessario per verificare la presenza di errori a livello di bit nel pacchetto verificatisi durante la trasmissione. 
#### Ritardo di accodamento
Nella coda, il pacchetto subisce un ritardo di accodamento mentre attende di essere trasmesso sul collegamento. La durata del ritardo di accodamento di un pacchetto specifico dipenderà dal numero di pacchetti arrivati prima che sono in coda e in attesa di essere trasmessi sul collegamento. Se la coda è vuota e nessun altro pacchetto è attualmente in fase di trasmissione, il ritardo di accodamento del nostro pacchetto sarà pari a zero. D'altra parte, se il traffico è intenso e molti altri pacchetti sono in attesa di essere trasmessi, il ritardo di accodamento sarà lungo.
#### Ritardo di trasmissione
Supponendo che i pacchetti vengano trasmessi in base al principio “primo arrivato, primo servito”, come avviene comunemente nelle reti a commutazione di pacchetto, il nostro pacchetto può essere trasmesso solo dopo che tutti i pacchetti arrivati prima di esso sono stati trasmessi. Indichiamo con L bit la lunghezza del pacchetto e con R bit/sec la velocità di trasmissione del collegamento tra due nodi. Ad esempio, per un collegamento Ethernet a 10 Mbps, la velocità è R = 10 Mbps; per un collegamento Ethernet a 100 Mbps, la velocità è R = 100 Mbps. Il ritardo di trasmissione è L/R. Si tratta del tempo necessario per inserire (cioè trasmettere) tutti i bit del pacchetto nel collegamento.
#### Ritardo di propagazione
Una volta che un bit viene inserito nel collegamento, deve propagarsi. 
Il tempo necessario per propagarsi dall'inizio del collegamento è il ritardo di propagazione. Il bit si propaga alla velocità di propagazione del collegamento. La velocità di propagazione dipende dal mezzo fisico del collegamento. Il ritardo di propagazione è la distanza tra due nodi divisa per la velocità di propagazione. 
Cioè, il ritardo di propagazione è d/s, dove d è la distanza tra nodi e s è la velocità di propagazione del collegamento.

##### Differenza tra ritardo di trsmissione e propagazione
[Applet](https://www.tkn.tu-berlin.de/teaching/rn/animations/propagation/)

#### Packet loss
Quando il ritardo di accodamento è elevato e quando è insignificante? La risposta a questa domanda dipende dalla velocità con cui il traffico arriva alla coda, dalla velocità di trasmissione del collegamento e dalla natura del traffico in arrivo, ovvero se il traffico arriva periodicamente o a raffiche. 
Per comprendere meglio questo concetto, indichiamo con a la velocità media con cui i pacchetti arrivano alla coda (a è espresso in pacchetti/secondo). Ricordiamo che R è la velocità di trasmissione, ovvero la velocità (in bit/sec) alla quale i bit vengono espulsi dalla coda. Supponiamo inoltre, per semplicità, che tutti i pacchetti siano costituiti da L bit. Infine, supponiamo che la coda possa contenere un numero infinito di bit. 
Il rapporto La/R è chiamato intensità di traffico Se La/R > 1, la velocità media con cui i bit arrivano alla coda supera la velocità con cui i bit possono essere trasmessi dalla coda. In questa situazione sfavorevole, la coda tenderà ad aumentare senza limiti e il ritardo di accodamento tenderà all'infinito! Pertanto, una delle regole d'oro nell'ingegneria del traffico è: progettare il sistema in modo che l'intensità del traffico non sia superiore a 1.
![[RitardoAccodamento.png]]
In realtà, una coda che precede un collegamento ha una capacità limitata e i ritardi dei pacchetti non si avvicinano realmente all'infinito quando l'intensità del traffico si avvicina a 1. Al contrario, un pacchetto può arrivare e trovare una coda piena. Non avendo spazio per memorizzare tale pacchetto, il router lo eliminerà. La percentuale di pacchetti persi aumenta all'aumentare dell'intensità del traffico. Pertanto, le prestazioni di un nodo vengono spesso misurate non solo in termini di ritardo, ma anche in termini di probabilità di perdita di pacchetti.
[Applet](https://www.tkn.tu-berlin.de/teaching/rn/animations/queue/)

### Throughput
Il throughput è una misura critica delle prestazioni nelle reti di computer, insieme al ritardo e alla perdita di pacchetti.
Il throughput istantaneo è la velocità (in bit/sec) con cui l'host riceve i dati in un istante di tempo
Il throughput medio di un trasferimento di F bit che impiega T secondi per essere completato è F/T bit/sec

### Il Concetto di Bottleneck
Il throughput end-to-end è determinato dal collegamento bottleneck (collo di bottiglia) lungo il percorso
Modello a due collegamenti: Si consideri un server e un client connessi da due collegamenti con velocità di trasmissione Rs (server-router) e Rc (router-client)
Pensando ai bit come fluidi e ai collegamenti come tubi, il throughput end-to-end è dato da min{Rs, Rc}
Il tempo necessario per trasferire un file di F bit è approssimativamente F/min{Rs, Rc}.
Generalizzando, per un percorso con n collegamenti, con velocità R1, R2, ..., Rn, il throughput per il trasferimento di un file è min{R1, R2, ..., Rn}.
Nel contesto dell'Internet odierna, dove il core della rete è spesso "sovra-dimensionato" con collegamenti ad alta velocità, il fattore limitante per il throughput è tipicamente la rete di accesso.

### Architettura a livelli 
Ogni livello fornisce il proprio servizio (1) eseguendo determinate azioni all'interno di quel livello e (2) utilizzando i servizi del livello direttamente sottostante. 
Un'architettura a livelli ci consente di discutere una parte ben definita e specifica di un sistema ampio e complesso. Questa semplificazione è di per sé di notevole valore in quanto fornisce modularità, rendendo molto più facile modificare l'implementazione del servizio fornito dal livello. Finché il livello fornisce lo stesso servizio al livello superiore e utilizza gli stessi servizi dal livello sottostante, il resto del sistema rimane invariato quando viene modificata l'implementazione di un livello.

#### Stratificazione dei protocolli
I progettisti di rete organizzano i protocolli, l'hardware e il software di rete, in livelli. Ogni protocollo appartiene a uno dei livelli. Ci interessano nuovamente i servizi che un livello offre al livello superiore, il cosiddetto modello di servizio di un livello. 
La stratificazione dei protocolli presenta vantaggi concettuali e strutturali. La stratificazione fornisce un modo strutturato per discutere i componenti del sistema. La modularità rende più facile l'aggiornamento dei componenti del sistema.

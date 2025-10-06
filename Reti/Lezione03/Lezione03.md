### Introduzione ai servizi del livello trasporto
Un protocollo di livello trasporto fornisce una comunicazione logica tra processi applicativi eseguiti su diversi host. Per comunicazione logica, si intende che dalla prospettiva dell'applicazione, è come se gli host su cui i processi girano fossero direttamente collegati. I protoclli di livello trasporto sono implementati negli end-system ma non nei router di rete.
Ci sono due distinti protoclli di livello trasporto disponibilie al livello applicativo. Uno di questi è UDP (User Datagram Protocol), che fornisce un servizio non affidabile e non orientato alla connesssione. Il secondo è TCP (Transmission Control Protocol), che fornisce un servizio affidabile e orientato alla connessione. 
Il servizio IP è un servizio best-effort. Ciò significa che IP fa del suo meglio per consegnare i segmenti tra host comunicanti, non garantisce la consegna del segmento o che tale consegna sia in ordine, e non garantisce l'integrità. 
La responsabilità fondamentale di UDP e TCP è di estendere il servizio di consegna di IP tra due end-system a un servizio di consegna tra due processi. Estendere la consegna host-to-host a una consegna process-to-process viene detto transport-layer multiplexing e demultiplexing.
UDP e TCP forniscono controllo sull'integrità includendo campi di error-detection negli header dei segmenti. 
TCP offre diversi servizi in più alle applicazioni. Fornisce trasferimento affidabile di dati. Usando flow control, numeri di sequenza, acknowledgments, e timer, TCP assicura che i dati vengano consegnati correttamente e in ordine. TCP fornisce inoltre congestion control. Il contorllo della congestione non è un servizio pensato per le applicazioni ma per Internet in egenerale. 
Il traffico di UDP, invece, non è regolamentato.

### Multiplexing e demultiplexing
Multiplexing e demultiplexing significa estendere la consegna host-to-host a una consegna process-to-process. All'host di destinazione, il livello trasporto riceve i segmenti dal livello rete e ha la responsabilità di consegnare i dati nei segmenti all'applicazione corretta. Il livello di trasporto nell'host destinatario consegna i dati ai socket intermediari, ciascuno avente un identificatore. Ogni segmento ha un insieme di campi appositi. Alla consegna il livello trasporto esamina questi campi per identificare il socket destinatario a cui consegnare il segmento. Questa operazione è chiamata demultiplexing. L'operazione di raggruppare pezzi di dati all'host sorgente da diversi socket, incapsularli con le informazioni dell'header per creare segmenti, e passarli al livello di rete è chiamata multiplexing. 
Il multiplexing richiede che:
1. Che i socket abbiano identificatori
2. Che ogni segmento abbia campi che indichino il socket al quale deve essere consegnato. 
Questi campi sono il campo di numero di porta sorgente e il campo di numero di porta destinatario. Ogni numero di porta è di 2 byte. I numeri di porta da 0 a 1023 sono chiamti numeri di porta ben noti e sono riservatia a protocolli applicativi ben noti.

![[Multiplexing.png]]
### Demultiplexing con e senza connessione
La differenza cruciale nel demultiplexing tra l'approccio orientato alla connessione (TCP) e quello non orientato alla connessione (UDP) risiede nei parametri utilizzati dal livello di trasporto per dirigere un segmento in arrivo verso il socket corretto
- Demultiplexing non orientato alla connessione (UDP). Per il demultiplexing, l'host ricevente esamina il numero di porta di destinazione. Un socket UDP è identificato unicamente da una tupla composta dall'indirizzo IP di destinazione e dal numero di porta di destinazione. Segmenti UDP destinati allo stesso socket di destinazione possono provenire da mittenti diversi.
- Demultiplexing orientato alla connessione (TCP). Per il demultiplexing, un socket TCP è identificato da una quadrupla, che include l'indirizzo IP di origine, il numero di porta di origine, l'indirizzo IP di destinazione e il numero di porta di destinazione. Di conseguenza, l'host ricevente deve utilizzare tutti e quattro questi valori per dirigere un segmento TCP in arrivo al socket appropriato.

## UDP
UDP, oltre a multiplexing/demultiplexing e leggero error checking, non aggiunge nulla a IP. UDP prende il messaggio dal processo applicativo, aggiunge i propri campi per il multiplexing/demultiplexing, aggiunge altri due campi, e passa il segmento al livello di rete. Il livello di rete incapsula il segmento in un datagramma IP e prova a consegnarlo. Se arriva con successo, UDP demultiplexa correttamente il messaggio. Si sceglie UDP al posto di TCP per i seguenti motivi
- Controllo più fine a livello applicativo di che dati vengono mandati e quando. UDP invia immediatamente i dati al livello di rete, mentre TCP a diversi meccanismi di controllo che ritardano l'invio. 
- Nessuna creazione di connessione. Non creando una connessione tramite handshake, UDP non introduce ritardi. 
- Nessuno stato di connessione. UDP non mantiene alcuno stato sulla connessione. Pertanto, un server può supportare molti più client contemporaneamente. 
- Overhead degli header dei segmenti più piccolo. Il segmento TCP ha 20 bytes di header overhead, mentre qulli UDP ne hanno solo 8 bytes.

### Struttura del segmento UDP
I dati dell'applicazione occupano il campo data. L'header UDP ha 4 campi da 2 byte: i numeri di porta di origine e destinazione, la lunghezza in byte di tutto il segmento, e il checksum. 
![[UDP_segment.png]]

### UDP checksum
Il checksum UDP serve alla rilevazione di errori. UDP dal mittente il complemento a 1 della somma di tutte le parole a 16bit del segmento, con il carry di overflow sommato al risultato. Il risultato viene messo nel campo checksum. Il ricevitore farà la somma includendo questa volta anche il campo checksum e se il risultato non è 1111111111111111 allora degli errori sono stati introdotti.
Nonostante UDP abbia questo meccanismo, non fa nulla in risposta alla presenza di un errore. Molte implementazioni di UDP scartano il segmento danneggiato, altre passano il segmento all'applicazione con un warning.

### Principi della comunicazione affidabile
Uno di questi principi è ARQ (Automatic Repeat reQuest), che è un nome generico per una classe di protocolli che ha la proprietà di recuperare la perdita di pacchetti. Usano pacchetti speciali chiamati acknowledgements per notificare il trasmittente di una avvenuta ricezione corretta. 

Nei protocolli ARQ sono richieste tre funzionalità: 
- Rilevamento degli errori. 
- Feedback del ricevitore. 
- Ritrasmissione.

Esempi di protocolli basati su forme di ARQ:
- Stop-and-Wait
- Go-back-N
- Selective Repeat
- TCP
- protocllo MAC dei sistemi WiFi
### Stop-and-wait
Nel protocollo Stop-and-Wait il trasmettitore invia una PDU e mantiene una copia locale di essa. Imposta un timeout e attende la ricezione del rispettivo ACK.
Distinguiamo due casi:
- Se non riceve alcun ACK entro il timeout, invia nuovamente la stessa PDU
- Se riceve l'ACK, allora controlla che l'ACK non contenga errori e ne controlla il numero di sequenza. Se tutto è OK procede con l'invio della PDU successiva.
Il ricevitore, quando riceve una PDU controlla che non ci siano errori e controlla il numero di sequenza.
Distinguiamo due casi:
- Se è corretto e in ordine, invia l'ACK e passa l'SDU ai layer superiori.
- Se una di queste condizioni non è vera, cancella la PDU (drop)
![[StopAndWait.png]]
### Pipelining
Per ovviare alle inefficienze causate da un approccio Stop-and-Wait esiste una tecnica chiamata pipelining.
Con il pipelining al mittente è consentito inviare più pacchetti senza attendere conferme di ricezione. Il pipelining ha le seguenti conseguenze per i protocolli di trasferimento dati affidabili:
- L'intervallo dei numeri di sequenza accettabili deve essere aumentato. 
- I lati mittente e destinatario dei protocolli devono memorizzare nel buffer più di un pacchetto. 
È possibile identificare due approcci di base per il ripristino degli errori pipelined: Go-Back-N e selective repeat.
![[Pipeline.png]]
#### Definizioni
- Finestra di trasmission $W_{T}$: insieme di PDU che il trasmettitore può trasmettere senza avere ancora ricevuto l'ACK corrispondente.
- Finestra di ricezione $W_{R}$: insieme di PDU che il ricevitore può accettare e immagazzinare
- Puntatore low $W_{LOW}$: puntatore al primo pacchetto nella finestra di trasmissione $W_{T}$
- Puntatore up $W_{UP}$: puntatore all'ultimo pacchetto già trasmesso. Potrebbe non coincidere con l'ultimo pacchetto di $W_{T}$.
#### Tipi di acknowledgements
A seconda del protocollo, si possono usare diversi tipi di ACK.
- ACK individuale: indica la ricezione corretta di un pacchetto specifico. In questo caso ACK(n) significa "Ho ricevuto il pacchetto n"
- ACK cumulativo: indica la ricezione corretta di tutti i pacchetti fino a un certo indice. ACK(n) significa "Ho ricevuto utto fino al pacchetto n (escluso)"
- ACK negativo (NACK): richiede la ritrasmissione di un pacchetto singolo. NACK(n) significa "Inviami di nuovo il pacchetto n".
Piggybacking: inserimento di un ACK data in un pacchetto dati

### Go-Back-N
[Applet](https://media.pearsoncmg.com/aw/ecs_kurose_compnetwork_7/cw/content/interactiveanimations/go-back-n-protocol/index.html)
![[GBNWindow.png]]
In un protocollo Go-Back-N (GBN), il mittente può trasmettere più pacchetti senza attendere un riconoscimento, ma è vincolato ad avere nella pipeline non più di un numero massimo consentito, N, di pacchetti senza ACK. 

Se definiamo base come il numero di sequenza del pacchetto non riconosciuto più vecchio e nextseqnum come il numero di sequenza del pacchetto successivo da inviare. I numeri di sequenza nell'intervallo \[0,base-1\] corrispondono ai pacchetti che sono già stati trasmessi e riconosciuti. L'intervallo \[base,nextseqnum-1\] corrisponde ai pacchetti inviati ma non ancora confermati. I numeri di sequenza nell'intervallo \[nextseqnum,base+N-1\] possono essere utilizzati per i pacchetti che possono essere inviati immediatamente, qualora i dati arrivino dal livello superiore. Infine, i numeri di sequenza maggiori o uguali a base+N non possono essere utilizzati finché il pacchetto con numero di sequenza base non è stato confermato. 
L'intervallo di numeri di sequenza consentiti per i pacchetti trasmessi ma non ancora confermati può essere visto come una finestra di dimensione N. Durante il funzionamento, questa finestra scorre in avanti sullo spazio dei numeri di sequenza. N è definito come la dimensione della finestra e il protocollo GBN stesso come un protocollo a finestra scorrevole. 

- Invocazione dall'alto. Quando un invio viene chiamato dall'alto, il mittente controlla se la finestra è piena. Se la finestra non è piena, viene creato e inviato un pacchetto e le variabili vengono aggiornate di conseguenza. Se la finestra è piena, in un'implementazione reale, è probabile che il mittente abbia bufferizzato (ma non inviato immediatamente) questi dati, oppure che abbia un meccanismo di sincronizzazione che consenta al livello superiore di chiamare l'invio solo quando la finestra non è piena. 
- Ricezione di un ACK. In GBN, un acknowledgment è cumulativo. Attenzione che nell'applet per semplicità di spiegazione l'ACK è inclusivo, mentre poi nella realtà è esclusivo.
- Un evento di timeout. Se si verifica un timeout, il mittente invia nuovamente tutti i pacchetti precedentemente inviati ma non ancora confermati. Il mittente utilizza un solo timer, che può essere considerato come un timer per il pacchetto trasmesso più vecchio ma non ancora confermato. Se viene ricevuto un ACK ma ci sono ancora pacchetti trasmessi ma non ancora confermati, il timer viene riavviato. Se non ci sono pacchetti in sospeso non confermati, il timer viene arrestato.

Dal ricevente, se un pacchetto con numero di sequenza n viene ricevuto correttamente ed è in ordine, il ricevitore invia un ACK per il pacchetto n (n+1 in realtà) e consegna la porzione dati del pacchetto al livello superiore. 
In tutti gli altri casi, il ricevitore scarta il pacchetto e invia nuovamente un ACK per il pacchetto in ordine ricevuto più di recente (come sempre, in realtà il suo successivo). In GBN il ricevitore scarta i pacchetti fuori ordine. 
Il vantaggio di questo approccio è la semplicità del buffering del ricevitore: il ricevitore non deve memorizzare nel buffer alcun pacchetto fuori ordine. 

### Selective Repeat (SR)
[Applet](https://media.pearsoncmg.com/aw/ecs_kurose_compnetwork_7/cw/content/interactiveanimations/selective-repeat-protocol/index.html)
I protocolli di Selective Repeat evitano ritrasmissioni non necessarie facendo in modo che il mittente ritrasmetta al ricevitore solo i pacchetti che sospetta siano stati persi o corrotti. Questa ritrasmissione individuale, richiederà che il ricevitore riconosca individualmente i pacchetti ricevuti. Una dimensione della finestra di N verrà nuovamente utilizzata per limitare il numero di pacchetti in sospeso e non riconosciuti nella pipeline. A differenza di GBN, il mittente avrà già ricevuto ACK per alcuni dei pacchetti nella finestra. Il ricevitore SR riconoscerà un pacchetto ricevuto correttamente, indipendentemente dal fatto che sia in ordine o meno. I pacchetti fuori ordine vengono bufferizzati fino alla ricezione di eventuali pacchetti mancanti, a quel punto un batch di pacchetti può essere consegnato in ordine al livello superiore.
![[SRWindow.png]]
#### Azioni mittente
1. Dati ricevuti dall'alto. Quando i dati vengono ricevuti dall'alto, il mittente SR controlla il successivo numero di sequenza disponibile per il pacchetto. Se il numero di sequenza è all'interno della finestra del mittente, i dati vengono pacchettizzati e inviati; altrimenti vengono memorizzati nel buffer o restituiti al livello superiore per una trasmissione successiva, come in GBN. 
2. Timeout. I timer vengono nuovamente utilizzati per proteggere dai pacchetti persi. Tuttavia, ogni pacchetto deve ora avere il proprio timer logico, poiché solo un singolo pacchetto verrà trasmesso in caso di timeout. 
3. ACK ricevuto. Se viene ricevuto un ACK, il mittente SR contrassegna quel pacchetto come ricevuto, a condizione che si trovi nella finestra. Se il numero di sequenza del pacchetto è uguale a send_base, la base della finestra viene spostata in avanti al pacchetto non confermato con il numero di sequenza più piccolo. Se la finestra si sposta e ci sono pacchetti non trasmessi con numeri di sequenza che ora rientrano nella finestra, questi pacchetti vengono trasmessi.
#### Azioni ricevitore
1. Il pacchetto con numero di sequenza in \[rcv_base, rcv_base+N-1\] viene ricevuto correttamente. In questo caso, il pacchetto ricevuto rientra nella finestra del ricevitore e un pacchetto ACK selettivo viene restituito al mittente. Se il pacchetto non è stato ricevuto in precedenza, viene bufferizzato. Se questo pacchetto ha un numero di sequenza pari alla base della finestra di ricezione, allora questo pacchetto e tutti i pacchetti precedentemente bufferizzati e numerati consecutivamente (a partire da rcv_base) vengono consegnati al livello superiore. La finestra di ricezione viene quindi spostata in avanti del numero di pacchetti consegnati al livello superiore. 
2. Il pacchetto con numero di sequenza in \[rcv_base-N, rcv_base-1\] viene ricevuto correttamente. In questo caso, deve essere generato un ACK, anche se si tratta di un pacchetto che il ricevitore ha già riconosciuto. 
3. Altrimenti, ignorare il pacchetto.

### Considerazioni sulle dimensioni delle finestre
La mancanza di sincronizzazione tra le finestre del mittente e del destinatario ha conseguenze importanti quando ci troviamo di fronte alla realtà di un intervallo finito di numeri di sequenza. 
La dimensione della finestra deve essere inferiore o uguale alla metà della dimensione dello spazio dei numeri di sequenza per i protocolli SR, ovvero $|W_{T}| + |W_{R}| \leq 2^{k}$ se il numero sequenza è memorizzato con $k$ bit.

## TCP
Il protocollo TCP è detto orientato alla connessione perché i due processi devono prima stabilire un "handshake", ovvero devono inviarsi reciprocamente alcuni segmenti preliminari per stabilire i parametri del trasferimento dati successivo. 
Entrambi i lati della connessione inizializzeranno variabili di stato TCP  associate alla connessione TCP. 
Una connessione TCP fornisce un servizio full-duplex, il flusso di dati è bidirezionale nella stessa connessione. 
Una connessione TCP è inoltre sempre punto a punto, un solo mittente e un solo destinatario. È affidabile e utilizza pipelining, con meccanismi di controllo di flusso e di congestione che modificano la dimensione della finestra. Utilizza ACK cumulativi.
La quantità massima di dati che può essere acquisita e inserita in un segmento è limitata dalla dimensione massima del segmento (MSS) ed è determinata dalla maximum transmission unit del livello collegamento. Non ci sono meccanismi per comunicare l'MSS, dunque l'approccio utilizzato è "Trial and error", si tenta con MSS sempre più grandi, finchè non ci si accorge che qualche segmento viene perso.

### Struttura segmento TCP
Il segmento TCP è costituito da campi di intestazione e da un campo dati. 
Poiché l'intestazione TCP è in genere di 20 byte. 
L'intestazione include i numeri di porta di origine e destinazione e un campo checksum. Contiene anche i seguenti campi: 
- Il campo del numero di sequenza a 32 bit e il campo del numero di conferma a 32 bit sono utilizzati dal mittente e dal destinatario per implementare un servizio di trasferimento dati affidabile.
- Il campo della finestra di ricezione a 16 bit è utilizzato per il controllo di flusso. 
- Il campo della lunghezza dell'intestazione a 4 bit specifica la lunghezza dell'intestazione TCP in parole da 32 bit. L'intestazione TCP può avere lunghezza variabile a causa del campo delle opzioni TCP. 
- Il campo opzioni opzionale a lunghezza variabile viene utilizzato quando un mittente e un destinatario negoziano la dimensione massima del segmento (MSS) o come fattore di scala della finestra per l'uso in reti ad alta velocità. 
- Il campo flag contiene 6 bit. Il bit ACK viene utilizzato per indicare che il valore riportato nel campo acknowledgment è valido. I bit RST, SYN e FIN vengono utilizzati per l'impostazione e la disattivazione della connessione. I bit CWR ed ECE vengono utilizzati nella notifica esplicita di congestione. L'impostazione del bit PSH indica che il destinatario deve passare immediatamente i dati al livello superiore. Infine, il bit URG viene utilizzato per indicare che in questo segmento sono presenti dati che l'entità di livello superiore lato mittente ha contrassegnato come "urgenti". La posizione dell'ultimo byte di questi dati urgenti è indicata dal campo puntatore ai dati urgenti a 16 bit.

Il campo della finesra di ricezione indica il numero di byte che il ricevitore può immagazzinare, dunque rappresenta anche la massima quantità di dati in transito durante un RTT. Se la dimensione non è maggiore del prodotto banda-ritardo allora TCP non sta sfruttando al massimo il canale.

### Numeri di sequenza e numeri di acknowledgment
TCP considera i dati come un flusso di byte non strutturato, ma ordinato. I numeri di sequenza si riferiscono al flusso di byte trasmessi e non alla serie di segmenti trasmessi. Il numero di sequenza di un segmento è quindi il numero di flusso di byte del primo byte del segmento. Il numero di conferma è il numero di sequenza del byte successivo che ci si aspetta dal mittente. 

### Apertura della connessione (Three-way Handshake)
![[3WH.png]]
1. Il TCP lato client invia innanzitutto uno speciale segmento TCP al TCP lato server. Questo speciale segmento non contiene dati a livello di applicazione. Tuttavia il bit SYN è impostato a 1. Questo segmento speciale è denominato segmento SYN. ​​Inoltre, il client sceglie casualmente un numero di sequenza iniziale (client_isn) e inserisce questo numero nel campo del numero di sequenza del segmento TCP SYN iniziale. 
2. Il server estrae il segmento TCP SYN dal datagramma, alloca i buffer e le variabili TCP alla connessione e invia un segmento di connessione-accettata al TCP del client. Anche questo segmento di accettazione della connessione non contiene dati a livello di applicazione. Tuttavia, contiene tre importanti informazioni nell'intestazione del segmento. Il bit SYN è impostato a 1. Il campo di conferma dell'intestazione del segmento TCP è impostato su client_isn+1. Infine, il server sceglie il proprio numero di sequenza iniziale (server_isn) e inserisce questo valore nel campo del numero di sequenza dell'intestazione del segmento TCP. Questo segmento è definito segmento SYNACK.
3. Dopo aver ricevuto il segmento SYNACK, il client alloca buffer e variabili alla connessione. L'host client invia quindi al server un ultimo segmento. Il bit SYN è impostato a zero, poiché la connessione è stata stabilita. Questa terza fase dell'handshake a tre vie può trasportare dati nel payload del segmento.
Una volta completati questi tre passaggi, gli host client e server possono scambiarsi segmenti contenenti dati. In ciascuno di questi segmenti futuri, il bit SYN verrà impostato a zero.

### Chiusura della connessione (Tear-down)
![[Teardown.png]]
Essendo le connessioni TCP sempre bidirezionali, per poterle chiudere bisogna chiuderle ine entrambe le direzioni. 
Questo processo, noto come smantellamento della connessione (teardown), può essere avviato da qualsiasi applicazione partecipante, sia il client che il server.
Quando un'applicazione completa l'invio dei dati e decide di chiudere la connessione, il TCP invia un segmento speciale al sistema remoto. Questo segmento è caratterizzato dall'avere un bit di controllo specifico (il FIN bit) impostato a 1 nell'header. Dopo l'invio di questo segnale di chiusura, l'host che ha iniziato il processo attende un riconoscimento (ACK) da parte del destinatario. Successivamente, l'host attende un segmento di spegnimento (FIN proveniente dall'altro lato della connessione, che indica che anche l'altra parte ha terminato l'invio dei suoi dati. Infine, l'host che ha iniziato la chiusura invia un riconoscimento finale per confermare la ricezione del segnale di spegnimento del partner. Mantenere questa fase finale è cruciale, poiché garantisce che, nel caso in cui l'ultimo messaggio di conferma si fosse perso, la connessione possa essere chiusa formalmente e tutte le risorse associate (come buffer e variabili) possano essere liberate.
Consideriamo cosa succede quando un host riceve un segmento TCP i cui numeri di porta o indirizzo IP sorgente non corrispondono a nessuno dei socket in esecuzione nell'host. L'host invierà uno speciale segmento di reset alla sorgente. Questo segmento TCP ha il bit del flag RST impostato a 1. Pertanto, quando un host invia un segmento di reset, sta comunicando alla sorgente "Non ho un socket per quel segmento. Si prega di non inviare nuovamente il segmento". Quando un host riceve un pacchetto UDP il cui numero di porta di destinazione non corrisponde a un socket UDP in corso, l'host invia uno speciale datagramma ICMP.

### Stima del tempo di Round-Trip
Sappiamo che il tempo del timeout deve essere più grande del RTT, altrimenti ci sarebbero costanti trasmissioni non necessarie. Allo stesso modo non deve essere troppo grandi, altrimenti si avrebbe una reazione lenta alla perdita di segmenti.

Il valore SampleRTT per un segmento è il tempo che intercorre tra l'invio del segmento (ovvero, il suo passaggio a IP) e la ricezione di un acknowledgment per il segmento. La maggior parte delle implementazioni TCP effettua una sola misurazione di SampleRTT alla volta. In qualsiasi momento, il SampleRTT viene stimato solo per uno dei segmenti trasmessi ma attualmente non acknowledgment, generando un nuovo valore di SampleRTT circa una volta per ogni RTT. Inoltre, TCP non calcola mai un SampleRTT per un segmento che è stato ritrasmesso. I valori di SampleRTT oscilleranno da segmento a segmento a causa della congestione nei router e del carico variabile sui sistemi terminali. A causa di questa fluttuazione, qualsiasi valore di SampleRTT potrebbe essere atipico. TCP mantiene una media, chiamata EstimatedRTT, dei valori di SampleRTT. Dopo aver ottenuto un nuovo SampleRTT, TCP aggiorna EstimatedRTT secondo la seguente formula:
$$
\text{EstimatedRTT} = (1-\alpha) \cdot \text{EstimatedRTT} + \alpha \cdot \text{SampleRTT}
$$
Dunque il valore di EstimatedRTT è una combinazione pesata del suo valore precedente e il nuovo SampleRTT, un valore consigliato di $\alpha$ è $\alpha=0.125$.
Questa media ponderata attribuisce maggiore importanza ai campioni recenti rispetto a quelli vecchi. 
Oltre ad avere una stima dell'RTT, è anche utile avere una misura della variabilità dell'RTT. La variazione dell'RTT, DevRTT, è una stima di quanto SampleRTT si discosta tipicamente da EstimatedRTT:
$$
\text{DevRTT} = (1-\beta) \cdot \text{DevRTT} + \beta  \cdot |\text{SampleRTT} - \text{EstimatedRTT}|
$$
Ora che abbiamo queste due dimensioni, bisogna decidere il valore del timeout. Sicuramente deve essere maggiore di EstimatedRTT di un certo margine. Il margine deve essere deve essere grande quando c'è tanta fluttuazione di valori di SampleRTT. La formula è la seguente:
$$
\text{TimeoutInterval} = \text{EstimatedRTT} + 4 \cdot \text{DevRTT}
$$
Viene consigliato un timeout iniziale di 1s. Quanto avviene un timeout il valore di TimeoutInterval viene raddoppiato. Quando si ha una sola misura di RTT si pone EstimatedRTT = SampleRTT e DevRTT = RTT / 2  e il timeout segue la formula descritta sopra.

### Controllo del flusso
Gli host su ciascun lato di una connessione TCP riservano un buffer di ricezione per la connessione. Quando la connessione TCP riceve byte corretti e in sequenza, inserisce i dati nel buffer di ricezione. 
L'applicazione ricevente potrebbe essere impegnata e non tentare nemmeno di leggere i dati fino a molto tempo dopo il loro arrivo. Il mittente può far traboccare il buffer di ricezione della connessione inviando troppi dati troppo velocemente. 

Supponiamo in questa sezione che l'implementazione di TCP sia tale che il ricevitore TCP scarti i segmenti fuori ordine. TCP fornisce il controllo di flusso facendo in modo che il mittente mantenga una variabile chiamata finestra di ricezione. Informalmente, la finestra di ricezione viene utilizzata per dare al mittente un'idea di quanto spazio di buffer libero sia disponibile presso il ricevitore. Poiché TCP è full-duplex, il mittente su ciascun lato della connessione mantiene una finestra di ricezione distinta. 
- LastByteRead: il numero dell'ultimo byte nel flusso di dati letto dal buffer dal processo applicativo 
- LastByteRcvd: il numero dell'ultimo byte nel flusso di dati arrivato dalla rete ed è stato inserito nel buffer di ricezione
Deve essere che:
$$
\text{LastByteRcvd} – \text{LastByteRead} <= \text{RcvBuffer} 
$$
La finestra di ricezione, indicata con rwnd, è impostata sulla quantità di spazio libero nel buffer: 
$$
\text{rwnd} = \text{RcvBuffer} – (\text{LastByteRcvd} – \text{LastByteRead}) 
$$
Poiché lo spazio libero cambia nel tempo, rwnd è dinamico. 
L'host comunica al mittente quanto spazio libero ha nel buffer di connessione inserendo il suo valore corrente di rwnd nel campo della finestra di ricezione di ogni segmento che invia ad esso. 
Inizialmente, rwnd = RcvBuffer. 

Il mittente a sua volta tiene traccia di due variabili, LastByteSent e LastByteAcked. La differenza tra queste due variabili è la quantità di dati non riconosciuti che ha inviato alla connessione. 
Mantenendo la quantità di dati non riconosciuti inferiore al valore di rwnd, il mittente ha la certezza di non sovraccaricare il buffer di ricezione del destinatario.
(Applet)[https://media.pearsoncmg.com/aw/ecs_kurose_compnetwork_7/cw/content/interactiveanimations/flow-control/index.html]
#### Problema tecnico (non fondamentale)
Questo schema presenta un piccolo problema tecnico. Per vedere questo, supponiamo che il buffer di ricezione dell'host B si riempia in modo che rwnd = 0. Dopo aver annunciato rwnd = 0 all'host A, supponiamo anche che B non abbia nulla da inviare ad A. Ora consideriamo cosa succede. Quando il processo applicativo in B svuota il buffer, TCP non invia nuovi segmenti con nuovi valori rwnd all'host A; anzi, TCP invia un segmento all'host A solo se ha dati da inviare o se ha un acknowledgment da inviare. Pertanto, l'host A non viene mai informato che si è liberato spazio nel buffer di ricezione dell'host B: l'host A è bloccato e non può più trasmettere dati! Per risolvere questo problema, la specifica TCP richiede all'host A di continuare a inviare segmenti con un byte di dati quando la finestra di ricezione di B è zero. Questi segmenti saranno confermati dal ricevitore. Alla fine il buffer inizierà a svuotarsi e gli acknowledgment conterranno un valore rwnd diverso da zero.
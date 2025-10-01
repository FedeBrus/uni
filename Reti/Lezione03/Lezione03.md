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

### Stop-and-wait

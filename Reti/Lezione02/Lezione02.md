### Architetture delle applicazioni di rete
#### Architettura client-server
In un'architettura client-server, c'è un host sempre attivo, chiamato server, che gestisce le richieste provenienti da molti altri host, chiamati client. Si noti che con l'architettura client-server, i client non comunicano direttamente tra loro. Un'altra caratteristica dell'architettura client-server è che il server ha un indirizzo fisso e ben noto e un client può sempre contattarlo inviando un pacchetto all'indirizzo IP del server. Spesso, in un'applicazione client-server, un host con un unico server non è in grado di soddisfare tutte le richieste dei client.
#### Architettura peer-to-peer
In un'architettura P2P, la dipendenza dai server dedicati nei data center è minima (o nulla). L'applicazione sfrutta invece la comunicazione diretta tra coppie di host collegati in modo intermittente, chiamati peer. I peer non sono di proprietà del fornitore di servizi, ma sono desktop e laptop controllati dagli utenti. Un esempio di applicazione P2P molto diffusa è l'applicazione di condivisione file BitTorrent. Una delle caratteristiche più interessanti delle architetture P2P è la loro auto-scalabilità. Ad esempio, in un'applicazione di condivisione file P2P, sebbene ogni peer generi un carico di lavoro richiedendo file, ogni peer aggiunge anche capacità di servizio al sistema distribuendo file ad altri peer. Tuttavia, le applicazioni P2P devono affrontare sfide in termini di sicurezza, prestazioni e affidabilità a causa della loro struttura altamente decentralizzata.
#### Architettura peer-to-peer ibrida
Un’architettura P2P ibrida combina elementi del modello client-server con quelli puramente peer-to-peer. In questo approccio, un server centrale può svolgere funzioni di coordinamento, come la gestione degli indirizzi dei peer o l’autenticazione degli utenti, mentre la distribuzione dei contenuti e la comunicazione avvengono direttamente tra i peer. Questo modello mantiene i vantaggi di scalabilità tipici del P2P, riducendo al tempo stesso alcune delle sue criticità, come la difficoltà nel trovare rapidamente le risorse o i problemi di sicurezza. Esempi di architettura ibrida si ritrovano in applicazioni come Skype nelle sue prime versioni.
#### Cloud computing
Il cloud computing è un’architettura che si basa sull’uso di potenti server remoti, accessibili tramite Internet, per fornire servizi di calcolo, archiviazione e applicazioni agli utenti. In questo modello, le risorse non risiedono sui dispositivi locali, ma vengono erogate su richiesta da data center distribuiti, garantendo elevata disponibilità, flessibilità e scalabilità. Gli utenti possono accedere ai servizi cloud da qualsiasi luogo e dispositivo connesso alla rete, senza preoccuparsi della gestione diretta dell’infrastruttura hardware.
### Processi in comunicazione
I processi su due diversi sistemi finali comunicano tra loro scambiandosi messaggi attraverso la rete informatica. Un processo di invio crea e invia messaggi alla rete; un processo di ricezione riceve questi messaggi e possibilmente risponde inviando messaggi di ritorno.
#### Processi client e server 
Un'applicazione di rete è costituita da coppie di processi che si scambiano messaggi attraverso una rete. Per ogni coppia di processi in comunicazione, in genere si etichetta uno dei due processi come client e l'altro come server. Definiamo i processi client e server come segue: Nel contesto di una sessione di comunicazione tra una coppia di processi, il processo che avvia la comunicazione viene etichettato come client. Il processo che attende di essere contattato per avviare la sessione è il server. 
#### L'interfaccia tra il processo e la rete informatica 
Qualsiasi messaggio inviato da un processo a un altro deve passare attraverso la rete sottostante. Un processo invia e riceve messaggi dalla rete attraverso un'interfaccia software chiamata socket. Un socket è l'interfaccia tra il livello applicativo e il livello di trasporto all'interno di un host. È anche denominato Application Programming Interface (API) tra l'applicazione e la rete, poiché il socket è l'interfaccia di programmazione con cui sono costruite le applicazioni di rete. Lo sviluppatore dell'applicazione ha il controllo di tutto ciò che riguarda il lato del socket relativo al livello applicativo, ma ha poco controllo sul lato del socket relativo al livello di trasporto. L'unico controllo che lo sviluppatore dell'applicazione ha sul lato del livello di trasporto è:
1. La scelta del protocollo di trasporto
2. Forse la possibilità di correggere alcuni parametri del livello di trasporto
![[Socket.png]]
#### Indirizzamento dei processi 
Affinché un processo in esecuzione su un host possa inviare pacchetti a un processo in esecuzione su un altro host, il processo ricevente deve avere un indirizzo. Per identificare il processo ricevente, è necessario specificare l'host, identificato dal suo indirizzo IP, e il processo di ricezione, identificato da un numero di porta. Alle applicazioni più diffuse sono stati assegnati numeri di porta specifici.
### Servizi di trasporto disponibili per le applicazioni 
L'applicazione sul lato mittente invia i messaggi attraverso il socket. Dall'altra parte del socket, il protocollo del livello di trasporto ha il compito di far arrivare i messaggi al socket del processo ricevente. Molte reti, compresa Internet, forniscono più di un protocollo a livello di trasporto. Possiamo classificare in linea di massima i servizi possibili in quattro dimensioni: trasferimento dati affidabile, throughput, tempistica e sicurezza.
#### Trasferimento dati affidabile 
I pacchetti possono andare persi all'interno di una rete di computer. Per molte applicazioni la perdita di dati può avere conseguenze devastanti. Per supportare queste applicazioni, è necessario intervenire in modo da garantire che i dati inviati da un'estremità dell'applicazione vengano consegnati correttamente e completamente all'altra estremità dell'applicazione. Se un protocollo fornisce un servizio di consegna dei dati così garantito, si dice che fornisce un trasferimento dati affidabile. Quando un protocollo di trasporto fornisce questo servizio, il processo di invio può semplicemente passare i suoi dati al socket e sapere con assoluta certezza che i dati arriveranno senza errori al processo di ricezione. Quando un protocollo a livello di trasporto non fornisce un trasferimento dati affidabile, alcuni dei dati inviati dal processo di invio potrebbero non arrivare mai al processo di ricezione. Ciò può essere accettabile per applicazioni tolleranti alla perdita.
#### Throughput 
Poiché altre sessioni condivideranno la larghezza di banda lungo il percorso di rete e poiché queste altre sessioni andranno e verranno, il throughput disponibile può variare nel tempo. Queste osservazioni portano a un altro servizio naturale che un protocollo a livello di trasporto potrebbe fornire, ovvero un throughput disponibile garantito a una velocità specificata. Con un servizio di questo tipo, l'applicazione potrebbe richiedere un throughput garantito di r bit/sec e il protocollo di trasporto garantirebbe che il throughput disponibile sia sempre almeno pari a r bit/sec. 
#### Temporizzazione 
Un protocollo a livello di trasporto può anche fornire garanzie di sincronizzazione. Per le applicazioni non in tempo reale, un ritardo minore è sempre preferibile a uno maggiore, ma non vi sono vincoli rigidi sui ritardi end-to-end.
#### Sicurezza
Infine, un protocollo di trasporto può fornire a un'applicazione uno o più servizi di sicurezza. Un protocollo di trasporto può anche fornire altri servizi di sicurezza oltre alla riservatezza, tra cui l'integrità dei dati e l'autenticazione degli endpoint.
### Servizi di trasporto forniti da Internet
#### Servizi TCP
Quando un'applicazione richiama TCP come protocollo di trasporto, l'applicazione riceve entrambi questi servizi da TCP. 
- Servizio orientato alla connessione. TCP prevede che il client e il server si scambino informazioni di controllo a livello di trasporto prima che i messaggi a livello di applicazione inizino a fluire. Questa procedura, denominata handshaking, avvisa il client e il server, consentendo loro di prepararsi a un flusso massiccio di pacchetti. Dopo la fase di handshaking, si dice che esiste una connessione TCP tra i socket dei due processi. La connessione è di tipo full-duplex, in quanto i due processi possono scambiarsi messaggi contemporaneamente attraverso la connessione. Quando l'applicazione termina l'invio dei messaggi, deve interrompere la connessione. 
- Servizio di trasferimento dati affidabile. I processi di comunicazione possono fare affidamento sul TCP per consegnare tutti i dati inviati senza errori e nell'ordine corretto. Quando un lato dell'applicazione passa un flusso di byte in un socket, può contare sul TCP per consegnare lo stesso flusso di byte al socket ricevente, senza byte mancanti o duplicati.
- Servizio di controllo della congestione. Il TCP include anche un meccanismo di controllo della congestione, che limita la comunicazione quando la rete è congestionata tra mittente e destinatario.
- Controllo di flusso. TCP implementa anche un sistema di regolazione per garantire che un mittente non inondi un ricevente con più dati di quanti ne possa gestire, adattando dinamicamente la velocità di trasmissione alla capacità del destinatario.
È importante notare che, pur offrendo affidabilità e controllo della trasmissione, TCP non fornisce servizi di temporizzazione, di throughput minimo garantito o di sicurezza integrata.

#### Servizi UDP
UDP è un protocollo di trasporto leggero che fornisce servizi minimi. UDP è senza connessione e fornisce un servizio di trasferimento dati inaffidabile. Inoltre, i messaggi che arrivano al processo ricevente potrebbero arrivare in ordine casuale. L'UDP non include un meccanismo di controllo della congestione.

## HTTP
Il HyperText Transfer Protocol (HTTP) è il protocollo di livello applicativo del Web. HTTP è implementato un programma client e un programma server. Il programma client e il programma server, in esecuzione su sistemi terminali diversi, comunicano tra loro scambiandosi messaggi HTTP. HTTP definisce la struttura di questi messaggi e il modo in cui client e server li scambiano. La maggior parte delle pagine Web è costituita da un file HTML di base e da diversi oggetti referenziati. Il file HTML di base fa riferimento agli altri oggetti nella pagina con i relativi URL. Ogni URL ha due componenti: il nome host del server che ospita l'oggetto e il percorso dell'oggetto. Ad esempio, l'URL 'http://www.someSchool.edu/someDepartment/picture.gif' ha 'www.someSchool.edu' come nome host e '/someDepartment/picture.gif' come percorso. I server Web, che implementano il lato server di HTTP, ospitano oggetti Web, ciascuno indirizzabile tramite un URL. 
![[HTTP.png]]
HTTP utilizza TCP come protocollo di trasporto sottostante.
È importante notare che il server invia i file richiesti ai client senza memorizzare alcuna informazione sullo stato del client. Poiché un server HTTP non conserva alcuna informazione sui client, HTTP è detto protocollo stateless.
### Connessioni non persistenti e persistenti 
A seconda dell'applicazione e di come viene utilizzata, la serie di richieste può essere effettuata consecutivamente. Ogni coppia richiesta/risposta deve essere inviata tramite una connessione TCP separata o tutte le richieste e le relative risposte devono essere inviate tramite la stessa connessione TCP. Nel primo approccio, si dice che l'applicazione utilizza connessioni non persistenti; nel secondo approccio, connessioni persistenti. HTTP può utilizzare sia connessioni non persistenti che connessioni persistenti. 
#### HTTP con connessioni non persistenti 
Supponiamo che la pagina sia composta da un file HTML di base e 10 immagini JPEG e che tutti e 11 questi oggetti risiedano sullo stesso server. Supponiamo inoltre che l'URL del file HTML di base sia http://www.someSchool.edu/someDepartment/home.index. 
Ecco cosa succede: 
1. Il processo client HTTP avvia una connessione TCP al server www.someSchool.edu sulla porta 80, che è la porta predefinita per HTTP. Associati alla connessione TCP, ci saranno un socket sul client e un socket sul server. 
2. Il client HTTP invia un messaggio di richiesta HTTP al server tramite il suo socket. Il messaggio di richiesta include il percorso /someDepartment/home.index. 
3. Il processo del server HTTP riceve il messaggio di richiesta tramite il suo socket, recupera l'oggetto /someDepartment/home.index dalla sua memoria, incapsula l'oggetto in un messaggio di risposta HTTP e invia il messaggio di risposta al client tramite il suo socket. 
4. Il processo del server HTTP dice a TCP di chiudere la connessione TCP. 
5. Il client HTTP riceve il messaggio di risposta. La connessione TCP termina. Il messaggio indica che l'oggetto incapsulato è un file HTML. Il client estrae il file dal messaggio di risposta, esamina il file HTML e trova i riferimenti ai 10 oggetti JPEG. 
6. I primi quattro passaggi vengono quindi ripetuti per ciascuno degli oggetti JPEG referenziati. Quando il browser riceve la pagina Web, la visualizza all'utente. HTTP non ha nulla a che fare con il modo in cui una pagina Web viene interpretata da un client. I passaggi precedenti illustrano l'uso di connessioni non persistenti, in cui ogni connessione TCP viene chiusa dopo che il server invia l'oggetto: la connessione non persiste per altri oggetti. 
Definiamo il tempo di andata e ritorno (RTT), ovvero il tempo impiegato da un piccolo pacchetto per viaggiare dal client al server e poi tornare al client. L'RTT include ritardi di propagazione dei pacchetti, ritardi di accodamento dei pacchetti nei router e negli switch intermedi e ritardi di elaborazione dei pacchetti. Le prime due parti del three-way handshake richiedono un RTT. Dopo aver completato le prime due parti del three-way handshake, il client invia il messaggio di richiesta HTTP combinato con la terza parte del three-way handshake (la conferma) nella connessione TCP. Una volta che il messaggio di richiesta arriva al server, il server invia il file HTML nella connessione TCP. Questa richiesta/risposta HTTP consuma un altro RTT. Pertanto, approssimativamente, il tempo di risposta totale è di due RTT più il tempo di trasmissione al server del file HTML.
![[InterazioneHTTP.png]]
#### HTTP con connessioni persistenti 
Le connessioni non persistenti presentano alcune carenze perché è necessario stabilire e mantenere una nuova connessione per ogni oggetto richiesto. Come appena descritto, ogni oggetto subisce un ritardo di consegna di due RTT. Con le connessioni persistenti HTTP/1.1, il server lascia aperta la connessione TCP dopo aver inviato una risposta. Richieste e risposte successive tra lo stesso client e server possono essere inviate tramite la stessa connessione. Queste richieste di oggetti possono essere effettuate consecutivamente, senza attendere le risposte alle richieste in sospeso (pipelining). In genere, il server HTTP chiude una connessione quando non viene utilizzata per un certo periodo di tempo (un intervallo di timeout configurabile).

#### Messaggio di richiesta HTTP 
```
GET /somedir/page.html HTTP/1.1 
Host: www.someschool.edu 
Connection: close 
User-agent: Mozilla/5.0 
Accept-language: fr

```
La prima riga di un messaggio di richiesta HTTP è chiamata riga di richiesta; le righe successive sono chiamate righe di intestazione. 
La riga di richiesta ha tre campi: il campo del metodo, il campo URL e il campo della versione HTTP. Il campo metodo può assumere diversi valori, tra cui GET, POST, HEAD, PUT e DELETE. La maggior parte dei messaggi di richiesta HTTP utilizza il metodo GET. Il metodo GET viene utilizzato quando il browser richiede un oggetto, con l'oggetto richiesto identificato nel campo URL.
La riga di intestazione 'Host: www.someschool.edu' specifica l'host su cui risiede l'oggetto.
Includendo la riga di intestazione 'Connection: close', il browser comunica al server che desidera che il server chiuda la connessione dopo l'invio dell'oggetto richiesto. La riga di intestazione 'User-agent: Mozilla/5.0' specifica lo user agent, ovvero il tipo di browser che effettua la richiesta al server. Infine, l'intestazione Accept-language: indica che l'utente preferisce ricevere una versione francese dell'oggetto, se tale oggetto esiste sul server. 

Dopo le righe di intestazione c'è un "corpo dell'entità". Il corpo dell'entità è vuoto con il metodo GET, ma viene utilizzato con il metodo POST. Il metodo HEAD è simile al metodo GET. Quando un server riceve una richiesta con il metodo HEAD, risponde con un messaggio HTTP ma omette l'oggetto richiesto (utile per debug). Il metodo PUT viene spesso utilizzato in combinazione con gli strumenti di pubblicazione Web. Consente a un utente di caricare un oggetto in un percorso specifico su un server Web specifico. Il metodo DELETE consente a un utente, o a un'applicazione, di eliminare un oggetto su un server Web.
![[HTTP_Request.png]]
#### Messaggio di risposta HTTP
```
HTTP/1.1 200 OK 
Connection: close 
Date: Tue, 18 Aug 2015 15:44:04 GMT 
Server: Apache/2.2.3 (CentOS) 
Last-Modified: Tue, 18 Aug 2015 15:11:03 GMT 
Content-Length: 6821 
Content-Type: text/html 

(data data data data data ...)
```
È composto da tre sezioni: una riga di stato iniziale, righe di intestazione e il corpo dell'entità. 
Il corpo dell'entità è il cuore del messaggio: contiene l'oggetto richiesto. 
La riga di stato contiene tre campi: il campo della versione del protocollo, un codice di stato e un messaggio di stato corrispondente. 
Il server utilizza la riga di intestazione 'Connection: close' per comunicare al client che chiuderà la connessione TCP dopo l'invio del messaggio. La riga di intestazione 'Date: Tue, 18 Aug 2015 15:44:04 GMT' indica l'ora e la data in cui la risposta HTTP è stata creata e inviata dal server. La riga di intestazione 'Server: Apache/2.2.3 (CentOS)' indica che il messaggio è stato generato da un server Web Apache. La riga di intestazione 'Last-Modified: Tue, 18 Aug 2015 15:11:03 GMT' indica l'ora e la data di creazione o dell'ultima modifica dell'oggetto. La riga di intestazione 'Content-Length: 6821' indica il numero di byte nell'oggetto inviato. La riga di intestazione 'Content-Type: text/html' indica che l'oggetto nel corpo dell'entità è testo HTML. 

Diciamo qualche parola in più sui codici di stato e le relative frasi. Il codice di stato e la frase associata indicano il risultato della richiesta. Alcuni codici di stato comuni e frasi associate includono:
- 200 OK: la richiesta è riuscita e le informazioni vengono restituite nella risposta.
- 301 Spostato definitivamente: l'oggetto richiesto è stato spostato definitivamente; il nuovo URL è specificato nell'intestazione 'Location:' del messaggio di risposta. Il software client recupererà automaticamente il nuovo URL.
- 400 Richiesta non valida: questo è un codice di errore generico che indica che la richiesta non è stata compresa dal server.
- 404 Non trovato: il documento richiesto non esiste su questo server. 
- 505 Versione HTTP non supportata: la versione del protocollo HTTP richiesta non è supportata dal server.

#### Interazione utente-server: cookies 
HTTP è stateless. Questo semplifica la progettazione del server e ha permesso agli ingegneri di sviluppare server Web ad alte prestazioni in grado di gestire migliaia di connessioni TCP simultanee. Tuttavia, è spesso auspicabile che un sito Web identifichi gli utenti, sia perché il server desidera limitare l'accesso degli utenti sia perché desidera fornire contenuti in funzione dell'identità dell'utente. A tal fine, HTTP utilizza i cookie. I cookie consentono ai siti di tenere traccia degli utenti. 
La tecnologia dei cookie ha quattro componenti: 
1. una riga di intestazione del cookie nel messaggio di risposta HTTP;
2. una riga di intestazione del cookie nel messaggio di richiesta HTTP; 
3. un file cookie conservato sul sistema finale dell'utente e gestito dal browser dell'utente; 
4. un database back-end sul sito Web.

Quando la richiesta arriva al server Web, il server crea un numero di identificazione univoco e una voce nel suo database back-end indicizzata dal numero di identificazione. Il server Web risponde quindi al browser, includendo nella risposta HTTP un'intestazione 'Set-cookie:', che contiene il numero di identificazione.
Quando il browser riceve il messaggio di risposta HTTP, vede l'intestazione 'Set-cookie:'. Il browser aggiunge quindi una riga allo speciale file cookie che gestisce. Questa riga include il nome host del server e il numero di identificazione nell'intestazione 'Set-cookie:'. Ogni volta che viene richiesta una pagina web, il browser consulta il file cookie, estrae il numero di identificazione per questo sito e inserisce una riga di intestazione 'Cookie:' che include il numero di identificazione nella richiesta HTTP.
In questo modo, il server è in grado di tracciare l'attività sul sito. Sebbene il sito web non conosca necessariamente il nome dell'utente, sa esattamente quali pagine ha visitato, in quale ordine e in quale momento.
![[Cookies.png]]
#### Web Caching 
Una cache Web, chiamata anche server proxy, è un'entità di rete che soddisfa le richieste HTTP per conto di un server Web di origine. La cache Web dispone di un proprio spazio di archiviazione su disco e conserva copie degli oggetti richiesti di recente in questo spazio. Il browser di un utente può essere configurato in modo che tutte le richieste HTTP dell'utente vengano prima indirizzate alla cache Web.
1. Il browser stabilisce una connessione TCP alla cache Web e invia una richiesta HTTP per l'oggetto alla cache Web. 
2. La cache Web verifica se dispone di una copia dell'oggetto memorizzata localmente. In tal caso, la cache Web restituisce l'oggetto all'interno di un messaggio di risposta HTTP al browser client. 
3. Se la cache Web non contiene l'oggetto, apre una connessione TCP al server di origine. La cache Web invia quindi una richiesta HTTP per l'oggetto nella connessione TCP cache-server. Dopo aver ricevuto questa richiesta, il server di origine invia l'oggetto all'interno di una risposta HTTP alla cache Web. 
4. Quando la cache Web riceve l'oggetto, ne memorizza una copia nella sua memoria locale e ne invia una copia, all'interno di un messaggio di risposta HTTP, al browser client.

Si noti che una cache è sia un server che un client allo stesso tempo. Una cache Web può ridurre sostanzialmente il tempo di risposta a una richiesta client. In secondo luogo, le cache Web possono ridurre sostanzialmente il traffico sulla connessione di accesso a Internet di un'istituzione. Il caching Web viene implementato per due motivi. 
1. può ridurre sostanzialmente il tempo di risposta a una richiesta client (La larghezza di banda tra client e cache è spesso maggiore del collo di bottiglia che può esserci tra client e server). 
2. può ridurre sostanzialmente il traffico sulla connessione di accesso a Internet di un'istituzione. Riducendo il traffico, l'istituzione non deve aggiornare la larghezza di banda, riducendo così i costi (La somma da pagare agli ISP di livello superiore si riduce).
![[WebCaching.png]]
#### Il GET condizionale 
Sebbene la memorizzazione nella cache possa ridurre i tempi di risposta percepiti dall'utente, introduce un nuovo problema: la copia di un oggetto residente nella cache potrebbe essere obsoleta, ovvero l'oggetto ospitato nel server Web potrebbe essere stato modificato da quando la copia è stata memorizzata nella cache del client. 
HTTP dispone di un meccanismo che consente a una cache di verificare che i suoi oggetti siano aggiornati. 
Un messaggio di richiesta HTTP è un cosiddetto messaggio GET condizionale se
1. il messaggio di richiesta utilizza il metodo GET
2. il messaggio di richiesta include una riga di intestazione 'If-Modified-Since:'.

```merm
sequenceDiagram
Client->>Web Cache: GET /fruit/kiwi.gif HTTP/1.1 <br>Host: www.exotiquecuisine.com
Web Cache->>Web Server: GET /fruit/kiwi.gif HTTP/1.1 <br>Host: www.exotiquecuisine.com
Web Server->>Web Cache: HTTP/1.1 200 OK <br>Date: Sat, 3 Oct 2015 15:39:29 <br>Server: Apache/1.3.0 (Unix) <br>Last-Modified: Wed, 9 Sep 2015 09:23:24 <br>Content-Type: image/gif <br>(data data data data data ...) 
Web Cache->>Client: HTTP/1.1 200 OK <br>Date: Sat, 3 Oct 2015 15:39:29 <br>Server: Apache/1.3.0 (Unix) <br>Last-Modified: Wed, 9 Sep 2015 09:23:24 <br>Content-Type: image/gif <br>(data data data data data ...) 
Client->>Web Cache: GET /fruit/kiwi.gif HTTP/1.1 <br>Host: www.exotiquecuisine.com
Web Cache->>Web Server: GET /fruit/kiwi.gif HTTP/1.1 <br>Host: www.exotiquecuisine.com <nr>If-modified-since: Wed, 9 Sep 2015 09:23:24
Web Server->>Web Cache: HTTP/1.1 304 Not Modified <br>Date: Sat, 10 Oct 2015 15:39:29 <br>Server: Apache/1.3.0 (Unix)
```
### HTTP/2
Gli obbiettivi principali per HTTP/2 sono quelli di ridurre la latenza abilitanto il multiplexing di richieste e risposte su una singola connessione TCP. Per motivare la necessità di HTTP/2, ricordiamo che HTTP/1.1 utilizza connessioni TCP persistenti. Ma gli sviluppatori di browser Web hanno scoperto che l'invio di tutti gli oggetti in una pagina Web tramite una singola connessione TCP presenta un problema di blocco Head of Line (HOL). Utilizzando una singola connessione TCP, l'oggetto più grande impiegherà molto tempo per attraversare il collegamento a collo di bottiglia, mentre i piccoli oggetti saranno ritardati in attesa dietro di esso. I browser HTTP/1.1 aggirano questo problema aprendo più connessioni TCP parallele, inviando così oggetti nella stessa pagina web in parallelo al browser. Il controllo della congestione TCP mira a dare a ciascuna connessione TCP che condivide un collegamento una quota uguale della larghezza di banda disponibile di quel collegamento. Aprendo più connessioni TCP parallele per trasportare una singola pagina web, il browser può "barare" e accaparrarsi una porzione maggiore della larghezza di banda del collegamento.

#### Framing HTTP/2
La soluzione HTTP/2 per il blocco HOL consiste nello scomporre ogni messaggio in piccoli frame e nell'intercalare i messaggi di richiesta e risposta sulla stessa connessione TCP. In pratica ogni oggetto che compone la pagina web viene diviso in unità chiamate frame e l'invio dei frame viene parallelizzato per ciascun oggetto. Il framing viene eseguito dal sottolivello di framing del protocollo HTTP/2. Quando un server desidera inviare una risposta HTTP, la risposta viene elaborata dal sottolivello di framing, dove viene scomposta in frame. Il campo di intestazione della risposta diventa un frame e il corpo del messaggio viene scomposto in ulteriori frame. I frame della risposta vengono quindi intercalati dal sottolivello di framing nel server con i frame di altre risposte e inviati tramite l'unica connessione TCP persistente. Quando i frame arrivano al client, vengono prima riassemblati nei messaggi di risposta originali al sottolivello di framing e poi elaborati dal browser come di consueto. Analogamente, le richieste HTTP di un client vengono suddivise in frame e intercalate. Oltre a scomporre ogni messaggio HTTP in frame indipendenti, il sottolivello di framing codifica anche i frame in formato binario. I protocolli binari sono più efficienti da analizzare, generano frame leggermente più piccoli e sono meno soggetti a errori.

#### Prioritizzazione dei messaggi di risposta e push del server
Il sottolivello di framing organizza i messaggi in flussi paralleli di dati destinati allo stesso richiedente. Quando un client invia richieste simultanee a un server, può dare priorità alle risposte che sta richiedendo assegnando un peso compreso tra 1 e 256 a ciascun messaggio. Il numero più alto indica una priorità maggiore. Oltre a ciò, il client dichiara anche la dipendenza di ciascun messaggio da altri messaggi specificando l'ID del messaggio da cui dipende. Un'altra caratteristica di HTTP/2 è la possibilità per un server di inviare più risposte per una singola richiesta client. Oltre alla risposta alla richiesta originale, il server può inviare oggetti aggiuntivi al client, senza che il client debba richiederli. Ciò è possibile poiché la pagina base HTML indica gli oggetti che saranno necessari per il rendering completo della pagina Web. Quindi il server può analizzare la pagina HTML, identificare gli oggetti necessari e inviarli al client prima di ricevere richieste esplicite per tali oggetti.

### Transport Layer Security (TLS) 
Protocollo crittografico che permette una comunicazione sicura dalla sorgente al destinatario fornendo: autenticazione, integrità dei dati e Confidenzialità.
Il funzionamento del protocollo TLS può essere suddiviso in tre fasi principali: Una negoziazione fra le parti dell'algoritmo da utilizzare, scambio delle chiavi e autenticazione e cifratura simmetrica e autenticazione dei messaggi.

## FTP
In una tipica sessione FTP, l'utente desidera trasferire file da o verso un host remoto.
![[FTP.png]]
L'FTP utilizza due connessioni TCP parallele per trasferire un file: una connessione di controllo e una connessione dati. La connessione di controllo viene utilizzata per inviare informazioni di controllo tra i due host, quali l'identificazione dell'utente, la password, i comandi per modificare la directory remota e i comandi per “inserire” e “recuperare” i file. La connessione dati viene utilizzata per inviare effettivamente un file. Poiché l'FTP utilizza una connessione di controllo separata, si dice che l'FTP invii le sue informazioni di controllo fuori banda. 
Quando un utente avvia una sessione FTP con un host remoto, il lato client di FTP (utente) avvia prima una connessione TCP di controllo con il lato server (host remoto) sulla porta server numero 21. Il lato client di FTP invia l'identificazione dell'utente e la password tramite questa connessione di controllo. Il lato client dell'FTP invia anche, tramite la connessione di controllo, i comandi per modificare la directory remota. Quando il lato server riceve un comando per il trasferimento di un file tramite la connessione di controllo (da o verso l'host remoto), il lato server avvia una connessione dati TCP verso il lato client. L'FTP invia esattamente un file tramite la connessione dati e quindi chiude la connessione dati. Se, durante la stessa sessione, l'utente desidera trasferire un altro file, l'FTP apre un'altra connessione dati. Pertanto, con l'FTP, la connessione di controllo rimane aperta per tutta la durata della sessione utente, ma viene creata una nuova connessione dati per ogni file trasferito all'interno di una sessione (ovvero, le connessioni dati non sono persistenti). Durante una sessione, il server FTP deve mantenere lo stato dell'utente. In particolare, il server deve associare la connessione di controllo a un account utente specifico e deve tenere traccia della directory corrente dell'utente mentre questi naviga nell'albero delle directory remote. Tenere traccia di queste informazioni di stato per ogni sessione utente in corso limita in modo significativo il numero totale di sessioni che FTP può mantenere contemporaneamente. 
![[TCP_Ports.png]]
#### Comandi e risposte FTP
I comandi, dal client al server, e le risposte, dal server al client, vengono inviati attraverso la connessione di controllo in formato ASCII a 7 bit. 
Ogni comando termina con un ritorno a capo e un avanzamento riga. Ogni comando è composto da quattro caratteri ASCII maiuscoli, alcuni con argomenti opzionali. 
• USER username: utilizzato per inviare l'identificazione dell'utente al server.
• PASS password: utilizzato per inviare la password dell'utente al server.
• LIST: utilizzato per chiedere al server di inviare un elenco di tutti i file presenti nella directory remota corrente. L'elenco dei file viene inviato tramite una connessione dati.
• RETR filename: utilizzato per recuperare un file dalla directory corrente
dell'host remoto.
• STOR nomefile: utilizzato per memorizzare un file nella directory corrente
dell'host remoto.

Ogni comando è seguito da una risposta, inviata dal server al client. Le risposte sono numeri a tre cifre, con un messaggio opzionale che segue il numero. 

Di seguito sono riportate alcune risposte tipiche:

• 331 Username OK, password required
• 125 Data connection already open; transfer starting
• 425 Can't open data connection
• 452 Error writing file
## Posta elettronica
La posta elettronica è un mezzo di comunicazione asincrono:
le persone inviano e leggono i messaggi quando lo ritengono opportuno, senza dover coordinarsi con gli impegni altrui.
Quando si finisce di comporre il proprio messaggio, il proprio user agent lo invia al proprio server di posta, dove il messaggio viene inserito nella coda dei messaggi in uscita del server di posta.
Quando si vuole leggere un messaggio, il proprio agente utente recupera il messaggio dalla propria casella di posta nel propria server di posta.
I server di posta formano il nucleo dell'infrastruttura della posta elettronica. Ogni destinatario possiede una casella di posta che si trova in uno dei server di posta. Una casella di posta gestisce e mantiene i messaggi che sono stati ricevuti. Un tipico missaggio parte dallo user agent del mittente, poi arriva al server di posta del mittente, poi viaggia fino al server di posta del destinatario dove verrò depositato nella casella di posta del destinatario. Quando il destinatario vuole leggere i messaggi in arrivo si autentica sul proprio server di posta. Se il server di posta del mittente non è in grado di inviare il messaggio al server di posta del destinatario, il messaggio viene conservato in una coda dei messaggi in uscita e il trasferimento verrà riprovato più tardi.
![[PostaElettronica.png]]
## SMTP
Sia il lato client che il lato server di SMTP girano su ogni server di posta. Quando un server di posta invia posta ad altri server di posta, agisce come SMTP client. Quando un server di posta riceve posta da altri server di posta, agisce come SMTP server. 
SMTP trasferisce i messaggi dai server di posta dei mittenti a quelli dei destinatari. SMTP risulta per gli standard odierni particolarmente datato. 
Per esempio restringe il corpo di tutti i messaggi a un semplice ASCII a 7-bit. Ciò fa sì che i dati multimediali vengano codificati in ASCII prima di venir inviati con SMTP.

![[PostaElettronicaEsempio.png]]

È importante osservare che SMTP normalmente non utilizza server di posta intermedi per l'invio di posta, anche quando i due server di posta si trovano agli estremi opposti del mondo. Se il server di posta del destinatario è inattivo, il messaggio rimane nel server di posta di Alice e attende un nuovo tentativo: il messaggio non viene inserito in un server di posta intermedio.

#### Handshaking SMTP
Innanzitutto, il client SMTP stabilisce una connessione TCP sulla porta 25 con il server SMTP. Se il server è inattivo, il client riproverà più tardi. A seguire il server e il client performano un handshaking di livello applicativo. Durante questa fase, il client SMTP indica l'indirizzo e-mail del mittente e l'indirizzo e-mail del destinatario. Una volta fatto ciò, il client invia il messaggio. Il clien poi ripete questo procedimento sulla stessa connessione TCP  nel caso abbia altri messaggi da inviare a quel server; altrimenti chiude la connessione TCP.

#### Struttura di un messaggio SMTP
L'header e il corpo del messaggio sono separati da un riga vuota, ovvero CLRF.
Ogni riga di intestazione contiene testo leggibile, costituito da una parola chiave seguita da due punti e da un valore. Alcune parole chiave sono obbligatorie, altre facoltative. Ogni intestazione deve avere una riga di intestazione 'From:' e una riga di intestazione 'To:'; un'intestazione può includere una riga di intestazione 'Subject:' e altre righe di intestazione facoltative. È importante notare che queste righe di intestazione sono diverse dai comandi SMTP. I comandi in quella sezione facevano parte del protocollo di handshaking SMTP; le righe di intestazione esaminate in questa sezione fanno parte del messaggio di posta elettronica stesso.

### Protocolli di accesso di posta (mail access protocol)
È naturale considerare di installare anche un server di posta sull'host locale del destinatario. Con questo approccio, il server di posta del mittente dialogherebbe direttamente con il PC del destinatario. Se il server di posta del destinatario risiedesse sul suo host locale, esso dovrebbe rimanere sempre attivo e connesso a Internet per ricevere nuova posta, che può arrivare in qualsiasi momento. Invece, un utente tipico esegue un agente utente sull'host locale ma accede alla propria casella di posta memorizzata su un server di posta condiviso sempre attivo. Questo server di posta è condiviso con altri utenti.

## POP3
Data la semplicità del protocollo, la sua funzionalità è piuttosto limitata. POP3 inizia quando l'agente utente (il client) apre una connessione TCP al server di posta (il server) sulla porta 110. Una volta stabilita la connessione TCP, POP3 procede attraverso tre fasi: autorizzazione, transazione e aggiornamento. 
Durante la prima fase, l'agente utente invia un nome utente e una password (in chiaro) per autenticare l'utente. 
Durante la seconda fase, la transazione, l'agente utente recupera i messaggi; sempre durante questa fase, l'agente utente può contrassegnare i messaggi per l'eliminazione, rimuovere i contrassegni di eliminazione e ottenere statistiche sulla posta. 
La terza fase, l'aggiornamento, si verifica dopo che il client ha emesso il comando quit, terminando la sessione POP3; in questo momento, il server di posta elimina i messaggi contrassegnati per l'eliminazione. 
In una transazione POP3, l'agente utente invia comandi e il server risponde a ciascun comando con una risposta. Sono possibili due risposte: +OK (a volte seguito da dati); -ERR, utilizzato dal server per indicare un errore. 

La fase di autorizzazione prevede due comandi principali: 'user \<username\>' e pass \<password\>.

Nella transizione in modalità "scarica ed elimina", lo user agent emetterà i comandi "list", "retr" e "dele".
Nella transazione in modalità "scarica e conserva", lo user agent lascia i messaggi sul server di posta dopo averli scaricati. Il server POP3 non mantiene lo stato tra sessioni diverse, pertanto i messaggi risulteranno sempre come nuovi.

## IMAP 
Ha molte più funzionalità di POP3, ma è più complesso. Un server IMAP assocerà ogni messaggio a una cartella; Quando un messaggio arriva per la prima volta al server, viene associato alla cartella INBOX del destinatario. Il destinatario può quindi spostare il messaggio in una nuova cartella remota creata dall'utente, leggerlo, eliminarlo e così via. IMAP fornisce anche comandi che consentono agli utenti di cercare nelle cartelle remote i messaggi. Un server IMAP mantiene le informazioni sullo stato dell'utente tra le sessioni IMAP, ad esempio i nomi delle cartelle e quali messaggi sono associati a quali cartelle.

### MIME
Multipurpose Internet Mail Extensions (MIME) è uno standard che estende il formato dei messaggi di posta elettronica per supportare testo in set di caratteri diversi da ASCII, nonché allegati di file audio, video, immagini e programmi applicativi. Esistono degli header specifici per MIME tra cui 'MIME-Version:', 'Contet-Transfer-Encoding:' e 'Content-Type:'.
Spesso questo da vita a delle inefficienze: se ad esempio decidessimo di codificare il messaggio in base64, noi staremmo utilizzando 8bit (ASCII supportato da SMTP) per codificarne 6.

## DNS
Il compito principale del domain name system (DNS) di Internet è quello di tradurre gli hostnames in indirizzi IP. Il DNS è: 
1. Un database distribuito implementato tramite una gerarchia di server DNS
2. Un protocollo di livello applicativo che permette agli hosts di interrogare il database distribuito. 

Il protocollo DNS si affida a UDP e utilizza la porta 53.
Il DNS è spesso utilizzato da altri protocolli di livello applicativo.

Altri servizi offerti da DNS sono:
#### Host aliasing
Un host con un hostname complicato può avere uno o più alias. DNS può essere invocato da un applicazione per ottenere l'hostname canonico a partire da un alias.

#### Mail server aliasing
Allo stesso modo anche gli indirizzi di posta elettronica possiedono degli alias.
Ciò può fare in modo che il Web server e il Mail server di un'azienda possano avere alias uguali.

#### Distribuzione del carico
DNS è utilizzato anche per performare ridistribuzione del carico tra server replicati. Site particolarmente trafficati sono replicati su diversi server, ciascuno su un end-system diverso con indirizzi IP diversi. A server replicati viene dato un'insieme di indirizzi IP associati allo stesso alias. Il database DNS contiene al suo interno questo insieme. Quando i client interrogano il DNS per un nome mappato a un insieme di indirizzi, il server risponde con l'intero insieme, ma ruota l'ordine con ogni risposta, ciò aiuta a ridistribuire il traffico equamente tra i diversi server replicati.
### Gerarchia DNS
DNS usa un grande numero di server, organizzate gerarchicamente e distribuiti geograficamente. Nessun server DNS possiede tutte le corrispondenze. Ci sono sostanzialmente 3 classi di server DNS. 
- Server DNS radice. In Internet ci sono 13 root DNS server (chiamati con le lettere da A a M). Anche se ci riferiamo a ciascun dei 13 root DNS server come se fosse un solo server, ciascuno è in verità una rete di server replicati. Complessivamente, ci sono 247 root server.  
- Top-level domain (TLD) servers. Questi server sono responsabili epr i domini  di livello superiore come com, org, net, edu, e gov, e di tutti i domini di livello superiori nazionali come uk, fr, ca, e jp.
- Server DNS di competenza (autorevole). Ogni organizzazione con host pubblicamente accessibili su Internet deve provvedere record DNS pubblicamente accessibile i nomi di tali host ai relativi indirizzi IP. Un'organizzazione possono scegliere se implementare un proprio server DNS autorevole o pagare qualche service provider.
![[GerarchiaDNS.png]]

### Server DNS locale
Esiste un altro tipo di server DNS, il server DNS locale. Ogni ISP possiede un server DNS locale. Quando un host si connette a un ISP, questo fornisce gli indirizzi dei server DNS locali. Quando un host esegue un'interrogazione DNS, questa viene inviata al server DNS locale, che agisce da proxy, inoltrando la query alla gerarchia DNS. 
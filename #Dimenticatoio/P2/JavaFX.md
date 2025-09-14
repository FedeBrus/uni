### Listener
I listener possono essere di 4 tipi
#### External Listener
Questo listener ha bisogno di un riferimento alla nostra applicazione in modo da poterla modificare, tramite i metodi dell'applicazione, in modo che possa modificare la gui in maniera non arbitraria.

#### Internal Listener
Questo listener è dichiarato come classe interna. Indipendentemente dal modificatore che si associa ai campi della applicazione questo listener può accedervi. Questo Listener non ha bisogno di una reference alla applicazione perché tutti i campi e metodi sono visibili.

#### Anonymous Listener
In questo caso si possono istanziare anonimamente classi astratte e interfacce (come EventHandler) ammesso che ne si spceifichi il corpo che implmenta tutti i metodi astratti. Classi anonime possono essere associate a variabili come venir create "on the fly" come parametri attuali. All'interno della classe anonima si può fare accedere a tutto ciò che è nello scope della classe anonima.

#### Applicazione Listener
In questo caso la classe stessa implementa il metodo handle.

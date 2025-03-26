Ciò che può essere fatto con instanceof, spesso si può fare tramite metodi polimorfici e dynamic dispatch.
Guarda esempio inventario.
Invece di ciclare i diversi oggetti e tramite un if con instanceof scegliere come stampare l'oggetto, devo imporre agli oggetti dell'inventario di avere un metodo per venir stampati e ci penserà il dynamic dispatch a scegliere il metodo corretto, chiamando il metodo sulla superclasse astratta.

Con le interfacce il compiler avverte di diamond problems, viene scelto il default più vicino nella gerarchia di ereditarietà.
Allo stesso tempo se due unrelated interfaces hanno un metodo default uguale e ho una classe che le implementa entrambe, questo è un compiler error, perché non sa quale default utilizzare.

Il compilatore controlla i generics ma dopo i parametri diventano effettivamente Object (type erasure). Dunque non si puà eseguire subtype polymorphism con i generics.
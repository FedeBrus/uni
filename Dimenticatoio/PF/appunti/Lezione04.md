rec è una parola chiave che va utilizzata quando si vuole fare una funzione ricorsiva sotto forma di lambda in modo che l'identificativo possa essere referenziato nel body.
```sml
val rec fact = fn 0 => 1 | n => n * fact(n - 1);
```

Per creare funzioni mutualmente ricorsive bisogna usare la parola riservata and.
```sml
fun
	take nil = nil
	| take (x::xs) = x :: (skip xs)
and
	skip nil = nil
	| skip (x::xs) = take xs
;
```
Per poter destruttorare un pattern mantenendo un nome all'intero argument si può usare as:
```sml
fun merge nil M = M
	| merge L nil = L
	| merge (L as x::xs) (M as y::ys) = 
		if x < y then x::(merge xs M)
		else y::(merge L ys);
```

Esiste anche la wildcard _ che è utile semanticamente.

LIMITAZIONI DEL PATTERN MATCHING
non si può utilizzare due volte lo stesso nome quando si fa il deconstruct di un pattern. Piuttosto si usa un if then else.
Nel pattern matching non ci devono essere operatori, operazioni di concatenazione e numeri reali.

Al posto del pattern matching è possibile utilizzare il costrutto case of.
```sml
val daynd = fn n => case n of
	1 => "Monday"
	| 2 => "Tuesday"
	| _ => "Someday"
```

I pattern non devono essere per forza costanti, ad esempio si può fare
```sml
val isNonZero = fn a => case a of
	0 => false
   | x => true
```

let in end viene usato per creare un environment locale. Utile soprattutto quando bisogna decomporre il risultato di una funzione o anche solo recuperarlo nel caso venga usato più volte. Dentro il let possono esserci val, fun, exception, type e datatype.

Se la decomposizione serve nel pattern matching allora ha senso usare as. Altrimenti usare un blocco let va bene.

INPUT E OUTPUT
print("something");
print(Real.toString(x));
print(Int.toString(x));
print(Bool.toString(x));
print(str(x));

Per le stampe tornano utili i compound statements:
```sml
(
	print(Real.toString(x));
	print(Int.toString(y))
)
```

Aprire un file:

val infile = TextIO.openIn("test"); -> TextIO.instream
TextIO.endOfStream(infile) -> bool 
TextIO.inputN(infile, 4) -> string (legge 4 caratteri)
TextIO.inputLine(infile) -> string option
TextIO.closeIn(infile) -> unit
TextIO.input(infile) -> string (legge tutto il file)
TextIO.input1(infile) -> char option
TextIO.lookahead(infile) -> char option (legge il caratter ma lo lascia nello stream)
TextIO.canInput -> int option (chiedi se n caratteri sono disponibili e ti risponde con SOME n o SOME m < n)

valOf: 'a option -> 'a
quindi prende il valore del SOME di un option indiscriminatamente, da usare con cautela perché nel caso fosse NONE allora lancia una Option exception.

ECCEZIONI
```sml
exception Foo;
raise Foo;
```
si possono creare eccezioni con parametri:
```sml
exception Foo of string;
raise Foo("bar");
```
l'handle segue un espressione e serve a gestire le eccezioni:
```sml
exception OutOfRange of int * int;

fun choose n m = if n <= 0 then raise OutOfRange(n, m) 
				 else if m < 0 orelse m > n then raise OutOfRange(n, m) 
				 else if m = 0 orelse m = n then 1 
				 else choose (n - 1) m + choose (n - 1) (m - 1)
				 handle OutOfRange(0, 0) => 1
					  | OutOfRange(n, m) => ( 
							print("out of range: n="); 
							print(Int.toString(n)); 
							print(" m="); 
							print(Int.toString(m)); 
							print("\n"); 
							0 
						  );
```

Sarebbe meglio lasciare la gestione delle eccezioni al chiamante. Guarda il seguente esempio:
```sml
exception OutOfRange of int * int;

fun choose n k = if n <= 0 then raise OutOfRange(n, m)
				else if m < 0 orelse m > n then raise OutOfRange(n, m)
				else if m = 0 orelse m = n then 1
				else choose (n - 1) m + choose (n - 1) (m - 1);

val result = choose 10 2 handle OutOfRange(0, 0) => 1
						  | OutOfRange(n, m) => ( 
							print("out of range: n="); 
							print(Int.toString(n)); 
							print(" m="); 
							print(Int.toString(m)); 
							print("\n"); 
							0 
						  );
```

Le funzioni in ML sono polimorfiche di default.
Ciò che restringe il polimorfismo sono + - * ~ -> interi, div mod -> interi, / -> reali, < > <= >= -> interi, andalso orelse not -> bool, ^ -> stringhe e tutte le funzioni per convertire (str, floor, ord, chr, real, ceil, round, truc).

Ciò che invece permette il polimorfismo sono tuple, liste e operatori di uguaglianza (=, <>).

Un tipo polimorfico garantito di supportare uguaglianza e disuguaglianza viene indicato con il doppio apice ''a. Non fanno parte di questa categoria i numeri reali e le funzioni (ricordarsi che sono valori).

per verificare se una lista è vuota senza forzare un equality type si può usare null(L).
Prima di poter utilizzare l'operatore # per una tupla bisogna che l'arità della tupla sia deducbile staticamente.

Quando una funzione viene passata come parametro ad un altra funzione, viene chiamata attraverso il parametro attuale.

Il call by name può essere simulato ed è quindi un caso particolare di funzioni passate come parametri. In particolare se si usa una funzione senza parametri questa viene valutata ogni volta che viene chiamata nel corpo della funzione.

La policy di binding nei linguaggi è indipendente dalla policy di scoping.
Il deep binding fa si che l'environment della funzione è quello al momento della creazione del link tra procedura e parametro formale.
Lo shallow binding fa si che l'environment venga determinato al momento della chiamata.

Se lo scoping è statico il binding è sempre deep.

La funzione op serve a convertire un operatore infisso a un operatore prefisso:
```sml
foldr (op+) 0 [1,2,3]
```

Funzione Curried: divide i suoi argomenti in modo che vengano parzialmente forniti producento funzioni intermedie che accettano gli argomenti rimanenti.

Esiste un operatore o per fare la composizione di funzioni:
```sml
val H = G o F (* H(x) = G(F(x)) *)
```

RINOMINAZIONE PARAMETRIZZATA DI TIPI
la parola type da sé non è molto utile, serve solo a creare degli alias:
```sml
type signal = int list;
val v:signal = [1, 2];
val w:int list = [1, 2];
v = w;
```
è utile quando si vuole parametrizzare la cosa:
```sml
type ('c, 'd) mapping = ('c * 'd) list;
val words:(string, int) mapping = [(1,2), (2,3)];
type ('a, 'b) tripleList = ('a * 'a * 'b) list;
```

I type constructor sono i nomi dei datatype mentre i data constructor sono i possibili valori. I data constructors possono venire parametrizzati.
Mentre i type sono alias di fatto, i datatype creano nuovi veri e propri tipi.
```sml
datatype ('a,'b) element = P of 'a * 'b 
						 | S of 'a;
```
i datatype possono essere ricorsivi:
```sml
datatype 'a btree = Empty | Node of 'a * 'a btree * 'a btree;
```
o anche mutualmente ricorsive con la keyword and:
```sml
datatype 
	'a eventTree = Empty 
			     | Enode of 'a * 'a oddTree * 'a oddTree
and
	'a oddTree = Onode of 'a * 'a evenTree * 'a evenTree;
```

### Tipi di dato astratti
L'idea di base sta nel separare l'interfaccia dall'implementazione.
- Interfaccia: tipi e operazioni che sono accessibili all'utente.
- Implementazione: struttura interna dei dati e delle operazioni che agiscono su tali dati.

La caratteristiche dei ADT sono:
- Un nome
- Un'implementazione per il tipo (tipo concreto)
- Nomi che denotino le operazioni per manipolare i valori del tipo
- Per ogni operazione, un'implmentazione che usi la rappresentazione concreta del tipo.
- Una capsula di sicurezza che separi i nomi del tipo e delle operazioni dalle rispettive implmentazioni


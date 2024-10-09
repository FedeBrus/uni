I tipi derivati si creano tramite i seguenti costrutti
- riferimenti
- puntatori
- array
- strutture
- unioni*
- classi*

\*non vedremo nel corso

## Struttura della memoria di un programma

C'è una zona contesa tra stack e dati dinamici. Ogni area di memoria è dotata di un indirizzo.

## Riferimento

Il riferimento è un meccanismo messo a disposizione dal C++ per dare più nomi ad una stessa area di memoria (qualunque espressione dotata di indirizzo). Sono un modo per creare dei sinonimi.

```cpp
int x = 1;
int &y = x;
y = 6; // viene modificata anche x = 6
```

Se io modifico il riferimento vado a modificare l'area di memoria referenziata.

##### L'inizializzazione è obbligatoria

```cpp
int &y; // è un errore
```

##### Non è possibile ridefinire un riferimento precedentemente definito

```cpp
double x1, x2;
double &y = x1;
double &y = x2; // errore, già definito
```

##### Non è possibile definire un riferimento a un'espressione non dotata di indirizzo o a un'espressione di tipo diverso

```cpp
float &y = 10.2; // errore
double d = 3.1;
int &z = d; // errore
```

## Operatore address-of "&"

L'operatore ritorna l'indirizzo dell'espressione a cui è applicato.

```cpp
int l = 10;
cout << &l << endl; // ok
cout << &(l + 5) << endl // errore, non ha indirizzo
int n = 10;
int &r = n; // &r == &n (ricorda la differenza di & nella definizione di un riferimento e l'operatore &)
```

## Puntatore

Il puntatore contiene l'indirizzo di un altro oggetto, i.e. l'r-value di un puntatore è un indirizzo.

```cpp
int y;
int *x = &y;
```

La dimensione di un puntatore è invariata, un'indirizzo di memoria è indipendente dal tipo di dato che sto rappresentando.

## Operatore di dereference "\*"

```cpp
int x = 0;
int *px;
px = &x;
*px = x + 1; // x = 1
```

Esempio:

```cpp
int i, j;
int *p, *q;
p = &i;
q = &j;
*q = *p; // j = i
q = p; // ora sia q che p puntano a i
```

## Puntatori a void

A volte è utile avere un puntatore generico, con tipo void.

```cpp
int i; int *pi = &i;
char c; char *pc = &c;
void *tp;
tp = pi;
*(int *)tp = 3;
*(char *)tp = 'z';
```

## Puntatori a costante

Non permettono di modificare l'oggetto puntato tramite dereference del puntatore stesso, ma allo stesso tempo *non rendono l'oggetto puntato una costante!*

```cpp
const int c1 = 3; int c2 = 5;
const int *pc1 = &c1;
const int *pc2 = &c2;
pc2 = pc1;
pc1 = &c2;
*pc1 = 2; // errore
c1 = 0; // ok
c2 = 2; // ok
```

## Costanti puntatore

Non permettono di puntare ad un altro oggetto, ma l'oggetto *può essere modificato tramite dereference del puntatore stesso!*

```cpp
int a, b;
int *const pa = &a;
*pa = 3;
pa = &b; // errore
```

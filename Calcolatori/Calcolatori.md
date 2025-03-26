## Aritmetica dei calcolatori
### Conversioni Unsigned
### Somme Unsigned
### Sottrazioni Unsigned
### Moltiplicazioni per potenze di 2 Unsigned
### Moltiplicazioni Unsigned
### Modulo e segno
$k-1$ bit per rappresentare il modulo del segno. $1$ bit più significativo per il segno.
Range: $[-2^{k-1} + 1, 2^{k-1}-1]$
Due rappresentazioni di $0$: $1 \overbrace{ 0\dots 0 }^{ k-1 }, 0 \overbrace{ 0\dots 0 }^{ k-1 }$.
Le operazioni aritmetiche sono difficili da gestire.
### Complemento a 1
I numeri negativi si rappresentano facendo il complemento a 1.
Eseguire il complemento a 1 vuol dire:
- invertire tutti i bit.
- $(2^{k} - 1)_{2} - x$.
Anche in questo caso i positivi hanno come bit più significativo $0$ e i negativi $1$.
Range: $[-2^{k-1} + 1, 2^{k-1}-1]$
Due rappresentazioni di $0$: $1 \overbrace{ 1\dots 1 }^{ k-1 }, 0 \overbrace{ 0\dots 0 }^{ k-1 }$.

Somma:
- somma semplice
- riporto finale sommato al risultato
- se i segni degli operandi sono concordi ma diversi dal risultato: overflow

### Complemento a 2
Eseguire il complemento a 2 vuol dire:
- faccio il complemento a 1 di $x$, poi sommo $1$.
- faccio il complemento a 1 a partire dal primo $1$ da destra.
- $(2^{k})_{2} - x = 1\overbrace{ 0\dots 0 }^{ k-1 } - x$

I numeri negativi si rappresentano facendo il complemento a 2.
Anche in questo caso i positivi hanno come bit più significativo $0$ e i negativi $1$.
Range: $[-2^{k-1}, 2^{k-1}-1]$

Per convertire un numero negativo in complemento a 2 in decimale bisogna fare il complemento a 1 e poi sommare $1$ e infinde convertire normalmente.

In complemento a 2 ci sono gli stessi criteri per determinare l'overflow.

### Overflow 
Calcolando $(a+b) = (a+b) \% 2^{k}$.

### Virgola fissa
Dato un numero $k$ di cifre si possono dedicare $k-f$ cifre per rappresentare la parte intera e $f$ per la parte decimale.
$$
x_{10} = \sum_{i=0}^{k-1} c_{i} B^{i-f} = \sum_{i=0}^{k-1} c_{i}B^{i} \cdot B^{-f} = \left( \sum_{i=0}^{k-1} c_{i}B^{i}  \right) \cdot B^{-f}
$$
Quindi possiamo convertire il numero in base 10 come se non avesse la virgola e poi moltiplicare per $B^{-f}$.

Quindi eseguire le operazioni è semplice, basta farle normalmente e riscalare il risultato.

Gli svantaggi emergono quando la nostra applicazione abbraccia più ordini di grandezza.

### Conversione virgola fissa
Da binario a decimale:
Si può fare come detto sopra o considerando le potenze di 2 negativi dopo la virgola.

Da decimale a binario:
La parte intera si converte normalmente. La parte decimale la si continua a moltiplicare per 2 e si trascrive da sinsitra a destra dopo la virgola la parte intera ad ogni iterazione. Se la parte intera diventa 1 allora si ripete l'operazione considerando come parte intera 0. Quando si arriva a 1 l'iterazione termina.

### Virgola mobile
Ogni numero reale $x$ può essere riscritto come:
$$
x = M \cdot B^{E}
$$
con $M$ mantissa e $E$ esponente.
Con $k$ bit si assegnano $m$ bit alla mantissa e $k-m = e$ bit all'esponente.
$B = 2$ implicitamente. Il segno è quello della mantissa.

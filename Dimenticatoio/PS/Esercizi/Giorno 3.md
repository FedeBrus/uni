In una classe ci sono 13 ragazzi e 25 ragazze. L'insegnante ha bisogno di 7 studenti cui far svolgere un certo progetto.
1) Quanti sono i possibili gruppi formati da 4 ragazzi e da 3 ragazzi.

Siccome si parla di gruppi di studenti non conta l'ordine e non possono esserci ripetizioni, quindi utilizziamo le combinazioni.
Il conto è $C_{13,4} \cdot C_{25, 3} = \binom{13}{4} \binom{25}{3} = 715 \cdot 2300 = 1644500$.

2) Qual è la probabilità che nel gruppo di studenti scelti per il progetto ci siano 4 ragazzi e 3 ragazze.
Per calcolare la probabilità basta fare il rapporto tra casi favorevoli e i casi totali, gli ultimi sono dati da $\binom{38}{7} = 12620256$.
Dunque la probabilità è: $P(A) = \frac{1644500}{12620256} = \frac{37375}{286824} \approx 0.13$.

3) Quanti sono i possibili gruppi di 10 studenti tali che:
	- Il numero di ragazze sia strettamente maggiore del numero di ragazzi 
	- Contengano almeno 1 ragazzo

I possibili gruppi sono dati da:
$$
\binom{13}{1}\binom{25}{9} + \binom{13}{2}\binom{25}{8} + \binom{13}{3} \binom{25}{7} + \binom{13}{4}\binom{25}{6} = 375028225
$$
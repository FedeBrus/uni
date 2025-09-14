Vogliamo disegnare una nuova bandiera, formata da tre strisce verticali colorate.
Vogliamo, inoltre, che il colore della striscia centrale sia diverso da quello delle altre due.

1) Quante possibili bandiere diverse possiamo creare con 6 colori?
Possiamo calcolare tutte le combinazioni considerando il fatto che possiamo scegliere qualsiasi colore centrale tra i 6 colori, mentre le strisce laterali potranno scegliere tutti i colori tranne quello scelto.
Dunque $N = 6 \cdot 5 \cdot 5 = 150$

2) Consideriamo ora le possibili bandiere ottenute: qual è la probabilità di avere una bandiera con solo due colori?
Conosciamo già tutti i casi possibili, contiamo ora i casi favorevoli: siccome la striscia centrale deve essere diversa dalle altre due, per
avere solamente 2 colori bisogna considerare una bandiera che ha le bande laterali dello stesso colore, dunque la probabilità è:
$$
\frac{6\cdot 5}{150} = \frac{1}{5}
$$

3) Consideriamo come sopra le possibili bandiere ottenute: qual è la probabilità di avere una bandiera con tre colori?
Per avere tre colori è necessario che tutte le strisce abbiano colori diversi, dunque:
$$
\frac{6 \cdot 5 \cdot 4}{150} = \frac{4}{5}
$$
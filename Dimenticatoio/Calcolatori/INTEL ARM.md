# Topics 

## Intel

- nomi, numero, dimensione dei registri
- come sono suddivisi?
- quanti argomenti e quali?
- quanti valori di ritorno e quali?
- quali sono i registri preservati?
- quali sono i non presrvati?

rax NP
rbx P
rcx NP
rdx NP
rdi NP
rsi NP
rbp P
rsp NP
r8 NP
r9 NP
r10 NP
r11 NP
r12 P
r13 P
r14 P
r15 P

- tipi di operandi
- vincoli
- modalità di indirizzamento a memoria
- quanti bit il displacement?
- suffissi di dimensione

- movimento dati 
- movimetno dati con estensione 
- aritmetiche
- aritmetiche con carry
- mul div unsigned
- incrementi, decrementi
- shift, rotazioni
- logiche
- negazione
- nulla
- flag setting and clearing
- push e pop
- comparazione
- salti incondizionati e condizionati signed and unsigned
- call
- ret
- cosa succede se si usano operazioni con dst registro a 32 bit?
- mov con estensione di segno e src, dst di dimensinoe diversa
- perché si usa lea?
- cosa ci si guadagna ad avere più operazioni più specifiche

## ARM

- quanti registri e di che dimensioni?
- come sono chiamati?
- quali sono i flag principali?
- convenzioni di chiamata
- quali registri vengono preservati 

r0 NP
r1 NP
r2 NP
r3 NP
r12 NP
r9 (solo in certe ABI)

- tipi di operandi
- operazioni accesso a memoria
- come funziona l'indirizzamento in ARM?
- differenza pre indexed e post index 
- differenza pre indexed con e senza writeback
- come funzionano le istruzioni condizionali?
- come settare i flag (2 metodi)?
- come funziona il terzo operando?
- add, adc, sub, sbc, rsb, rsc
- and, orr, eor 
- bic
- mul, mla
- esiste divisione?
- movimenti e movimenti negati
- branch
- operazioni di comparazione
- load e store 
- load e store per meno bit
- load e store multiple
- push e pop con load e store multiple


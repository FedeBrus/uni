#include <iostream>
#include <cstdlib>

using namespace std;

// Struttura "Nodo":
// - valore: il valore del nodo
// - prossimo: puntatore al nodo successivo (stesso livello)
// - figlio: puntatore alla testa della lista del livello sottostante
struct Nodo {
    int valore;
    Nodo* prossimo;
    Nodo* figlio;
};

// Funzione per generare una lista concatenata 
// multilivello in maniera casuale. E' possibile 
// modificare i parametri sottostanti per regolare 
// la generazione della lista concatenata multilivello
Nodo* creaListaConcatenataMultilivello() {

    Nodo* testa = nullptr;

    // Crea un livello della lista concatenata multilivello
    int dimensioneLivello = 5;
    Nodo* nodoCorrente = nullptr;
    for (int i = 0; i < dimensioneLivello; i++) {
        Nodo* nuovoNodo = new Nodo;
        nuovoNodo->valore = rand() % 90 + 10;
        nuovoNodo->prossimo = nullptr;
        nuovoNodo->figlio = nullptr;
        
        if (testa == nullptr) {
            testa = nuovoNodo;
        } else {
            nodoCorrente->prossimo = nuovoNodo;
        }
        nodoCorrente = nuovoNodo;
    }

    // Crea un ulteriore livello con probabilità al 50%
    if (rand() % 2 != 0) {

        // Scegli a caso un nodo del livello corrente
        int numeroNodoConFiglio = rand() % dimensioneLivello;
        Nodo* nodoConFiglio = testa;
        for (int i = 0; i < numeroNodoConFiglio; i++) {
            nodoConFiglio = nodoConFiglio->prossimo;
        }

        // Crea una lista sottostante al nodo scelto
        nodoConFiglio->figlio = creaListaConcatenataMultilivello();
    }

    return testa;
}

// Funzione per stampare una lista concatenata multilivello
void stampaListaConcatenataMultilivello(Nodo* testa, int numeroDiSpaziVuoti = 0) {
    
    // Stampa l'indentazione
    for (int i = 0; i < numeroDiSpaziVuoti; i++) {
        cout << "   ";
    }

    // Stampa il livello corrente, calcolando l'indentazione per il livello
    // sottostante e mantenendo un riferimento al nodo di testa del livello
    // sottostante (se presente)
    Nodo* testaProssimoLivello = nullptr;
    while (testa != nullptr) {
        cout << testa->valore << " ";

        if (testa->figlio != nullptr) {
            testaProssimoLivello = testa->figlio;
        }
        else if (testaProssimoLivello == nullptr) {
            numeroDiSpaziVuoti++;
        }
        testa = testa->prossimo;
    }
    cout << endl;
    
    // Stampa il livello sottostante (se presente)
    if (testaProssimoLivello != nullptr) {
        stampaListaConcatenataMultilivello(testaProssimoLivello, numeroDiSpaziVuoti);
    }
}

// Funzione per stampare la matrice
void stampaMatrice(int** matrice, int righe, int colonne) {
    for (int i = 0; i < righe; i++) {
        for (int j = 0; j < colonne; j++) {
            cout << matrice[i][j] << " ";
        }
        cout << endl;
    }
}

// Funzione per calcolare il numero di righe e colonne della 
// matrice corrispondente alla lista concatenata multilivello
// fornita attraverso il parametro formale "testa". Ritornare
// il numero delle righe e colonne modificando i parametri 
// formali passati per riferimento "righe" e "colonne"
void calcolaNumeroDiRigheEColonne(Nodo* testa, int & righe, int & colonne) {
    Nodo* testaProssimoLivello = nullptr;
    
    while (testa != nullptr) {
        if (testa->figlio != nullptr) {
            testaProssimoLivello = testa->figlio;
        }
        else if (testaProssimoLivello == nullptr) {
            colonne++;
        }
        testa = testa->prossimo;
    }
    righe++;
    
    if (testaProssimoLivello != nullptr) {
        calcolaNumeroDiRigheEColonne(testaProssimoLivello, righe, colonne);
    }
}

// Funzione per deallocare la matrice
void deallocaMatrice(int** matrice, int righe) {
    for (int i = 0; i < righe; i++)
        delete[] matrice[i];
    
    delete[] matrice;
}

// Funzione per deallocare la lista concatenata multilivello
void deallocaLista(Nodo* testa) {
    Nodo* testaLivelloCorrente = testa;

    while (testaLivelloCorrente != nullptr) {
        Nodo* nodoCorrente = testaLivelloCorrente;
        testaLivelloCorrente = nullptr;

        while (nodoCorrente != nullptr) {
            if (nodoCorrente->figlio != nullptr) {
                testaLivelloCorrente = nodoCorrente->figlio;
            } 
            Nodo* prossimoNodo = nodoCorrente->prossimo;
            delete nodoCorrente;
            nodoCorrente = prossimoNodo;
        }
    }
}



// ==== MODIFICARE IL CODICE QUI SOTTO ====

// Funzione per creare una matrice da una lista concatenata multilivello 
// fornita attraverso il parametro formale "testa". La matrice avrà le
// dimensioni specificate dai parametri formali "righe" e "colonne"
int** convertiListaInMatrice(Nodo* testa, int righe, int colonne) {
    int** m = nullptr;
    if (righe > 0 && colonne > 0 && testa != nullptr) {
        m = new int*[righe];
        for (int i = 0; i < righe; i++) {
            m[i] = new int[colonne];
        }

        for (int i = 0; i < righe; i++) {
            for (int j = 0; j < colonne; j++) {
                m[i][j] = -1;
            }
        }

        int idx;
        int depth = 0;
        int current_sublevel_idx = -1;
        int prev_sublevel_idx = 0;
        Nodo* sublevel_start = nullptr;

        do {
            sublevel_start = nullptr;
            idx = prev_sublevel_idx;

            while (testa != nullptr) {
                m[depth][idx] = testa->valore;

                if (testa->figlio != nullptr) {
                    sublevel_start = testa->figlio;
                    current_sublevel_idx = idx;
                }

                testa = testa->prossimo;
                idx++;
            }

            testa = sublevel_start;
            prev_sublevel_idx = current_sublevel_idx;
            depth++;
        } while (sublevel_start != nullptr);
    }
    return m;
}

// ==== MODIFICARE IL CODICE QUI SOPRA ====

    
    
int main() {

    srand(time(NULL));

    // Crea una lista concatenata multilivello
    Nodo* testa = creaListaConcatenataMultilivello();
    
    // Stampa a video la lista concatenata multilivello
    cout << "Stampa lista concatenata multilivello" << endl;
    stampaListaConcatenataMultilivello(testa);
    
    // Calcola il numero di righe e il numero di colonne
    int righe = 0;
    int colonne = 0;
    calcolaNumeroDiRigheEColonne(testa, righe, colonne);

    // Converti la lista concatenata multilivello in una matrice
    int** matrice = convertiListaInMatrice(testa, righe, colonne);

    // Stampa la matrice
    cout << endl << "Stampa matrice" << endl;
    stampaMatrice(matrice, righe, colonne);
    
    // Dealloca la matrice
    deallocaMatrice(matrice, righe);

    // Dealloca la lista concatenata multilivello
    deallocaLista(testa);
    
    return 0;
}

#include <iostream>
#include <cstdlib>

struct nodo {
    int valore;
    nodo* nodoPrecedente;
    nodo* nodoSuccessivo;
};
typedef nodo* lista;

using namespace std;


void inizializza (int arrayDiInteri [], int dimensioneArray);
void stampaLista (lista nodoCorrente);

// Inserire qui la dichiarazione di "creaLista" e "rimuoviNodiAlternati"
lista creaLista(int arrayDiInteri [], int dimensioneArray);
void inserisci(lista& l, int x);
bool rimuoviNodiAlternati_aux(lista& l);
lista rimuoviNodiAlternati(lista& l);
void deallocaLista(lista& l);

int main() { 

    // Non modificare la funzione "main". Si può invece (temporaneamente)
    // modificare la funzione "inizializza" per dare dei valori specifici
    // agli elementi dell'array "arrayDiInteri" ai fini di debugging.

    int dimensioneArray = 8;
    int arrayDiInteri[dimensioneArray];
    inizializza(arrayDiInteri, dimensioneArray);

    lista nodoIniziale = creaLista(arrayDiInteri, dimensioneArray);

    cout << "Lista iniziale: ";
    stampaLista(nodoIniziale);

    nodoIniziale = rimuoviNodiAlternati(nodoIniziale);

    cout << "Risultato: ";
    stampaLista(nodoIniziale);
    deallocaLista(nodoIniziale);

    return 0;
}

void inizializza (int arrayDiInteri [], int dimensioneArray) {
    
    // Si può (temporaneamente) modificare la funzione "inizializza" 
    // per dare dei valori specifici agli elementi dell'array "arrayDiInteri" 
    // ai fini di debugging. Ricordarsi tuttavia di ristabilire il codice
    // originale prima di consegnare l'esercizio.

    srand(time(NULL));

    for (int i = 0 ; i < dimensioneArray ; i++) {
        arrayDiInteri[i] = i % 3;
    }

    int contatore = dimensioneArray;
    while (contatore > 1) {
       int indice = rand() % contatore;
       contatore--;
       int temp = arrayDiInteri[contatore];
       arrayDiInteri[contatore] = arrayDiInteri[indice];
       arrayDiInteri[indice] = temp;
    }
}

void stampaLista(nodo* nodoCorrente) {

    // Non modificare la funzione "stampaLista"

    while (nodoCorrente != NULL) {
        cout << nodoCorrente->valore << " ";
        nodoCorrente = nodoCorrente->nodoSuccessivo;
    }
    cout << endl;
}


// Inserire qui la definizione di "creaLista", "rimuoviNodiAlternati" e di eventuali altre funzioni ausiliarie
lista creaLista(int arrayDiInteri [], int dimensioneArray) {
    lista l = nullptr;
    for (int i = 0; i < dimensioneArray; i++) {
        inserisci(l, arrayDiInteri[i]);
    }
    return l;
}

void inserisci(lista& l, int x) {
    nodo* m = new nodo();
    m->valore = x;
    m->nodoPrecedente = nullptr;
    m->nodoSuccessivo = l;

    if (l != nullptr) {
        l->nodoPrecedente = m; 
    }

    l = m;
}

lista rimuoviNodiAlternati(lista& l) {
    while (rimuoviNodiAlternati_aux(l)) {}
    return l;
}

bool rimuoviNodiAlternati_aux(lista& l) {
    bool rimosso = false;
    if (l == nullptr || l->nodoSuccessivo == nullptr || l->nodoSuccessivo->nodoSuccessivo == nullptr) {
        return rimosso;
    }

    lista c = l;
    while (!rimosso && c->nodoSuccessivo->nodoSuccessivo != nullptr) {
        if (c->valore != c->nodoSuccessivo->nodoSuccessivo->valore) {
            nodo* tmp = c->nodoSuccessivo->nodoSuccessivo;
            c->nodoSuccessivo->nodoSuccessivo = c->nodoSuccessivo->nodoSuccessivo->nodoSuccessivo;
            if (c->nodoSuccessivo->nodoSuccessivo != nullptr) {
                c->nodoSuccessivo->nodoSuccessivo->nodoPrecedente = c->nodoSuccessivo;
            }
            delete tmp;

            if (c->nodoPrecedente != nullptr) {
                c->nodoPrecedente->nodoSuccessivo = c->nodoSuccessivo;
                c->nodoSuccessivo->nodoPrecedente = c->nodoPrecedente;
            } else {
                c->nodoSuccessivo->nodoPrecedente = nullptr;
                l = c->nodoSuccessivo;
            }
            delete c;
            rimosso = true;
        } else {
            c = c->nodoSuccessivo;
        }
    }

    return rimosso;
}

void deallocaLista(lista& l) {
    if (l != nullptr) {
        lista c = l;
        while (c != nullptr) {
            delete c;
            c = c->nodoSuccessivo;
        }

        l = nullptr;
    }
}
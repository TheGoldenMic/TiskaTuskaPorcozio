#include <iostream>
#include <time.h>
#include <fstream>

using namespace std;

#define MAX 100

#define INPUT_FILE  "input.txt"
#define OUTPUT_FILE "output.txt"

// INPUT/OUTPUT
void Leggi  (     char[][MAX], int&);
void Stampa (     char[][MAX], int );
void Esporta(int, char[][MAX], int );

// Cose serie
int CalcolaLastroni(char[][MAX], int);

// UTILITIES
void CaricamentoFake();
void sleep(time_t);

// ========================== ============ ==========================

int main(){
    char scack[MAX][MAX];
    int dim, lastroni;

    Leggi(scack, dim);

    Stampa(scack, dim);

    lastroni = CalcolaLastroni(scack, dim);

    Esporta(lastroni, scack, dim);

    return 0;
}

// ========================== INPUT/OUTPUT ==========================

void Leggi(char scack[][MAX], int& dim){
    ifstream file;

    file.open(INPUT_FILE);
    
    file >> dim;

    for (int i = 0; i < dim; ++i){
        for (int j = 0; j < dim; ++j){
            file >> scack[i][j];
        }
    }

    file.close();
    return;
}

void Stampa(char scack[][MAX], int dim){
    for (int i = 0; i < dim; ++i){
        for (int j = 0; j < dim; ++j){
            cout << scack[i][j] << " ";
        }
        cout << endl;
    }
    return;
}

void Esporta(int lastroni, char scack[][MAX], int dim){
    ofstream file;

    file.open(OUTPUT_FILE);
    
    file << lastroni;

    file.close();
    return;
}

// ========================== COSE SERIE ==========================

int CalcolaLastroni(char scack[][MAX], int dim){
    // Se non fosse chiaro, è da fare
    return 2;
}

// ========================== UTILITIES ==========================

void sleep(time_t secs){ // Perché sì
    time_t when = time(NULL) + secs;
    while (time(NULL) != when){
        int i = 0;
    }
}

void CaricamentoFake(){
    cout << "Caricamento del percorso in corso . . .\n";

    sleep(3);

    return;
}

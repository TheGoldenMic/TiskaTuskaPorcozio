#include <iostream>
#include <fstream>

using namespace std;

#define MAX 64

#define INPUT_FILE  "input.txt"
#define OUTPUT_FILE "output.txt"

// INPUT/OUTPUT
void Leggi (char[][MAX], int&);
void Stampa(char[][MAX], int );

int main(){
    char scack[MAX][MAX];
    int dim;

    Leggi(scack, dim);

    Stampa(scack, dim);

    return 0;
}

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
}
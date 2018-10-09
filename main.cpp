#include <iostream>
#include <cstdlib>
#include <stdio.h>
#include <iomanip>
#include <random>
#include <ctime>

using namespace std;

//Funcion para imprimir la cuadricula vacia del sudoku

void printMatrizVacia (int matriz [][9], const int n, const int m)
{
    const char intersec = '*';
    const char borde_h = '-';
    const char borde_v= '|';

    for (int i=0; i<=(n+3);i++){
        if (i%4==0){
            for (int j=0; j<=(n+3); j++)
            {
                if (j%4==0){
                    cout<<intersec;
                }
                else
                    cout<<borde_h;
            }
            cout<<endl;
        }
        else{
            for (int j =0; j<=(n+3); j++)
            {
                if (j%4==0){
                    cout<<borde_v;
                }
                else{
                    cout<<" ";
                }
            }
            cout<<endl;
        }
    }

}
using namespace std;
void printMatrizLlena1 (int matriz [][9], const int n, const int m) {
    const char intersec = '*';
    const char borde_h = '-';
    const char borde_v = '|';

    for (int i = 0; i <= (n + 3); i++) {
        if (i % 4 == 0) {
            for (int j = 0; j <= (n + 3); j++) {
                if (j % 4 == 0) {
                    cout << intersec;
                } else
                    cout << borde_h;
            }
            cout << endl;
        } else {
            for (int j = 0; j <= (n + 3); j++) {
                if (j % 4 == 0) {
                    cout << borde_v;
                } else {
                    int r;

                    r = (rand() % 9) + 1;
                    cout << r;
                }
            }
            cout << endl;
        }
    }
    int aux=0;
    int aux02=0;
    for (int k = 1; k <= (n + 3); k++) {
        aux = k;
        for (int z = 1; z <= (n + 3); z++) {
            aux02 = z;
        }
    }
    if ((rand() % 9)+1 != aux)
        if ((rand() % 9)+1 != aux02) {
            cout << "INCORRECTO :(";

        } else {
            cout << "CORRECTO :)";
        }
}



bool search(int matriz[][9]);
bool esValido(int matriz[][9]);

int main() {
    const int n = 9;
    const int m = 9;
    int matriz_sudoku[n][m];
    printMatrizVacia(matriz_sudoku, n, m);
    printMatrizLlena1(matriz_sudoku, n, m);


    return 0;
}

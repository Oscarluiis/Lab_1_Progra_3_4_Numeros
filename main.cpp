#include <iostream>
#include <stdio.h>
using namespace std;
int main() {

    int cantidadEntradas=0;
    int numeros[4];
    while (cantidadEntradas < 4){
        cout<<"\nNumero "<< cantidadEntradas+1<<" :";
        int num;
        cin>>num;
        numeros[cantidadEntradas]=num;
        cantidadEntradas++;
    }
    int aux;
    for(int i=0; i < 4; i++){
        for (int j = 0; j < 4; ++j) {
            if (numeros[j] > numeros[j + 1]) {
                aux = numeros[j];
                numeros[j] = numeros[j + 1];
                numeros[j + 1] = aux;

            }
        }
    }
cout<<"Numeros ordenados "<<endl;
    for (int k = 0; k < 4; ++k) {
    cout<<numeros[k]<<endl;
    }
    return 0;

}
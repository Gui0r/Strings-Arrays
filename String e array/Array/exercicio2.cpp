#include <iostream>
#include <locale.h> 

using namespace std;

int main(){
     setlocale(LC_ALL, "pt_BR.UTF-8");

    int array[2] = {};
    int indice;

    cout << "Digite 3 números: ";
    cin >> array[0];
    cin >> array[1];
    cin >> array[2];
    
    cout << "Digite um número indice para o array: ";
    cin >> indice;
    
    switch (indice)
    {
    case 0:
        cout << array[0];
        break;
    
    case 1:
        cout << array[1];
        break;
    
    case 2:
        cout << array[2];
        break;
    }



}
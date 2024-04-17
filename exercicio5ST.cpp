#include <iostream>
#include <locale.h>
#include <string>

using namespace std;

int main(){
    setlocale(LC_ALL, "pt_BR.UTF-8");

    char array[19] = {};

    cout << "Digite uma frase de 20 letras ou menos LETRA por LETRA: "; 
    cin >> array[0];
    cin >> array[1];
    cin >> array[2];
    cin >> array[3];
    cin >> array[4];
    cin >> array[5];
    cin >> array[6];
    cin >> array[7];
    cin >> array[8];
    cin >> array[9];
    cin >> array[10];
    cin >> array[11];
    cin >> array[12];
    cin >> array[13];
    cin >> array[14];
    cin >> array[15];
    cin >> array[16];
    cin >> array[17];
    cin >> array[18];
    cin >> array[19];

/*
se fossemos utilizar um loop ficaria assim
for(int i = 0; i <= 19; i++){
        cin >> array[i];
    }
*/


    cout << "Sua frase é: " << array;
}
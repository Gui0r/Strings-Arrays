#include <iostream>
#include <locale.h>

using namespace std;

int main(){
    setlocale(LC_ALL, "pt_BR.UTF-8");
    char array[9] = {};

    cout << "Digite uma palavra de 10 letras para armazenar em um array: ";
    cin >> array;

    cout << "A palavra digitada é: " << array;
}
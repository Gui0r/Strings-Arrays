#include <iostream>
#include <locale.h>

using namespace std;

int main(){
    setlocale(LC_ALL, "pt_BR.UTF-8");

    string array[5] = {"Maça", "Pêssego", "Banana", "Abacaxi", "Kiwi"};

    cout << array[2];

}


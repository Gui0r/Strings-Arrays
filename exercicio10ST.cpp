#include <iostream>
#include <locale.h>

using namespace std;

int main(){
    setlocale(LC_ALL, "pt_BR.UTF-8");
    int num;
    string array[7] = {"Segunda-feira", "Terça-feira", "Quarta-feira", "Quinta-feira", "Sexta-feira", "Sabádo", "Domingo"};

    cout << "Digite um número de 1 a 7: ";

    cin >> num;

    switch (num)
    {
    case 1:
        cout << array[0];
        break;
    case 2:
        cout << array[1];
        break;
    case 3:
        cout << array[2];
        break;
    case 4:
        cout << array[3];
        break;
    case 5:
        cout << array[4];
        break;
    case 6:
        cout << array[5];
        break;
    case 7:
        cout << array[6];
        break;
    }
}
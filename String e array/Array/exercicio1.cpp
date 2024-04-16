#include <iostream>
#include <locale.h> 

using namespace std;

int main(){
     setlocale(LC_ALL, "pt_BR.UTF-8");

     int array[5] = {};

     cout << "Digite 5 números inteiros: ";

     cin >> array[0];
     cin >> array[1];
     cin >> array[2];
     cin >> array[3];
     cin >> array[4];

     
     cout << "Você digitou: " << array[0] << ", " << array[1] << ", " << array[2] << ", " << array[3] << ", " << array[4];

    

}
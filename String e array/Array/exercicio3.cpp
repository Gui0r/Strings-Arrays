#include <iostream>
#include <locale.h> 

using namespace std;

int main(){
    setlocale(LC_ALL, "pt_BR.UTF-8");
    int a;
    int array[3] = {};

    cout << "Digite três números inteiros: ";
    cin >> array[0];
    cin >> array [1];
    cin >> array [2];
    cin >> array [3];

    cout << "Digite um número para ser substituido no array -1: ";
    cin >> a;

    array[0] = a - 1;
    array[1] = a - 1;
    array[2] = a - 1;
    array[3] = a - 1;

    cout << "Seus arrays são:" << array[0] << ", " << array[1] << ", " << array[2] << ", " << array[3] << ", ";
}
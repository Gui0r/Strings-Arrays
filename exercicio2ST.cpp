#include <iostream>
#include <locale.h>

using namespace std;

int main(){
    setlocale(LC_ALL, "pt_BR.UTF-8");

    char array[] = {'a', 'e', 'i', 'o', 'u'};

    cout << "Palavra 1: " << array[0];
    cout << "Palavra 2: " << array[1];
    cout << "Palavra 3: " << array[2];
    cout << "Palavra 4: " << array[3];
    cout << "Palavra 5: " << array[4];

}
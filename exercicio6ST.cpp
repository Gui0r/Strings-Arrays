#include <iostream>
#include <locale.h>

using namespace std;

int main(){
    setlocale(LC_ALL, "pt_BR.UTF-8");

    int array[] = {1,2,3,4,5,6,7,8,9,10};

    cout << array[1] << endl;
    cout << array[3] << endl;
    cout << array[5] << endl;
    cout << array[7] << endl;
    cout << array[9] << endl;
}
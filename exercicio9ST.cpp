#include <iostream>
#include <locale.h>

using namespace std;

int main(){
    setlocale(LC_ALL, "pt_BR.UTF-8");

    char letra;
    string array[10] = {"vaca", "crocodilo", "gato", "peixe", "hamster", "sapo", "leão", "macaco", "porco", "rã"};

    cout << "Digite uma letra para verificar se um animal com essa letra existe no array: ";
    cin >> letra;

    if(letra == 'v'){
        cout << array[0];
    }else if(letra == 'c'){
        cout << array[1];
    }else if(letra == 'g'){
        cout << array[2];
    }else if(letra == 'p'){
        cout << array[3];
    }else if(letra == 'h'){
        cout << array[4];
    }else if(letra == 's'){
        cout << array[5];
    }else  if(letra == 'l'){
        cout << array[6];
    }else if(letra == 'm'){
        cout << array[7];
    }else if(letra == 'p'){
        cout << array[8];
    }else if(letra == 'r'){
        cout << array[9];
    }else{
        cout << "Não temos um animal com esta letra!";
    }
}
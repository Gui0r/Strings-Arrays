#include <iostream>
#include <locale.h>
#include <string>

using namespace std;

int main(){
    setlocale(LC_ALL, "pt_BR.UTF-8");

    string letra;

    cout << "Digite uma letra em minusculo: ";
    getline(cin, letra);

    if(letra == "a" || letra == "e" || letra == "i" || letra == "o" || letra == "u"){
        cout << "A letra digitada é vogal!";
    }else{
        cout << "A letra digitada não é vogal!";
    }
}
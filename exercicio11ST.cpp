#include <iostream>
#include <locale.h>
#include <string>

using namespace std;

int main(){
    setlocale(LC_ALL, "pt_BR.UTF-8");
    char palavra1[10] = {};
    char palavra2[10] = {};

    cout << "Digite uma palavra para armazenar no primeiro array: ";
    cin >> palavra1;

    cout << "Digite uma palavra para armazenar no segundo array: ";
    cin >> palavra2;

    int comparacao = strcmp(palavra1, palavra2);

    if(comparacao > 0 ){
        cout << "Sua primeira palavra " << palavra1 << " é maior que sua segunda palavra " << palavra2 <<endl; 
    } else if(comparacao < 0) {
        cout << "Sua palavra " << palavra2 << " é maior que sua palavra " << palavra1 <<endl;  
    } else {
        cout << "As palavras são iguais." << endl;
    }
}

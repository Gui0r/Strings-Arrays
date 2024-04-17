#include <iostream>
#include <locale.h>
#include <string>

using namespace std;

int main(){
    setlocale(LC_ALL, "pt_BR.UTF-8");

    string nome = "Guilherme";

    cout << "Seu nome é: " << nome;
}
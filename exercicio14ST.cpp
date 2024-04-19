/*
Declare um array de caracteres palavra com 10 posições.
Leia uma palavra do usuário usando cin e armazene-a em palavra.
Inverta a ordem dos caracteres da palavra e imprima a palavra invertida usando cout.
*/
#include <iostream>
#include <locale.h>
#include <cstring>
#include <string.h>
#include <algorithm>

using namespace std;

int main() {
    setlocale(LC_ALL, "pt_BR.UTF-8");
    
    string string1;

    cout << "Digite uma palavra de no maximo 10 letras: ";
    cin >> string1;
    //   getline(string1, cin);

    reverse(string1.begin(), string1.end());

    cout << "Sua palavra invertida é: " << string1;

    return 0;
}
#include <iostream>
#include <locale.h>
#include <cstring>

int main() {
    char frase[20];
    cout << "Digite uma frase: ";
    getline(frase, cin);

    if (*str == '\0') {
        return 0;
    }

    if (strchr("aeiouAEIOU", *str) != nullptr) {
        return 1 + contarVogais(str + 1);
    }

    return contarVogais(str + 1);

    int numVogais = contarVogais(frase);

    cout << "O número de vogais na frase é: " << numVogais << endl;

    return 0;
}
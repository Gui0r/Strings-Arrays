#include <iostream>
#include <locale.h>
#include <cstring>
#include <algorithm>

using namespace std;

int main() {
    setlocale(LC_ALL, "pt_BR.UTF-8");
    char texto[50];
    cout << "\nDigite um texto: ";
    cin.getline(texto, 50);

int numPalavras = 1;  // começa com 1 porque a primeira palavra não tem espaço antes
for (int i = 0; i < strlen(texto); ++i) {
    if (texto[i] == ' ') {
        numPalavras++;
    }
}
cout << "O texto contém " << numPalavras << " palavras.\n";
}
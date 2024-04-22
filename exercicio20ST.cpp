#include <iostream>
#include <locale.h>
#include <cstring>
#include <algorithm>

using namespace std;

int main() {
    setlocale(LC_ALL, "pt_BR.UTF-8");
    char frase[20][50];
    cout << "\nDigite uma frase: ";
    cin.getline(frase[0], 50);

    char token = strtok(frase[0], " ");
    char palavraMaisLonga[50] = "";

while (token != 0) {
    if (strlen(token) > strlen(palavraMaisLonga)) {
        strcpy(palavraMaisLonga, token);
    }
    token = strtok(0, " ");
}

cout << "A palavra mais longa é: " << palavraMaisLonga << endl;
}
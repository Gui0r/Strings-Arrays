#include <iostream>
#include <locale.h>
#include <cstring>
#include <algorithm>

using namespace std;

int main() {
    setlocale(LC_ALL, "pt_BR.UTF-8");
char produtos[10][50];
float precos[10];

for (int i = 0; i < 10; ++i) {
    cout << "\nDigite o nome do " << i + 1 << "º produto: ";
    cin >> produtos[i];
    cout << "Digite o preço do " << i + 1 << "º produto: ";
    cin >> precos[i];
}

// Impressão de produtos e preços
cout << "\nProdutos\tPreços\n";
for (int i = 0; i < 10; ++i) {
    cout << produtos[i] << "\t\t" << precos[i] << endl;
}
}
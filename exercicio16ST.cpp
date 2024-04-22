#include <iostream>
#include <locale.h>
#include <cstring>
#include <algorithm>

using namespace std;

int main() {
    setlocale(LC_ALL, "pt_BR.UTF-8");

    char nomes[50];
    int idades[10];

    for (int i = 0; i < 10; ++i) {
        cout << "Digite o nome da " << i + 1 << "ª pessoa: ";
        cin >> nomes[i];
        cout << "Digite a idade da " << i + 1 << "ª pessoa: ";
        cin >> idades[i];
    }
    cout << "\nNomes\t\tIdades\n";
    for (int i = 0; i < 10; ++i) {
        cout << nomes[i] << "\t\t" << idades[i] << endl;
    }

    return 0;
}
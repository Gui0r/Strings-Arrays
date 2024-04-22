#include <iostream>
#include <cstring>

using namespace std;

int main() {
    char texto[50];
    cout << "Digite um texto: ";
    cin.getline(texto, 50);

    char *ptr = strchr(texto, 'a');

    if (ptr != nullptr) {
        int posicao = ptr - texto;
        cout << "A primeira ocorrencia da letra 'a' esta na posicao: " << posicao << endl;
    } else {
        cout << "Nao foi encontrada nenhuma ocorrencia da letra 'a'." << endl;
    }

    return 0;
}

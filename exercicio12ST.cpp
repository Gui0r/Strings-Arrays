#include <iostream>
#include <string>

using namespace std;


int contarVogais(char* str, int index = 0, int count = 0) {
    if (str[index] == '\0')
        return count;
    
    if (str[index] == 'a' || str[index] == 'e' || str[index] == 'i' || str[index] == 'o' || str[index] == 'u' ||
        str[index] == 'A' || str[index] == 'E' || str[index] == 'I' || str[index] == 'O' || str[index] == 'U') {
        count++;
    }

    return contarVogais(str, index + 1, count);
}

int main() {
    char frase[20];
    cout << "Digite uma frase: ";
    getline(frase, cin);

    int numVogais = contarVogais(frase);

    cout << "O número de vogais na frase é: " << numVogais << endl;

    return 0;
}
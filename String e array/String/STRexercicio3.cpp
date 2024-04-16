#include <iostream>
#include <locale.h> 
#include <string>
#include <algorithm>

using namespace std;

int main(){
    setlocale(LC_ALL, "pt_BR.UTF-8");

    string str;

    cout << "Digite uma frase curta para ser modificada: ";
    getline(cin, str);

    
    replace(str.begin(), str.end(), 'a', 'e');

    cout << "Nova Palavra: " << str;
}
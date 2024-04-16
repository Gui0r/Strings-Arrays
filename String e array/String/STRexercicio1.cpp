#include <iostream>
#include <locale.h> 
#include <string>

using namespace std;

int main(){
    setlocale(LC_ALL, "pt_BR.UTF-8");

    string strr;

    cout << "Digite uma palavra: ";
    getline(cin, strr);

    cout << "Tamanho da string: " << strr.size();
    return 0;
}
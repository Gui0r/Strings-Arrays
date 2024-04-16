#include <iostream>
#include <locale.h> 
#include <string>

using namespace std;

int main(){
    setlocale(LC_ALL, "pt_BR.UTF-8");

    string str1, str2;

    cout << "Digite uma palavra: ";
    getline(cin, str1);

    cout << "Digite uma segunda palavra: ";
    getline(cin, str2);

    string result = str1 + str2;

    cout << "Sua palavra combinada fica: " << result.c_str();
}
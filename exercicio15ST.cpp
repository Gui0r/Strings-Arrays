/*
Declare um array de caracteres frase com 20 posições.
 Leia uma frase do usuário usando cin e armazene-a em frase.
  Substitua todas as vogais da frase por '*'. 
  Imprima a frase com as vogais substituídas usando cout.
*/

#include <iostream>
#include <locale.h>
#include <cstring>
#include <string>
#include <algorithm>

using namespace std;

int main() {
     setlocale(LC_ALL, "pt_BR.UTF-8");

    char frase1[20];
    int numVogais = 0;

    if(frase1[0] == 'a' || frase1[0] == 'e' || frase1[0] == 'i' || frase1[0] == 'o' || frase1[0] == 'u')numVogais++;
    if(frase1[1] == 'a' || frase1[1] == 'e' || frase1[1] == 'i' || frase1[1] == 'o' || frase1[1] == 'u')numVogais++;
    if(frase1[2] == 'a' || frase1[2] == 'e' || frase1[2] == 'i' || frase1[2] == 'o' || frase1[2] == 'u')numVogais++;
    if(frase1[3] == 'a' || frase1[3] == 'e' || frase1[3] == 'i' || frase1[3] == 'o' || frase1[3] == 'u')numVogais++;
    if(frase1[4] == 'a' || frase1[4] == 'e' || frase1[4] == 'i' || frase1[4] == 'o' || frase1[4] == 'u')numVogais++;
    if(frase1[5] == 'a' || frase1[5] == 'e' || frase1[5] == 'i' || frase1[5] == 'o' || frase1[5] == 'u')numVogais++;
    if(frase1[6] == 'a' || frase1[6] == 'e' || frase1[6] == 'i' || frase1[6] == 'o' || frase1[6] == 'u')numVogais++;
    if(frase1[7] == 'a' || frase1[7] == 'e' || frase1[7] == 'i' || frase1[7] == 'o' || frase1[7] == 'u')numVogais++;
    if(frase1[8] == 'a' || frase1[8] == 'e' || frase1[8] == 'i' || frase1[8] == 'o' || frase1[8] == 'u')numVogais++;
    if(frase1[9] == 'a' || frase1[9] == 'e' || frase1[9] == 'i' || frase1[9] == 'o' || frase1[9] == 'u')numVogais++;
    if(frase1[10] == 'a' || frase1[10] == 'e' || frase1[10] == 'i' || frase1[10] == 'o' || frase1[10] == 'u')numVogais++;
    if(frase1[11] == 'a' || frase1[11] == 'e' || frase1[11] == 'i' || frase1[11] == 'o' || frase1[11] == 'u')numVogais++;
    if(frase1[12] == 'a' || frase1[12] == 'e' || frase1[12] == 'i' || frase1[12] == 'o' || frase1[12] == 'u')numVogais++;
    if(frase1[13] == 'a' || frase1[13] == 'e' || frase1[13] == 'i' || frase1[13] == 'o' || frase1[13] == 'u')numVogais++;
    if(frase1[14] == 'a' || frase1[14] == 'e' || frase1[14] == 'i' || frase1[14] == 'o' || frase1[14] == 'u')numVogais++;
    if(frase1[15] == 'a' || frase1[15] == 'e' || frase1[15] == 'i' || frase1[15] == 'o' || frase1[15] == 'u')numVogais++;
    if(frase1[16] == 'a' || frase1[16] == 'e' || frase1[16] == 'i' || frase1[16] == 'o' || frase1[16] == 'u')numVogais++;
    if(frase1[17] == 'a' || frase1[17] == 'e' || frase1[17] == 'i' || frase1[17] == 'o' || frase1[17] == 'u')numVogais++;
    if(frase1[18] == 'a' || frase1[18] == 'e' || frase1[18] == 'i' || frase1[18] == 'o' || frase1[18] == 'u')numVogais++;
    if(frase1[19] == 'a' || frase1[19] == 'e' || frase1[19] == 'i' || frase1[19] == 'o' || frase1[19] == 'u')numVogais++;


   
}

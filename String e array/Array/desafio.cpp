#include <iostream>
#include <locale.h>
#include <vector>
#include <algorithm> // Para std::copy
#include <iterator> // Para std::ostream_iterator

using namespace std;

int main(){
    setlocale(LC_ALL, "pt_BR.UTF-8");

    int array[] = {1,3,5,7,9};
    int array2[] = {2,4,6,8,10};
    int array3[] = {};

    // NAO ESTA PRONTO
    // NAO ESTA PRONTO
    // NAO ESTA PRONTO
    // NAO ESTA PRONTO
    // NAO ESTA PRONTO
    // NAO ESTA PRONTO
    // NAO ESTA PRONTO
    // NAO ESTA PRONTO
    // NAO ESTA PRONTO
    // NAO ESTA PRONTO
    // NAO ESTA PRONTO
    // NAO ESTA PRONTO
    // NAO ESTA PRONTO
    // NAO ESTA PRONTO
    cout << "Digite 5 elementos para colocar no array2: ";
    cin >> array2[5];
    cin >> array2[6];
    cin >> array2[7];
    cin >> array2[8];
    cin >> array2[9];

    array3[0] = 999;

    std::copy(std::begin(array), std::end(array), std::ostream_iterator<int>(cout, " "));
    cout << "\n";
    std::copy(std::begin(array2), std::end(array2), std::ostream_iterator<int>(cout, " "));
    cout << "\n";
    std::copy(std::begin(array3), std::end(array3), std::ostream_iterator<int>(cout, " "));
    
    return 0;

}
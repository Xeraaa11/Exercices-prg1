#include <cstdlib>
#include <iomanip>
#include <iostream>
using namespace std;

int main() {
    int var1 = 1;
    int& ref1 = var1;
    const int& cref1 = var1;
    //int& ref2;              impossible, doit tjr etre initialisé
    var1 = 2;
    ref1 = 3;
    //cref1 = 4;             erreur car on ne peut pas modifier une constante

    cout << cref1 << endl;
    return EXIT_SUCCESS;
}
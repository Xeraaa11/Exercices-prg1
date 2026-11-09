#include <iostream>
#include <cmath>
using namespace std;


int main() {
    double nombre;

    cout << "Entrez un nombre reel strictement positif: ";
    cin >> nombre;

    if (nombre <= 0) {
        cout << "Erreur de nombre !" << endl;
        return EXIT_FAILURE;
    }

    int e_10 = floor(log10(nombre));
    int e_2 = floor(log2(nombre));
    double m_10 = nombre / pow(10, e_10);
    double m_2 = nombre / pow(2, e_2);

    cout << nombre << " = " << m_10 << " * " << "10^" << e_10 << endl;
    cout << nombre << " = " << m_2 << " * " << "2^" << e_2 << endl;
    return EXIT_SUCCESS;
}
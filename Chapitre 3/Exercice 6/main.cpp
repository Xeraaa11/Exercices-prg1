#include <cstdlib>
#include <iomanip>
#include <iostream>

using namespace std;

int main() {
    const int a = 2;

    switch (a) {
        case 1:
            cout << "A";
            break;
        case 4:
            cout << "C";
            break;
        case 2:
            cout << "E";
            break;
        default:
            cout << "BA";
    }

    switch (a) {
        case 0:
        case 1:
        case 2: {
            cout << "A";
            break;
        }
        case 3:
        case 4: {
            cout << "B";
            break;
        }
        default: {
            cout << "D";
        }
    }



    return EXIT_SUCCESS;
}
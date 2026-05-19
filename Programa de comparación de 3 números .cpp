#include <iostream>
using namespace std;

int main() {

    int a, b, c;

    cout << "Ingresa el primer numero: ";
    cin >> a;

    cout << "Ingresa el segundo numero: ";
    cin >> b;

    cout << "Ingresa el tercer numero: ";
    cin >> c;

    if (a > b && a > c) {
        cout << "El numero mayor es: " << a << endl;
    }
    else if (b > a && b > c) {
        cout << "El numero mayor es: " << b << endl;
    }
    else {
        cout << "El numero mayor es: " << c << endl;
    }

    return 0;
}
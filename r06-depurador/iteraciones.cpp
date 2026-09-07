#include <iostream>

const int N = 8;

int sumar(const int datos[], int n) {
    int total = 0;
    // mueve0 i = 1 por i = 0 inmcluyeno primer elemento
    for (int i = 0; i < n; i++) {
        total += datos[i];
    }
    return total;
}

int main() {
    int datos[N] = {3, 1, 4, 1, 5, 9, 2, 6};
    std::cout << "Suma: " << sumar(datos, N) << '\n';
    return 0; 
}
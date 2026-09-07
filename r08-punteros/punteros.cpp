#include <iostream>
void intercambiar1(int a, int b);      // por valor
void intercambiar2(int* a, int* b);    // por puntero
void intercambiar3(int& a, int& b);    // por referencia

int main(){
    int x, y;
    // por valor
    intercambiar1(x,y);
    std::cout << "Intercambiar1 (por valor): x ="<<x<<", y="<<y<<'\n';

    //por puntero
    x =1; y=2;
    intercambiar2(&x, &y);
    std::cout << "Intercambiar1 (por valor): x ="<<x<<", y="<<y<<'\n';

    //por referencia
    intercambiar3(x,y);
    std::cout << "Intercambiar1 (por valor): x ="<<x<<", y="<<y<<'\n';

    return 0;
}
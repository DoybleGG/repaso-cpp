#include <iostream>

int suma(const int v[], int n) { // A
    int s = 0;
    for (int i = 0; i < n; i++)
        s += v[i];
    return s;
}
int main(){
    int datos[] = {1,2,3,4,5};
    std::cout << suma(datos,5)<< '\n';
}
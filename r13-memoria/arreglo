#include <iostream>

class Arreglo {
private:
    int* datos;
    int size;

public:
    Arreglo(int n): size(n) {
        datos = new int[size];
        std::cout << "Constructor: Reservado en " << datos << '\n';
    }
    ~Arreglo() {
        std::cout << "Destructor: Liberado en " << datos << '\n';
        delete[] datos;
    }
    Arreglo(const Arreglo& otro) : size(otro.size) {
        datos = new int[size]; 
        for (int i = 0; i < size; ++i) {
            datos[i] = otro.datos[i]; // Copiar valores uno por uno
        }
        std::cout << "Copia: Memoria nueva en " << datos << '\n';
    }

    // 3. Operador de asignación (operator=)
    Arreglo& operator=(const Arreglo& otro) {
        if (this != &otro) { // Evitar auto-asignación (ej. a = a)
            delete[] datos;  // Liberar la memoria actual
            size = otro.size;
            datos = new int[size]; // Reservar nueva memoria
            for (int i = 0; i < size; ++i) {
                datos[i] = otro.datos[i];
            }
            std::cout << "Asignación: Memoria nueva en " << datos << '\n';
        }
        return *this;
    }

    void set(int i, int val) { datos[i] = val; }
    int get(int i) const { return datos[i]; }
    int tam() const { return size; }
};

int main() {
    Arreglo a(5);
    a.set(0, 10);
    Arreglo b = a; // Llama al Constructor de Copia
    
    // Modificamos b y a ya no se ve alterado.
    b.set(0, 99); 
    std::cout << "Valor en a[0]: " << a.get(0) << '\n'; // Imprime 10
    std::cout << "Valor en b[0]: " << b.get(0) << '\n'; // Imprime 99
    
    return 0; // Ahora ambos se destruyen limpiamente, usando direcciones distintas.
}
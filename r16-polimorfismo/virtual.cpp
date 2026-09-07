#include <iostream>
#include <vector>
#include <string>

class Figura {
public:
    // Destructor virtual:
    virtual ~Figura() = default; 
    virtual double area() const = 0; 
    virtual std::string nombre() const = 0; 
};

// Clase derivada 
class Circulo : public Figura {
private:
    double radio;
public:
    Circulo(double r) : radio(r) {}
    //  override
    double area() const override {
        return 3.14159265359 * radio * radio;
    }
    std::string nombre() const override {
        return "Círculo";
    }
};

// Rectangulo
class Rectangulo : public Figura {
private:
    double base;
    double altura;
public:
    Rectangulo(double b, double a) : base(b), altura(a) {}
    // override
    double area() const override {
        return base * altura;
    }
    std::string nombre() const override {
        return "Rectángulo";
    }
};
int main() {
    std::vector<Figura*> figuras;
    figuras.push_back(new Circulo(5.0));
    figuras.push_back(new Rectangulo(4.0, 6.0));
    figuras.push_back(new Circulo(2.0));
    double area_total = 0.0;
    std::cout << "Fuguras: \n";
    for (Figura* f : figuras) {
        std::cout << f->nombre() << " - Área: " << f->area() << '\n';
        area_total += f->area();
    }
    std::cout << "\nÁrea total acumulada: " << area_total << '\n';
    // 3. Liberar cada elemento 
    for (Figura* f : figuras) {
        delete f; 
    }
    figuras.clear();
    return 0;
}
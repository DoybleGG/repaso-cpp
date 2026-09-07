#include <iostream>
#include <vector>
#include <string>
#include <map>

void contarConMap(const std::vector<std::string>& palabras) {
    std::map<std::string, int> frecuencias;

    for (const auto& palabra : palabras) {
        frecuencias[palabra]++; // Busca, inserta si no existe, e incrementa
    }

    for (const auto& p : frecuencias) {
        std::cout << p.first << ": " << p.second << '\n';
    }
}

// para este caso es el mejor , al menos oor lo que veo porque es el que personalmente más
//fácil se me hizo hacerlo y es relativamente corto, y el nivel de rendimiento es bajo.
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

void contarConVector(const std::vector<std::string>& palabras) {
    std::vector<std::pair<std::string, int>> frecuencias;
    for (const auto& palabra : palabras) {
        // Buscamos si la palabra ya existe 
        auto it = std::find_if(frecuencias.begin(), frecuencias.end(),
                               [&](const std::pair<std::string, int>& p) { return p.first == palabra; });

        if (it != frecuencias.end()) {
            it->second++; // Si existe, incrementamos
        } else {
            frecuencias.push_back({palabra, 1}); // Si no,agregamos
        }
    }
    for (const auto& p : frecuencias) {
        std::cout << p.first << ": " << p.second << '\n';
    }
}
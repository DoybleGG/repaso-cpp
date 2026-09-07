#include <iostream>
#include <vector>
#include <string>
#include <set>
#include <algorithm>

void contarConSet(const std::vector<std::string>& palabras) {
    // Insertamos todas las palabras 
    std::set<std::string> unicas(palabras.begin(), palabras.end());

    for (const auto& palabra : unicas) {
        // Contamos cuántas veces aparece esta palabra 
        int cantidad = std::count(palabras.begin(), palabras.end(), palabra);
        std::cout << palabra << ": " << cantidad << '\n';
    }
}

//
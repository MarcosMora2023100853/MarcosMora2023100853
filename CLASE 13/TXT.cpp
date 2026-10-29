#include <iostream>
#include <fstream>
#include <string>


struct Personaje {
    std::string nombre;
    int vida;
    int ataque;
};


void registrarPersonaje() {
    Personaje p;

    std::cout << "\n--- REGISTRAR NUEVO PERSONAJE ---\n";
    
   
    std::cin.ignore(); 
    
    std::cout << "Ingrese el nombre del personaje: ";
    std::getline(std::cin, p.nombre);

    std::cout << "Ingrese los puntos de vida (ej. 100): ";
    std::cin >> p.vida;

    std::cout << "Ingrese los puntos de ataque (ej. 25): ";
    std::cin >> p.ataque;

   
    std::ofstream archivo("personajes.txt", std::ios::app);

   
    if (!archivo.is_open()) {
        std::cerr << "Error crítico: No se pudo abrir el archivo 'personajes.txt' para escritura.\n";
        return;
    }

 
    archivo << p.nombre << "\n";
    archivo << p.vida << "\n";
    archivo << p.ataque << "\n";


    archivo.close();

    std::cout << "¡Personaje registrado y guardado exitosamente con éxito!\n";
}


void mostrarPersonajes() {
    
    std::ifstream archivo("personajes.txt");


    if (!archivo.is_open()) {
        std::cout << "\n[Aviso] No se encontró el archivo de registros o aún no hay personajes guardados.\n";
        return;
    }

    std::cout << "\n========================================\n";
    std::cout << "        LISTA DE PERSONAJES GUARDADOS   \n";
    std::cout << "========================================\n";

    std::string nombre;
    std::string vidaStr, ataqueStr;
    int contador = 1;

   
    while (std::getline(archivo, nombre)) {
        if (nombre.empty()) continue; 

        std::getline(archivo, vidaStr);
        std::getline(archivo, ataqueStr);

        std::cout << " [" << contador << "] Nombre : " << nombre << "\n";
        std::cout << "     Vida   : " << vidaStr << "\n";
        std::cout << "     Ataque : " << ataqueStr << "\n";
        std::cout << "----------------------------------------\n";
        contador++;
    }

    if (contador == 1) {
        std::cout << "El archivo está vacío actualmente.\n";
    }

  
    archivo.close();
}


int main() {
    int opcion = 0;

    do {
        std::cout << "\n==============================\n";
        std::cout << "    SISTEMA DE PERSONAJES     \n";
        std::cout << "==============================\n";
        std::cout << " [1] Registrar nuevo personaje\n";
        std::cout << " [2] Ver todos los personajes guardados\n";
        std::cout << " [3] Salir\n";
        std::cout << "Seleccione una opción: ";

      
        if (!(std::cin >> opcion)) {
            std::cout << "Entrada inválida. Por favor, introduzca un número.\n";
            std::cin.clear();
            std::cin.ignore(10000, '\n');
            continue;
        }

        switch (opcion) {
            case 1:
                registrarPersonaje();
                break;
            case 2:
                mostrarPersonajes();
                break;
            case 3:
                std::cout << "\nSaliendo del programa. ¡Hasta luego!\n";
                break;
            default:
                std::cout << "\nOpción no válida. Intente de nuevo.\n";
        }

    } while (opcion != 3);

    return 0;
}

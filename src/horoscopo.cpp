#include <iostream>

using namespace std;

int main() {
    std::string mes;
    int dia, año;

    std::cout << "Ingresa tu fecha de nacimiento y te diremos que signo zodiacal eres :)" <<endl;
    std::cout << "Ingresa el día de tu nacimiento" <<endl;
    std::cin >> dia;

    std::cout << "Ingresa tu mes de nacimiento (enero, febrero, marzo, etc...)" <<endl;
    std::cin >> mes;

    std::cout << "Ingresa tu año de nacimiento" <<endl;
    std::cin >> año;

    if (mes == "enero" && dia >= 1 && dia <= 19) {
        std::cout << "Tu signo zodciacal es: Capricornio" <<std::endl;
    }
    else if (mes == "enero" && dia >= 20 && dia <= 31) {
        std::cout << "Tu signo zodiacal es: Acuario" <<std::endl;
    }
    else if (mes == "febrero" && dia >= 1 && dia <= 18) {
        std::cout << "Tu signo zodiacal es: Acuario" <<std::endl;
    }
    else if (mes == "febrero" && dia >= 19 && dia <= 29) {
        std::cout << "Tu signo zodiacal es: Piscis" <<std::endl;
    }
    else if (mes == "marzo" && dia >= 1 && dia <= 20) {
        std::cout << "Tu signo zodiacal es: Piscis" <<std::endl;
    }
    else if (mes == "marzo" && dia >= 21 && dia <= 30){
        std::cout << "Tu signo zodiacal es: Aries" <<std::endl;
    }
    else if (mes == "abril" && dia >= 1 && dia <= 19){
        std::cout << "Tu signo zodiacal es: Aries" <<std::endl;
    }
    else if (mes == "abril" && dia >= 20 && dia <= 30){
        std::cout << "Tu signo zodiacal es: Tauro" <<std::endl;
    }
    else if (mes == "mayo" && dia >= 1 && dia <= 20){
        std::cout << "Tu signo zodiacal es: Tauro" <<std::endl;
    }
    else if (mes == "mayo" && dia >= 21 && dia <= 31){
        std::cout << "Tu signo zodiacal es: Géminis" <<std::endl;
    }
    else if (mes == "junio" && dia >= 1 && dia <= 20){
        std::cout << "Tu signo zodiacal es: Géminis" <<std::endl;
    }
    else if (mes == "junio" && dia >= 21 && dia <= 30){
        std::cout << "Tu signo zodiacal es: Cáncer" <<std::endl;
    }
    else if (mes == "julio" && dia >= 1 && dia <= 22){
        std::cout << "Tu signo zodiacal es: Cáncer" <<std::endl;
    }
    else if (mes == "julio" && dia >= 23 && dia <= 31){
        std::cout << "Tu signo zodiacal es: Leo" <<std::endl;
    }
    else if (mes == "agosto" && dia >= 1 && dia <= 22){
        std::cout << "Tu signo zodiacal es: Leo" <<std::endl;
    }
    else if (mes == "agosto" && dia >= 23 && dia <= 31){
        std::cout << "Tu signo zodiacal es: Virgo" <<std::endl;
    }
    else if (mes == "septiembre" && dia >= 1 && dia <= 22){
        std::cout << "Tu signo zodiacal es: Virgo" <<std::endl;
    }
    else if (mes == "septiembre" && dia >= 23 && dia <= 30){
        std::cout << "Tu signo zodiacal es: Libra" <<std::endl;
    }
    else if (mes == "octubre" && dia >= 1 && dia <= 22){
        std::cout << "Tu signo zodiacal es: Libra" <<std::endl;
    }
    else if (mes == "octubre" && dia >= 23 && dia <= 31){
        std::cout << "Tu signo zodiacal es: Escorpio" <<std::endl;
    }
    else if (mes == "noviembre" && dia >= 1 && dia <= 21){
        std::cout << "Tu signo zodiacal es: Escropio" <<std::endl;
    }
    else if (mes == "noviembre" && dia >= 22 && dia <= 30){
        std::cout << "Tu signo zodiacal es: Sagitario" <<std::endl;
    }
    else if (mes == "diciembre" && dia >= 1 && dia <= 21){
        std::cout << "Tu signo zodiacal es: Sagitario" <<std::endl;
    }
    else if (mes == "diciembre" && dia >= 22 && dia <= 31){
        std::cout << "Tu signo zodiacal es: Capricornio" <<std::endl;
    }

    std::cout << "Ten un buen día!" <<std::endl;

    return 0;
}

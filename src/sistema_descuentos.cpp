#include <iostream> 

using namespace std;

int main () { 
    std::string mes;
    int dia, año;

    std::cout << "Quieres saber si por tu fecha de cumpleaños aplicas para una promoción?" <<endl;
    std::cout << "Ingresa el dia de tu cumpleaños" << endl;
    std::cin >> dia;

    std::cout << "Ingresa el mes de tu cumpleaños" << endl;
    std::cin >> mes;

    std::cout << "Ingresa el año de tu cumpleaños" << endl;
    std::cin >> año;

    if (mes == "enero" && dia >= 1 && dia <= 31){
        std::cout << "No aplcias, lo lamento" <<std::endl;
    } 
        else if (mes == "febrero" && dia >= 1 && dia <= 29){
        std::cout << "Disfruta de tu promoción!" <<std::endl;
    } 
        else if (mes == "marzo" && dia >= 1 && dia <= 30){
        std::cout << "No aplcias, lo lamento" <<std::endl;
    } 
        else if (mes == "abril" && dia >= 1 && dia <= 30){
        std::cout << "No aplcias, lo lamento" <<std::endl;
    } 
        else if (mes == "mayo" && dia >= 1 && dia <= 31){
        std::cout << "No aplcias, lo lamento" <<std::endl;
    } 
        else if (mes == "junio" && dia >= 1 && dia <= 30){
        std::cout << "No aplcias, lo lamento" <<std::endl;
    } 
        else if (mes == "julio" && dia >= 1 && dia <= 31){
        std::cout << "No aplcias, lo lamento" <<std::endl;
    } 
        else if (mes == "agosto" && dia >= 1 && dia <= 31){
        std::cout << "No aplcias, lo lamento" <<std::endl;
    } 
        else if (mes == "septiembre" && dia >= 1 && dia <= 30){
        std::cout << "No aplcias, lo lamento" <<std::endl;
    }
        else if (mes == "octubre" && dia >= 1 && dia <= 31){
        std::cout << "No aplcias, lo lamento" <<std::endl;
    } 
        else if (mes == "noviembre" && dia >= 1 && dia <= 30){
        std::cout << "No aplcias, lo lamento" <<std::endl;
    } 
        else if(mes == "diciembre" && dia >= 1 && dia <= 31){
        std::cout << "No aplcias, lo lamento" <<std::endl;
    }
    std::cout << "Gracias por tu participación. Vuelve pronto!" <<std::endl;

    return 0;

}

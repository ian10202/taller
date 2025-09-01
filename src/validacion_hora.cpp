#include <iostream>

int main(){

    int hora = 0, minuto = 0;
    std::cout<<"Ingrese la hora de entrada en horario militar SIN añadir \":\". Ejemplo: 00 00 ";
    std::cin>>hora >> minuto;
    if (hora <= 23 && hora > 0 && minuto >= 1 && minuto <= 59){
        std::cout<<" su hora de entrada ha sido registrada ";


    }else{
        std::cout<<"La hora no es valida ";
    }




    return 0;
}
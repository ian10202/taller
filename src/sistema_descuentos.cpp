#include <iostream>

int main(){
    int producto, valor;
    std::string cliente;
    std::cout<<"Ingrese cuantos productos lleva ";
    std::cin>>producto;
    std::cout<<"Ingrese cuanto es el valor total ";
    std::cin>>valor;
    std::cout<<"Ingrese que tipo de cliente es tal como VIP o REGULAR ";
    std::cin>>cliente;

    if (cliente == "VIP"){
        std::cout<<"El valor total a pagar es: "<< valor*0.80;
    }else if (cliente == "REGULAR"){
        if (producto>=4 && producto > 0){
            std::cout<<"El valor total a pagar es: "<< valor*0.90;
        }else{
            std::cout<<"El valor total a pagar es: "<< valor;
        }
    }else{
        std::cout<<"El tipo de cliente no es valido";
    }

    return 0;
}
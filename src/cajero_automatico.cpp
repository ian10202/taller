#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int saldo= 1000;
    int pin , len, in2, in1, din1, din2 ;

    std::cout<<"CAJERO AUTOMÁTICO"<<std::endl;
    
    std::cout<<"- Ingrese un PIN de 4 digitos: ";
    std:: cin >>pin;
    len= static_cast<int>(log10(pin)+1.);
    if (len != 4 ){
        std::cout<<"El PIN debe tener 4 dígitos.";
    }else if(len == 4){
        std::cout<<"PIN agregado. "<<std::endl;
        std::cout<<"TIENE 2 INTENTOS."<<std::endl;
        std::cout<<"- Ingrese su PIN: ";
        std:: cin >>in1;
        if (in1 == pin ){
            std::cout<<"PIN correcto."<<std::endl;
            std::cout<<"Su SALDO ES DE 1000 DOLARES."<<std::endl;
            std::cout<<"- Dinero a retirar: ";
            std::cin>>din1;
                if (din1>1000){
                    std::cout<<"Saldo insuficiente.";
                }else{
                    std::cout<<"Ha retirado " <<din1<<" dolares, su saldo ahora es de "<< 1000- din1<< " dolares."<<std::endl;}
    }       else if (in1!= pin){
            std::cout<<"PIN incorrecto, tiene 1 intentos. "<<std::endl;
            std::cout<<"- 2 intento. Ingrese su PIN: ";
            std::cin>>in2;
    
                if (in2 == pin){
                std::cout<<"PIN correcto."<<std::endl;
                std::cout<<"Su SALDO ES DE 1000 DOLARES."<<std::endl;
                std::cout<<"Dinero a retirar: ";
                std::cin>> din2;
                    if (din2>1000){
                        std::cout<<"Saldo insuficiente.";
                    }else{
                        std::cout<<"Ha retirado " <<din2<<" dolares, su saldo ahora es de "<< 1000- din2<< " dolares."<<std::endl;}
    }           else{
                std::cout<<"PIN incorrecto, tiene 0 intentos. "<<std::endl;
    }
    } 
}
    return 0;
}

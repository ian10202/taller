#include <iostream>
using namespace std;

int main() {
    std:: string op;
    double x,y;
    std :: cout<< "CAJA REGISTRADOR"<<std::endl;
    std:: cout<< "ingrese el 1 valor: " ;
    std:: cin>> x;
    std:: cout<< "ingrese el 2 valor: ";
    std:: cin>> y;
    std:: cout<< "ingrese la operación a realizar: ";
    std:: cin>> op;

    if (op == "+" || op == "suma"){
        std:: cout<< "resultado: "<< x + y << std::endl;
    }
    else if (op == "-" ||op == "resta"){
        std:: cout<< "resultado: "<< x - y << std::endl;
    }
    else if (op == "*" || op=="multiplicacion"|| op== "multiplicación"){
        std:: cout<< "resultado: "<< x * y << std::endl;
    }      else if (y == 0){
                std:: cout<<"Una división no puede tener un denominador = 0."<<endl;

            }
    else if (op == "/" ||op== "division"|| op== "división"){
            
        std:: cout<< "resultado: "<< x / y << std::endl;
    }else{
        std::cout<< "No ingreso valores funcionales. "<< std::endl;
    }
    return 0;
}

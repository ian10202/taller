## INTEGRANTES
___
*  Juan Diego Campo Del Rio 1043977355  
*  Ian Mateo Rodrgiquez Gómez 1025539727  
*  Tomás Felipe Morera Pérez  1033101003  

## INFORMACIÓN
___
* Pensamiento Algorítmico
* Universidad Sergio Arboleda
* 31/08/2025

## GUIAS DE COMPILACIÓN

### Windows
1. Instalar MinGW o usar MSYS2.
2. Compilar con: g++ archivo.cpp -o programa.exe
3. Ejecutar con: programa.exe

### Linux
1. Instalar g++: sudo apt-get install g++
2. Compilar con: g++ archivo.cpp -o programa
3. Ejecutar con: ./programa

### Mac
1. Instalar compilador: xcode-select --install
2. Compilar con: g++ archivo.cpp -o programa
3. Ejecutar con: ./programa

## ESTRUCTURA DEL REPOSITORIO
taller/  
├── README.md  
├── docs/  
│ ├── punto1_calculadora.pdf  
│ ├── punto2_validacion_fecha.pdf  
│ ├── punto3_sistema_descuentos.pdf  
│ ├── punto4_cajero_automatico.pdf  
│ ├── punto5_horoscopo.pdf  
│ └── punto6_validacion_hora.pdf  
└── src/  
  ├── calculadora.cpp  
  ├── validacion_fecha.cpp  
  ├── sistema_descuentos.cpp  
  ├── cajero_automatico.cpp  
  ├── horoscopo.cpp  
  └── validacion_hora.cpp  

## INSTRUCCIONES DE EJECUCIÓN
1. Entrar a la carpeta src/.
2. Compilar el progama que quiera ejecutar, ejemplo la horoscopo: g++ horoscopo.cpp -o horoscopo
3. Ejecute el programa: ./horoscopo Para cualquier otro archivo de src/, repita el mismo proceso.

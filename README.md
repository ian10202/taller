## INTEGRANTES
___
*  Juan Diego Campo Del Rio  
*  Ian Mateo Rodrgiquez Gómez  
*  Tomás Felipe Morera Pérez 

## INFORMACIÓN
___
* Pensamiento Algorítmico
* Universidad Sergio Arboleda
* 31/08/2025

## GUIAS DE COMPILACIÓN

### Windows
1. Instalar VisualStudioCode en Google. 
2. Seguir los pasos del siguiente video para poder correr el programa  
   https://youtu.be/PE45HkM6J9I?si=1zyhTKZpWf6GLQrW
3. Abrir un archivo.cpp y añadir l codigo brindado de la respectiva situación a evaluar.  
4. Correr el problema en el botón ubicado arriba a la derecha.

### Linux
1. Instalar herramientas necesarias ejecutando los siguientes comandos: sudo apt-get -y update ; sudo apt-get -y upgrade ;  sudo apt-get install build-essential 
2. Compilar con: g++ -o archivo1 *tuarchivo*.cpp
3. Ejecutar con: ./archivo1

### macOS
1. Instalar compilador: xcode-select --install
2. Crear un archivo fuente que sea .cpp
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

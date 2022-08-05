#include <iostream>
#include <vector>
#include <stdio.h>
#include <string.h>
#include "Lista.h"
//g++ -std=c++11 main.cpp main.cpp -o main
//clang++ -std=c++11 -stdlib=libc++ main.cpp -o main
/*
Comandos

 inicializar_diccionario.txt
 inicializar_inverso.txt
 puntaje palabra
 iniciar_arbol diccionario.txt
 inicializar_arbol_inverso diccionario.txt
 palabras_por_prefijo prefijo
 palabras_por_sufijo sufijo
 grafo_de_palabras
 posibles_palabras letras
*/
int main() {
    //std::string opcion;
    char opcion[100];

    bool menu = true;

    std::cout<<"Digite ayuda para desplegar el menu "<<std::endl;

    while (menu)
    {
        //Ciclo que permite recibir el input del usuario desde consola
        std::cout << "$ " ; //Impresión del caracter de línea de comando
        std::cin.getline(opcion,100);//Captura de los datos ingresados
        //Tokenización del input ingresado
        char* aux;
        char* tokens=strtok(opcion," ");
        char* tokens2[100];
        aux=tokens;
        aux=strtok(NULL," ");
        *tokens2=aux;//nombre_archivo,prefifo,sufijo,letras

        std::cout<<std::endl;
        //Impresión del mensaje de ayuda
        if(strcmp(tokens,"ayuda")==0)
        {
            std::cout<<"Opciones disponibles"<<std::endl<<std::endl;
            std::cout<<"inicializar diccionario.txt"<<std::endl;
            std::cout<<"inicializar_inverso diccionario.txt"<<std::endl;
            std::cout<<"punjate palabra"<<std::endl;
            std::cout<<"inicializar_arbol diccionario.txt"<<std::endl;
            std::cout<<"inicializar_arbol_inverso diccionario.txt"<<std::endl;
            std::cout<<"palabras_por_prefijo prefijo"<<std::endl;
            std::cout<<"palabras_por_sufijo sufijo"<<std::endl;
            std::cout<<"grafo_de_palabras"<<std::endl;
            std::cout<<"posibles_palabras letras"<<std::endl;

        }
        //Permite salir del programa 
        else if(strcmp(tokens,"salir")==0)
        {
            std::cout<<"Fin del programa."<<std::endl;
            menu=false;
        }
        //Comando empleado para inicializar el diccionario
        else if(strcmp(tokens,"inicializar")==0)
        {
            std::cout<<"Ingreso Correctamente"<<std::endl;
            std::cout<<"Descripción: Inicializa el sistema a partir del archivo diccionario.txt,\n"
                       <<"que contiene un diccionario de palabras aceptadas en el idioma inglés \n"
                       <<"(idioma original del juego). A diferencia del comando inicializar, este comando almacena \n"
                       <<"las palabras en uno o más árboles de letras (como se considere conveniente). \n"
                       <<"Las palabras deben ser verificadas para no almacenar aquellas que incluyen símbolos inválidos \n"
                       <<"(como guiones, números y signos de puntuación)"<<std::endl;

        }
        //Inicializa el diccionario en forma inversa
        else if(strcmp(tokens,"inicializar_inverso")==0)
        {
            std::cout<<"Ingreso Correctamente"<<std::endl;
            std::cout<<"Inicializa el sistema a partir del archivo diccionario.txt, que contiene un diccionario de \n"
                       <<"palabras aceptadas en el idioma inglés (idioma original del juego). A diferencia del comando \n"
                       <<"inicializar, este comando almacena las palabras en sentido inverso \n"
                       <<"(leídas de derecha a izquierda), teniendo en cuenta que sea fácil recuperarlas posteriormente. \n"
                       <<"Las palabras también deben ser verificadas para no almacenar aquellas que incluyen símbolos \n"
                       <<"inválidos (como guiones, números y signos de puntuación)."<<std::endl;
        }
        //Permite conocer el puntaje que otorga una palabra dada
        else if(strcmp(tokens,"puntaje")==0)
        {
            std::cout<<"Ingreso Correctamente"<<std::endl;
            std::cout<<"El comando permite conocer la puntuación que puede obtenerse con una palabra dada, de acuerdo \n"
                       <<"a la tabla de puntuación de cada letra presentada anteriormente. Sin embargo, el comando debe \n"
                       <<"verificar que la palabra sea válida, es decir, que exista en el diccionario (tanto original \n"
                       <<"como en sentido inverso), y que esté escrita con símbolos válidos."<<std::endl;
        }
        //Inicializa el árbol del diccionario
        else if(strcmp(tokens,"inicializar_arbol")==0)
        {
            std::cout<<"Ingreso Correctamente"<<std::endl;
            std::cout<<"Descripción: Inicializa el sistema a partir del archivo diccionario.txt, que contiene \n"
                     <<"un diccionario de palabras aceptadas en el idioma inglés (idioma original del juego). \n"
                     <<"A diferencia de los comandos iniciar_inverso e iniciar_arbol, este comando almacena las palabras\n"
                     <<" en uno o más árboles de letras, pero en sentido in- verso (leídas de derecha a izquierda). \n"
                     <<"Las palabras también deben ser verificadas para no almacenar aquellas que incluyen símbolos \n"
                     <<"inválidos (como guiones, números y signos de puntuación)."<<std::endl;
        }
        //Inicializa el árbol inverso del diccionario
        else if(strcmp(tokens,"inicializar_arbol_inverso")==0)
        {
            std::cout<<"Ingreso Correctamente"<<std::endl;
            std::cout<<"Descripción: Inicializa el sistema a partir del archivo diccionario.txt, que contiene un \n"
                       <<"diccionario de pala- bras aceptadas en el idioma inglés (idioma original del juego). \n"
                       <<"A diferencia de los comandos iniciar_inverso e iniciar_arbol, este comando almacena las \n"
                       <<"palabras en uno o más árboles de letras, pero en sentido inverso (leídas de derecha a izquierda).\n"
                       <<" Las palabras también deben ser verificadas para no almacenar aquellas que incluyen símbolos \n"
                       <<"inválidos (como guiones, números y signos de puntuación)."<<std::endl;
        }
        //Permite encontrar palabras con un determinado prefijo
        else if(strcmp(tokens,"palabras_por_prefijo")==0)
        {
            std::cout<<"Ingreso Correctamente"<<std::endl;
            std::cout<<"Descripción: Dado un prefijo de pocas letras, el comando recorre el(los) árbol(es) de letras \n"
                       <<"(construído(s) con el comando iniciar_arbol) para ubicar todas las palabras posibles a \n"
                       <<"construir a partir de ese prefijo. A partir del recorrido, se presenta al usuario en pantalla \n"
                       <<"todas las posibles palabras, la longitud de cada una y la puntuación que cada una puede \n"
                       <<"obtener."<<std::endl;
        }
        //Permite encontrar palabras con un determinado sufijo
        else if(strcmp(tokens,"palabras_por_sufijo")==0)
        {
            std::cout<<"Ingreso Correctamente"<<std::endl;
            std::cout<<"Descripción: Dado un sufijo de pocas letras, el comando recorre el(los) árbol(es) de letras \n"
                       <<"(construído(s) con el comando iniciar_arbol_inverso) para ubicar todas las palabras posibles a \n"
                       <<"construir que terminan con ese sufijo. A partir del recorrido, se presenta al usuario en \n"
                       <<"pantalla todas las posibles palabras, la longitud de cada una y la puntuación que cada una \n"
                       <<"puede obtener."<<std::endl;
        }
        else if(strcmp(tokens,"grafo_de_palabras")==0)
        {
            std::cout<<"Ingreso Correctamente"<<std::endl;
            std::cout<<"Descripción: Con las palabras ya almacenadas en el diccionario, el comando construye un \n"
                       <<"grafo de palabras, en donde cada palabra se conecta a las demás si y sólo sí difieren en un \n"
                       <<"única letra (con las demás letras iguales y en las mismas posiciones)."<<std::endl;
        }
        //Permite determinar qué palabras se puede armar con cierta combinación
        else if(strcmp(tokens,"posibles_palabras")==0)
        {
            std::cout<<"Ingreso Correctamente"<<std::endl;
            std::cout<<"Descripción: Dadas ciertas letras en una cadena de caracteres (sin importar su orden), \n"
                       <<"el comando debe presentar en pantalla todas las posibles palabras válidas a construir, \n"
                       <<"indicando la longitud de cada una y la puntuación que se puede obtener con cada una. \n"
                       <<"En las letras de la cadena de caracteres, puede admitirse un único símbolo comodín (?), \n"
                       <<"el cual representará una letra desconocida y permitirá generar mayores posibilidades de \n"
                       <<"palabras a construir. Para este propósito, el comando debe hacer uso del grafo de palabras \n"
                       <<"construído con el comando grafo_de_palabras."<<std::endl;
        }
        else if(strcmp(tokens,"posibles_palabras letras")==0)
            {
            std::cout<<"Dadas ciertas letras en una cadena de caracteres (sin importar su orden), \n"
                       <<"el comando debe presentar en pantalla todas las posibles palabras válidas a construir, \n"
                       <<"indicando la longitud de cada una y la puntuación que se puede obtener con cada una. \n"
                       <<"En las letras de la cadena de caracteres, puede admitirse un único símbolo comodín (?), \n"
                       <<"el cual representará una letra desconocida y permitirá generar mayores posibilidades de \n"
                       <<"palabras a construir. Para este propósito, el comando debe hacer uso del grafo de palabras \n"
                       <<"construído con el comando grafo_de_palabras."<<std::endl;
            }
        else
        {
            std::cout<<"Opcion no valida"<<std::endl;
        }
        std::cout<<std::endl;
    }
}
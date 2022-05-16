/* Autor: Andriks Imanol Ruiz M�rtinez, Realizado: 31/03/2022
Escuela: Universidad del Valle de M�xico Campus Villahermosa
Materia: Programaci�n Estructurada
Ciclo: 01/2022

Este es un programa de ciclos y condicionales en Lenguaje C de la materia de Programaci�n Estructurada
Muestra el uso de:

    -Variables en cadena
    -printf para mostrar mensajes y variables
    -scanf
    -El uso de include para las librer�as
    -Uso de condicionales
    -Operadores l�gicos
    -System PAUSE
    -Comentarios para la documentaci�n interna del programa
*/
#include<stdio.h>
#include<stdlib.h>
int main(){
	printf("----CODIGO ASCII----\n");
	for(unsigned char c=0;c<=255;c++){
		printf("%d-> [%c]\n",c,c);
		if (c%10==0 && c>0){
			system("PAUSE");
		}
	}
	return 0;
}

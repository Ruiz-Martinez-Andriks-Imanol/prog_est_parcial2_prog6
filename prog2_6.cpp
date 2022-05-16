/* Autor: Andriks Imanol Ruiz Mártinez, Realizado: 31/03/2022
Escuela: Universidad del Valle de México Campus Villahermosa
Materia: Programación Estructurada
Ciclo: 01/2022

Este es un programa de ciclos y condicionales en Lenguaje C de la materia de Programación Estructurada
Muestra el uso de:

    -Variables en cadena
    -printf para mostrar mensajes y variables
    -scanf
    -El uso de include para las librerías
    -Uso de condicionales
    -Operadores lógicos
    -System PAUSE
    -Comentarios para la documentación interna del programa
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

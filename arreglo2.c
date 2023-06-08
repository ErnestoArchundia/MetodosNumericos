#include <stdio.h> /* Declaración librerías*/
#include <stdlib.h>
#include <string.h>

int main(){
	int contador;//Variable contadora de ciclos
	char nombre[5][20]; //Arreglo que guardara los nombres
	
	//Ciclo en el que solicitamos los nombres a ingresar
	for(contador=0;contador<5;contador++){
		printf("Ingresa un nombre: ");
		gets(nombre[contador]);
	}
	
	//Ciclo que imprime los nombres guardados
	printf("\nNombres ingresados: \n");	
	for(contador=0;contador<5;contador++){
		puts(nombre[contador]);
	} 
	
	return 0;		
}
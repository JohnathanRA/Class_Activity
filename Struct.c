#include <stdio.h>
#include <string.h>

int main(){
	
	struct Alumno{
		int edad;
		char nombre[20];
		float promedio;
	};
	
	struct Alumno inges;
	struct Alumno ciencias[12000];
	struct Alumno *conta;
	
	inges.edad = 21;
	strcpy(inges.nombre, "Joel");
	inges.promedio = 9.8;//Ejemplo para un dato
	
	ciencias[500].edad = 28;
	strcpy(ciencias[500].nombre, "Juan");
	ciencias[500].promedio = 6.8;//Ejemplo para 12000 datos
	
	conta = (struct Alumno *)malloc(sizeof(struct Alumno));
	conta->edad = 32;
	strcpy(conta->nombre, "Luis");
	conta->promedio = 5.0;//Ejemplo para un tamaño de datos no definido
	
	return 0;
}

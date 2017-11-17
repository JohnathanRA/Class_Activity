#include <stdio.h>

int edad = 0;
float x=10;
int cuadrado(int val);
int cubo(int val);

int main(){
	int x;
	int y;
	
	x = cuadrado(54);
	y = cubo(24);
	
	return 0;
}

int cuadrado(int val){
	val = val * val;
	return val;
}

int cubo(int val){
	val = val * val * val;
	return val;
}

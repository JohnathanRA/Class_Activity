#include <stdio.h>

void suma(int *a);
int main(){
	int x = 10;
	
	suma(&x);
	
	printf("%d\n\n", x);
	
	return 0;
}

void suma(int *b){
	
	*b = *b + 20;
	
}

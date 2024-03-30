#include <stdio.h>

int arearectangulo (int base,int altura){
	return base * altura;
}

int main(int argc, char *argv[]) {
	int base;
	int altura;
	
	int area;
	base = 4;
	altura = 5;
	area = arearectangulo (base,altura);
	
	printf("El resultado es: %d",area);
	
	
	return 0;
}


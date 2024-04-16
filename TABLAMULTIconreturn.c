#include <stdio.h>

int Tablamultiplicar(int numero) {
	
	for (int i = 1; i <= 10; ++i) {
		printf("%d x %d = %d\n", numero, i, numero * i);
	}
	return numero; 
}

int main(int argc, char *argv[]) {
	int num,resultado;
	printf("Ingresa el numero de la tabla a multiplicar: ");
	scanf("%d",&num);
	
	
	 resultado = Tablamultiplicar(num);
	
	
	printf("El numero de la tabla es: %d\n", resultado);
	
	return 0;
}


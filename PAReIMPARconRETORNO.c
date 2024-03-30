#include <stdio.h>

int Numeroparimpar(int n1){
	
	return (n1 % 2 == 0);
}

int main(int argc, char *argv[]) {
	int numero;
	
	printf("Ingresa un numero entero:\n");
	scanf("%d",&numero);
	
	if (Numeroparimpar(numero)){
		printf("El numero es par.");
	}
	else{
		printf("El numero es impar.");
	}
	
	return 0;
}


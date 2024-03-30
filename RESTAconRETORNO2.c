#include <stdio.h>

int resta (int n1, int n2){
	return n1 - n2;
}

int main(int argc, char *argv[]) {
	
	int numero1,numero2,resultadoresta;
	
	printf("Ingresa el primer numero:\n");
	scanf("%d",&numero1);
	
	printf("Ingresa el segundo numero:\n");
	scanf("%d",&numero2);
	
	resultadoresta = resta  (numero1,numero2);
	printf("El resultado de la resta es: %d",resultadoresta);
	
	return 0;
}


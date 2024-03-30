#include <stdio.h>

void suma_numeros (int n1, int n2){
	
int suma;
suma=n1+n2;
printf("la suma es: %d",suma);
}

int main(int argc, char *argv[]) {
	int n1,n2;
	printf("ingresa un numero: ");
	scanf("%d",&n1);
	printf("ingresa otro numero: ");
	scanf("%d",&n2);
	
	suma_numeros (n1,n2);
		
	return 0;
}


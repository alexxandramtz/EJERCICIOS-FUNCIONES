#include <stdio.h>


int numeromayor (int n1,int n2,int n3){
	int nmayor;
	nmayor = n1;
	
	if(n2 > nmayor){
	nmayor = n2;
	}
	if(n3 > nmayor){
		nmayor = n3;
	}
	
	
	return nmayor;
}


int main(int argc, char *argv[]) {
	
	int numero1,numero2,numero3,mayor;
	
	printf("Ingresa el primer numero: \n");
	scanf("%d",&numero1);
	
	printf("Ingresa el segundo numero: \n");
	scanf("%d",&numero2);
	
	printf("Ingresa el tercer numero: \n");
	scanf("%d",&numero3);
	
/*	mayor = numeromayor(numero1,numero2,numero3);*/
/*	printf("El numero mayor es: %d",mayor);*/
/*	numero1 = 11;*/
/*	numero2 =13;*/
/*	numero3 = 5;*/
	
	mayor = numeromayor(numero1,numero2,numero3);
	printf("El numero mayor es: %d",mayor);
	
	return 0;
}


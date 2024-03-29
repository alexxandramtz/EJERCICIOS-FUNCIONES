#include <stdio.h>

void multiplicacion (){
	int n1,n2,multiplicacion;
	printf("ingresa el primer numero \n");
	scanf("%d",&n1);
	printf("ingresa el segundo numero \n");
	scanf("%d",&n2);
	multiplicacion = n1 * n2;
	printf("El total de la multiplicacion es : %d",multiplicacion);
}

void numero (){
	int n1,n2,n3;
	n1=3;
	n2=5;
	n3=7;
	if(n1>n2 && n1>n3){
		printf("\nel numero mayor es %d",n1);
	}
	else if(n2>n1 && n2>n3){
		printf("\nel numero mayor es el  %d",n2);
	}
	else if(n3>n1 && n3>n2){
		printf("\nel numero mayor es el  %d",n3);
	}
	
}







int main(int argc, char *argv[]) {
	multiplicacion ();
	numero ();
	return 0;
}


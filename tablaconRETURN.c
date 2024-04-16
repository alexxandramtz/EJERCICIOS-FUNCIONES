#include <stdio.h>


int tablamultiplicacion ( int conta){
	int numero;
	printf("\ningrese el numero de la tabla que desea saber: ");
	scanf("%d",&numero);
	
	for (conta=1; conta<=10; conta++){
		printf("\n%d * %d = %d ",numero,conta,numero*conta);
		
		
	}
	    return numero;
}
	
	

int main(int argc, char *argv[]) {
	int conta,resultado;
	conta=1;
	
	//tablamultiplicacion(conta);
	conta=tablamultiplicacion(resultado);
	//printf("\nel numero de la tabla es :%d\n",resultado);
	
	return 0;
}	
	



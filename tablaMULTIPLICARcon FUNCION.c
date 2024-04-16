#include <stdio.h>





int main(int argc, char *argv[]){
	

	
	
	int i,numero;
	
	
		printf("ingrese el numero de la tabla que desea saber: ");
		scanf("%d",&numero);
		
		for (i=1; i<=10; i++){
			printf("\n%d * %d = %d",numero,i,numero*i);
			
		}
	    
	


	return 0;
}	
	



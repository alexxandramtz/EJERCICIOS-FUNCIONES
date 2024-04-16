#include <stdio.h>

int positivonegativo(int numero){
	
	if(numero > 0){
		printf("el numero es positivo");
	}
	else {
		printf("el numero es negativo");
	}
	
	
	
	return numero;
	
}




int main(int argc, char *argv[]) {
	int num;
	num =-9;
	int resultado;
	resultado=positivonegativo(num);
	//positivonegativo(num);
    //printf("\nel numero es: %d",positivonegativo(num));
		
	printf("\nel numero es:%d",resultado);	
	return 0;
}


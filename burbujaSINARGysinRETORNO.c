#include <stdio.h>

void burbuja(){
	
	int arreglo[3] = {30,20,10};
	int aux;
		for (int i = 0; i < 3; i++){
			for(int j = 0; j < 3; j++){
				
				
				if(arreglo[j]>arreglo[j+1]){
					
					
					aux = arreglo[j];
					
					
					arreglo[j] = arreglo[j+1];
					
					
					arreglo[j+1] = aux;             
				}                                 
			}
	    }


	printf("numeros en orden ascendente:\n");
	for (int i = 0; i < 3; i++){
		printf("%d\n",arreglo[i]);
	}
}
int main(int argc, char *argv[]) {
	
	
	burbuja();
	
	
	return 0;
}

	


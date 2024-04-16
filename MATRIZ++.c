#include <stdio.h>


void matriz (int n1, int n2){
	
	
	//printf ("%d - %d",n1,n2);
	int i,j;
	for (i =1; i<=n1; i++){
		for (j =1; j<=n2; j++){
			printf(" + ");
		}
		printf("\n");
	}
	
	
}

int main(int argc, char *argv[]) {
	int filas, columnas;
	filas = 5;
	columnas = 3;
	
	matriz (filas,columnas);
	
	
	
	
	return 0;
}


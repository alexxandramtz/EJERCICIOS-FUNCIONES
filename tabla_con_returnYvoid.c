#include <stdio.h>




int operaciontabla(int numerotabla1, int i){
	
	return numerotabla1 *i; ;
	
	
}
void ciclodetabla(int numerotabla){
	
	for(int i =1; i<=10; i++){
		int producto = operaciontabla(numerotabla,i);
		printf("\n%d x %d = %d",numerotabla,i,producto);
	}
	
}	
	
	
	int main(int argc, char *argv[]) {
		int numerot;
		numerot=8;
		
		ciclodetabla(numerot);
		return 0;
	}


#include <stdio.h>

//Realizar ek area de un rectangulo cuya base sea de 35cm y de altura 15cm.

void areatriangulo (float base, float altura){
	float area;
	area=base*altura/2;
	printf("El area del traingulo es: %.2f",area);
}
	
	int main(int argc, char *argv[]) {
	float base,altura;
	
	base=15;
	altura=15;
	
	areatriangulo(base,altura);
	
	
	
	
	
	
	
	return 0;
}


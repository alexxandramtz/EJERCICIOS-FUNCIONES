#include <stdio.h>


void numeromayor (int n1, int n2){
	
	if (n1>n2 && n2<n1){
		printf("El numeo mayor es el numero 1: %d",n1);
		
	}
	else if (n2>n1 && n1<n2){
		printf("El numero mayor es el numero 2: %d",n2);
	}
}
	
	
	
int main(int argc, char *argv[]) {
	
	int n1,n2;
	n1=40;
	n2=100;
	numeromayor (n1,n2);
	return 0;
}


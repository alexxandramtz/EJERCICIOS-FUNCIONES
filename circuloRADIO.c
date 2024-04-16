#include <stdio.h>

float areacirculo(float pi, float radio){
	return pi * radio * radio;
}


int main(int argc, char *argv[]) {
	
	float pi,radio;
	
	pi =3.14;
	radio =3.0;
	
	float resultadoarea;
	resultadoarea=areacirculo(pi,radio);
	//areacirculo(pi,radio);
	
	//printf("el area del circulo es: %.2f",areacirculo(pi,radio));
	printf("el area del circulo es: %.2f",resultadoarea);
	return 0;
}


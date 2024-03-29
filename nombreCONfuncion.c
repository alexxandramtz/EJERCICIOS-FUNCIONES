#include <stdio.h>

//con una funciion sin retorno pero con argumentos imprimir un mensaje que se repita 10 veces.
void mensajerepetido (char nombre [], int finciclo){
	
	int i;
	for (i = 1; i <= finciclo; i++){
		printf("%s \n",nombre);
	}
	
	
	
}
	
	int main(int argc, char *argv[]) {
	
	char nombre []="Jenny.";
	int finciclo;
	finciclo=10;
	
	mensajerepetido(nombre,finciclo);
	
	return 0;
}


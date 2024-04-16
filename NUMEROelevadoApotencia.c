#include <stdio.h>

//Sacar un numero elevado a una potencia con argumentos pero sin retorno.
void Potencia (int numero, int potencia){
	int rpotencia = 1;
	for(int i=1; i<=potencia; i++){
		rpotencia *= numero;
	}
	printf("el resultado de la potencia es: %d",rpotencia);
}

	

int main(int argc, char *argv[]) {
	
	int numero,potencia;
	
	numero = 3;
    potencia = 5;
	
	Potencia(numero,potencia);
	
	return 0;
}


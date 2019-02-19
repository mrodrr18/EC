//Pide 3 números y dice cuál es el mayor y si son iguales

#include <stdio.h>

int main(){
	int num1, num2, num3;
	printf("Introduce un número\n");
	scanf("%d", &num1);
	printf("Introduce un número\n");
	scanf("%d", &num2);
	printf("Introduce un número\n");
	scanf("%d", &num3);

	if(num1>num2 && num1>num3){
		printf("El %d es el mayor", num1);
	}

	if(num2>num1 && num2>num3){
		printf("El %d es el mayor", num2);
	}
	
	if(num3>num2 && num3>num1){
		printf("El %d es el mayor", num3);
	}

	if(num1==num2 && num1==num3){
		printf("Los tre números son iguales\n");
	}

}

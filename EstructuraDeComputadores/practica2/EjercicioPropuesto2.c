//Pasar multiplicacion a suma
 #include <stdio.h>

	int main(){
	int num1, num2;
	int suma=0;

	printf("Introduce el número que quieres sumar\n");
	scanf("%d", &num1);
	printf("Introduce las veces que lo quieres sumar\n");
	scanf("%d", &num2);

	for(int i=0; i<num2 ; i++){
		suma=suma+num1;
	
	}
	printf("El resultado es: %d. \n", suma);

	}

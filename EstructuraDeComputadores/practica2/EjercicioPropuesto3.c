//Calcular factorial de un número

#include <stdio.h>
	int main(){
		
		int num;
		int factorial=1;
		printf("Introduce el número del que quieres calcular el factorial.\n");

		scanf("%d", &num);
		if(num==0){
			printf("Error al calcular el factorial\n");
		}
		for(int i=0; i<num-1; i++){
			factorial=factorial*num;
			num= num--;
		}
		printf("El factorial es: %d", factorial);

	}

#include <stdio.h>

int main() {
	
	int num[5],i,acumulador = 0;
	float promedio,total = 0;
	
	for(i=0; i<5;i++)
	{
		
		printf("ingrese 5 numeros : ");
		scanf("%d",&num[i]);
		total = total + num[i];
		
		if(acumulador < num[i]){
			acumulador = num[i];
		}
	}
	
	promedio = total/5;
	
	printf("El numero mayore es %d ",acumulador);
	printf("El promedio es %f ",promedio);
	
	return 0;
}


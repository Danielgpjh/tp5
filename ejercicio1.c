#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int resistencia [5],total=0;
	int i;
	
	for(i=0; i<5;i++){
		
		printf("ingrese las resistencias: ");
		scanf("%d",&resistencia[i]);
		
		total = total + resistencia[i];
	}
	
	printf("la resistencia total es %d ",total);
	
	return 0;
}


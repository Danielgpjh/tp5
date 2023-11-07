#include <stdio.h>

int main() {
	
	int alumnos[30],acum = 0,total,i;
	
	for(i=0; i<30;i++){
		printf("ingrese las notas de los alumnos: ");
		scanf("%d",&alumnos[i]);	
	
		acum = acum + alumnos[i];
		
	}
	
	total = acum/30;
	
	printf("su promedio es %d ",total);
	
	return 0;
}


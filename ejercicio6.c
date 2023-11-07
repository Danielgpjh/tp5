#include <stdio.h>

int main(int argc, char *argv[]) {
	
	int sueldo[20],i,cont = 0,cont1 = 0 ;
	
	for(i=0; i<20;i++){
		
		printf("ingrese sus sueldos: ");
		scanf("%d",&sueldo[i]);	
		
		if(sueldo[i] > 2000){
			cont= cont + 1 ;
		}else{
		cont1 = cont1 + 1;
	}
		
	}
	
printf("Los sueldos mayores a 2000 son %d ",cont);
printf("El cantidad de sueldos que no son mayor a 2000 son %d",cont1);
	
return 0;
}


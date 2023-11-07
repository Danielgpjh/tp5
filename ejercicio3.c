#include <stdio.h>

int main() {
	
	int num1,num2,a,b,i;
	int inter[100];
	
	printf("Ingrese dos numeros ");
	scanf("%d",&num1);
	scanf("%d",&num2);
	
	if(num1 >= num2){
		a= num1;
		b=num2;
		
	}else{
		a= num2;
		b=num1;
	}
	
	 for(i=b ;i < a;i++){
		inter[i] = i;
		
		printf("El intermedio son %d`\n",inter[i]);
	}
	return 0;
}

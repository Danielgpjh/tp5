#include <stdio.h>

int main() {
    int n = 10; 
    int fibo[n]; 
    
    printf("Ingresa el numero de teminos de la secuencia Fibonacci que deseas mostrar: ");
    scanf("%d", &n);
   
    fibo[0] = 1;
    fibo[1] = 1;
  
    for (int i = 2; i < n; i++) {
        fibo[i] = fibo[i - 1] + fibo[i - 2];
    }
    
    printf("Secuencia Fibonacci de los primeros %d terminos:\n", n);
    
    for (int i = 0; i < n; i++) {
        printf("%d", fibo[i]);
        if (i < n - 1) {
            printf(", ");
        }
    }
    
    return 0;
}





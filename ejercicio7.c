#include <stdio.h>

int main() {
    
    float notas[15];
    
    for (int i = 0; i < 15; i++) {
        printf("Ingrese la nota del alumno %d: ", i + 1);
        scanf("%f", &notas[i]);
    }
    
    printf("Alumnos con notas mayores a 8:\n");
    for (int i = 0; i < 15; i++) {
        
         i + 1;
        
        if (notas[i] > 8.0) {
            printf("Alumno Nota: %.2f\n",notas[i]);
        }
    }
    
    return 0;
}
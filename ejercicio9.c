#include <stdio.h>

int main() {
    int num,suma,i;
    
    printf("Ingresa la cantidad de nameros: ");
    scanf("%d", &num);

    if (num <= 0) {
        printf("La cantidad de nameros debe ser mayor que 0.\n");
        return 1;
    }

    int numeros[num];

    printf("Ingresa los nameros uno por uno (distintos de 0):\n");

    for (i = 0; i < num; i++) {
        scanf("%d", &numeros[i]);
        if (numeros[i] == 0) {
            printf("Los nameros deben ser distintos de 0.\n");
            return 1;
        }
    }

    int ascendente = 1;
    int descendente = 1;

    for (i = 1; i < num; i++) {
        if (numeros[i] > numeros[i - 1]) {
            descendente = 0;
        } else if (numeros[i] < numeros[i - 1]) {
            ascendente = 0;
        }
    }

    if (ascendente) {
        printf("Los nameros estan en orden ascendente.\n");
    } else if (descendente) {
        printf("Los números estan en orden descendente.\n");
    } else {
        printf("Los nameros estan desordenados.\n");
    }

    suma = numeros[0] + numeros[num - 1];
    printf("La suma entre el primer y el altimo namero es: %d\n", suma);

    return 0;
}

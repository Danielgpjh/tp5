include <stdio.h>

int main() {
    int vector[10];
    int suma = 0;
    int producto = 1;
    float promedio;
    int elementosPorDebajo = 0;

    printf("Ingrese 10 elementos del vector:\n");
    for (int i = 0; i < 10; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &vector[i]);
    }

    for (int i = 0; i < 10; i++) {
        suma += vector[i];
        producto *= vector[i];
    }
   promedio = (float)suma / 10;

    for (int i = 0; i < 10; i++) {
        if (vector[i] < promedio) {
            elementosPorDebajo++;
        }
    }

    printf("Suma de elementos: %d\n", suma);
    printf("Producto de elementos: %d\n", producto);
    printf("Promedio de elementos: %.2f\n", promedio);
    printf("Cantidad de elementos por debajo del promedio: %d\n", elementosPorDebajo);

    return 0;
}

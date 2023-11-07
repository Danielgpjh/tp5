#include <stdio.h>

int main() {
    int ventas[5][15];
    int totalUnidadesVendidas = 0;
    int vendedorMaximoVenta = 0;
    int maximoVentaDiaria = 0;

    for (int vendedor = 0; vendedor < 5; vendedor++) {
        printf("Ingrese las ventas del vendedor %d para los 15 dias:\n", vendedor + 1);
        for (int dia = 0; dia < 15; dia++) {
            printf("Dia %d: ", dia + 1);
            scanf("%d", &ventas[vendedor][dia]);
            totalUnidadesVendidas += ventas[vendedor][dia];

            if (ventas[vendedor][dia] > maximoVentaDiaria) {
                maximoVentaDiaria = ventas[vendedor][dia];
                vendedorMaximoVenta = vendedor + 1;
            }
        }
    }

    printf("El total de unidades vendidas es: %d\n", totalUnidadesVendidas);

    printf("El vendedor con la mayor venta diaria es el vendedor %d con %d unidades vendidas en un dia.\n", vendedorMaximoVenta, maximoVentaDiaria);

    return 0;
}

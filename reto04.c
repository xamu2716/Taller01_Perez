#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i, *ptr, sum = 0; // Declarar variables
    printf("Enter number of elements: "); // Solicitar número de elementos
    scanf("%d", &n); // Leer número de elementos

    ptr = (int*) calloc(n, sizeof(int)); // Reservar memoria para n enteros

    if(ptr == NULL) { // si el apuntador no es null
        printf("Error! memory not allocated."); // Mensaje de error si falla la asignación
        exit(0); // Salir del programa
    }

    // Leer los elementos y sumarlos
    for(i = 0; i < n; ++i) {
        printf("Enter elements %d :", i + 1); // Pedir el elemento i+1
        scanf("%d", ptr + i); // Leer el elemento
        sum += *(ptr + i); // Sumar el elemento
    }

    printf("Sum = %d", sum); // Imprimir la suma
    free(ptr); // Liberar memoria

    return 0; // Retornar 0
}

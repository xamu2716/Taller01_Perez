#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr; // Declarar puntero a entero
    ptr = malloc(15 * sizeof(*ptr));  // Reservar memoria para 15 enteros

    if (ptr != NULL) { // si el apuntador no es NULL
        *(ptr + 5) = 480;  /* assign 480 to sixth integer */
        printf("Value of the 6th integer is %d\n", *(ptr + 5)); // Imprimir el valor del sexto entero
        free(ptr); // Liberar memoria
    }

    return 0; // Retornar 0
}

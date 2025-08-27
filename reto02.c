#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char *q = NULL; // Declarar puntero q e inicializarlo en NULL

    printf("Requesting space for \"Goodbye\" \n"); // Mensaje de depuración
    q = (char *)malloc(strlen("Goodbye")+1); // Reservar memoria 

    if (!q) { // Verificar si la memoria fue asignada correctamente
        perror("Failed to allocate space because"); // Imprimir mensaje de error
        exit(1); // Salir del programa
    }

    printf("About to copy \"Goodbye\" to q at address %p \n", q); // Imprimir mensaje y la dirección de memoria de q
    strcpy(q, "Goodbye"); // Copiar a q
    printf("String copied\n"); // Mensaje de confirmación de copia
    printf("%s \n", q); // Imprimir lo que hay en q

    free(q); // Liberar memoria

    return 0; // Retornar 0
}

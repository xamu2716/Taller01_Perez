#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr, i, n1, n2; // Declarar variables
    printf("Enter size: "); // Solicitar tamaño inicial
    scanf("%d", &n1); // Leer tamaño inicial
    ptr = (int*) malloc(n1 * sizeof(int)); // Reservar memoria para n1 enteros
    printf("Addresses of previously allocated memory: "); // Mensaje de confirmación
    for(i = 0; i < n1; ++i)//recorrer enteros n1
        printf("\n\np = %p\n", ptr+i); // Imprimir dirección de cada entero

    printf("\n Enter the new size: "); // Solicitar nuevo tamaño
    scanf("%d", &n2); // Leer nuevo tamaño
    ptr = realloc(ptr, n2 * sizeof(int)); //realocar memoria para n2 enteros
    printf("Addresses of newly allocated memory: "); // Mensaje de confirmación
    for(i = 0; i < n2; ++i)//recorrer enteros n2
        printf("\n\np = %p\n", ptr+i); // Imprimir dirección de cada entero

    free(ptr); // Liberar memoria
}

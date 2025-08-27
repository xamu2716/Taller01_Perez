#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char *p = (char *)malloc(50 * sizeof(char)); //Reservar memoria para 50 caracteres
    char *q = (char *)malloc(50 * sizeof(char)); //Reservar memoria para 50 caracteres
    printf("Address of p = %p\n", p); //Imprime la dirección de memoria de p

    strcpy(p, "Hello, I'm the best in Operating Systems!!!"); //copiar texto a p
    printf("%s\n", p); // Imprime el texto guardado en p
    printf("About to copy \"Goodbye\" to q\n"); //Texto de confirmación
    strcpy(q, "Goodbye"); //copiar texto a q
    printf("String copied\n"); //Texto de confirmación
    printf("%s\n", q); // Imprime el texto guardado en q

    free(p); //liberar memoria
    free(q); //liberar memoria

    return 0; //retornar 0
}

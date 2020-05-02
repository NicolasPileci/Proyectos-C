/** Indica la cantidad de caracteres que posee una cadena **/

#include <stdio.h>
#include <stdlib.h>

size_t strlen2(char *);

int main()
{
    system("color 0a");
    char cad[20] = "Hola a todos";
    printf("Cantidad de caracteres: %d\n", strlen2(cad));
    return 0;
}

size_t strlen2(char *s)
{
    size_t cont = 0;
    while(*s)
    {
        cont++;
        s++;
    }
    return cont--;
}



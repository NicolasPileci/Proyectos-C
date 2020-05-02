/** Copia dos cadenas **/

#include <stdio.h>
#include <stdlib.h>

char *strcpy2 (char *s, const char *desde);

int main ()
{
    system ("color 0a");
    char cad1[30] = {"Hola"},                       /* Las cadenas solos se copian o definen con strcpy (salvo cuando son predefinidas) */
         cad2[30];
    strcpy2 (cad2, cad1);                           /* O strcpy (cad2, "Hola"); */
    printf ("Cadena: \"%s\"\n", cad2);
    return 0;
}

char *strcpy2 (char *s, const char *desde)
{
    char *aux = s;
    while (*desde)
    {
        *s = *desde;
        s++;
        desde++;
    }
    *s = '\0';
    return aux;
}



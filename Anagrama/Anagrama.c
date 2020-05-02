/** Dertermina si una cadena es anagrama de la otra **/

#include <stdio.h>
#include <stdlib.h>

int esLetra(const char letra);
char aMayus(const char letra);
int contarVeces(const char *cad, const char letra);
int esAnagrama(const char *cad1, const char *cad2);

int main()
{
    system("color 0a");
    char cad1[] = {'h', 'o', 'l', 'a', '\0'},
         cad2[] = {'o', '9', 'h', 'l', 'a', '\0'};
    if(esAnagrama(cad1, cad2))
        puts("LAS PALABRAS SON ANAGRAMA");
    else
        puts("LAS PALABRAS NO SON ANAGRAMA");
    return 0;
}

int esLetra(const char letra)
{
    return (letra >= 'a' && letra <= 'z') || (letra >= 'A' && letra <= 'Z')? 1: 0;
}

char aMayus(const char letra)
{
    return letra >= 'a' && letra <= 'z'? letra -32: letra;
}

int contarVeces(const char *cad, const char letra)
{
    int cont = 0;
    const char *aux = cad;
    while(*aux)
    {
        if(aMayus(*aux) == aMayus(letra))
            cont++;
        aux++;
    }
    return cont;
}

int esAnagrama(const char *cad1, const char *cad2)
{
    const char *ini1 = cad1,
               *ini2 = cad2;
    int cant1,
        cant2;

    while(*ini1)
    {
        if(esLetra(*ini1))
        {
            cant1 = contarVeces(ini1, *ini1);
            cant2 = contarVeces(ini2, *ini1);
            if(cant1 != cant2)
                return 0;
        }
        ini1++;
    }
    while(*ini2)
    {
        if(esLetra(*ini2))
        {
            cant2 = contarVeces(ini2, *ini2);
            cant1 = contarVeces(cad1, *ini2);
            if(cant2 !=  cant1)
                return 0;
        }
        ini2++;
    }
    return 1;
}

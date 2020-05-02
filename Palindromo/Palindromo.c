/** Determina si la cadena de numeros o letras es capicua o palindromo. **/

#include <stdio.h>
#include <stdlib.h>
#define SI 1
#define NO 0
#define ES_SEPARADOR(X)((X) == 32 || (X) == 9)

typedef unsigned int tSiNo;

tSiNo esPalindromo(const char *p);

int main()
{
    system("color 0a");
    char cad[] = "anita lava la tina";      /* Funciona tanto con numeros como con letras */
    if(esPalindromo(cad))
        printf("Es palindromo/capicua.\n");
    else
        printf("No es palindromo/capicua.\n");
    return 0;
}

tSiNo esPalindromo(const char *p)
{
    const char *final = p;
    if(!p || !*p)
        return NO;
    while(*final)
        final++;
    final--;                              /* Para que no apunte a la direccion del caracter nulo */
    while(p < final)
    {
        while(ES_SEPARADOR(*p))
               p++;
        while(ES_SEPARADOR(*final))
               final--;
        if(*p != *final)
            return NO;
        p++;
        final--;
    }
    return SI;
}

/** Determina si una matriz es o no simetrica **/

#include <stdio.h>
#include <stdlib.h>
#define TAM 3
#define SI 1
#define NO 0

int esSimetrica (const int m[][TAM]);

int main()
{
    system ("color 0a");
    const int mat[][TAM] = {{1, 2, 0},
                            {2, 4, 6},
                            {0, 6, 2}};
    if (esSimetrica (mat))
        printf ("La matriz es simetrica.\n");
    else
        printf ("La matriz no es simetrica.\n");
    return 0;
}

int esSimetrica (const int m[][TAM])
{
    int i,
        j;
    for (i=0 ; i<TAM ; i++)
        for (j=i+1 ; j<TAM ; j++)
                if (m[i][j] != m[j][i])
                    return NO;
    return SI;
}

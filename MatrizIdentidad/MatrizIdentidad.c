/** Define si una matriz es o no identidad **/

#include <stdio.h>
#include <stdlib.h>
#define TAM 3
#define SI 1
#define NO 0

int esIdentidad (const int m[][TAM]);

int main()
{
    system ("color 0a");
    const int mat[][TAM] = {{1, 0, 0},
                            {0, 1, 0},
                            {0, 0, 1}};
    if (esIdentidad(mat))
        printf ("La matriz es identidad.\n");
    else
        printf ("La matriz no es identidad.\n");
    return 0;
}

int esIdentidad (const int m[][TAM])
{
    int i,
        j;
    for (i=0 ; i<TAM ; i++)
        for (j=0 ; j<TAM ; j++)
            if ((i==j && m[i][j] != 1) || (i!=j && m[i][j] != 0))
                return NO;
    return SI;
}

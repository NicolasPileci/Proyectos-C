/** Calcula la suma de los triangulos superior, inferior, izquierda y derecha de una matriz **/

#include <stdio.h>
#include <stdlib.h>
#define TAM 3

void mostrarMatriz (int m[][TAM]);
int trianguloSuperior (int m[][TAM]);
int trianguloInferior (int m[][TAM]);
int trianguloIzquierda (int m[][TAM]);
int trianguloDerecha (int m[][TAM]);

int main ()
{
    system ("color 0a");
    int m[][TAM] = {{1, 2, 3},
                    {4, 5, 6},
                    {7, 8, 9}};
    mostrarMatriz(m);
    printf ("\nTriangulo Superior: %d\n", trianguloSuperior (m));
    printf ("\nTriangulo Inferior: %d\n", trianguloInferior (m));
    printf ("\nTriangulo Izquierdo: %d\n", trianguloIzquierda (m));
    printf ("\nTriangulo Derecho: %d\n", trianguloDerecha(m));
    return 0;
}

void mostrarMatriz (int m[][TAM])
{
    int i,
        j;
    for (i=0; i<TAM; i++)
    {
        printf ("\n");
            for (j=0; j<TAM; j++)
                printf ("%d \t", m[i][j]);
    }
    printf ("\n");
}

int trianguloSuperior (int m[][TAM])
{
    int suma = 0,
        i,
        j;
    for (i=0; i<TAM/2; i++)
        for (j=1+i; j<TAM-1-i; j++)
            suma += m[i][j];
    return suma;
}

int trianguloInferior (int m[][TAM])
{
    int suma = 0,
        i,
        j;
    for (i=(TAM/2)+1; i<TAM; i++)
        for (j=i-1; j>TAM-i-1; j--)
            suma += m[i][j];
    return suma;

}

int trianguloIzquierda (int m[][TAM])
{
    int suma = 0,
        i,
        j;
    for (j=0; j<(TAM/2); j++)
        for(i=j+1; i<TAM-1-j; i++)
        suma += m[i][j];
    return suma;
}

int trianguloDerecha (int m[][TAM])
{
    int suma = 0,
        i,
        j;
    for (j=(TAM/2)+1; j<TAM; j++)
        for (i=TAM-j; i<j; i++)
            suma += m[i][j];
    return suma;
}

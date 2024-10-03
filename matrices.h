// Funciones para el manejo de matrices en C
// por H. Gabriel Máculus <gabrielmaculus @ gmail.com>

#include <inttypes.h>
#include <stdio.h>

// suma de dos matrices de 3x3 de forma estatica
void suma_m3x3(int32_t a[3][3], int32_t b[3][3], int32_t r[3][3])
{
    r[0][0] = a[0][0] + b[0][0];
    r[0][1] = a[0][1] + b[0][1];
    r[0][2] = a[0][2] + b[0][2];

    r[1][0] = a[1][0] + b[1][0];
    r[1][1] = a[1][1] + b[1][1];
    r[1][2] = a[1][2] + b[1][2];

    r[2][0] = a[2][0] + b[2][0];
    r[2][1] = a[2][1] + b[2][1];
    r[2][2] = a[2][2] + b[2][2];
}
// resta de dos matrices de 3x3 de forma estatica
void resta_m3x3(int32_t a[3][3], int32_t b[3][3], int32_t r[3][3])
{
    /*
    [1,2,3]
    [4,5,6]
    [7,8,9]
    */
    r[0][0] = a[0][0] - b[0][0]; // 1
    r[0][1] = a[0][1] - b[0][1]; // 2
    r[0][2] = a[0][2] - b[0][2]; // 3

    r[1][0] = a[1][0] - b[1][0]; // 4
    r[1][1] = a[1][1] - b[1][1]; // 5
    r[1][2] = a[1][2] - b[1][2]; // 6

    r[2][0] = a[2][0] - b[2][0]; // 7
    r[2][1] = a[2][1] - b[2][1]; // 8
    r[2][2] = a[2][2] - b[2][2]; // 9
}

// Demostracion a suma de matrices en forma lineal
// Para la computadora la matriz siempre es un vector continuo
void suma_m3x3_linear(int32_t a[3][3], int32_t b[3][3], int32_t r[3][3])
{
    int32_t *pa, *pb, *pr;
    pa = (int32_t *)a;
    pb = (int32_t *)b;
    pr = (int32_t *)r;

    // printf("sizeof matriz: %d\n", sizeof(a));
    // printf("sizeof matriz: %d\n", sizeof(b));
    // printf("sizeof matriz: %d\n", sizeof(r));
    int8_t matriz_tam = sizeof((int32_t *)r);
    for (int8_t i = 0; i <= matriz_tam; i++)
    {
        // printf("pa = %d\npb = %d\n", *pa, *pb);
        *pr = *pa + *pb;
        pa++;
        pb++;
        pr++;
    }
}
// multiplicacion de una matriz de 3x3 por un numero
void mult_n_m3x3(int32_t a[3][3], int32_t b, int32_t r[3][3])
{
    r[0][0] = a[0][0] * b;
    r[0][1] = a[0][1] * b;
    r[0][2] = a[0][2] * b;

    r[1][0] = a[1][0] * b;
    r[1][1] = a[1][1] * b;
    r[1][2] = a[1][2] * b;

    r[2][0] = a[2][0] * b;
    r[2][1] = a[2][1] * b;
    r[2][2] = a[2][2] * b;
}

void ver_m3x3(int32_t a[3][3])
{
    int8_t i, j;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d ", a[i][j]);
        }
        puts("");
    }
}

void traspuesta_m3x3(int32_t a[3][3], int32_t t[3][3])
{
    int8_t i, j;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            t[i][j] = a[j][i];
        }
    }
}

// Obtener el determinante de una matriz de 3x3
void determinante_sarrus_m3x3(int32_t a[3][3], int32_t d)
{
    d =  (a[0][0] * a[1][1] * a[2][2]) + (a[0][1] * a[1][2] * a[2][0]) + (a[0][2] * a[1][0] * a[2][1])
        - (a[0][2] * a[1][1] * a[2][0]) - (a[0][1] * a[1][0] * a[2][2]) - (a[0][0] * a[1][2] * a[2][1]);
}

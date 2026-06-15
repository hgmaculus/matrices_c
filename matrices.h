// Funciones para el manejo de matrices en C
// por H. Gabriel Máculus <gabrielmaculus @ gmail.com>

#include <inttypes.h>
#include <stdio.h>

typedef int32_t m2x2[2][2];
typedef int32_t m3x3[3][3];
typedef int32_t m32_t;

// suma de dos matrices de 2x2 de forma estatica
void m2x2_suma(m2x2 a, m2x2 b, m2x2 r)
{
    r[0][0] = a[0][0] + b[0][0];
    r[0][1] = a[0][1] + b[0][1];
    r[1][0] = a[1][0] + b[1][0];
    r[1][1] = a[1][1] + b[1][1];
}

// resta de dos matrices de 3x3 de forma estatica
void m2x2_resta(m2x2 a, m2x2 b, m2x2 r)
{
    r[0][0] = a[0][0] - b[0][0];
    r[0][1] = a[0][1] - b[0][1];
    r[1][0] = a[1][0] - b[1][0];
    r[1][1] = a[1][1] - b[1][1];
}

// imprime en pantalla una matriz m2x2 apuntada por a
void m2x2_imprimir(m2x2 a)
{
    int8_t i, j;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("%d ", a[i][j]);
        }
        puts("");
    }
}

// suma de dos matrices de 3x3 de forma estatica
void m3x3_suma(m3x3 a, m3x3 b, m3x3 r)
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
void m3x3_resta(m3x3 a, m3x3 b, m3x3 r)
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
void m3x3_suma_linear(int32_t a[3][3], int32_t b[3][3], int32_t r[3][3])
{
    int32_t *pa, *pb, *pr;
    pa = (int32_t *)a;
    pb = (int32_t *)b;
    pr = (int32_t *)r;

    // printf("sizeof matriz: %d\n", sizeof(a));
    // printf("sizeof matriz: %d\n", sizeof(b));
    // printf("sizeof matriz: %d\n", sizeof(r));
    int8_t matriz_tam = sizeof((int32_t *)r);
    //printf("Matriz size: %d\n", matriz_tam);
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
// la matriz resultante es r
void m3x3_mult_n(m3x3 a, int32_t b, m3x3 r)
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
// multiplicacion de dos matrices de 3x3
// la matriz resultante es r
void m3x3_mult(m3x3 a, m3x3 b, m3x3 r)
{
    r[0][0] = a[0][0] * b[0][0] + a[0][1] * b[1][0] + a[0][2] * b[2][0];
    r[0][1] = a[0][0] * b[0][1] + a[0][1] * b[1][1] + a[0][2] * b[2][1];
    r[0][2] = a[0][0] * b[0][2] + a[0][1] * b[1][2] + a[0][2] * b[2][2];
    
    r[1][0] =  0;
    r[1][2] =  0;
    r[1][1] =  0;

    r[2][0] =  0;
    r[2][1] =  0;
    r[2][2] =  0;
    /*
    puts("");
    printf("1=%d 2=%d 3=%d", (a[0][0] * b[0][2]),  (a[0][1] * b[1][2]),  (a[0][2] * b[2][2]));
    puts("");
    */
}
// imprime en pantalla una matriz m3x3 apuntada por a
void m3x3_imprimir(m3x3 a)
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
// compara dos matrices m3x3 apuntada por a y b
int m3x3_comparar(m3x3 a, m3x3 b)
{
    int8_t i, j;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if(a[i][j] != b[i][j]) return 1;
        }
    }
    return 0;
}
// dada una matriz a 
void m3x3_traspuesta(int32_t a[3][3], int32_t t[3][3])
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

void m3x3_determinante_sarrus(int32_t a[3][3], int32_t *d)
{
    *d =  (a[0][0] * a[1][1] * a[2][2]) + (a[0][1] * a[1][2] * a[2][0]) + (a[0][2] * a[1][0] * a[2][1])
        - (a[0][2] * a[1][1] * a[2][0]) - (a[0][1] * a[1][0] * a[2][2]) - (a[0][0] * a[1][2] * a[2][1]);
}

#include "matrices.h"

int main(int argc, char const *argv[])
{

    puts("test_suma:");
    m3x3 a = {
        1,2,3,
        4,5,6,
        7,8,9
    };
    m3x3 b = {
        1,2,3,
        4,5,6,
        7,8,9
    };
    m3x3 r;
    m3x3_imprimir(a);
    puts("=");
    m3x3_imprimir(b);

    if (m3x3_comparar(a, b))
    {
        puts("Matrices distintas");
    }
    else
    {
        puts("Matrices iguales");
    }
    
    return 0;
}

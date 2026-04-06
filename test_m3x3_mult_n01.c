#include "matrices.h"

int main(int argc, char const *argv[])
{

    puts("test_mult_n: Multiplica una matriz por un numero N");
    m3x3 a = {
        1,2,3,
        4,5,6,
        7,8,9
    };

    m3x3 r;
    m3x3_imprimir(a);
    puts("*");
    puts("7");
    
    m3x3_mult_n(a, 7, r);
    puts("Resultado:");

    m3x3_imprimir(r);
    return 0;
}

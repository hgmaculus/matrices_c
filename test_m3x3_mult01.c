#include "matrices.h"

int main(int argc, char const *argv[])
{

    puts("test_mult:");
    /*
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
    */
    m3x3 a = {
        1,2,0,
        3,2,-1,
        5,1,-2
    };
    m3x3 b = {
        3,4,0,
        1,0,-2,
        -1,2,1
    };

    m3x3 r;
    m3x3_imprimir(a);
    puts("*");
    m3x3_imprimir(b);
    
    m3x3_mult(a, b, r);
    puts("Resultado:");

    m3x3_imprimir(r);
    return 0;
}

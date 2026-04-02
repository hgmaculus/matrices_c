#include "matrices.h"
#include <assert.h>

int main(int argc, char const *argv[])
{
    m3x3 a = {
        1, 2, 3,
        4, 5, 6,
        7, 8, 9
    };
    m3x3 b = {
        1, 2, 3,
        4, 5, 6,
        7, 8, 9
    };
    //m3x3_imprimir(a);

    m3x3 r;
    m3x3_imprimir(a);
    puts("-");
    m3x3_imprimir(b);
    
    m3x3_resta(a, b, r);
    puts("Resultado:");
    m3x3_imprimir(r);
    return 0;
}

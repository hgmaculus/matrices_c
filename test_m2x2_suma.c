#include "matrices.h"

int main(int argc, char const *argv[])
{

    puts("test suma_m2x2:");
    m2x2 a = {
        1,2,
        3,4
    };
    m2x2 b = {
        1,2,
        3,4
    };
    m2x2 r;
    m2x2_imprimir(a);
    puts("+");
    m2x2_imprimir(b);

    m2x2_suma(a, b, r);
    puts("Resultado:");

    m2x2_imprimir(r);
    return 0;
}

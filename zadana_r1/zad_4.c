/* Napisz program, który na wyjściu wypisze
Brazylia, Rosja, Indie, Chiny
Indie, Chiny
Brazylia, Rosja
Program powinien użyć dwóch funkcji (poza main()),
funkcja br() powinna wypisać "Brazylia, Rosja",
a funkcja ic() powinna wypisać "Indie, Chiny" */

void br(void);
void ic(void);
#include <stdio.h>

int main(void)
{
    br();
    printf(", ");
    ic();
    printf("\n");
    ic();
    printf("\n");
    br();
    return 0;
}

void br(void)
{
    printf("Brazylia, Rosja");
}

void ic(void)
{
    printf("Indie, Chiny");
}

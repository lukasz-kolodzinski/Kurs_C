/* Napisz program, który wywołuje funkcję raz_trzy(). Funkcja ta powinna
wyświetlać słowo "raz" w jednej linii, wywołać funkcję dwa(), a potem wyświetlić
słowo "trzy" w kolejnej linii.
Funkcja dwa() powinna wyświetlić słowo "dwa" w jednej linii.
Funkcja main() powinna wyświetlić frazę "zaczynamy!", zanim wywoła funkcję
raz_trzy(), a następnie wyświetlić frazę "koniec!".
Program powinien wyświetlić następującą treść:
zaczynamy!
raz
dwa
trzy
koniec! */

void raz_trzy(void); // prototyp funkcji
void dwa(void);

int main(void)
{
    printf("zaczynamy!\n");
    raz_trzy();
    printf("koniec!");
    return 0;
}

void raz_trzy(void)
{
    printf("raz\n");
    dwa();
    printf("trzy\n");
}

void dwa(void)
{
    printf("dwa\n");
}

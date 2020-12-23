/* Napisz program przeliczający Twoj wiek w latach,
na wiek w dniach. Nie uwzgledniaj ulamkow lat oraz lat przestepnych */

int main(void)
{
    int obecny_wiek, dni_w_roku;
    obecny_wiek = 31;
    dni_w_roku = 365;

    printf("%d lat, to %d dni", obecny_wiek, obecny_wiek*dni_w_roku);
    return 0;
}

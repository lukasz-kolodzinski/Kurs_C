/* Napisz program, dający w wyniku następujący tekst:
Panie Janie!
Panie Janie!
Rano wstan!
Niech program wykorzystuje dwie dodatkowe (poza main()) funkcje:
jedną wyświetlającą jednokrotnie tekst Panie Janie!
i drugą wyświetlającą ostatni z podanych wyżej wierszy */

#include <stdio.h>

int main(void)
{
    printf("Panie Janie! \n");
    panie_janie();
    rano_wstan();
    return 0;
}

void panie_janie(void)
{
    printf("Panie Janie! \n");
}

void rano_wstan(void)
{
    printf("Rano wstan!");
}

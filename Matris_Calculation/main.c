#include <stdio.h>

int main()
{
    int Matris_Line[3];
    int Matris_Column[3];

    printf("**************************************************\n");
    printf("Merhaba, Matris Hesaplama Programina Hosgeldiniz.\n");
    printf("**************************************************\n");

    int i;

    for(i = 0; i < 2; i++)
    {
        printf("%i. Matrisin Satir Sayisini Girin: ", (i + 1));
        scanf("%i", &Matris_Line[i]);
        printf("%i. Matrisin Sutun Sayisini Girin: ", (i + 1));
        scanf("%i", &Matris_Column[i]);

        printf("**************************************************\n");
    }

    int Matris_1[Matris_Line[0]][Matris_Column[0]];
    int Matris_2[Matris_Line[1]][Matris_Column[1]];

    Matris_Line[2] = ((Matris_Line[0] > Matris_Line[1]) ? Matris_Line[0] : Matris_Line[1]);
    Matris_Column[2] = ((Matris_Column[0] > Matris_Column[1]) ? Matris_Column[0] : Matris_Column[1]);

    printf("1. Matrisin\n\n");

    for(int j = 0; j < Matris_Line[0]; j++)
    {
        for(int k = 0; k < Matris_Column[0]; k++)
        {
            printf("%i. Satirinin %i. Sutununun Degerini Girin: ", (j + 1), (k + 1));
            scanf("%i", &Matris_1[j][k]);
        }
    }

    printf("**************************************************\n");
    printf("2. Matrisin\n\n");

    for(int j = 0; j < Matris_Line[1]; j++)
    {
        for(int k = 0; k < Matris_Column[1]; k++)
        {
            printf("%i. Satirinin %i. Sutununun Degerini Girin: ", (j + 1), (k + 1));
            scanf("%i", &Matris_2[j][k]);
        }
    }

    printf("**************************************************\n");
    printf("1. Matris\n\n");

    for(int j = 0; j < Matris_Line[0]; j++)
    {
        for(int k = 0; k < Matris_Column[0]; k++)
        {
            printf("%i ", Matris_1[j][k]);
        }

        printf("\n");
    }

    printf("**************************************************\n");
    printf("2. Matris\n\n");

    for(int j = 0; j < Matris_Line[1]; j++)
    {
        for(int k = 0; k < Matris_Column[1]; k++)
        {
            printf("%i ", Matris_2[j][k]);
        }

        printf("\n");
    }

    printf("**************************************************\n");

    int Matris_3[Matris_Line[2]][Matris_Column[2]];

    for(int j = 0; j < Matris_Line[2]; j++)
    {
        for(i = 0; i < 3; i++)
        {
            Matris_3[j][i] = (Matris_1[j][0] * Matris_2[0][i]) + (Matris_1[j][1] * Matris_2[1][i]);
        }
    }

    printf("Sonuc:\n\n");

    for(int j = 0; j < Matris_Line[2]; j++)
    {
        for(int k = 0; k < Matris_Column[2]; k++)
        {
            printf("%i ", Matris_3[j][k]);
        }

        printf("\n");
    }

    printf("\n");

    return 0;
}

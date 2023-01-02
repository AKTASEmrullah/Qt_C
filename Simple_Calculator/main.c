#include <stdio.h>

int Addition();
int Subtraction();
int Multiplication();
int Division();

int main()
{
    int Selection;
    int Numbers[2];

    printf("**************************************************\n");
    printf("Merhaba, Hesap Makinesi Programina Hosgeldiniz.\n");

    while(1)
    {
        printf("**************************************************\n");
        printf("1 - Toplama\n2 - Cikarma\n3 - Carpma\n4 - Bolme\n\n0 - Cikis\n");
        printf("**************************************************\n");
        printf("Lutfen Yapmak Istediginiz Islemi Secin: ");
        scanf("%i", &Selection);
        printf("**************************************************\n");

        if(Selection == 0)
        {
            printf("Cikis Yapiliyor...");
            return 0;
        }

        int i = 0;

        while(i < 2)
        {
            printf("%i. Sayiyi Girin: ", (i + 1));
            scanf("%i", &Numbers[i]);

            i++;
        }

        printf("**************************************************\n");

        switch(Selection)
        {
            case 1 :
            {
                printf("Sonuc: %i\n", Addition(Numbers[0], Numbers[1]));
                break;
            }
            case 2 :
            {
                 printf("Sonuc: %i\n", Subtraction(Numbers[0], Numbers[1]));
                 break;
            }
            case 3 :
            {
                 printf("Sonuc: %i\n", Multiplication(Numbers[0], Numbers[1]));
                 break;
            }
            case 4 :
            {
                 printf("Sonuc: %i\n", Division(Numbers[0], Numbers[1]));
                 break;
            }
            default :
            {
                printf("Girdiginiz Deger Gecersiz.\nLutfen Gecerli Bir Deger (1 - 2 - 3 - 4) Girin.\n");
                break;
            }
        }
    }

    return 0;
}

int Addition(Number_1, Number_2)
{
    return (Number_1 + Number_2);
}

int Subtraction(Number_1, Number_2)
{
    return (Number_1 - Number_2);
}

int Multiplication(Number_1, Number_2)
{
    return (Number_1 * Number_2);
}

int Division(Number_1, Number_2)
{
    return (Number_1 / Number_2);
}

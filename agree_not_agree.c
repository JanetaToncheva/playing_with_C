#include <stdio.h>

int main(void)
{
    char agreed;

    printf("Do you agree to T&Cs? Y/y/N/n: ");
    scanf(" %c", &agreed);

    while (agreed != 'Y' && agreed != 'y' && agreed != 'N' && agreed != 'n')
    {
        printf("Choose a valid option! Y/y/N/n: ");
        scanf(" %c", &agreed);
    }

    if (agreed == 'Y' || agreed == 'y')
    {
        printf("You agreed\n");
    }
    else
    {
        printf("You did not agree\n");
    }

    return 0;
}

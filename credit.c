#include <stdio.h>
#include <stdbool.h>


bool checkValidity(long long cardNumber)
{
    int digit;
    int sum = 0;
    bool doubleDigit = false;

        
    while (cardNumber > 0)
    {
        digit = cardNumber%10;
        cardNumber = cardNumber/10;

        if (doubleDigit)
        {
            digit = 2*digit;
            while (digit>0)
            {
                sum = sum + digit%10;
                digit = digit/10;                
            }
        }
        else
        {
            sum = sum + digit;
        }
        doubleDigit = !doubleDigit;        
    }
    return (sum % 10 == 0);
}

void checkCardType(long long num)
{ 
    int firstDigit, firstTwoDigits;
    long long temp = num;

    while (num > 100)
    {
        num = num/10;
    }

    firstTwoDigits = num;

    num = num/10;
    firstDigit = num;

    if (firstTwoDigits == 34 || firstTwoDigits == 37)
    {
        printf("Amex\n");
    }

    else if (firstTwoDigits > 50 && firstTwoDigits < 56)
    {
        printf("MasterCard\n");
    }
    
    else if (firstDigit == 4)
    {
        printf("Visa\n");
    }
    else
    {
        printf("Cannot recognize card type. ");
    }
   
}

int main(void) 
{
    long long cardNumber;
    printf("Enter card number: ");
    scanf("%lld", &cardNumber);

    if (checkValidity(cardNumber))
    {
        printf("Valid card number\n");
        checkCardType(cardNumber);
    }
    else
    {
        printf("Invalid card number\n");
    }
}

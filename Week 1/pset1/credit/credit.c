#include <cs50.h>
#include <stdio.h>

int main(void)
{
    long number = get_long("Number: ");

    long temp = number;
    int digits = 0;

    while(temp > 0)
    {
        temp = temp / 10;
        digits++;
    }

    long first = number;

    while (first >= 100)
    {
        first = first / 10;

    }

    printf("First digits = %li\n", first);
    printf("Digits = %i\n", digits);

     int sum1 = 0;

     temp = number / 10;

     while (temp > 0)
     {
        int digit = temp % 10;

        digit = digit * 2;

        if (digit > 9)
        {
            digit = (digit / 10) + (digit % 10);
        }

        sum1 = sum1 + digit;

        temp = temp / 100;
     }

     printf("Sum1 = %i\n",sum1);

     int sum2 = 0;

     temp = number;

     while (temp > 0)
     {
        sum2 = sum2 + (temp % 10);
        temp = temp / 100;
     }

     printf("Sum2 = %i\n", sum2);

     int total = sum1 + sum2;

     printf("Total =%i\n", total);

    if (total % 10 != 0)
    {
        printf("INVALID\n");
    }
    else if (digits == 15 && (first == 34 || first == 37))
    {
        printf("AMEX\n");
    }
    else if (digits == 16 && (first >= 51 && first <= 55))
    {
        printf("MASTERCARD\n");
    }
    else if ((digits == 13 || digits == 16) && first / 10 == 4)
    {
        printf("VISA\n");
    }
    else
    {
        printf("INVALID\n");
    }
   
}

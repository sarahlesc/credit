#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>

int main(void)
{
    long number;
    number = get_long("Number: ");
    long temp_n = number;
    int count = 2;
    while(temp_n > 100)
    {
        temp_n = temp_n / 10;
        count ++;
    }
    long temp_n2 = number;
    int sum = 0;
    for (int i = 1; i <= count; i++)
    {
        int digit = temp_n2 % 10;
        if (i%2 == 0)
        {
            if (digit * 2 > 9)
                sum += (digit * 2) - 9;
            else
                sum += digit * 2;
        }
        else
             sum += digit;
        temp_n2 /= 10;
    }
    bool flag = (sum % 10 == 0) ? true : false;
    if (count == 15 && (temp_n == 34 || temp_n == 37) && flag)
        printf("AMEX\n");
    else if(count == 16 && (temp_n > 50 && temp_n < 56) && flag)
        printf("MASTERCARD\n");
    else if((count == 13 || count == 16) && (temp_n / 10 ==4) && flag)
        printf("VISA\n");
    else
        printf("INVALID\n");
    return 0;
}

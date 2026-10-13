#include<stdio.h>
int main()
{
    int year, month, days;
    printf("Enter the year:");
    scanf("%d", &year);
    printf("Etnter the month:");
    scanf("%d", &month);
    if (year < 1900 || year > 9999)
    {
        printf("0");
    }
    else if (month < 1 || month > 12)
    {
        printf("0");
    }
    else
    {
        switch (month)
        {
            case 2:
                if (year % 400 == 0 ||
                    (year % 4 == 0 && year % 100 != 0))
                    days = 29;
                else
                    days = 28;
                break;

            case 4:
            case 6:
            case 9:
            case 11:
                days = 30;
                break;

            default:
                days = 31;
        }

        printf("%d Days", days);
    }

    return 0;
}

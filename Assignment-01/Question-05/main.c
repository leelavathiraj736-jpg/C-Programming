#include <stdio.h>
int main() 
{
    float mileage;
    int petrol,distance;
    printf("Enter mileage:");
    scanf("%d",&mileage);
    printf("Enter petrol:");
    scanf("%d",&petrol);
    printf("Enter distance:");
    scanf("%d",&distance);
    if (distance/petrol<=mileage)
        printf("can reach");
    else
        printf("cannot reach");
    return 0;
}

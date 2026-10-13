#include<stdio.h>
int main()
{
    int experience,performance;
    printf("Enter year of experience:");
    scanf("%d",&experience);
    printf("Enter your performance score:");
    scanf("%d",&performance);
    if (experience<3)
        printf("level:junior level");
    if (experience>=3 && experience<=7 && performance>=80)
        printf("level:Mid level");
    if(experience>7 && performance>=85)
        printf("level:senior level");
    return 0;
}

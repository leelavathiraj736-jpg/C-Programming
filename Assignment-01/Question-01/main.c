#include<stdio.h>
int main()
{
    int distance;
    int fare = 100;
    char membership;
    printf("Enter distance travelled:\n");
    scanf("%d", &distance);
    printf("Membership (y/n): ");
    scanf(" %c", &membership);
    if (distance > 10)
        fare = fare + (distance - 10) * 20;
    if (membership == 'y' || membership == 'Y')
        fare = fare - fare * 10 / 100;
    printf("Fare: %d\n", fare);
    return 0;
}

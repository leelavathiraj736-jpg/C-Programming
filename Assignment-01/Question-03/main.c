#include <stdio.h>
int main() {
    int coins, x, y;
    int ben, blackbeard, remaining, pirate;
    printf("Enter total gold coins: ");
    scanf("%d", &coins);
    printf("Enter Long Ben's share percentage: ");
    scanf("%d", &x);
    printf("Enter Blackbeard's share percentage: ");
    scanf("%d", &y);
    ben = coins * x / 100;
    remaining = coins - ben;
    blackbeard = remaining * y / 100;
    remaining = remaining - blackbeard;
    pirate = remaining / 3;
    printf("Long Ben's share: %d\n", ben);
    printf("Blackbeard's share: %d\n", blackbeard);
    printf("Each pirate's share: %d\n", pirate);
    return 0;
}

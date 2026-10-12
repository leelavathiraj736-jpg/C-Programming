#include <stdio.h>
int main() {
    int d1, c1, d2, c2;
    int dollars, cents;
    printf("Enter first dollars and cents: ");
    scanf("%d %d", &d1, &c1);
    printf("Enter second dollars and cents: ");
    scanf("%d %d", &d2, &c2);
    dollars = d1 + d2;
    cents = c1 + c2;
    dollars = dollars + cents / 100;
    cents = cents % 100;
    printf("dollers:%d\n", dollars);
    printf("cents:%d\n", cents);
    return 0;
}

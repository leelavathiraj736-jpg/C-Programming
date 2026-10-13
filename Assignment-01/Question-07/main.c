#include <stdio.h>

int main()
{
    int p,r,t;
    float intrest,amount,discount,settlement;
    printf("Enter principal amount:");
    scanf("%d",&p);
    printf("Enter Intrest rate:");
    scanf("%d",&r);
    printf("Enter time period:");
    scanf("%d",&t);
    intrest=p*r*t/100;
    amount=p+intrest;
    discount=intrest*2/100;
    settlement=amount-discount;
    printf("intrest:%.2f\n",intrest);
    printf("amount:%.2f\n",amount);
    printf("discount:%.2f\n",discount);
    printf("settlement:%.2f\n",settlement);
    return 0;        
}

#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter electricity units consumed:",a);
    scanf("%d",&a);
    if (a<=200)
        b=a*0.5 ;
    else if(a<=400)
        b=a*0.65+100;
    else if(a<=600)  
        b=a*0.80+200;
    else 
        b=a*1.25+424;
    printf("cost=%d",b);
    return 0;        
}

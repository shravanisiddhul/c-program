#include<stdio.h>

int main()
{
    int n,r,sum=0,temp;

    printf("Enter a number: \n");
    scanf("%d",&n);

    temp=n;

    while(n>0)
    {
        r=n%10;
        sum=(r*r*r)+sum;
        n=n/10;
    }
    if(temp==sum)
    {
        printf("Armstrong.");

    }
    else
    {
        printf("Not Armstrong.");
        
    }

    return 0;
}
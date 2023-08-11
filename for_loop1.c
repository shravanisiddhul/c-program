#include<stdio.h>

int main()
{
    int i,n,sum=0;
    printf("Enter a number:");
    scanf("%d\n",&n);
    

    for(i=1;i<=n;i=i+1)
    {
        sum=sum+i;

    }
    printf("Sum=%d",sum);
    return 0;
}
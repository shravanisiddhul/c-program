#include<stdio.h>
#include<math.h>

int main()
{
    int b,c;
    printf("Enter value of B:");
    scanf("%d",&b);
    printf("Enter value of C:");
    scanf("%d",&c);
     
    int a=pow(b,c);
    printf("Power of A = %d",a);


    return 0;
}
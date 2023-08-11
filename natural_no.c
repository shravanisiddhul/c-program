#include<stdio.h>

int main()
{
    int n;
    printf("Enter a no:\n");
    scanf("%d",&n);

    if(n>0)
    {
        printf("Natural no.");
    }
    else if(n>=0)
    {
        printf("Whole no");
    }
    else{
        printf("Rational no.");
    }
    return 0;
}
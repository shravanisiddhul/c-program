#include<stdio.h>

int main()
{
    int i=1,n;
    printf("Enter a no:");
    scanf("%d\n",&n);

    do
    {
        printf("%d\n",i); 
        i++; /* code */
    } while (i<=n);

    return 0;
       
}
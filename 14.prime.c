#include<stdio.h>
int main()
{
    int n,flag=0;
    printf("enter the no\n");
    scanf("%d",&n);
    if(n==0||n==1)
    {
        printf("%d is not a prime",n);
    }
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {
            flag=0;
            break;
        }
    }
    if(flag==0)
    {
        printf("%d is not a prime",n);
    }
    else
    {
        printf("%d is a prime",n);
    }
    
    return 0;
}

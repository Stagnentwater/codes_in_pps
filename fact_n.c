#include <stdio.h>
int fact(int n);
int fact1(int n);
void main()
{
    int n,f=1;
    printf("Enter the number: ");
    scanf("%d",&n);
    printf("factorial using recursion =%d\n",fact(n));
    printf("factorial using iterative method =%d",fact1(n));
}
    int fact(int n)
    {
        if(n==0||n==1)
        {
            return 1;
        }
        else
        {
            return n*fact(n-1);
        }
    }
    int fact1(int n)
    {
        int f=1;
        int i;
        for(i=1;i<=n;i++){
                f*=i;
            }
        return f;
    }

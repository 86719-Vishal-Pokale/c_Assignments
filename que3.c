#include<stdio.h>

int main()
{
    int n,i;
    printf("Enter number:\n");
    scanf("%d",&n);
    int fib[n];
    fib[0]=1;
    fib[1]=1;




for( i=2;i<n;i++)
{
    fib[i]=fib[i-1]+fib[i-2];
     
}

for(i=0;i<n;i++)
{
printf("%d ",fib[i]);

}

}
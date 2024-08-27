#include<stdio.h>

int main()
{
int n;
printf("Enter number:\n");
scanf("%d",&n);
int fact=1;
if(n==1 || n==0)
printf("fact of %d is 1",n);
else{
for(int i=2;i<=n;i++)
{
    fact=i*fact;
}
printf("fact of %d is %d",n,fact);
}

}
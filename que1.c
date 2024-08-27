#include<stdio.h>

int main()
{

int n;
printf("Enter how many numbers:\n");
scanf("%d",&n);
int arr[n];
int max =0;
printf("Enter  numbers:\n");
for(int i=0;i<n;i++)
{
    scanf("%d",&arr[i]);
}

for(int i=0;i<n;i++)
{
    if(max<arr[i])
    max=arr[i];
    
}
printf("Maximum number is=%d",max);
}
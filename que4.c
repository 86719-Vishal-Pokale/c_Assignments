#include<stdio.h>

int calgrade(int a)
{
    float per=((float)a/500)*100;
    printf("%.2f",per);

    if(per>=90)
    printf("You got Excellent Grade!!!");

    else if(per>=80 && per<=90)
    {
          printf("You got A Grade!!!");

    }
    else if(per>=70 && per<=80)
    {
          printf("You got B Grade!!!");

    }
    else if(per>=60 && per<=70)
    {
          printf("You got C Grade!!!");

    }
    else 
    {
          printf("You are Fail!!!");

    }
}

int main()
{
printf("Enter Marks of top five subject:\n");
int tmarks=0;
int arr[5];
for(int i=0;i<5;i++)
{
    scanf("%d",&arr[i]);
    tmarks+=arr[i];
}
calgrade(tmarks);

// printf("%d",tmarks);
}


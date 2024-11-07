#include<stdio.h>
#include<stdlib.h>
int main()
{
    int num;
    scanf("%d",&num);
    int odd=0;
    int even=0;
    for(int sum=0;sum<num/2;sum+=1)
    {
        if(num%2==0)
            even+=num;
        else
            odd+=num;

    }
    printf("%d\n",even);
    printf("%d",odd);
}

#include<stdio.h>
#include<stdlib.h>
int main()
{
    int num;
    scanf("%d",&num);
    int temp=0;
    int check_factor;
    for(check_factor=2;check_factor<=num/2;check_factor+=1)
    {
        if(num%check_factor==0)
            printf("%d\n",check_factor);
    }
    printf("%d",num);

    return 0;

}

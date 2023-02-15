#include<stdio.h>
int main()
{
    int num;

    printf("\nEnter a number");
    scanf("%d",&num);

    if(num==1)
    {
        printf("\n your number is 1");
    }
    else if(num==2)
        {
            printf("\n your number is 2");
        }
    else if(num==3)
        {
            printf("\n your number is 3");
        }
    else
    {
        printf("its not 1,2 or 3! \n");
    }
    return 0;
}

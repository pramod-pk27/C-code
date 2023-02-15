#include<stdio.h>
int main()
{
    int age;
    int vipPass = 0;
    vipPass = 1;
    printf("\nEnter your age");
    scanf("%d",&age);

    if((age<=70 && age>=18) || (vipPass==1))
    {
        printf("\nYou are above 18 and below 70 ,you can drive");
    }
    else
    {
        printf("\n You cannot drive");

    }
    return 0;
}

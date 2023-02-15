#include<stdio.h>
int main()
{
    int age;
    int vippass = 1;
    printf("\nEnter your age");
    scanf("%d",&age);

    if((age<=90 && age>=18)||(vippass ==1))
    {
        printf("\nYou can drive");
    }
    else
    {
        printf("\nYou cannot drive");
    }
    return 0;
}

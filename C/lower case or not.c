#include<stdio.h>
int main()
{
    char ch;
    printf("Enter the character\n");
    scanf("%c",&ch);

    //a-z=97-122 ASCII VALUES

    if(ch>=97 && ch<=122)
    {
        printf("it is lowercase\n");
    }
    else
    {
        printf("it is not lowercase\n");
    }
    return 0;
}

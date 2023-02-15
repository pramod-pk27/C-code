#include<stdio.h>
void printstr(char str[])
{
    int i = 0;
    while(str[i]!='\0')
    {
        printf("%c",str[i]);
        i++;
    }
}
int main()
{
    char str[] = {'p','r','a','m','o','d','\0'};
    printf("char");
    return 0;
}

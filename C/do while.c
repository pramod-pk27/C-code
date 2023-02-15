#include<stdio.h>
int main()
{
    int i,n;
    i=1;
    printf("enter the number\n");
    scanf("%d",&n);

    printf("printing natural number from 1 to %d\n",n);

    do
    {
      printf("%d\t",i);
      i++;
    }
    while(i<=n);
    return 0;
}

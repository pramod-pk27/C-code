#include<stdio.h>
main()
{
    int i,n;
    i=1;

    printf("Enter the number\n");
    scanf("%d",&n);

    printf("Printing the natural number from 1 to %d\n",n);

    do
    {
        printf("%d\t",i);
        i++;
    }
    while(i<=n);
    return 0;
}

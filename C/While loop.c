#include<stdio.h>
main()
{
    int a;
    printf("Enter the value of a\n");
    scanf("%d",&a);

    while(a<10)
    {
        printf("%d\n",a);
        a++;
    }
    return 0;
}

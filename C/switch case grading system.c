#include<stdio.h>
int main()
{
    int Marks;
    printf("Enter your Marks (1-100) \n");
    scanf("%d",&Marks);

    if(Marks>100)
    {
        printf("Please enter your marks between 1-100");
    }
    else
    {
        switch(Marks/10)
        {
        case 10:
        case 9:
            printf("Your Grade is A\n");
            break;

        case 8:
            printf("Your Grade is B\n");
            break;

        case 7:
            printf("Your Grade is C\n");
            break;

        case 6:
            printf("Your Grade is D\n");
            break;

        case 5:
            printf("Your Grade is E\n");
            break;

        case 4:
            printf("Your Grade is E--\n");
            break;

        default:
            printf("Your Grade is F or fail \n");
        }
        return 0;
    }
}

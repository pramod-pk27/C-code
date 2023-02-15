#include <stdio.h>

int main()
{
	int n1, n2, n3, n4;

	printf("Enter the numbers\n");
	scanf("%d %d %d %d", &n1, &n2, &n3,&n4);

	if (n1 >= n2 && n1 >= n3 && n1>=n4)
		printf("%d is the largest number\n", n1);

	if (n2 >= n1 && n2 >= n3 && n2>=n4)
		printf("%d is the largest number\n", n2);

	if (n3 >= n1 && n3 >= n2 && n3>=n4)
		printf("%d is the largest number\n", n3);

	return 0;
}


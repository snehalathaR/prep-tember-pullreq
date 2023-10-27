#include <stdio.h>
]int main()
{
	int x, y;
	printf("Enter Value of x ");
	scanf("%d", &x);
	printf("\nEnter Value of y\n");
	scanf("%d", &y);
	int temp = x;
  x = y;
  y = temp;
  printf("After Swapping: x = %d, y = %d", x, y);
	return 0;
}

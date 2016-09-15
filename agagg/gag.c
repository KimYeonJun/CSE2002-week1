#include <stdio.h>
int fact(int n);
void main()
{
	fact(5);

	
}
int fact(int n)
{
	int fact;
	for (int i = n;i > 2;i--)
	{
		
		fact = i*(i - 1);
	}
	printf("%d\n", fact);
}
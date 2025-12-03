#include <stdio.h>
void fun1(int p, int q)
{
	printf("%d", p * q);
}
void fun2(int x)
{
	fun1(x, x + 10);
}
int main()
{
	int n;
	printf("Enter a number: ");
	scanf("%d", &n);
	fun2(n);
	return 0;
}
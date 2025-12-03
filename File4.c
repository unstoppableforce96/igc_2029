#include <stdio.h>
void fun1(int x, int y)
{
	for (int i = x; i <= y; i++)
	{
		if (i % 2 == 0)
		{
			printf("%d ", i * i);	
		}
	}
}
int fun2(int n)
{
	int f = 1;
	for (int i = 1; i <= n; i++)
	{
		f = f * i;	
	}
	return f;
}
int fun3(int x)
{
	int sum = 0;
	while (x > 0)
	{
		int r = x % 10;
		sum = sum + r * r;
		x = x / 10;
	}
	return sum;
}
void fun4(int z)
{
	int cnt = 0;
	for (int i = 1; i <= z; i++)
	{
		if (z % i == 0)
		{
			cnt++;
		}
	}
	if (cnt == 2) printf("Yes");
	else printf("No");
}
int fun5(int a, int b, int c)
{
	if (a >= b && a >= c) return a;
	else if (b >= c && b >= a) return b;
	else return c;
}
int main()
{
	
}
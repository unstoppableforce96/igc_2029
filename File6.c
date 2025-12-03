#include <stdio.h>
void fun2(char name[])
{
	printf("\nThis is: %s", name);	
}
void fun1()
{
	printf("Hello all");
	char name[] = "Jeff";
	fun2(name);
}
int main()
{
	fun1();
}
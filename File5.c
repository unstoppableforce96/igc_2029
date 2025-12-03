#include <stdio.h>
void say_hi()
{
	printf("Hello there, human!!\n");	
}
int read_num()
{
	int num;
	scanf("%d", &num);
	return num;	
}
float add(float a, float b)
{
	return a * a + b * b;
}
void say_hi_to_person(char person_name[])
{
	printf("Hello there, %s!!\n", person_name);	
}
int main()
{
	say_hi();
	int x = read_num();
	printf("%d\n", x * x);
	float res = add(2.2, 3.3);
	printf("%.2f\n", res);
	say_hi_to_person("Elon");
}
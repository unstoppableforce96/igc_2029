#include <stdio.h>
#include <math.h>
char get_lower(char ch)
{
	return ch + 32;	
}
int is_profit(int costprice, int sellprice)
{
	if (sellprice > costprice) return 1;
	else return 0;
}
void print_last_digit(int n)
{
	printf("%d", n % 10);	
}
float get_distance(float x1, float x2, float y1, float y2)
{
	return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}
int can_go_to_movie(int amount_you_have, int ticket_price)
{
	???
}
int main()
{
	printf("%c\n", get_lower('Z'));
	is_profit(200, 300);
	print_last_digit(1234, 5678);
	printf("%.2f", get_distance(3.2, 4.1, 5.6, 9.7));
	return 0;
}
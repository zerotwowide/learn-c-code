#include<stdio.h>
int main()
{
	float a, b;
	scanf_s("%f%f", &a, &b);
	if (a > b)
		printf("最大的数是%f\n", a);
	else
		printf("最大的数是%f\n", b);
	return 0;
}
#include<stdio.h>
int main()
{
	float a, b;
	scanf_s("%f%f", &a, &b);
	if (a > b)
		printf("��������%f\n", a);
	else
		printf("��������%f\n", b);
	return 0;
}
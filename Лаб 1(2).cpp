

#include <iostream>

int main()
{
	double a, b, c, p, s;
	printf("\n Ввод стороны a треугольника ABC:");
	scanf_s("%1f", &a);
	system("cls");
	printf("\n Ввод стороны b треугольника ABC:");
	scanf_s("%1f", &b);
	system("cls");
	printf("\n Ввод стороны c треугольника ABC:");
	scanf_s("%1f", &c);
	p = (a + b + c) / 2;
	printf("p = %1f \n", p);
	s = sqrt(p * (p - a) * (p - b) * (p - c));
	printf("s = %1f", s);
}



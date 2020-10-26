
#include <iostream>
#include <stdio.h>

int main()
{
	setlocale(LC_ALL, "Ukrainian");
	long a, b, c, d, e, rez;
	a = 60; // секунды.
	b = 60; // минуты.
	c = 24; // часы.
	d = 365; // дни.
	// Случай 1
	e = 1; // 1 год.
	rez = a * b * c * d * e;
	printf("Секунд в 1 году: %d \n", rez);
	// Случай 2
	e = 100; // 100 лет.
	rez = a * b * c * d * e;
	printf("Секунд в 100 годах: %d \n", rez);
	// Случай 3
	e = 1000; // 1000 лет.
	rez = a * b * c * d * e;
	printf("Секунд в 1000 годах: %d \n", rez);
}

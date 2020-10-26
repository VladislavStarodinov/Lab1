

#include <iostream>

int main()
{
	setlocale(LC_ALL, "Ukrainian");
	system("cphp 1251");
	system("cls");
	int a, b;
	printf("Введи свое число: ");
	scanf_s("%d", &a);
	system("cls");
	b = a + 12;
	printf("Твое число: %d \n Число ПК: %d \n Увы, ты проиграл, попробуй еще раз", a, b);

	 

}




#include <iostream>

int main()
{
    setlocale(LC_ALL, "Ukrainian");
    system("chcp 1251");
    system("cls");
    // Способ 1.
    int a = 10;
    int b = 6;
    printf("Было: %d, %d \n", a, b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("Стало: %d, %d \n", a, b);
    // Способ 2
    int c, d, k;
    c = 12;
    d = 18;
    printf("Было: %d, %d \n", c, d);
    k = c;
    c = d;
    d = k;
    printf("Стало: %d, %d \n", c, d);
}

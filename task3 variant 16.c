#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <windows.h>          

int main()
{
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);
    int n;
    printf("Введите целое число n (количество шагов): ");
    if (scanf("%d", &n) != 1 || n < 0) {
        printf("Ошибка: n должно быть целым положительным числом.\n");
        return 1;
    }
    double s = 1.0;
    double term = 1.0;
    for (int i = 1; i <= n; i++)
    {
        term = -term / 2.0;
        s += term; 
    }
    printf("Значение выражения для n = %d равно: %f\n", n, s);
    return 0;
}

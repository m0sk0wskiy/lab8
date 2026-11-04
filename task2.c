#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <windows.h>          
#include <math.h>              

int main()
{
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);
    double a = 0.1;
    double b = 2.1;
    double h; 
    printf("Программа табулирования функции: y = x^2 + sin(5x)\n");
    printf("Интервал вычислений: [%.1f; %.1f]\n", a, b);
    printf("Введите шаг табуляции (например, 0.2): ");
    if (scanf("%lf", &h) != 1 || h <= 0) {
        printf("Ошибка ввода! Шаг должен быть положительным числом.\n");
        return 1;
    }
    printf("\n_________________________\n");
    printf("|   x    |     f(x)     |\n");
    printf("|--------|--------------|\n");
    for (double x = a; x <= b + h / 2; x += h)
    {
        double y = pow(x, 2) + sin(5 * x);
        printf("| %6.2f | %12.4f |\n", x, y);
    }
    printf("-------------------------\n");
    return 0;
}

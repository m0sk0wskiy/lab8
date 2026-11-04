#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <windows.h>          
#include <math.h>             
int main()
{
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);
    int n;
    printf("Введите максимальную степень n:");
    if (scanf("%d", &n) != 1 || n < 0) {
        printf("Ошибка ввода!\n");
        return 1;
    }
    printf("\n--- Результат ---\n");
    for (int i = 0; i <= n; i++)
    {
        double a = pow(2, i);
        if (a >= 1024.0) {
            double k_a = a / 1024.0;
            printf("2^%2d = %6.1fK\n", i, k_a);
        }
        else {
            printf("2^%2d = %7.0f\n", i, a);
        }
    }
    return 0;
}

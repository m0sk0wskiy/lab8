#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <windows.h>          

int main()
{
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);
    int n, m;
    int s = 0; 
    int k = 1; 
    printf("Введите значение m (начало диапазона): ");
    if (scanf("%d", &m) != 1) return 1;
    printf("Введите значение n (конец диапазона): ");
    if (scanf("%d", &n) != 1) return 1;
    printf("\nХод выполнения:\n");
    for (int i = m; i >= n; i--)
    {
        s += i;
        printf("выполнено %d раз\n", k++);
    }
    printf("\nрезультат %d\n", s);

    return 0;
}

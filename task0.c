#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <windows.h>           
int main()
{
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);
    int count;
    char sym1, sym2;
    printf("Введите общее количество символов:");
    if (scanf("%d", &count) != 1 || count < 0) {
        printf("Ошибка ввода количества!\n");
        return 1;
    }
    printf("Введите первый символ: ");
    if (scanf("%c", &sym1) != 1) { 
        return 1;
    }
    printf("Введите второй символ (для второй половины):");
    if (scanf("%c", &sym2) != 1) {
        return 1;
    }
    printf("\nРезультат:\n"); 
    putchar('+');    
    for (int start = 1; start <= count; start++)
    {  
        if (start <= count / 2) {
            putchar(sym1);
        }
        else {
            putchar(sym2);
        }    
        putchar('!');
    }
    putchar('+');
    putchar('\n');
    return 0;
}

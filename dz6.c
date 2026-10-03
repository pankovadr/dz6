#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>

	int main()
{
        setlocale(LC_ALL, "RUS");
		int N;
		int sum_digits;
		printf("Введите число N (N<1000):");
		if (scanf("%d", &N) != 1) {
            printf("Ошибка ввода! Пожалуйста, введите целое число.\n");
            return 1;
        }
        if (N >= 1000 || N < 0) {
            printf("Число должно быть в диапазоне от 0 до 999!\n");
            return 1;
        }
        int hundreds = N / 100;          
        int tens = (N / 10) % 10;        
        int units = N % 10;              

        sum_digits = hundreds + tens + units;

        if (sum_digits % 3 == 0) {
            printf("Сумма цифр числа %d равна %d. Она КРАТНА трем.\n", N, sum_digits);
        }
        else {
            printf("Сумма цифр числа %d равна %d. Она НЕ КРАТНА трем.\n", N, sum_digits);
        }

        return 0;
    }

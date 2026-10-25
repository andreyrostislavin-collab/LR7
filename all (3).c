#include <stdio.h>
#include <locale.h>
#include <math.h>

int task1(char c);
int task2(float x, float y, char c);
int task3(int power);

int main() {
    setlocale(LC_ALL, "Russian");
    char c;
    
    printf("Задание 1\n\n");
    printf("Введите символ: ");
    scanf("%c", &c);
    task1(c); 
     
    float x, y;
    printf("\nЗадание 2\n\n");
    printf("Введите пример\n");
    printf("Итог примера:"); 
    
    scanf(" %f%c%f", &x, &c, &y);
    task2(x,y,c); 
    
    int power;
     printf("\nЗадание 3\n\n");
     printf("Введите степень: \n");
     scanf("%d", &power); 
     task3(power);
    return 0;
}

int task1(char c) {
    switch (c) {
        case 'a' ... 'z':
        case 'A' ... 'Z':
            printf("Это буква.\n");
            break;

        case '0' ... '9': 
            printf("Это цифра.\n");
            break;

        default:
            printf("Неизвестный символ\n");
            break;
    }
    return 0;
}

int task2(float x, float y, char c) {
    switch (c) {
        case '+':
            printf("=%f\n", x + y);
            break;

        case '-':
            printf("=%f\n", x - y);
            break;

        case '*':
            printf("=%f\n", x * y);
            break;

        case '/':
            if (y != 0.0) {
                printf("=%.2f\n", x / y);
            } else {
                printf("Ошибка: деление на ноль невозможно!\n");
            }
            break;

        case '^':
            printf("=%f\n", pow(x, y));
            break;

        default:
            printf("Ошибка: неизвестная операция '%c'\n", c);
            break;
    }
    return 0;
}

int task3(int power){
    switch(power){
         case -12:
            printf("10^(%d) - это приставка «пико» (п)\n", power);
            break;
        case -9:
            printf("10^(%d) - это приставка «нано» (н)\n", power);
            break;
        case -6:
            printf("10^(%d) - это приставка «микро» (мк)\n", power);
            break;
        case -3:
            printf("10^(%d) - это приставка «милли» (м)\n", power);
            break;
        case 0:
            printf("10^0 - основная единица (без приставки)\n");
            break;
        case 3:
            printf("10^(%d) - это приставка «кило» (к)\n", power);
            break;
        case 6:
            printf("10^(%d) - это приставка «мега» (М)\n", power);
            break;
        case 9:
            printf("10^(%d) - это приставка «гига» (Г)\n", power);
            break;
        case 12:
            printf("10^(%d) - это приставка «тера» (Т)\n", power);
            break;
        default:
            printf("Для степени %d приставка СИ не задана в условии (выберите от -12 до 12 с шагом 3).\n", power);
            break;
    }
return 0;
}
 
 
 
 
 
 

#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int commonDivisor();

void massive();

int numericalPairÑounter(int, ...);

int main(void)
{
    printf("The number of elements that are less than the next %d\n", numericalPairÑounter(5, 1, 2, 3, 4, 5));
    printf("Find common divisor: %d ", commonDivisor());
    return 0;
}

int commonDivisor()
{
    int i;
    int div1, div2, div3;
    int n1 = rand() % 50 + 1;
    int n2 = rand() % 50 + 1;

    if (n2 > n1) {
        int temp = n2;
        n2 = n1;
        n1 = temp;
    }

    int x = 1;
    int j = 1;

    for (i = 1; i <= n1 && i <= n2; ++i) {
        if (n1 % i == 0 && n2 % i == 0) {
            div1 = i;
        }

    }
    do {
        if (n1 % x == 0 && n2 % x == 0) {
            div2 = x;
        }
        x++;
    } while (x < n2);

    while (j < n2) {
        if (n1 % j == 0 && n2 % j == 0) {
            div3 = j;
        }
        j++;
    }
    return div1;
}

void show(int arr[5][5]);
void task();

void task() {
    int tmp;
    int arr[5][5];          //ñîçäàíèå ìàññèâà
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {     //çàïîëíåíèå
            arr[i][j] = j + 1;
        }
    }
    show(arr);                           //âûâîä
    printf("\n");
    for (int i = 0; i < 5; i++) {
        tmp = arr[i][0];
        for (int j = 0; j < 4; j++) {           //öèêë èçìåíåíèÿ
            arr[i][j] = arr[i][j + 1];
        }
        arr[i][4] = tmp;

    }
    show(arr);                                         //âûâîä
}
void show(int arr[5][5]) {
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf(" %d", arr[i][j]);
        }
        printf("\n");
    }
}


int numericalPairÑounter(int amountOfArgument, ...)
{
    int result = 0;
    va_list args;
    va_start(args, amountOfArgument);

    int* arr = new int[amountOfArgument];
    for (int i = 0; i < amountOfArgument; ++i)
    {
        arr[i] = va_arg(args, int);
    }
    for (int i = 0; i < amountOfArgument - 1; i++) {
        if (arr[i] < arr[i + 1])
            result++;
    }
    va_end(args);

    return result;
}
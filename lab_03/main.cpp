#include <stdio.h>

void main() {
    float a = 523;
    float first = 523 / 100;
    float last = 523 % 10;
    float result = first / last;
    printf("%.2f", result);

    return;
}
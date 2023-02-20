#include <stdio.h>

int main() {
    int num1;
    float num2, sum;

    printf("Enter an integer: ");
    scanf("%d", &num1);

    printf("Enter a float: ");
    scanf("%f", &num2);

    sum = num1 + num2;

    printf("The sum is: %f", sum);

    return 0;
}

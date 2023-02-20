#include <stdio.h>

int main() {
    int num1;
    float num2, sum;

    printf("Enter an First Number: ");
    scanf("%d", &num1);

    printf("Enter a Second Number: ");
    scanf("%f", &num2);

    sum = num1 + num2;
    
    printf("The sum is: %f", sum);

    return 0;
}

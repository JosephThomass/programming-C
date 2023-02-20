#include<stdio.h>
int main() {

    int principal_amount;
    float intr_rate,year,simp_intrest;
    printf("Enter Principal amount (P): ");
    scanf("%d",&principal_amount);

    printf("Enter intrest rate: ");
    scanf("%f" ,&intr_rate);

    printf("Enter time peroid in years: ");
    scanf("%f", &year);
    simp_intrest =  ((principal_amount*intr_rate*year)/100);
    printf("Simple intrest is: %f", simp_intrest);
}
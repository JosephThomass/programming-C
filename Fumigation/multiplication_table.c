#include <stdio.h>

int main() {

    int number,i,result;
    printf("Enter the number: ");
    scanf("%d",&number);
    for (i=1;i<=10;i++){
        result=i*number;
        printf("%d x %d = %d",i,number,result);
        printf("\n");
    }}
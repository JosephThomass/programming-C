#include<stdio.h>
int main(){

    int i,num,result;
    printf("Enter the limit: ");
    scanf("%d", &num);
    for(i=1;i<num;i+=2){
        result=result+i;
        }
    printf("Sum of odd numbers: %d", result);
}
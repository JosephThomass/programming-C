#include<stdio.h>
int main() {

    float mark;
    printf("Enter the mark : ");
    scanf("%f",&mark);

    if (mark < 50){
        printf("Failed");
    }
    
    else if (mark >= 50){
        printf("Passed");

    }
    else {
        printf("invalid input");
    }
}
#include<stdio.h>
int main() {

    float mark;
    printf("Enter the mark : ");
    scanf("%f",&mark);

    if (mark >=90){
        printf("A");
    }
    
    else if (mark >=80 && mark <90){
        printf("B");

    }
    else if (mark >=70 && mark <80){
        printf("C");
    }
    else if (mark >=60 && mark <70){
        printf("D");
    }
    else if (mark >=50 && mark <60){
        printf("E");
    }
    else if (mark < 50){
        printf("FAIL");
    }
    else {
        printf("invalid input");
    }
}   
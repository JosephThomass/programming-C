#include<stdio.h>

int main() {

    int i,j,num;
    printf("Ente a number: ");
    scanf("%d",&num);
    for (i=0;i<=num;i++)
    {
        for (j=0; j<=num; j++)
        {
            if(i+j==6){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
}
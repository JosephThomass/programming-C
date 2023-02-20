#include<stdio.h>

int main() {

    int i,j,num;
    printf("Enter the limit: ");
    scanf("%d", &num);
    for(i=0;i<=num;i++)
    {
        for (j=0; j<i; j++)
        {
            printf("%d", i);
        }
        printf("\n");
    }
}
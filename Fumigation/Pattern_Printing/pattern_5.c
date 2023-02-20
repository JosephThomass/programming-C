#include<stdio.h>

int main() {

    int i,j,num;
    printf("Enter the limit: ");
    scanf("%d", &num);
    for(i=0;i<=num;i++)
    {
        for (j=1; j<=i; j++)
        {
            printf("%d", j);
        }
        printf("\n");
    }
}
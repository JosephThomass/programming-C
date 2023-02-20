#include<stdio.h>
int main(){
    int i,j,count=0,num;
    printf("Enter the number of coloum: ");
    scanf("%d",&num);
    for(i=1;i<=num;i++){
        for(j=1;j<=i;j++){
            count++;
            printf("%d",count);
        }
        printf("\n");
    }
}
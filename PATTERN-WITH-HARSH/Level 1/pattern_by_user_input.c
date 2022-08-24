#include<stdio.h>

int main(){
    int i,j;
    int n;
    printf("enter the value of n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=5;j++){
            printf("%d",j);
        }
        printf("\n");
    }
    return 0;
}

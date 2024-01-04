#include<stdio.h>
int main(){
    int n,m;
    printf("Enter a number of lines:- ");
    scanf("%d",&n);
    m=n;

    for(int j=1;j<=n;j++){//outer loops for number of lines in the pattern
        for(int i=1;i<=m;i++){ //for number of lines in each pattern
            printf("*");
        }
        m=m-1;//decrement in m to print the star in decrement order
        printf("\n"); //to print in next line after each outer loop
        
    }
    return 0;
}

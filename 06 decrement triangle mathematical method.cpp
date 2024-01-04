#include<stdio.h>
int main(){
    int n,m;
    printf("Enter a number of lines:- ");
    scanf("%d",&n);

    for(int j=1;j<=n;j++){//outer loops for number of lines in the pattern
        for(int i=1;i<=n+1-j;i++){ //for number of lines in each pattern
            printf("*");// for each value of i and j the sum of i and j is equal to (n+1):- i+j=n+1 -->i=n+1-j 
        }
        printf("\n"); //to print in next line after each outer loop
        
    }
    return 0;
}

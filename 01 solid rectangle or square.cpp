#include<stdio.h>
int main(){
    int n,m;
    printf("Enter a number of lines:- ");
    scanf("%d",&n);
    
    printf("Enter the number of stars in each line:- ");
    scanf("%d",&m);
    
    for(int j=1;j<=n;j++){ //outer loops for number of lines in the pattern
        for(int i=1;i<=m;i++){ //inner loops for number of stars in each line
            printf("*");
        }
    printf("\n"); //to print in next line after each outer loop
    }
    return 0;
}

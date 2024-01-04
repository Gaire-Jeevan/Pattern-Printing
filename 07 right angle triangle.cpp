#include<stdio.h>
int main(){
    int n,;
    printf("Enter a number of lines:- ");
    scanf("%d",&n);
    
    //in this problem both variable i.e i and j should have differnt name 
    for(int j=1;j<=n;j++){ //outer loops for number of lines in the pattern
        for(int i=1;i<=j;i++){ //for number of lines in each pattern
            printf("*");
        }
    printf("\n"); //to print in next line after each outer loop
    }
    return 0;
}

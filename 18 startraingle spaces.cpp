#include <stdio.h>

int main()
{   int n;
    printf("Enter the no. of rows:- ");
    scanf("%d",&n);
    
    // check the no of spaces before star and use the formula
    // in every line """the sum of spaces and star is equal to the total no. of rows entered by user"""
    
    for(int i=1;i<=n;i++){ //for no of rows
        for(int j=1;j<=n-i;j++){ //print the n-1 spaces before printing star
            printf(" "); //spaces
        }
        for(int k=1;k<=i;k++){ //run exactly equal to value of i
            printf("*");
        }
        printf("\n");
    }

    return 0;
}


#include <stdio.h>

//rn  1 2 3 4 3 2 1         rn new value of row no
//1    1 1 1 1 1 1 1        middle row and column i.e. 4 is mirror image so row value is changed
//2    1 2 2 2 2 2 1        
//3    1 2 3 3 3 2 1        i=1 2 3 4 5 6 7
//4    1 2 3 4 3 2 1        a=1 2 3 4 3 2 1    sum of middle value is exactly 2*n with the help of this we rename the row no
//3    1 2 3 3 3 2 1
//2    1 2 2 2 2 2 2        j=1 2 3 4 5 6 7
//1    1 1 1 1 1 1 1        b=1 2 3 4 3 2 1    sum of middle value is exactly 2*n with the help of this we rename the row no

int main() 
{
    int n; //always odd
    printf("Enter the no. of rows:- ");
    scanf("%d",&n);
    int min=0;
    
    for(int i=1;i<=2*n-1;i++){
        for(int j=1;j<=2*n-1;j++){ 
            
            int a=i; //put value of i (row) in a 
            if(i>n) a=2*n - i; //if i is greater than n then a value change to 
            
            int b=j;
            if(b>n) b=2*n - j;
            
            if(a>b) min=b;
            else min=a;
            printf("%d",min);
        }
        printf("\n");
    }
    return 0;
}


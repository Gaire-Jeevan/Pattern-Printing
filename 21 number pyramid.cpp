#include <stdio.h>

int main()
{  
    int n;
    //remember line no. while solving the question
    
    printf("Enter the no. of rows:- ");
    scanf("%d",&n);
    int nsp=n-1; //no of spaces
    
    for(int i=1;i<=n;i++){ //for no of rows
        for(int y=1;y<=nsp;y++){
            printf("  "); //spaces
        }
        nsp--; //decrement of no of spaces after each row
        
        for(int j=1;j<=i;j++){ // star triangle
            printf("%d ",j);
        }
        int a=i-1; //extra part
        for(int k=1;k<=i-1;k++){ //greater than equal to symbol is very very important if you use i-1
            printf("%d ",a);
            a--;
        }
        printf("\n");
    }

    return 0;
}


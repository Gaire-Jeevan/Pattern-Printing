#include <stdio.h>

int main()
{   int n;
    //remember line no. while solving the question
    
    printf("Enter the no. of rows:- ");
    scanf("%d",&n);
    //int nst=1;for another varible method :-no of star
    //nsp=n-1; no of space
    
    for(int i=1;i<=n;i++){ //for no of rows
        for(int j=1;j<n-i;j++){
            printf(" "); // spaces
        }
        //nsp--; to decrease the no of space by 1
        
        for(int j=1;j<=2*i-1;j++){ //j<=nst
            printf("*"); 
        }
        //nst+=2;
        printf("\n");
    }

    return 0;
}


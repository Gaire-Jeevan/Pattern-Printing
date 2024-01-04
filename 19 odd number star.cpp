#include <stdio.h>

int main()
{   int n;
    printf("Enter the no. of rows:- ");
    scanf("%d",&n);
    //int nst=1;for another varible method
    
    for(int i=1;i<=n;i++){ //for no of rows
        for(int j=1;j<=2*i-1;j++){ //j<=nst
            printf("*"); //spaces
        }
        //nst+=2;
        printf("\n");
    }

    return 0;
}


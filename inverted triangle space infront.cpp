#include <stdio.h>

int main()
{
    int n; //always odd
    printf("Enter the no. of rows:- ");
    scanf("%d",&n);
    int nsp=0;
    int nst=n; //becaouse n no. of star is start printing from 1st line
    
    for(int i=1;i<=n;i++){
        for(int j=1;j<=nsp;j++){ // spaces
            printf(" ");
        }
        for(int k=1;k<=nst;k++){
            printf("*");
        }
        nsp++;
        nst--;
        printf("\n");
    }

    return 0;
}


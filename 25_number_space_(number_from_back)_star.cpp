#include <stdio.h>

int main()
{
    int n; //always odd
    printf("Enter the no. of rows:- ");
    scanf("%d",&n);
    int nsp=1; // no of space
    int nst=n; //becaouse n no. of star is start printing from 1st line
    
    //1234567
    //123 567
    //12   67
    //1     7
    
    for(int x=1;x<=2*n+1;x++){ // for upper line star
        printf("%d ",x);
    }
    printf("\n");
    
    for(int i=1;i<=n;i++){
        int a=1;
        for(int j=1;j<=nst;j++){
            printf("%d ",a);
            a++;
        }
        for(int k=1;k<=nsp;k++){
            printf("  ");
            a++;
        }
        for(int l=1;l<=nst;l++){
            printf("%d ",a);
            a++;
        }
        printf("\n");
        nsp+=2;//for 2nd loop spaces are increasing by 2
        nst--;
    }
    return 0;
}


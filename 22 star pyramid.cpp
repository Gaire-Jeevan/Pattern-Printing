#include <stdio.h>

int main()
{
    int n; //always odd
    printf("Enter the no. of rows:- ");
    scanf("%d",&n);
    int nsp=n/2; // no of space is printing from n/2 line and increase in upward line by 1
                //no of space in 1st line is equal to n/2 or (ml-1)
    
    int nst=1; //becaouse no of star is start printing from 1st line
    int ml=n/2+1; // for middle line
    
    for(int i=1;i<=n;i++){
        for(int j= 1;j<=nsp;j++){ //printing space
            printf("  ");
        }
        for(int k=1;k<=nst;k++){ //for printing star
            printf("* ");
        }
        
        if(i<ml){ 
            nsp--; //till middle line no of space is decreasing by 1
            nst+=2; // till middle line no of sta is increasing by 2
        }
        else{
            nsp++; //till middle line no of space is increasing by 1
            nst-=2; // till middle line no of sta is decreasing by 2
        }
        
        printf("\n");
    }

    return 0;
}


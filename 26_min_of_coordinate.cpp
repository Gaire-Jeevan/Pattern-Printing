#include <stdio.h>
int min(int i, int j){
    int min;
    if(i>j){
        return j;
    }
    else{
        return i;
    }
}
//1 1 1 1 
//1 2 2 2 
//1 2 3 3 
//1 2 3 4

int main() 
{
    int n; //always odd
    printf("Enter the no. of rows:- ");
    scanf("%d",&n);
    
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){ //minimum of i and j is printed
            printf("%d",min(i,j));
        }
        printf("\n");
    }
    return 0;
}


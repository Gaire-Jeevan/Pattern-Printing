#include<stdio.h>
int main(){
	
    //n is always odd because we have to print star
        // here we have to see like in coordinate geometry for what value of i and j star is printed

    int n;
    printf("Enter the no of rows:- ");
    scanf("%d",&n);
    
    for (int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            int a=n/2+1;
            if(j==a || i==a){
                printf("* ");
            }
            else{
                printf("  ");
            }
        }
        printf("\n");
    }
    return 0;
}

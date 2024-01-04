#include<stdio.h>
int main(){
    int n,m;
    printf("Enter a number of lines:- ");
    scanf("%d",&n);
    
    printf("Enter the number of stars in each line:- ");
    scanf("%d",&m);
    
   //don't use same name of increasing variable for both iteration for better convention
   //it may cause problem in some question if name is same although it can be used for simple problem 
	for(int j=1;j<=n;j++){ //outer loops for number of lines in the pattern
        for(int i=1;i<=m;i++){ //inner loops for numbers in each line
            printf("%d",i);
        }
    printf("\n"); //to print in next line after each outer loop
    }
    return 0;
}

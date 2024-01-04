#include<stdio.h>
int main(){
    int n;
    printf("Enter the no. of rows:- ");
    scanf("%d",&n);
    int a;
    for (int i=1;i<=n;i++){
        if(i%2!=0){
            a=1;//to print 1 in beginning of the row where the value of i becomes odd
        }
        else{
            a=0;
        }
        for(int j=1;j<=i;j++){
            printf("%d ",a);
            
            if(a==0){ // if a=0 then change into 1 to print 0-1 side by side in a row
                a=1;
            }
            else{
                a=0;// if a=1 then change into 0 to print 1-0 side by side in a row
            }
            
        }
        printf("\n");
    }
    return 0;
}

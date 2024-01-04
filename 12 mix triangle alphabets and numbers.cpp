#include<stdio.h>
int main(){
    int n;
    printf("enter the no of rows:- ");
    scanf("%d",&n);
    
    for(int i=1;i<=n;i++){ // for no of rows
        int a=1;
        if (i%2==0){
            for(int j=1;j<=i;j++){ // no of alphabets in one row
                int d=a+64; //value of A in ASCII is 65 and a is 97
                char ch = (char) d;
                printf("%c ",ch);
                a++;
            }
        }
        else{
            for(int j=1;j<=i;j++){
                printf("%d ",j);
            }
        }
        printf("\n");
    }
    
    return 0;
}

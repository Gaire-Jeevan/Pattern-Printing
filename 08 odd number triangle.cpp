#include <stdio.h>

int main()
{
    int n;
    printf("Enter the no. of rows:- ");
    scanf("%d",&n);

    for(int i=1;i<=n;i++){ //for no. of rows
        int a=1;
        for(int j=1;j<=i;j++){ //for total number in a line
            printf("%d ",a);
            a+=2; //to print the pattern in odd number form
        }
       
        printf("\n");
    }
    return 0;

    // change
}


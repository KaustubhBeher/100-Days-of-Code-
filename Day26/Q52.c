#include<stdio.h>
/*Q52: Write a program to print the following pattern:

*

*
*
*

*
*
*
*
*

*
*
*

*

Sample Test Cases:
Input 1:

Output 1:
Pattern with stars spaced irregularly as shown.

*/
int main(){
    int n,i,j,k;
    printf("Enter the number of desired rows\n");
    scanf("%d", &n);

    for(i=0; i<=n-1; i++){
        for(j=1; j<=i; j++){
            printf("\n");
        }
        for(k=1; k<=2*i+1; k++ ){
            printf("*");
            printf("\n");
        }
    }
    return 0;
}

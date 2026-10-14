#include<stdio.h>
/*Q53: Write a program to print the following pattern:
*
***
*****
*******
*********
*******
*****
***
*

Sample Test Cases:
Input 1:

Output 1:
*
***
*****
*******
*********
*******
*****
***
*

*/
int main(){
	int n, i , j;
	printf("Enter the number of desired rows\n");
	scanf("%d", &n);
	
	for(i=1; i<=n; i++){
		for(j=i; j<=2*i-1; j++){
			printf("*");
		}printf("\n");
	}
    for(i=n-1; i!=0; i--){
        for(j=i; j!=0; j--){
            printf("*");
        }printf("\n");
    }
    return 0;
}
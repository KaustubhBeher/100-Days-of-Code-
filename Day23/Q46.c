#include<stdio.h>
/*Q46: Write a program to print the following pattern:
*****
*****
*****
*****
*****

Sample Test Cases:
Input 1:

Output 1:
*****
*****
*****
*****
*****

*/
int main(){
	int n;
	printf("Enter the number of rows\n");
	scanf("%d" ,&n);
	
	for(int i = 1; i<=n ; i++){
		for(int j = i; j<=n ; j++){
		printf("*");
		}printf("\n");
	}
	retunr 0;
}
#include<stdio.h>
/*Q50: Write a program to print the following pattern:
*****
 ****
  ***
   **
    *

Sample Test Cases:
Input 1:

Output 1:
*****
 ****
  ***
   **
    *

Input 2:

Output 2:
Note: Spaces indicate indentation.

*/
int main(){
	int n;
	printf("Enter the number of rows\n");
	scanf("%d", &n);
	
	for(int i = n; i>=1 ; i--){
		for(int j = n; j>=i; j--){
            printf(" ");
        }
        for(int k = 1; k<=i; k++){
			printf("*");
		}printf("\n");
	}
	return 0;
}
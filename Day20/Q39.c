#include<stdio.h>
/*Q39: Write a program to find the product of odd digits of a number.

Sample Test Cases:
Input 1:
12345
Output 1:
15 (1*3*5)

Input 2:
2468
Output 2:
1 (no odd digits, assume 1)

*/
int main(){
	int n,i,remainder ,product=1;
	printf("Enter the number\n");
	scanf("%d" , &n);
	
	while(n>0){
		remainder = n % 10;
		if(remainder%2!=0){
			product *= remainder; 
		}
		n = n/10;
        }
    printf("Product of odd digit is %d" , product);
	return 0;
}


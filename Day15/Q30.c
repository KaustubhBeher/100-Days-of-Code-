#include<stdio.h>
/*Q30: Write a program to reverse a given number.

Sample Test Cases:
Input 1:
1234
Output 1:
4321

Input 2:
100
Output 2:
1

*/
int main(){
	int n , remainder, reverse=0;
	printf("Enter the number\n");
	scanf("%d" , &n);
	
	while(n!=0){
		remainder = n % 10;
		reverse = reverse * 10 + remainder;
		n = n/10;
		
	}		
	printf("Reverse is: %d\n" , reverse);
	return 0;
}
#include<stdio.h>
/*Q38: Write a program to find the sum of digits of a number.

Sample Test Cases:
Input 1:
123
Output 1:
6

Input 2:
999
Output 2:
27

*/
int main(){
	int n , n1 ,sum=0,remainder;
	printf("Enter the number\n");
	scanf("%d" , &n);
	n1 = n;
	while(n!=0){
		remainder = n%10;
		sum = sum + remainder;
		n = n/10;
	}
	printf("Sum of digits of %d is: %d" , n1 , sum);
	return 0;
}
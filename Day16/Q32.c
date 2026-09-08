#include<stdio.h>
/*Q32: Write a program to check if a number is a palindrome.

Sample Test Cases:
Input 1:
121
Output 1:
Palindrome

Input 2:
123
Output 2:
Not palindrome

*/
int main(){
	int n, original, remainder, reverse=0;	

	printf("Enter the number\n");
	scanf("%d" , &n);
    original = n;
	while(n!=0){
		remainder = n % 10;
		reverse = reverse * 10 + remainder;
		n = n/10;
		
	}		
	if(reverse == original){
		printf("Number is palindrome\n");
		printf("%d" , reverse);
	
	}
	else{
		printf("Number is not a palindrome\n");
	}
	return 0;
}


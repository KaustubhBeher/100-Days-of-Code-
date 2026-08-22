#include<stdio.h>
/*Q25: Write a program to implement a basic calculator using switch-case for +, -, *, /, %.

Sample Test Cases:
Input 1:
4 2 +
Output 1:
6

Input 2:
10 3 %
Output 2:
1

Input 3:
15 5 /
Output 3:
3

*/
int main(){
	char operator;
	int a , b , c;
	printf("Enter the operation you want to perform\n");
	scanf("%c", &operator);
	printf("Enter two numbers\n");
	scanf("%d %d" , &a , &b);
	
	switch(operator)
	{
		case '+':
		c = a+b;
		printf("SUM:%d\n" ,c);
		break;
		case '-':
		c = a-b;
		printf("DIFFERENCE:%d\n" ,c);
		break;
		case '*':
		c = a*b;
		printf("Product:%d\n" ,c);
		break;
		case '/':
		c = a/b;
		printf("Quotient:%d\n" ,c);
		break;
		case '%':
		c = a%b;
		printf("Remainder:%d\n" ,c);
		break;
		default: printf("Invalid operator input\n");
	}
	
	return 0;
}
#include<stdio.h>
/*Q16: Write a program to input three numbers and find the largest among them using if–else.


Sample Test Cases:
Input 1:
3 7 5
Output 1:
Largest is 7

Input 2:
-1 -5 0
Output 2:
Largest is 0

*/
int main()
{
	double n1, n2 ,n3;
	
	printf("Enter numbers\n");
	scanf("%lf %lf %lf" ,&n1, &n2, &n3);
	
	if (n1>n2 && n1>n3){
		printf("%0.2f is largest\n" , n1);
	}
	else if (n2>n1 && n2>n3){
		printf("%0.2f is largest\n" , n2);
	}
	else {
		printf("%0.2f is largest\n", n3);
	}
	
	return 0;
	
}
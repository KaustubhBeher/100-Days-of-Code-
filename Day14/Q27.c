#include<stdio.h>
/*Q27: Write a program to print the sum of the first n odd numbers.

Sample Test Cases:
Input 1:
3
Output 1:
9

Input 2:
5
Output 2:
25

*/
int main(){
	int n ,sum=0,odd;
	printf("Enter the number of terms\n");
	scanf("%d", &n);
	
	for(int i=1; i<=n; i++)
	{ 
		odd = (2*i) -1;
		sum = sum + odd;
	}
    printf("Sum of first %d odd number is: %d\n", n , sum);
	return 0;
}
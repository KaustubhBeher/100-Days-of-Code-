#include<stdio.h>
/*Q36: Write a program to find the HCF (GCD) of two numbers.

Sample Test Cases:
Input 1:
12 18
Output 1:
6

Input 2:
7 9
Output 2:
1

*/
int main()
{
	int n1 , n2 , i ,hcf;
	printf("Enter the numbers\n");
	scanf("%d %d" , &n1 , &n2);
	
    for (i = 1; i <= n1 && i <= n2; i++) {
    if (n1 % i == 0 && n2 % i == 0) {
        hcf = i; 
    }
}
printf("HCF is: %d\n", hcf);
	return 0;
}

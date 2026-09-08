#include<stdio.h>
/*Q37: Write a program to find the LCM of two numbers.

Sample Test Cases:
Input 1:
4 5
Output 1:
20

Input 2:
7 3
Output 2:
21

*/
int main(){
	int n1,n2,i,LCM,hcf;
	printf("Enter the two number\n");
	scanf("%d %d", &n1, &n2);
	
	for (i = 1; i <= n1 && i <= n2; i++) {
    if (n1 % i == 0 && n2 % i == 0) {
        hcf = i; 
    }
}
    LCM = n1*n2 / hcf;
	printf("LCM of %d and %d is\n" , n1 ,n2);
	printf("%d" , LCM);
	return 0;
}
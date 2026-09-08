#include<stdio.h>
/*Q43: Write a program to check if a number is a strong number.

Sample Test Cases:
Input 1:
145
Output 1:
Strong number

Input 2:
123
Output 2:
Not strong number

*/
int main(){
	int n, original,r , sum=0;
	printf("Enter the number\n");
	scanf("%d" , &n);
	original = n;
    while (n > 0) {
        r = n % 10;
      int factorial=1;
	for (int i = 1; i <= r; i++) {
            factorial *= i;
        }
		sum += factorial;
		n = n/10;
	}
    if(sum==original){
		printf("It is a strong number");
	}
	else{
		printf("Its not a strong number");
	}
	return 0;
}
#include<stdio.h>
/*Q33: Write a program to check if a number is an Armstrong number.

Sample Test Cases:
Input 1:
153
Output 1:
Armstrong

Input 2:
123
Output 2:
Not Armstrong

*/
int main() {
    int n, original, remainder, result = 0;
    printf("Enter a three-digit integer:\n ");
    scanf("%d", &n);
    original = n;

    while (original != 0) {
     
        remainder = original % 10;
        
       result += remainder * remainder * remainder;
        
     
       original /= 10;
    }

    if (result == n){
        printf("%d is an Armstrong number.", n);
    }
	else{
        printf("%d is not an Armstrong number.", n);
    }
    return 0;
}
	
	

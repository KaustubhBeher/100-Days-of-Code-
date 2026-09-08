#include<stdio.h>
/*Q41: Write a program to swap the first and last digit of a number.

Sample Test Cases:
Input 1:
1234
Output 1:
4231

Input 2:
1001
Output 2:
1001

*/
int main() {
    int n, a, first_digit, last_digit, divisor = 1, middle = 0, middle_multiplier = 1, swapped;

    printf("Enter a number: ");
    scanf("%d", &n);

    last_digit = n % 10;

  
    a = n;
    while (a >= 10) {
        a /= 10;
        divisor *= 10;
    }
    first_digit = a;

  
    a = n / 10; 
    while (a >= 10) {
        int digit = a % 10;
        middle = digit * middle_multiplier + middle;
        middle_multiplier *= 10;
        a /= 10;
    }

    
    swapped = (last_digit * divisor) + (middle * 10) + first_digit;

    printf("Swapped number: %d\n", swapped);

    return 0;
}
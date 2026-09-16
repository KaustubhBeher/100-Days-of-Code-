#include<stdio.h>
/*Q31: Write a program to take a number as input and print its equivalent binary representation.

Sample Test Cases:
Input 1:
10
Output 1:
1010

Input 2:
7
Output 2:
111

*/
int main() {
    int decimal_num, binary_num = 0, place_value = 1, remainder;

    printf("Enter a decimal number: ");
    scanf("%d", &decimal_num);

    int temp = decimal_num;

    while (temp > 0) {
        remainder = temp % 2;         
        binary_num = binary_num + (remainder * place_value); 
        place_value = place_value * 10; 
        temp = temp / 2;               
    }

    printf("Decimal %d in binary is: %d\n", decimal_num, binary_num);

    return 0;
}
#include<stdio.h>
/*Q1: Write a program to input two numbers and display their sum.

Sample Test Cases:
Input 1:
3 4
Output 1:
Sum = 7

Input 2:
-1 20
Output 2:
Sum = 19

*/

int main()
{
float a,b,sum;
printf("Enter The First Number\n");
scanf("%f",&a);

printf("Enter The Second Number\n");
scanf("%f", &b);

printf("Sum of the two number is:%0.1f\n",a + b);

return 0;
}
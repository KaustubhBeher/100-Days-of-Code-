#include<stdio.h>
/*Q8: Write a program to find and display the sum of the first n natural numbers.

Sample Test Cases:
Input 1:
5
Output 1:
Sum=15

Input 2:
10
Output 2:
Sum=55

*/
int main()
{
    int N, sum; 
    printf("Enter a number\n");
    scanf("%d",&N);

 sum = N*(N+1)/2; 
    printf("Sum=%d",sum);
    return 0;
}
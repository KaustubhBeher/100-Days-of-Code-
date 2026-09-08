#include<stdio.h>
/*Q44: Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms.

Sample Test Cases:
Input 1:
3
Output 1:
Approximate sum: 3.3

Input 2:
5
Output 2:
Approximate sum: 4.4

*/
int main() {
    int n;
    float sum = 1.0;

    printf("Enter the number of terms till you want to sum: ");
    scanf("%d", &n);
    if(n==1){
        sum += 1.0;
    }
    else{
    for (int i = 2; i <= n; i++) {
        sum += (2.0 * i - 1.0) / (2.0 * i);
    }
    }
    printf("Sum of %d terms of the series is: %0.2f\n", n, sum);

    return 0;
}
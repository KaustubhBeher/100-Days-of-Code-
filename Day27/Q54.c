#include<stdio.h>
/*Q54: Write a program to print the following pattern:

   *
  ***
 *****
*******
 *****
  ***
   *

Sample Test Cases:
Input 1:

Output 1:
Pattern with layers of stars as shown.

*/
int main()
{
    int n,i,k,j;
    printf("input the number of desired rows\n");
    scanf("%d", &n);
    for(i=1;i<=n;i++)
    {
    for(k=1;k<=n-i;k++)
    {
        printf(" ");
    }
    for(j=1;j<=2*i-1;j++)
    {
        printf("*");
    }
    printf("\n");
    }

    for(i=n-1;i>=1;i--)
    {
    for(k=1;k<=n-i;k++)
    {
        printf(" ");
    }
    for(j=1;j<=2*i-1;j++)
    {
        printf("*");
    }
        printf("\n");
    }
    return 0;
}
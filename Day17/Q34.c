#include<stdio.h>
/*Q34: Write a program to check if a number is prime.

Sample Test Cases:
Input 1:
7
Output 1:
Prime

Input 2:
10
Output 2:
Not prime

*/
int main()
{
    int n,i,r,c=0;
    printf("Input any number\n");
    scanf("%d", &n);
    if(n<=1)
    {printf("Invalid input\n");}
    if(n==2 || n==3)
    {printf("The number is a prime number\n");}
    if(n>3)
    {
        for(i=2;i<n;i++)
        {
            r=n%i;
            if(r==0)
            {c++;}
        }
        if(c==0)
        {printf("THe number is a prime number\n");}
        else
        {printf("The number is not a prime number\n");}
        return 0;
    }
}
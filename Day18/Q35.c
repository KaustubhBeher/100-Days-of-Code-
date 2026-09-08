#include<stdio.h>
/*Q35: Write a program to print all factors of a given number.

Sample Test Cases:
Input 1:
6
Output 1:
1 2 3 6

Input 2:
10
Output 2:
1 2 5 10

*/
int main()
{
	int n, i ,r;
	printf("Enter the number\n");
	scanf("%d" , &n);
	printf("Factors of %d are" , n);
	for(i=1; i<=n; i++)
	{	r = n%i;
      if(r==0)
		 printf("%d " ,i)
	  }
	  return 0;
}

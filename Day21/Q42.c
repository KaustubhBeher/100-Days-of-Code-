#include<stdio.h>
/*Q42: Write a program to check if a number is a perfect number.

Sample Test Cases:
Input 1:
6
Output 1:
Perfect number

Input 2:
10
Output 2:
Not perfect number

*/
int main(){
	int n, i ,r ,sum=0;
	printf("Enter the number\n");
	scanf("%d" , &n);
	printf("Factors of %d are" , n);
	for(i=1; i<=n; i++)
	{	r = n%i;
      if(r==0)
		 printf(" %d " ,i);
        sum = sum + i;
	  }printf("\n");
	  if(sum==n){
		  printf("Perfect number");
	  }
	  else{
		  printf("Not perfect number");
	  }
	  return 0;
}
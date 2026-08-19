#include<stdio.h>
#include<math.h>
/*Q17: Write a program to find the roots of a quadratic equation and categorize them.

Sample Test Cases:
Input 1:
1 -3 2
Output 1:
Roots are real and different: 2, 1

Input 2:
1 -2 1
Output 2:
Roots are real and same: 1

Input 3:
1 2 5
Output 3:
Roots are complex

*/
int main()
{
	double a,b,c,x,x1,x2,discriminant;
	printf("Enter coefficient a , b ,c\n");
	scanf("%lf %lf %lf", &a, &b, &c);
	
	discriminant  = (b * b) - (4 * a * c);
	x1 = (-b + sqrt(discriminant)) / (2 * a);
	x2 = (-b - sqrt(discriminant)) / (2 * a);
	
	if(discriminant > 0){
		printf("Roots are real and different\n");
		printf("x1=%0.2lf\n", x1);
		printf("x2=%0.2lf", x2);
		
	}
	else if(discriminant == 0) {
		printf("Roots are real and equal\n");
		printf("x1=x2=%0.2lf" , x1);
	}
	
	else{
		printf("Roots are complex");
	}

	return 0;
}
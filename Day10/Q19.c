#include<stdio.h>
/*Q19: Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.

Sample Test Cases:
Input 1:
3 3 3
Output 1:
Equilateral

Input 2:
3 3 4
Output 2:
Isosceles

Input 3:
2 3 4
Output 3:
Scalene

*/
int main(){
	int a , b, c;
	printf("Enter the sides of triangle a , b , c\n");
	scanf("%d %d %d", &a , &b , &c);
	
	if(a + b > c && a + c > b && b + c > a){
		printf("Triangle is valid\n");
		if (a==b && b==c && a==c){
			printf("Triangle is an equilateral triangle\n");
		}
		else if (a==b || b==c || c==a){
			printf("Triangle is isosceles triangle\n");
		}
		else if(a*a + b*b == c*c){
			printf("Triangle is right angle\n");
		}
		else{
			printf("Triangle is scalene\n");
		}
	}
	else{
		printf("Triangle is not valid\n");
	}
	return 0;
}
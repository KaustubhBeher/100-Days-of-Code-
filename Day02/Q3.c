#include<stdio.h>
/*Q3: Write a program to calculate the area and perimeter of a rectangle given its length and breadth.

Sample Test Cases:
Input 1:
5 10
Output 1:
Area=50, Perimeter=30

Input 2:
3 7
Output 2:
Area=21, Perimeter=20

*/
int main()
{
float l,b,area,perimeter;
printf("Enter the length of rectangle\n");
scanf("%f" ,&l);

printf("Enter the breadth of rectangle\n");
scanf("%f" , &b);

area = l * b;
perimeter = 2 * (l + b);
printf("Area of rectangle is:%0.2f\n", area);
printf("Perimeter of rectangle is:%0.2f\n" , perimeter );
return 0;
}
#include<stdio.h>
/*Q10: Write a program to input time in seconds and convert it to hours:minutes:seconds format.


Sample Test Cases:
Input 1:
3661
Output 1:
1:1:1

Input 2:
7322
Output 2:
2:2:2

*/
 int main()
 {
	 int total_time, hours, minute, seconds;
	 printf ("Enter time in seconds\n");
	 scanf ("%d" ,&total_time);
	 
	 hours = total_time / 3600;
	 total_time = total_time - (hours*3600);
	 minute = total_time / 60;
	 total_time = total_time - (minute*60);
	 seconds = total_time;
	 
	printf("converted time :%0.2d:%0.2d:%0.2d\n" , hours , minute ,seconds);

	 
	 return 0;
	 
 }
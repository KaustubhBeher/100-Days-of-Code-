#include<stdio.h>
/*Q56: Read and print elements of a one-dimensional array.

Sample Test Cases:
Input 1:
3
10 20 30
Output 1:
10 20 30

Input 2:
5
1 2 3 4 5
Output 2:
1 2 3 4 5

*/
int main(){
	int i;
	int arr[5]={10,20,30,40,50};
	
	for(i=0;i<5;i++){
		printf("value of arr[%d] is %d\n" , i , arr[i]);
	}
	return 0;
}
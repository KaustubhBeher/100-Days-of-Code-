#include<stdio.h>
/*Q57: Find the sum of array elements.

Sample Test Cases:
Input 1:
4
2 4 6 8
Output 1:
20

Input 2:
3
1 1 1
Output 2:
3

*/
int main(){
    int n, sum=0;
	printf("Enter the number of terms in an array\n");
	scanf("%d", &n);
	
	int arr[n], i;
	for(i=0;i<n;i++){
		printf("Enter the element in arr[%d]\n" , i);
		scanf("%d", &arr[i]);
		sum+=arr[i];
    }
    printf("Sum of elemnts is: %d", sum);
	return 0;
}
#include<stdio.h>
/*Q58: Find the maximum and minimum element in an array.
Sample Test Cases:
Input 1:
5
2 9 1 4 7
Output 1:
Max=9, Min=1

Input 2:
3
10 10 10
Output 2:
Max=10, Min=10

*/
int main(){
    int n;
	printf("Enter the number of terms in an array\n");
	scanf("%d", &n);
	
	int arr[n], i;
	for(i=0;i<n;i++){
		printf("Enter the element in arr[%d]\n" , i);
		scanf("%d", &arr[i]);
    }
	int largest=0;
	for(i=0;i<n;i++){
		if(arr[i]>largest){
			largest=arr[i];
		}
	}
	int smallest=arr[n-1];
	for(i=0;i<n;i++){
		if(arr[i]<smallest){
			smallest=arr[i];
		}
	}
    printf("Largest element is: %d\n", largest);
	printf("Smallest element is: %d", smallest);
	return 0;
}
#include<stdio.h>
/*Q62: Reverse an array without taking extra space.

Sample Test Cases:
Input 1:
4
1 2 3 4
Output 1:
4 3 2 1

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
	for(i=0;i<n/2;i++){
		int temp=arr[i];
		arr[i]=arr[n-i-1];
		arr[n-i-1]=temp;
	}
	printf("Reversed array is: ");
    for(i=0;i<n;i++){
        printf("%d", arr[i]);
    }
    printf("\n");
    return 0;
}
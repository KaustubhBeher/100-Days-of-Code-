#include<stdio.h>
/*Q60: Count positive, negative, and zero elements in an array.

Sample Test Cases:
Input 1:
5
-1 0 1 2 -2
Output 1:
Positive=2, Negative=2, Zero=1

*/
int main(){
	int n,positive=0, negative=0,zero=0;
	printf("Enter the number of terms in an array\n");
	scanf("%d", &n);
	
	int arr[n], i;
	for(i=0;i<n;i++){
		printf("Enter the element in arr[%d]\n" , i);
		scanf("%d", &arr[i]);
    }
		for(i=0;i<n;i++){
		if(arr[i]==0){
            printf("%d ", arr[i]);
            printf("Element is zero\n");
			zero++;
		}
		else if(arr[i]<=0){
            printf("%d ", arr[i]);
			printf("Element is negative\n");
			negative++;
		}
		else{
            printf("%d ", arr[i]);
			printf("Element is positive\n");
			positive++;
	}
        }
	printf("Then number of positive elements are:%d\n", positive);
	printf("The number of negative elements are:%d\n", negative);
	printf("The number of zero elements are:%d\n", zero);
	return 0;
}
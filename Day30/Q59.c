#include<stdio.h>
/*Q59: Count even and odd numbers in an array.

Sample Test Cases:
Input 1:
6
1 2 3 4 5 6
Output 1:
Even=3, Odd=3

Input 2:
4
2 4 6 8
Output 2:
Even=4, Odd=0

*/
int main(){
	int n,odd=0, even=0;;
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
            printf("Element is neither odd nor even\n");
		}
		else if(arr[i]%2==0){
            printf("%d ", arr[i]);
			printf("Element is Even\n");
			even++;
		}
		else{
            printf("%d ", arr[i]);
			printf("Element is odd\n");
			odd++;
	}
        }
	printf("Then number of odd elements are:%d\n", odd);
	printf("The number of even elements are:%d\n", even);
	return 0;
}
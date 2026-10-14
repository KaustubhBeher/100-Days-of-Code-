#include<stdio.h>
/*Q61: Search for an element in an array using linear search.

Sample Test Cases:
Input 1:
5
1 2 3 4 5
3
Output 1:
Found at index 2

Input 2:
4
10 20 30 40
25
Output 2:
-1

*/
int main(){
	int n,a,found=-1;
	printf("Enter the number of terms in an array\n");
	scanf("%d", &n);
	
	int arr[n], i;
	for(i=0;i<n;i++){
		printf("Enter the element in arr[%d]\n" , i);
		scanf("%d", &arr[i]);
    }
    
	printf("Enter the element you want to search\n");
	scanf("%d", &a);
	
	for(i=0;i<n;i++){
		if(a==arr[i]){
			found=i;
            break;
		}
	}
    if(found!=0){
        printf("Found at index: %d\n", found);
    }
    else{
        printf("-1");
    }
	return 0;
}
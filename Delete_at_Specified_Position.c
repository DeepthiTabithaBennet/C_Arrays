#include <stdio.h>

int main(){
    int arr[50], i, pos, n;
  
    printf("Input the size of array : ");
    scanf("%d", &n);
   
    printf("Input %d elements in the array :\n", n);
    for(i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    } 

	printf("\nInput the position where to delete : ");
	scanf("%d", &pos);
  
  // locate the position of i in the array
	i = 0;
	while(i != (pos-1))
		i++;
  
  // re-adjusting the array after deletion
	while(i < n){
		arr[i] = arr[i+1];
		i++;
	}
	n--;
	
	printf("\nThe new array is : "); 
	for(i = 0; i < n; i++){
        printf("%d  ", arr[i]);
	}  
	printf("\n");

	return 0;
}

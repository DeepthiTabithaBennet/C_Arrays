#include <stdio.h>

int main(){  
	int arr[100]; 
	int size;		 
	int i, j, k;	  

	printf("Enter size of the array : \n");
	scanf("%d", &size);

	printf("Enter elements in array : \n");
	for(i = 0; i < size; i++){
		scanf("%d", &arr[i]);
	}

	for(i = 0; i < size; i++){
		for(j = i + 1; j<size;){
			if(arr[i] == arr[j]){
				for(k = j; k < size; k++){
					arr[k] = arr[k + 1];
				}
				size--;
			}
			else{
				j++;
			}
		}
	}
	
	printf("Array Elements After Removing Duplicates:\n");
	for(i = 0; i < size; i++){
		printf("%d  ", arr[i]);
	}
		
	return 0;
}

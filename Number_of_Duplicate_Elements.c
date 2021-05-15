#include <stdio.h>

int main(){   
	int count = 0;
	int arr[100]; 
	int size;		 
	int i, j;	  

	printf("Enter size of the array : ");
	scanf("%d", &size);

	printf("Enter elements in array : ");
	for(i = 0; i < size; i++){
		scanf("%d", &arr[i]);
	}

	for(i = 0; i < size; i++){
		for(j = i + 1; j < size; j++){
			if(arr[i] == arr[j]){
				count++;
				break;
			}
		}
	}

	printf("\nDuplicate elements: %d", (count + 1));
	
	return 0;
}

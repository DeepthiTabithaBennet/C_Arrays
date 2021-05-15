#include <stdio.h>

int main() {
	
	int i;
	
	int size;
	scanf("%d", &size);
	
	int arr[100];
	for (i = 0; i < 100; i++){
		scanf("%d", &arr[i]);
	}
	
	printf("Array Elements: \n");
	for (i = 0; i < size; i++){
		printf("%d ", arr[i]);
	}
	
	int *min;
	min = &arr[0];
	int *max;
	max = &arr[0];
	
	
	for (i = 0; i < size; i++){
		if (arr[i] > *max){
			max++;
			*max = arr[i];	
		}
		if (arr[i] < *min){
			min++;
			*min = arr[i];
		}
	}
	
	printf("\n\nMax: %d", *max);
	printf("\nMin: %d", *min);
	
	int diff;
	diff = *max - *min;
	printf("\n\nThe Maximum Absolute Difference of the Array is %d", diff);
	return 0;
}

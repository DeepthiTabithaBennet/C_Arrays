#include <stdio.h>

int main() {

int arr[100], n, i, large, small;
scanf("%d", &n);

for (i = 0 ; i < n ; i++){
	scanf("%d", &arr[i]);
}

large = arr[0];
small = arr[0];

for (i = 1 ; i < n ; i++){
	
	if (arr[i] < small){
		small = arr[i];
	}
	if (arr[i] > large){
		large = arr[i];
	}
}

printf("The Largest number is %d \n", large);
printf("The Smallest number is %d \n", small);

	return 0;
}

#include<stdio.h>

int main(){
	int a[50], i, n, j;

	scanf("\n%d", &n);
	
	for(i = 0; i < n; i++){
		scanf("\n%d", &a[i]);
	}
	
	printf("The array with all the Prime Numbers removed is : \n\n");
	
	for(i = 0; i < n; i++){
		for(j = 2; j < a[i]; j++){
			if(a[i] % j == 0){
				printf("  %d", a[i]);
				break;
			}
		}
	}
	return 0;
}

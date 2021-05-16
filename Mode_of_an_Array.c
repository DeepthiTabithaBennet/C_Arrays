#include <stdio.h>

int Mode(int a[], int n){
    int MaxVal = 0, MaxCt = 0, i, j;
    
    for(i = 0; i < n; i++){
        int count = 0;
    
        for(j = 0; j < n; j++){
            if (a[j] == a[i]){
                ++count;
            }
        }
        if (count > MaxCt){
            MaxCt = count;
            MaxVal = a[i];
        }
    }
    printf("\nThe value %d occurs %d times", MaxVal, MaxCt);
    return MaxVal, MaxCt;
}

int main(){
    int n;
    printf("Enter the number of elements in the Array : ");
    scanf("%d", &n);
    int a[100];
    printf("Enter the elements of the Array : \n");
    for (int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }
    printf("\nMode is %d", Mode(a,n));
    return 0;
}

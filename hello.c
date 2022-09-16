// selection sort algorithm
#include <stdio.h>
#include <math.h>

void selection_sort(int a[], int array_size);

int main(void){

	int a[] = {2,3,5,4},i;

	int array_size = sizeof(a)/sizeof(a[0]);

	printf("Before sorting: ");
	for(i = 0; i < array_size; i++){
		printf("%d ", a[i]);
	}
	printf("\n");

	selection_sort(a,array_size);

	return 0;
}

void selection_sort(int a[], int array_size){

	int i,j,temp,smaller;

	for(i = 0; i < array_size; i++){
		smaller = i;
		for(j = i+1; j < array_size; j++){
			if(a[j] < a[smaller]){
				smaller = j;
			}
		}
		if(i != smaller){
			temp = a[i];
			a[i] = a[smaller];
			a[smaller] = temp;
		}
	}

	printf("After sorting: ");
	for(i = 0; i < array_size; i++){
		printf("%d ", a[i]);
	}

}

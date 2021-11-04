#include <stdio.h>

//Function to determine the minimum and maximum of an array
void minMax(int arr[], int len, int *min, int *max){
	//dereferencing the pointers
	*min = *max = arr[0];
	int i;
	for(i=1; i<len; i++){
		if(arr[i]>*max){
			*max = arr[i];
		}
		if(arr[i]<*min){
			*min=arr[i];
		}
	}
}


int main(){
	//Declare variables
	int a[] = {23, 4, 21, 98, 987, 45, 32, 10, 123, 986, 50, 3, 4, 
5};
	int min, max;

	//Calculate the size of the array
	int len = sizeof(a)/sizeof(a[0]);

	//Call funstion to calculate min and max
	minMax(a, len, &min, &max);

	//Printout the results
	printf("Minimum value in the array is: %d\n", min);
	printf("Maximum value is: %d\n", max);
	return 0;

}

#include<stdio.h>
#include<stdlib.h>

//Delcare functions to allocate, fill, print to screen, and free an array
int* malloc_array(int n);
void fillwithones(int* array, int n);
void printarray(int *array, int n);
void freearray(int* array);


int main(){
	//Define variables
	int n;
	int* array_main;  //local array pointer 

	//Ask user for size of array
	printf("Enter the number of elements in the array: ");
	scanf("%d", &n);
	
	//Allocate memory for array
	array_main = malloc_array(n);

	//Fill array with 1's 
	fillwithones(array_main, n);  

	//Print the array to the screen
	printarray(array_main, n);

	//Free the array memory
	freearray(array_main); 

	//Free the array pointer
	array_main = NULL;  

	return 0;
}


//Define function to allocate memory for array
int* malloc_array(int n){
	int* array;
	//Allocate memory for array for'n' elements
	array = (int*) malloc(n * sizeof(int));  

	// Print size of array
	printf("Array of size %d allocated.\n", n);

	return array;
}



// Define function to fill the array with 1's
void fillwithones(int* array, int n){
	int i;
	
	for (i=0; i<n; i++){
		//set each element to 1
		array[i] = 1;
	}
}


// Define function to print the array content 
void printarray(int *array, int n){
	int i;
	for (i=0; i<n; i++){
		// Print each element of the array
		printf("%d ", array[i]);
	} 

	printf("\n");
}

//Free the memory allocated to the array
void freearray(int* array){
	free(array);
	printf("Array freed.\n");
}

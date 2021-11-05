#include<stdio.h>
#include<stdlib.h>
#include<math.h>


//solving ex 2 with no functions

//Function to calculate the factorial
int factorial(int n) {
	//Declare variables
	int i;
	int fact = 1; //1st term equal to 1
	
	//the factorial of 0 is 1
	if (n == 0){
		return 1;
	}
	//Apply factorial theorem
	for (i=1; i<=n; i++){
                fact *= i; //same as fact=fact*i;
	}

        return fact;

}

//Funtion to compute the polynomials
double compute_polynomial(int n, int x){
	//Declare variables
	double sum = 0.0;
	int i;
	
	for (i=0; i<=n; i++){
		//Sum the terms of the formula
		sum += (double) pow(x, i) / factorial(i);
	}

	return sum;
}

int main(){
	//Declare variables
	int order_of_polynomial;
	int size_of_array;
	double* array_of_terms;  // Array to hold terms of the polynomial
	int i, x=1;

	//User gives the order of the polynomial to be calulated
	printf("Enter the order of polynomial: ");
	scanf("%d", &order_of_polynomial); 
	
	//size of the array is larger because of 0
	size_of_array = order_of_polynomial + 1;

	//Use memory allocation-don't know how big the array needs to be
	array_of_terms = (double *) malloc(size_of_array * sizeof(double));  
	
	for (i=0; i<size_of_array; i++){
		//call function to compute the terms of the polynomial
		array_of_terms[i] = compute_polynomial(i,x);

		//print the terms  
		printf("f[%d] = %0.20f\n", i, array_of_terms[i]);
	}
	
	//print true value using e
	printf("e1 = %0.20f\n", exp(1)); 

	//print the difference between true value and extimated
	for (i=0; i<size_of_array; i++)
		printf("Estimate difference for term %d is %0.20f\n", i,
exp(1) - array_of_terms[i]); 

	//Free the memory 
	free(array_of_terms);

	//Clear the pointer 
	array_of_terms = NULL;  

	return 0;
}

/*Comments:
After the term 13, the estimente difference between accurate and approximated values 
shifts to negative values.

*/

#include <stdio.h>
#include <math.h>

int main(){

	//Declare variables
	int *px, x;

	//Set l-value to that of variable x, r-value set to 10
	x = 10; px = &x;

	// Set r-value to 1
	//here * works as a dereferencing operator
	*px = 1;

	// Add one to r-value
	(*px)++;

	// ++ is a higher precedence than *
	// Print l-value and r-value
	printf(" l value:%p and r value:%d\n",px,*px);

	// Equivalently
	x= 2;
	printf(" l value:%p and r value:%d \n",&x,x);
	
	return 0;
}

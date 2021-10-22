#include <stdio.h>
#include <math.h>

//declare subroutine
double cot(void *px, int type);


int main(void) {

	//Declare variables
	int a;
	double dx, cotval1, cotval3;
	a =1; dx = 1.0;

	//Call function case 1 (starts as an integer)
	cotval1 = cot(&a,1);

	//Call function case 3 (starts as a double)
	cotval3 = cot(&dx,3);

	printf("a=%f and b=%f \n", cotval1, cotval3);

	return 0;
}


//Function that switches the variable type to double
double cot(void *px, int type) {

	//Declare variable
	double y;
	
	
	switch (type) {

		//when the initial argument is an integer pointer
		//recasting void pointer as an integer pointer
		//dereferencing operator takes r-val of that location 
		//in memory and casting that in a double	
		case (1):
			y = (double) *(int *) px;
			break;

		//when the initial argument is a float pointer
		case (2):
			y = (double) *(float *) px;
			break;

		//when the initial argument is a double pointer
		case (3):
			y = *(double *) px;
			break;
		}

	return 1.0/tan(y);
}

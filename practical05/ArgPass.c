#include <stdio.h>

void swap(int *px, int *py);

int main(void) {
        //Declare two  integrers	
	int a,b;
	a = 1; b = 2;

	//Swap the the r-values of a and b
	//Call swap function
	swap(&a,&b);

	//Print r and l values
	printf("a=%d and b=%d with l-values %p %p\n",a,b,&a,&b);

	return 0;
}


//Sub-routine to swap values
void swap(int *px,int *py) {

	//Declare variables
	int temp;

	//px is given the r-value of py and
	//py is given the t-value of px
	temp = *px; *px = *py;
	*py = temp;

	//Print l-values
	printf(" In swap %p, %p\n",px,py);

}

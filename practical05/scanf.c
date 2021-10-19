#include <stdio.h>


int main(void) {
	int i; double a;

	// Enter information from user
	printf("Enter an int and double, separately by (,)\n");
		
	scanf("%d, %lf",&i,&a);
	
	printf("You have entered %d, and %lf\n", i, a);

	int *pointer_to_i = &i;
	//Print the r-value of i
	printf("The value i is %d\n",i);

	//Print the r-value of i using pointers 
	printf("The value of i is also %d\n",  *pointer_to_i);

	//Print the l-value of i
	printf("The address of i is %d\n", &i);

	return 0;
}

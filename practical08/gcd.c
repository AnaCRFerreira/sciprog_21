#include<stdio.h>

int main(void){
        //Declare variables
        int a, b, GCD_e, GCD_r;

	//ask user for 2 integers (a and b)
	printf("Insert two integers: ");
	scanf("%i, %i", &a, &b);

	//Check if a and b are positive values
	if(a<=0 || b<=0){
		printf("This numbers are not positive!\n");
		return 1;
	}

}


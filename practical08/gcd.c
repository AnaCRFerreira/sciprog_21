/*
*Iterative and Recursive version of Euclid's Algorithm
*to calculate gcd of two positive integers
*/

#include<stdio.h>

//declare iteractive function to calculate gcd
int iteractiveGCD(int a, int b);

//declare recursive function to calculate gcd
int recursiveGCD(int a, int b);


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

	//Call interactive function to calculate gcd inside the print
	printf("Iteractive gcd(%d, %d)=%d\n", a ,b, iteractiveGCD(a,b));

	return 0;
}



//define iteractive function to calculate gcd
int iteractiveGCD(int a, int b){
	//declare variable
	int temp;
	//Calculate the GCD using the iterative method
	while(b != 0){
		temp = b;
		b = a%b;
		a = temp;
	}

	return a;
}



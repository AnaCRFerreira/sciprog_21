#include<stdio.h>
#include<math.h>

//Declare global variables
float degtorad(float arg); //function prototype

int main(void){
	//declare local variables and define their value locally
	float degang, radang;
	degang=10.0;
	//call the function
	radang=degtorad(degang);
	//Print the value in radians
	printf("Deg %f, Rad %f\n", degang, radang);
	return 0;
}


float degtorad (float arg){
	//Declare local variable
	float pi = M_PI;
	//converts degrees in radians
	return ((pi*arg)/180.0);
}


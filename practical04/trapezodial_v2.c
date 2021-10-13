#include <stdio.h>
#include<math.h>

//declare function
float degtorad(float degang);

int main(){
	//Define variables
	int N=12, i;
	float TanArr[N+1], deg, rad;
	
	//Calculate the values of F(xi), where i=0,...,12
	//as array elements using a for loop
	//xi in radians
	for(i=0; i<=N; i++){
		deg=i*5.0;
		rad=degtorad(deg);
		TanArr[i]=tan(rad);
		printf("TanArr[%d]=%f (f(x) at x=%d)\n", i, TanArr[i], i);
	
	}



return 0;
}


//Function definition
float degtorad(float degang){

	return((M_PI * degang)/180.0);
}

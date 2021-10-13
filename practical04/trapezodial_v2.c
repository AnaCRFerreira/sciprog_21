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

	//Find the are by the trapezodial rule
	float area;
	area=TanArr[0]+TanArr[N];
	for(i=1; i<N; i++){
		area=area+2.0*TanArr[i];
	}

	//Multiply area by (pi/3)/2N after converting it to radians
	float mult_rad=degtorad((60.0-0.0)/(2.0*N));
	area=mult_rad*area;

	//Approximated result
	printf("\n Trapezodial result: %f\n", area);

	//Actual result(ln(2))
	printf("Real result:%f\n", log(2.0));

return 0;
}


//Function definition
float degtorad(float degang){

	return((M_PI * degang)/180.0);
}

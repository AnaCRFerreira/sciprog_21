#include <stdio.h>
#include <math.h>

int main(){
	//Declare two floats and assign values
        float a=0.0, b_deg=60.0;

        //Declare two  integrers
        int N=12, i;

        //convert pi/3 to radians
        float b_rad;
        b_rad=(M_PI * b_deg)/180.0;
        printf("pi/3 in Radians=%f \n", b_rad);

        //calculate inicial sum f(x0) + f(xN)
        float area= tan(a)+tan(b_rad);
        printf("Initial sum=%f\n", area);

        //Calculate the area at points x1,...,xN
        //Use the formula: 2*f(x1)+....+2*f(xN-1)
        //Create a loop that generates 11 equidistant points
        //between 0 and pi/3 (correspond to steps of size 5 degree)

        //Using for loop:
        for(i=5; i<60; i=i+5){
                //add the area calculated above
                // plus the new one
                //first convert in radians
                area = area+2*tan((M_PI*i)/180.0);
                printf("New area at x%d = %f\n", i/5, area);
        }

        //Using while loop
        /*i=5;
        while(i<60){
                area=area+2*tan((M_PI*i)/180.0);
                printf("New are of x(%d) = %f\n",i/5, area);
                i=i+5;
  }*/

        //Using if statement in the loop
        /*i=5;
        while(i<60){
                area=area+2*tan((M_PI*i)/180.0);
                if(i%2==0){
                         printf("New are of x(%d) = %f\n",i/5, area);
                        }
                i=i+5;
        }*/

        //Using switch/case statement in the loop
        /*i=5;
        while(i<60){
                area=area+2*tan((M_PI*i)/180.0);
                switch(i%2){
                        case 0:
                                printf("New are of x(%d) = %f\n",i/5, area);
                                break;
  }
                i=i+5;
        }*/

        //Multiply area by b-a/2N after converting it to radians
        float mult_rad=M_PI*((b_deg-a)/(2*N))/180.0;
        area=mult_rad*area;

        //Approximated value
        printf("\n Trapezodial result=%f\n", area);
        //Actual result
        printf("Real result=%f\n",log(2.0));


return 0;
}


/*
*Iterative and Recursive version of Euclid's Algorithm
*to calculate gcd of two positive integers
*/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>


//declare iteractive function to calculate gcd
int iteractiveGCD(int a, int b);

//declare recursive function to calculate gcd
int recursiveGCD(int a, int b);


int main(){
        //Declare variables
        int a, b;

	//Generate 2 positive integers between 1  and 12
	srand(time(NULL));
	a=(rand() % 11)+1; //+1 avoid dealing with 0
	b=(rand() % 11)+1;




        //Call interactive function to calculate gcd (inside the print)
        //and print out the result
        printf("Iteractive gcd(%d, %d)=%d\n", a ,b, iteractiveGCD(a,b));

        //Call recursive function to calculate gcd (inside the print)
        //and print out the result
        printf("Recursive gcd(%d, %d)=%d\n", a ,b, recursiveGCD(a,b));



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

//define recursive function to calculate gcd
int recursiveGCD(int a, int b){
        if(b==0){
                return a;
        }
        else{
                return(recursiveGCD(b, a%b));
        }
}


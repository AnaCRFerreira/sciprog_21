#include<stdio.h>

int main(){

	//Declare variables
	int i, *p;

	i = 42;
	p = &i;

	printf("p points to address: %p.\n", p);
	//p+1 is actually an increment of 4 over
	//the hexadecimal value of p.
	printf("p+1 points to address: %p.\n", p+1);

	printf("*p = %d\n", *p);


	//in 1 line of code
	int a=40, *b=&a;
	printf("%d\n", *b); //it says got o he address of object and 
	//take what is stored in the object.  

	return 0;
}

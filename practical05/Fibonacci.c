#include<stdio.h>

//declare subroutine
void fibonacci(int *Fn_1, int *Fn_2);

int main(){

	//declare variable
	int n, i;
	printf("Enter value of n:\n");
	scanf("%d", &n);
	
	//declare two integer corresponding to F-1 and F-2
	int Fn_1=1;
        int Fn_2=-1;

	//calculate Fn from F0
	for(i=0; i<=n; i++){
		fibonacci(&Fn_1,&Fn_2);
		printf("F%d=%d \n",i, Fn_1);
	}

	
	return 0;
}

void fibonacci(int *Fn_1, int *Fn_2){
	int Fn;
	//Apply Fibonacci formula
	Fn=*Fn_1+*Fn_2;	
	//Return Fn-1
	*Fn_2=*Fn_1;
	//Return Fn
	*Fn_1=Fn;

}




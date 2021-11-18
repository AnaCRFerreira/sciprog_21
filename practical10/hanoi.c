#include <stdio.h>
#include <stdlib.h>

//Problem
//
//Rod 1 = A (source)
//Rod 2 = B (midde)
//Rod 3 = C (destination)
//
//n disks = 2
//
//Disk 1 from A to B
//Disk 2 from A to C
//Disk 1 from B to C
//
//There is a pattern:
//-Shift 'n-1 disks from A to B
//-Shift one disk from A to C
//-Shif 'n-1' disks from B to C

void hanoi(int n, int source, int dest, int midd){
	//case when n=1
	if (n==1){
		printf("Move disk %d from %d to %d.\n", n, source, dest);
	}
	else{
		//move to the middle
		hanoi(n-1, source, midd, dest);
		printf("Move disk %d from %d to %d.\n", n, source, dest);

		//move from middle to last dest
		hanoi(n-1, midd, dest, source);
	}

}


void main(){
	//user enter the number of disks
	int h;
	printf("Enter number of disks:\n");
	scanf("%d", &h);
	
	//print out the solution
	printf("Tower of Hanoi solution for %d disks:\n", h);
	//Call hanoi function
	hanoi(h, 1, 3, 2);

}

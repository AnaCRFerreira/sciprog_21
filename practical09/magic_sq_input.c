#include <stdio.h>
#include <stdlib.h>
#include "magic_square.h"

int main (){

	//user input the size of the square
	int n;
	printf("Enter the square size:\n");
	scanf("%d", &n);


	//Allocate a matrix
	int i;
	int ** magicSquare = malloc(n * sizeof(int));

	for(i=0; i< n; i++){
		magicSquare[i] = malloc(n * sizeof(int));
	}

	//input data in each row
	int j;
	for(i=0; i<n; i++){
		printf("Enter elements in row #%d, separated by blanks and/or linebreaks:\n", i+1);
		for(j=0; j<n; j++){
			scanf("%d", &magicSquare[i][j]);
		}
	}

	printf("The suqare %s magic.\n", isMagicSquare(magicSquare, n)? "is" : 
"is NOT");

	//Free memory of each row
	for(i=0; i<n; i++){
		free(magicSquare[i]);
	}
	
	//Free array of pointers
	free(magicSquare);

	return 0;

}

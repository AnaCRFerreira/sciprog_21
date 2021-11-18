#include <stdio.h>
#include <stdlib.h>
#define MAX_FILE_NAME 100
#include "magic_square.h"

//Declare function
//get the number of lines in our file
int getlines(char filename[MAX_FILE_NAME]);


int main (){
	
	//declare
	FILE *f;	
	char filename[MAX_FILE_NAME];
	
	//user inputs the name of the file to read
	printf("Enter file name:");
	scanf("%s", filename);

	//Open file
	f = fopen(filename, "r");

	int n = getlines(filename);	

	//Allocate a matrix
	int i;
	int ** magicSquare = malloc(n * sizeof(int*));

	for(i=0; i< n; i++){
		magicSquare[i] = malloc(n * sizeof(int));
	}

	//input data in each row
	int j;
	for(i=0; i<n; i++){
		for(j=0; j<n; j++){
			fscanf(f, "%d", &magicSquare[i][j]); //reads the file
		}
	}

	printf("The square %s magic.\n", isMagicSquare(magicSquare, n)? "is" : 
"is NOT");

	//Free memory of each row
	for(i=0; i<n; i++){
		free(magicSquare[i]);
	}
	
	//Free array of pointers
	free(magicSquare);

	return 0;

}


//Define function
//gets the number of lines in the file
int getlines(char filename[MAX_FILE_NAME]){
	//declare file pointer
	FILE *fp;
	fp = fopen(filename, "r"); //r for read
	
	//read each line and count the number of lines
	int ch_read;
	int count = 0;

	while((ch_read = fgetc(fp)) != EOF){
		if (ch_read == '\n'){
			count ++;
		}
	}
	
	printf("No. of lines %d\n", count);

	//close the file
	fclose(fp);

	return count;
}

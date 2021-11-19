#include <stdio.h>

int main(){

	//struct declaration
	struct pmclass{
        	int num;
        	float det;
        	char exam[4][4];
	};

	//Struct variables
	int i,j,k,Nclasses=4;
        struct pmclass pmc[Nclasses];
        for (i=0; i<Nclasses; i++) {
                pmc[i].num = 0;
                pmc[i].det = 0.0;
                for (j=0; j<4; j++) {
                        for (k=0; k<4; k++) {
                                pmc[i].exam[j][k] = 0.0;
                        }
                }
        }

	//Printing
	printf("Nclasses=%d", Nclasses);


}


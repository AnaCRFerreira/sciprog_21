#include <stdio.h>
#include <math.h>

int main(void) {

/* Declare variables */
   int i,inum,tmp,numdigits;
   float fnum;
   char binnum[60];

/* Intialise 4-byte integer */
   inum = 33554431;
/* Convert to 4-byte float */
   fnum = (float) inum;


/* Convert to binary number (string)*/
   i = 0; tmp = inum;
   while (tmp > 0) {
     sprintf(&binnum[i],"%1d",tmp%2);
     tmp = tmp/2;
     i++;
   }

/* Terminate the string */
   binnum[i] = '\0';


/* Count the digits in a strring */
         /* Inicialize the variable */
         numdigits = 0;
         /* Go through the string until is terminated */
        for (i=0; binnum[i] != '\0'; i++)
        /* if the digit in the string is 0 or 1, the variable incrises*/
        { if(binnum[i]=='0' || binnum[i]=='1')
        numdigits++;
        }


/* print the numbe of digits in a string*/
   printf("The number of digits is %d\n",numdigits);

/* Ccount binary digits: solution in class*/
       /* Declare variable*/
        int nd;
        nd = ceil(logf(fnum)/logf(2)); //incorporate math lib at conversion "-lm"

/* Print the new number of binary digits*/
        printf("Using ceil and logf functions, the number of digitis is %d\n",nd);

/*Understanding Ceil function*/
	float  a=10.3;
	printf("a=%lf \n", ceil(a));


/* Understanding logf function*/
//float b=2;
//printf("b=%lf \n", logf(b));



   printf("inum=%d,  fnum=%f, inum in binary=%s\n",
      inum,fnum,binnum);

}


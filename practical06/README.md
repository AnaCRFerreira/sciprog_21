# matmult.c

_matmult.c_ Calculates the multiplication of 2 matrix and prints out the three matrix A, 
B and C.

To run:
```
gcc -o matmult matmult.c && /matmult
```

# Step6

In this folder you find two files a main and matmult function, where _mm.c_ returns C to 
_main.c_.

To run:
```
gcc -c main.c
gcc -c mm.c
gcc -o mmc main.o mm.o
./mmc
```

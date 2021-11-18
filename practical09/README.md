# magic_sq_input.c

In this script the user enters the size and values of a matrix. Then, the Magic-Square 
problem is solved by using _magic_square.h_ to check wheather a square is magic or not.

To run:
```
gcc -o magic_sq_input magic_sq_input.c
./magic_sq_input
```

# magic_sq_file.c

Similar to the above, this script reads the matrix in from a file. The user only need to input the file.
For the purpose of testing the code the file _magic_square.txt have a magical saqure and the file 
_not_magic_square.txt_ doesn't.

To run:
```
gcc -o magic_sq_file magic_sq_file.c
./magic_sq_file
```



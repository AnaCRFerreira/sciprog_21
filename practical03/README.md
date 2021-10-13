# printing.c

_printing.c_ scrip display variables.

To run _printing.c_:
```
gcc -o printing printing.c
./printing
```

# trapezoidal.c

_trapezoidal.c_ script uses the trapezoidal integration method.
 When calculating the area between 11 equidistant points between 0 and pi/3, a
loop is needed. On the script you can find multiple ways to implement
this loop, at the momemnt a for loop is being used. If you wish to use
another code, remove the block coment "/* ...*/" between the code of
interest and coment the other one.
When compiling use the "-lm" option to call the math library.

To run _trapezoidal.c_:
```
gcc -o trapezoidal trapezoidal.c -lm
./trapezoidal
```


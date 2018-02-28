## Question 1
(K&R Exercise 5-2) Write <code>getfloat</code>, the floating-point analog of <code>getint</code>. What type does <code>getfloat</code> return as its function value? Verify that your function works with at least three examples.

floatconvert.c has the function getfloat() return an integer, since the value it returns simply tells whether the entered string of characters is a number

Compile Steps: 
bchun@DESKTOP-48N88BC ~/hw5-brian_eric_hw5/question1
$ gcc floatconvert.c


Output:
bchun@DESKTOP-48N88BC ~/hw5-brian_eric_hw5/question1
$ ./a.exe
0123.213
123.1233
c=10
bchun@DESKTOP-48N88BC ~/hw5-brian_eric_hw5/question1
$ ./a.exe
  -322.10
-322.3220
c=10
bchun@DESKTOP-48N88BC ~/hw5-brian_eric_hw5/question1
$ ./a.exe
asd93af
A number was not entered (c=0 and pn = 0 represent invalid input in this case)
c=0
bchun@DESKTOP-48N88BC ~/hw5-brian_eric_hw5/question1
$ ./a.exe
    -021.32
-21.212
c=10


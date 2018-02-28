## Question 4 (View raw)

(K&R Exercise 5-5) Write a version of the library function <code>strncpy</code>, which operate on at most the first n characters of their argument strings. For example, <code>strncpy(s,t,n)</code> copies at most n characters of t to s. **Be sure to use pointers**. Verify that your function works with at least 3 examples.

Compile Steps:
bchun@DESKTOP-48N88BC ~/hw5-brian_eric_hw5/question4
$ gcc strcpy.c
strcpy.c:4:6: warning: conflicting types for built-in function ‘strcpy’
 void strcpy(char *new, char *source, int n);
      ^~~~~~

Output:
bchun@DESKTOP-48N88BC ~/hw5-brian_eric_hw5/question4
$ ./a.exe
race
coop
luck

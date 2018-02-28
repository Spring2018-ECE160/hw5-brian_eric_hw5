## Question 5

(K&R Exercise 5-8) There is no error checking in <code>day_of_year</code> or <code>month_day</code>. Remedy this defect and verify that all of the cases are covered with examples.

Compile Steps:
bchun@DESKTOP-48N88BC ~/hw5-brian_eric_hw5/question5
$ gcc datecheck.c


Output:
bchun@DESKTOP-48N88BC ~/hw5-brian_eric_hw5/question5
$ ./a.exe
Please enter year, month, day: 10 2010 2031
Sorry, you did not enter input correctly
bchun@DESKTOP-48N88BC ~/hw5-brian_eric_hw5/question5
$ ./a.exe
Please enter year, month, day: -23 921 20
Sorry, you did not enter input correctly
bchun@DESKTOP-48N88BC ~/hw5-brian_eric_hw5/question5
$ ./a.exe
Please enter year, month, day: 1 1 1
Day of the year is: 1
Month and day of month of yearday 1 are: 1 1
bchun@DESKTOP-48N88BC ~/hw5-brian_eric_hw5/question5
$ ./a.exe
Please enter year, month, day: 1998 10 16
Day of the year is: 289
Month and day of month of yearday 289 are: 10 16

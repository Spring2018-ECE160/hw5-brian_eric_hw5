#include <stdio.h>
#include <ctype.h>
#include <math.h>

// K&R Pg. 97
int getch();
void ungetch(int);

#define BUFSIZE 100

char buf[BUFSIZE];  // buffer for ungetch
int bufp = 0;       // next free position in buf

int getch(void) // get a (possibly pushed back) charater
{
    return (bufp > 0) ? buf[--bufp] : getchar();
}

void ungetch(int c) // push character back on input
{
    if (bufp >= BUFSIZE)
        printf("ungetch:too many characters\n");
    else
        buf[bufp++] = c;
}

// getint: get next integer from input into *pn
int getfloat(int *pn, int *pd)
{
    int c, sign;

    while (isspace(c = getch())) // skip white space
        ;
    if (!isdigit(c) && c != EOF && c != '+' && c != '-')
    {
        ungetch(c); // it's not a number
		printf("A number was not entered (c=0 and pn = 0 represent invalid input in this case)\n");
        return 0;
    }
    sign = (c == '-') ? -1 : 1;
    if (c == '+' || c == '-')
        c = getch();

    for (*pn = 0.0; isdigit(c); c = getch())
        *pn = 10.0 * *pn + (c - '0');
	
	if(c == '.') {
		c = getch();
		for (*pd = 0.0; isdigit(c); c = getch())
			*pd = 10.0 * *pn + (c - '0');
	}
	
	*pn *= sign;
	
	printf("%d.%d\n", *pn, *pd);
    if (c != EOF)
        ungetch(c);

    return c;
}

int main()
{
    int pn, pd;
	int c;
	pn = 0;
	pd = 0;
    c = getfloat(&pn, &pd);
    printf("c=%d", c);
    return 0;
}
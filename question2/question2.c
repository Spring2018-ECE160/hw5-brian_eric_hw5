#include <stdio.h>
#define STRLENGTH 1000

void str_cat(char* s, char* t)
{
	while(*s != '\0')
	{	
		s++;
		//move s pointer to end of line
	}
	while(*t != '\0')
	{
		*s = *t;
		s++;
		t++;
	}
	*s = '\0';
	//keep copying t to s and moving pointers until 
}

int main(void)
{
	char append[STRLENGTH] = "ing.";
	
	char Ex1[STRLENGTH] = "I'm test";
	printf("\nInitial Line 1:%s", Ex1);		
	str_cat(Ex1, append);	
	printf("\nNew line 1:%s\n", Ex1);	
	
	char Ex2[STRLENGTH] = "I'm think";
	printf("\nInitial line 2:%s", Ex2);	
	str_cat(Ex2, append);	
	printf("\nNew line 2:%s\n", Ex2);
	
	char Ex3[STRLENGTH] = "I'm fail";
	printf("\nInitial line 3:%s", Ex3);	
	str_cat(Ex3, append);
	printf("\nNew line 3:%s\n", Ex3);	

	return 0;
}
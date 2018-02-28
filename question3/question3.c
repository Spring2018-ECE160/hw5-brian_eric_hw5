#include <stdio.h>
#define STRLENGTH 1000

int strlength(char *t)
{
	char *temp;
	int length;
	temp = t;
	
	while((*temp) != '\0')
		temp++;
	length = temp - t;
	//address of pointer temp = address pointer t + (# characters until end of string)
	return length;
}

int strend(char* s, char* t)
{
	int length = strlength(t);
	while((*s)!= '\0')
		s++;
	/*as long as the pointer s does not point at the end of the string, keep moving the pointer until it does
	then move the pointer back by one to point at the last character b/c both strings will have '\0' at the end
	so that can be skipped*/
	s--;
	
	
	while((*t) != '\0')
		t++;
	//as long as the pointer t does not point at the end of the string, keep moving the pointer until it does
	t--;
	
	while(length > 0)
	{
		if(*s == *t)
		//if contents of points equal, keep moving pointers backwards
		{
			s--;
			t--;
			length--;
		}
		else 
			return 0;
		//if contents of pointer not equal, then just return 0 b/c rest not necessary
	}
	
	return 1;
	//if while loop is allowed to finish, all of char t == end of char s
}

int main(void)
{
	int i;
	char S_example1[STRLENGTH] = "Sorry but we're all out of money. Anything else you want to order?";
	char S_example2[STRLENGTH] = "Excuse me, but we're also out of food. However, we do have frozen water.";
	char S_example3[STRLENGTH] = "Ok, we all know that ice is frozen water.";
	char t[] = "frozen water.";
	printf("\n0 for no match found, 1 for match found.\nThe line used to test with is 'frozen water.'\n");
	
	printf("\nString 1: %s", S_example1);
	printf("\n%d\n",strend(S_example1, t));
	
	printf("\nString 2: %s", S_example2);
	printf("\n%d\n",strend(S_example2, t));
	
	printf("\nString 3: %s", S_example3);
	printf("\n%d\n",strend(S_example3, t));
	return 0;
}
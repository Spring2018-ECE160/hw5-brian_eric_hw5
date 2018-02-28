#include <stdio.h>


void strcpy(char *new, char *source, int n);

void main() {
	char copy[20] = {};
	char ex1[10] = {'r','a','c','e','c','a','r'};
	char ex2[6] = {'c','o','o','p','e','r'};
	char ex3[8] = {'l','u','c','k','l','e','s','s'};

	strcpy(copy, ex1, 4);
	for(int i = 0; i < 4; i++)
		printf("%c", copy[i]);
	printf("\n");

	strcpy(copy, ex2, 4);
	for(int i = 0; i < 4; i++)
		printf("%c", copy[i]);
	printf("\n");

	strcpy(copy, ex3, 4);
	for(int i = 0; i < 4; i++)
		printf("%c", copy[i]);
	printf("\n");

	return;
}



void strcpy(char *new, char *source, int n) {
	for(int i = 0; i < n; i++) {
		new[i] = source[i];
	}
	return;
}

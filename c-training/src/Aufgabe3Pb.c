#include <stdio.h>
#define N 2 /* fuer eine NxN-Matrix */

int main() {
	int *p;
	int **q;
	int variable = 100;

	p = &variable;
	q = &p;

	printf("variable -> int variable = 100\n");
	printf("p -> int *p\n");
	printf("q -> int **q \n\n");

	printf("variable: %d\n\n", variable);

	printf("*p mit prozent p(Variable als hexa): %p\n", *p);
	printf("*p mit prozent d(Variable als int): %d\n", *p);
	printf("&p mit prozent p(Adresse von p selbst als hexa): %p\n", &p);
	printf("&p mit prozent d(Adresse von p selbst als int): %d\n", &p);
	printf("p mit prozent p(Adresse von variable als hexa): %p\n", p);
	printf("p mit prozent d(Adresse von Variable als int): %d\n\n", p);

	printf("q mit prozent p(Adresse von p als hexa): %p\n", q);
	printf("q mit prozent d(Adresse von p als int): %d\n", q);
	printf("*q mit prozent p(Adresse von variable als hexa): %p\n", *q);
	printf("*q mit prozent d(Adresse von variable als int): %d\n", *q);
	printf("**q mit prozent p(variable als hexa): %p\n", **q);
	printf("**q mit prozent d(variable als int): %d\n", **q);


	return 0;
}

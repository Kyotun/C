#include <stdio.h>

#define leange 10

int main()
{
	int i = 1;
	int j = 1;
	while(i < leange+1){
		printf("%d\t", i*j);
		j++;
		if(j == leange+1){
			printf("\n");
			i++;
			j=1;
		}
	}

	return 0;
}

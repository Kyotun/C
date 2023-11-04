#include <stdio.h>
#include <string.h>

#define KONSTANT 15
#define MAX_LEANGE 30

int main()
{
	char str[MAX_LEANGE];
	char str_aus[MAX_LEANGE];

	memset(str, '\0', MAX_LEANGE);
	memset(str_aus, '\0', MAX_LEANGE);

	printf("Geben Sie bitte ein Wort ein: ");
	scanf("%s", str);

	for(int i = 0; i < sizeof(str); i++){
		if(str[i] != '\0'){
			str_aus[i] = str[i] ^ KONSTANT;
		}
	}

	printf("Encryptendes Wort: ");
	for(int k = 0; k < sizeof(str_aus); k++){
		printf("%c", str_aus[k]);
	}

	printf("\n");


	printf("Gegebendes Wort: ");
	for(int j = 0; j < sizeof(str); j++){
		printf("%c", str[j]);
	}


    return 0;
}

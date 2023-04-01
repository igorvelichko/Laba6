#include <stdio.h>
#include <stdlib.h>

int size(char string[], int max){
    int s, l;
	
	
	for(l = 0; (s = getchar()) != EOF && s != '/n' && l < max - 1; l++){
		string[l] = s;
	}	
	
	string[l] = '\0';
	return l;
}
int find(char str[], char ptr[]){
	int i, j, k;
	for(i = 0; str[i] != '\0'; i++){
		for(j = 1, k = 0; ptr[k] != '\0' && str[j] == ptr[k]; j++, k++)
		;
		if(ptr[k] == '\0')
		return 1;
	}
}



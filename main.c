#include <stdio.h>
#include <stdlib.h>
#include "Function.h"
#define max 100
int main(int argc, char *argv[]) {
	int i, l, t;
	char names[max];
	char s[max];
	char finish[max];
	printf("age: ");
	size(names, max);
	
	FILE *f = fopen("C:\c labs\Labs\Laba6\"File.txt", "r");
	if(!f){
	
	if(f != NULL){
		while(!feof(f)){
			fgets(s, max, f);
			if(find(s, names)){
				printf("%s", s);
				t = ftell(s);
				memcpy(finish, s, t);
			}
		}
	}
	else{
		printf("Error");
	}
}
	fclose(f);
	
	return 0;
}
#include <stdio.h>

int main (void) {
	char str1[100];
	char str2[100];
	char str3[200];
	int i; int final = 0;
	
	printf("Primeira string: ");
	scanf("%s", &str1);
	
	printf("Segunda string: ");
	scanf("%s", &str2);
	
	
	for(i=0; i<99; i++) {
		if (str1[i] != 0){
			str3[i] = str1[i];			
		} else {
			break;
		}
		final++;
	}
	
	for(i=0; i<99; i++) {
		if (str2[i] != 0){
			str3[final] = str2[i];			
		} else {
			break;
		}
		final++;
		str3[final] = 0;
	}




	printf("\nString 1: %s", str1);
	printf("\nString 2: %s", str2);
	printf("\nFinal: %s", str3);
	printf("\nGambiarra: %s%s", str1, str2);
}

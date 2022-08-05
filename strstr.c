#include<stdio.h>
int main() {
	char needle[] = "shadynabilmohamedm";
	char haystack[] = "shadynabilmohamed";
	printf("%d",strStr(&haystack, &needle));

	
}
int strStr(char* haystack, char* needle) {
	int indexH = 0; /*index used in comparing*/
	int indexN = 0; /*index used in comparing*/
	for (int i = 0; haystack[i] != '\0'; i++) {
		printf("enter loop\n");
		if (haystack[i] == needle[0]) {
			printf("enter if\n");
			indexH = i;
			while (haystack[indexH] == needle[indexN] && needle[indexN]!='\0' && haystack[indexH] != '\0') {
				indexH++; indexN++; printf("enter while\n");
			}
			if (needle[indexN] == '\0')
				return i;
			else
				indexN = 0;
		}
	}
	return -1;
}
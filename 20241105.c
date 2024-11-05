#include <stdio.h>
#include <string.h>  // strlen, strcpy, strcmp, strcat

int mstrlen( char str[] ){
	int lenght = 0;
	while( str[lenght] != 0 ){
		lenght++;
	}
	return lenght;
}

void mstrcpy( char str1[], char str2[] ){
	int i = 0;
	while( str1[i] != 0 ){
		str2[i] = str1[i];
		i++;
	}
	str2[i] = 0;
}

int findchar(char str[], char f){
	int i = 0;
	while( str[i] != 0){
		if(str[i] == f){
			return i;
		}
		i++;
	}
	return -1;
}

int main(){
	char str1[256], str2[256];  // str1[0] is str1
	scanf("%[^\n]s", str1); // no &
	printf("%s\n", str1);
	printf("strlen %ld %d\n", strlen(str1), mstrlen(str1));
	mstrcpy(str1, str2); // copy str1 to str2
	printf("%s\n", str2);
	printf("found in %d\n", findchar(str2, '?') );
	
	//printf("a b c... %d %d %d\n", 'a', 'b', 'c');
	//printf("a b c... %d %d %d\n", 'a', 'b', 'c');
	//printf("a b c... %d %d %d\n", 'a', 'b', 'c');
	//char str[256] = "string";  // str[6] is 0. '?' "?"
	//str[4] = 0;
	//printf("%s %c %d\n", str, 'K', 'K');
}

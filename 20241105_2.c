#include <stdio.h>
#include <string.h>

int find_char_reverse(const char* str, const char a ){
	for( int i = strlen(str); i >= 0; i--){
		if(str[i] == a){
			return i;
		}
	}
	return -1;
}

int find_str_reverse(const char* str1, const char* str2 ){
	int len1  = strlen(str1);
	int len1  = strlen(str2);
	
	if( len2 > len 1){
		return -1;
	} 
	for (j = 0; j < len2; j++
}

int main(){
	char str[256], str1[256], str2[256];
	scanf("%[^\n]s", str);
	printf("%d\n", find_char_reverse(str, 'b' ));
	scanf("%[^\n]s", str1);
	scanf("%[^\n]s", str2);
}

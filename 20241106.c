#include<stdio.h>
int mstrlen( const char* str){
	int size = 0;
	while(str[size] != 0){size++;}
	return size;
}

int find_char_reverse(const char* str, const char b ){
	int len = mstrlen(str);
	printf("str length %d\n", len);
	for(int i=len-1; i>=0; i--){
		if(str[i] == b){
			return i;
		}
	}		
	return -1;
}

int find_str_reverse(const char* str1, const char* str2 ){
	int len = mstrlen(str1);
	int len2 = mstrlen(str2);
	// printf("str length %d\n", len);
	for( int i=len-1; i>=0; i--){
		int same = 1;
		for(int j =0; j<len2; j++){
			if(str1[i+j] != str2[j]){
				same = 0;
			}
		}
		if(same){
			return i;
		}
		
	}		
	return -1;

}

int main(){
	char str[256]; // 0 is ending for string
	char a;
	
	scanf("%[^\n]s", str);// str is &str[0]
	scanf(" %c", &a);      // <- enter
	printf("%s %c\n", str, a);
	printf(" %c in %d index \n", a, find_char_reverse(str,a));
	printf("str in %d index\n", find_str_reverse(str,"str"));
}

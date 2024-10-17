#include <stdio.h>
#include <limits.h>

int main(){
	unsigned int a;
	scanf("%u", &a);
	if(a == CHAR_MAX){
		printf("%u == CHAR_MAX", a);
		printf("\n");
	}
	else if(a == SHRT_MAX){
		printf("%u == SHRT_MAX", a);
		printf("\n");
	}
	else if(a == INT_MAX){
		printf("%u == INT_MAX", a);
		printf("\n");
	}
	else if(a < CHAR_MAX){
		printf("CHAR_MAX > %u", a);
		printf("\n");
	}
	else if( a > CHAR_MAX && SHRT_MAX > a ){
		printf("%u > CHAR_MAX && SHRT_MAX > %u", a, a );
		printf("\n");
	}
	else if( a > SHRT_MAX && INT_MAX > a ){
		printf("%u > SHRT_MAX && INT_MAX > %u", a, a );
		printf("\n");
	}
	else if( a > INT_MAX ){
		printf("%u > INT_MAX", a );
		printf("\n");
	}
}

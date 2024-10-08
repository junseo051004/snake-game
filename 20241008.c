#include <stdio.h>

int sum (int n);
void print( const float v[], int size);
void print2d(	float v[][3], int size);//?x3
int number_char(char c){
	if(	c >= '0' && c <= '9'){
		return 1;
	}
	return 0;
}

int main(){
	char str[64];
	scanf("%s", str); // str is mem address, & no
	if(	number_char(str[0])){
		printf("Fist char is number\n");
	}
	printf("%d\n", sum(5));
	float vf[4]= {4,5,6,7};
	print(vf, 4);
	
	float v2[2][3] = {{1,2,3},{4,5,6}};
	print2d(v2, 2);
	return 0;
}

void print2d( float v[][3], int size){
	for(int i=0; i<size; i++){
		print(v[i], 3);
	}
}

void print( const float v[], int size){
	
	for(	int i = 0; i < size; i++){
		printf("%f", v[i]);
	}
	printf("\n");
}

int sum ( int n){
	// n+(n-1)+(n-2)+ .... 2+1
	int s = 0;
	for(int i = n; i>=1; i--){
		s += i;
	}
	
	return s;
}

#include <stdio.h>
float add( float src[], float dst[], int size);
void foo(int x); // static variable

//recursive function: jaegyu hamsu
int rsum(int n){// 8+7+6+5+4+3+2+1=36
	// 36 = 8 + rsum(7)
	if(n ==1){
		return 1; // 1+rsum(1-1)	
	}
	return n+rsum(n-1); // 0+rsum(0-1) 
	/*int s = 0;
	for(int i = 8 ; i >= 1 ; i--){
	 s+=i;
	}
	return s;*/
}
 
int main(){
	printf("%d\n", rsum(8));
	foo(0);
	foo(1);
	foo(2);
 	float a[3] = {1,2,3};
 	float b[3] = {4,5,6};
 	printf("retunr ?: %f\n", add(a, b, 3));
}

float add( float src[], float dst[], int size){
	float s = 0;
 	for(int i = 0 ; i<size; i++){
 		dst[i] += src[i];
 		//printf("%f ", dst[i]);
 		s += dst[i];
 	}
 	return s;
}

void foo(int x){
	static int s = 0; //init only once
	int y = 0;
	x += 1;
	s += 1;
	y += 1; 
	printf("x s y is %d %d %d\n", x, s, y);
}

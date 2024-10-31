#include <stdio.h>
#include <limits.h> //INT_MAX, CHAR_MIN
#define pi 3.14159
#define e 	2.7182818
#define sqr(x) x*x
#define sqr_correct(x) (x)*(x)
#define is = 
#define plus +

enum number {zero=0,one, two, three, four, five};
enum days {Sunday=1, Monday, Tuesday, Wednsday,};
// enumerate
// sum(n) = n + (n-1) + (n-2) ... 3 + 2 + 1
//	sum(n) = n + sum(n-1)
// 	sum(n-1) = n-1 + n-2 ... 3 + 2 + 1
int sum(int n){
	if(n == 1){
		return 1;
	}
	return n + sum(n-1);
}
void box(int height, int width){
	if( height >= 1){
		for(int w=0; w<width; w++){
			printf("X");
		}
		printf("\n");
		box(height-1,width);
	}
	//for(int h =0; h<height; h++){
	//	for(int w =0; w< width; w++){
	//		printf("X");
	//	}
	//	printf("\n");
	//}
}

int main(){
	int today; // Sunday is 1, Monday is 2
	today = Sunday; // today = 1;
	if( today == Sunday){
		printf("Today is Sunday, no school\n");
	}
	
	box(3,5);
	printf("sum(5) is 5+4+3+2+1 %d", sum(5));
	int n;
	n is one plus three; //  n = 1 + 3;
	printf("n is one plus three: %d\n", n);
	
	printf("copy and paste define %lf\n", pi);
	printf("sqr(5) is 5*5 %d\n", sqr(5));
	printf("sqr(4+1) is 4+1*4+1 %d\n", sqr(4+1));
	printf("sqr_correct(4+1) is (4+1)*(4+1) %d\n", sqr_correct(4+1));
	
	
}

#include<stdio.h>
void print(double* a, double* b);
void print_reverse(short* a,short* b);

int main(){
	printf("\n----------------char---------------\n");
	char carr[5] = "XYZ";
	printf("%p %c\n", carr, *carr);
	printf("%p %c\n", carr+1, *(carr+1));
	printf("%p %c\n", &carr[2], carr[2]);
	// +1 is +1 because char is 1byte
	
	printf("\n---------------short---------------\n");
	short sarr[5] = {11,22,33,44,55};
	printf("%p %d\n", &sarr[0], sarr[0]);
	printf("%p %d\n", sarr+1, *(sarr+1));
	printf("%p %d\n", sarr+2, *(sarr+2));
	printf("%p %d\n", sarr+3, *(sarr+3));
	// +1 is +2 because short is 2byte
	
	printf("\n--------------float---------------\n");
	float farr[5] = {1.4,20.4,30.4,40.4,50.4};
	printf("%p %0.1f\n", farr, *farr);
	printf("%p %0.1f\n", farr+1, *(farr+1));
	printf("%p %0.1f\n", farr+2, farr[2]);
	printf("%p %0.1f\n", farr+3, farr[3]);
	// +1 is +4 because float is 4byte
	
	printf("\n-------------double---------------\n");
	double darr[5] = {99.8,88.8,77.8,66.8,55.8};
	printf("%p %0.1lf\n", darr, *darr);
	printf("%p %0.1lf\n", darr+1, *(darr+1));
	printf("%p %0.1lf\n", darr+2, *(darr+2));
	printf("%p %0.1lf\n", darr+3, *(darr+3));
	// +1 is +8 because double is 8byte
	printf("\n------------print----------------\n");
	print(darr , darr+5);
	print(darr+1, darr+4);
	print_reverse(sarr,sarr+5);
	
}

void print(double* a, double* b){
	for(double* ptr=a; ptr<b; ptr++){
		printf("%0.1lf ", *ptr);
	}
	printf("\n");
}

void print_reverse(short* a,short* b){
	for(short* ptr = b-1; ptr>=a; ptr--){
		printf("%d ", *ptr);
	}
	printf("\n");
} 

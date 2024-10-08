#include <stdio.h>
float add( const float source[], float dest[], int size){
	float sum = 0.0;
	for(int i=0; i < size; i++){
		dest[i] += source[i];
	}
	for(int i = 0; i < size; i++){
		sum += dest[i];
	}
	return sum;
}

int main(){
	float source[4] = {1,2,3,4};
	float dest[4] = {5, 6, 7, 8};
	const int size = 4;
	 float total = add(source, dest, size);
	 for (int i = 0; i < size; i++) {
        printf("%.0f ", dest[i]);
    }
    printf("\n%.0f\n", total);
}

#include <stdio.h>
float add( const float source[], float dest[], int size){
	int s[size];
	for(int i=0; i<4; i++){
		s[i] = source[i] + dest[i];
	}
	for(int i=0; i<4; i++){
		printf("%d ", s[i]);
	}
	printf("\n");
}

int main(){
	float sour2[4] = {1,2,3,4};
	float dest2[4] = {5,6,7,8};
	
	add(sour2, dest2, 4);

}


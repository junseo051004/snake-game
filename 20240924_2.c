#include <stdio.h>
int main(){
	
	
	int height=4;
	// for loop
	for(int i=1; i<=height; i++){
		for(int w=1; w <= i; w++){
			printf("A");
		}
		printf("\n");
	}
	
	
	// while loop
		int i = 1;
		while (i <=height){
			int w = 1;
			while(w <= i){
				printf("A");
				w++;
		}
		printf("\n");
		i++;
	}
	
	// break loop
	
	for(int i = 1; i <= height; i++){
		for(int w =1; w <= height; w++){
			if(w > i) break;
			printf("A");
	}
		printf("\n");
	}
	
	// continue loop
	
	
	for(int i = 1; i <=height; i++){
		for(int w = 1; w<=height; w++){
			if(w>i) continue;
			printf("A");
		}
		printf("\n");
	}
	
	
	
}

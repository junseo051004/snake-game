// // #include <stdio.h>
// // int main(){

// //     int a;
// //     scanf("%d", &a);

// //     for(int i=0; i<a; i++){
// //         for(int j=0; j<a; j++){
// //             if(i>=0 && i<=a-2 && j==0){
// //                 printf("|");
// //             }
// //             else if(i>=1 && i<=a-1 && j==a-1){
// //                 printf("|");
// //             }
// //             else if( i + j == a-1){
// //                 printf("/");
// //             }
// //             else if( i == 0 && j <= a-2 && j>=1){
// //                 printf("-");
// //             }
// //             else if( i == a-1 && j <= a-2 && j>=1){
// //                 printf("-");
// //             }
// //             else{
// //                 printf("0");
// //             }
// //         }
// //         printf("\n");
// //     }
// // }

// #include <stdio.h>

// int main() {
//     int a, b, c=1, d, e, temp;

//     scanf("%d", &a);

//     temp = a;

//     while(temp>=10){
//         temp /= 10;
//         c *= 10;
//     }

   
//     temp = a;
//     int first =1;
//     while (c > 0) {
//         b = temp / c;  
        
//         if (b) {  
//             if (!first) {
//                 printf("+");  
//             }
//             printf("%d", b * c);  
//             first = 0;  
//         }

        
//         temp %= c;  
//         c /= 10;  
//     }

// }

// #include <stdio.h>
// int main(){

// 	int a;
// 	scanf("%d", &a);
	
// 	for(int i=1; i<a; i++){
// 		if(a % i == 0){
// 			printf("%d ", i);
// 		}
	
// 	}
	


// }


// #include<stdio.h>
// int main(){
// 	int a;
// 	scanf("%d", &a);
	
// 	for(int i=0; i<a/2; i++){
// 		for(int j=0; j<a/2; j++){
// 			printf("0");
// 		}
// 		for(int w=0; w<1; w++){
// 			printf("|");
// 		}
// 		for(int j=0; j<a/2; j++){
// 			printf("0");
// 		}
// 		printf("\n");
// 	}
// 	for(int i=0; i<1; i++){
// 		for(int j=0; j<a/2; j++){
// 		printf("-");
// 		}
// 	  printf("+");
// 		for(int j=0; j<a/2; j++){
// 		printf("-");
// 		}
// 		printf("\n");
// 	}
// 	for(int i=0; i<a/2; i++){
// 		for(int j=0; j<a/2; j++){
// 			printf("0");
// 		}
// 		for(int w=0; w<1; w++){
// 			printf("|");
// 		}
// 		for(int j=0; j<a/2; j++){
// 			printf("0");
// 		}
// 		printf("\n");
// 	}


// }